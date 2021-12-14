#include<bits/stdc++.h>
//#include<array>
using namespace std;

int stdnum;
const int quiznum = 6;
const int maxmum = 10;
int origrades[maxmum][quiznum] = {{0}, {0}};
int grades[maxmum][quiznum] = {{0}, {0}};
double avg[10] = {0};
double avg2[6] = {0};
int dif = 6;

bool compare(int a, int b){
	return a > b;
}

/* 

void testreset(){
	origrades.fill(0);
	grades.fill(0);
	avg.fill(0);
	avg2.fill(0);
	dif = 5;
}
*/

int main(){
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);
//while(1){
	//testreset();
	cout << "Enter the number of students: ";
	cin >> stdnum;
	cout << "Enter the scores for each student: " << endl;
	for (int i = 0; i < stdnum; i++){
    	for (int j = 0; j < quiznum; j++){
        	cin >> origrades[i][j];
        	grades[i][j] = origrades[i][j];
    	}
 	}
 	
 	for(int i = 0 ; i < stdnum ; i++){
 		sort(grades[i], grades[i]+6, compare);
	}
 	
 	for(int i = 0 ; i < stdnum ; i++){
 		for(int j = 0 ; j < 4 ; j++){
 			avg[i] += grades[i][j];
		}
		avg[i] /= 4;
	}
	
	cout << "Table of Semester Grades:" << endl;
	cout << "       ";
	for(int i = 0 ; i < stdnum ; i++){
		cout << "  ";
		cout << "Stud";
		cout << i+1;
		if(i == stdnum-1){
			cout << endl;
		}
	}
	
	cout << "Grades:";
	for(int i = 0 ; i < stdnum ; i++){
		cout << "    ";
		cout << avg[i];
		if(i == stdnum-1){
			cout << endl;
		}
	}
	
	cout << "The number ";
	
	for(int i = 0 ; i < 6 ; i++){
		for(int j = 0 ; j < stdnum ; j++){
			avg2[i+1] += origrades[j][i];
		}
		//cout << avg2[i+1] <<endl;
	}
	
	for(int i = 5 ; i > 0 ; i--){
		if(avg2[i+1] >= avg2[i] && avg2[dif] >= avg2[i]){
			dif = i;
		}
	}
	
	cout << dif;
	cout << " quiz is the most difficult one." << endl;
//}
}
