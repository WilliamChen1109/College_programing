#include <bits/stdc++.h>
using namespace std;
int main()
{
	int num, num2;
	int week;
    cout << "Enter the number of days in the month: ";
    cin >> num;
    cout << "Enter the first day of the week (1 for Sun, 7 for Sat): ";
    cin >> num2;
    
    week = num+num2-1;
    if(week % 7 == 0 && num2 == 1) week = week/7;
    	else{
    		week = week/7+1;
    		for(int i = 0 ; i < num2 - 1 ; i++){
    		cout << "    ";
		}
	} 
	//cout << week;
    
    int day = 8-num2;
    int count = 1;
    
    for(int i = 0 ; i < week ; i++){
    	for(int j = 0 ; j < day ; j++){
    		if(count > num)break;
    		if(count < 10){
    			cout << " " <<count;
			}
			else{
				cout << count;
			}
			if(i == 0 && j == day-1){}
			else if(j != 6 && count != num){
				cout << ", ";
				//cout<<j;
			}
			count++;
			if(count > num)break;
		}
		day = 7;
		cout<<endl;
	}
    
    return 0;
}
