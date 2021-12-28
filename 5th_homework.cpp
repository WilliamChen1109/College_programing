#include<bits/stdc++.h>
using namespace std;
string input, name;
int score, num;

int lead_score[5] = {0, 0, 0, 0, 0};
string lead_name[5] = {"Anonymous", "Anonymous", "Anonymous", "Anonymous", "Anonymous"};

void add(){
	cin >> score >> name;
	for(int i = 4 ; i >= 0 ; i--){
		if(i == 0 && score >= lead_score[i]){
			lead_score[i] = score;
			lead_name[i] = name;
		}
		else if(score >= lead_score[i] && score >= lead_score[i-1]){
			lead_score[i] = lead_score[i-1];
			lead_name[i] = lead_name[i-1];
		}
		else if(score >= lead_score[i] && score <= lead_score[i-1]){
			lead_score[i] = score;
			lead_name[i] = name;
			break;
		}
	}
}
void del(){
	cin >> num;
	for(int i = num-1 ; i < 5 ; i++){
		if(lead_name[i] == "Anonymous"){
			break;
		}
		else if(i == 4){
			lead_name[i] = "Anonymous";
			lead_score[i] = 0;
		}
		else{
			lead_name[i] = lead_name[i+1];
			lead_score[i] = lead_score[i+1];
		}
	}
}

void show(){
	cout<<"The top five scores are:"<<endl;
	for(int i = 1 ; i < 6 ; i++){
		cout << "   " << i << ".";
		for(int j = 0 ; j < 13-lead_name[i-1].length() ; j++){
			cout <<" ";
		}
		cout << lead_name[i-1] << ", Score: " << lead_score[i-1] << endl;
	}
}

int main(){
	cout << "Enter commands (add, del, show, exit):"<< endl;
	while(true){
		cin>>input;
		if(input == "exit")break;
		if(input == "add")add();
		if(input == "del")del();
		if(input == "show")show();
	}
	return 0;
}
