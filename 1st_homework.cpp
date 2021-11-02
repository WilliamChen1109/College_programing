#include <iostream>
using namespace std;
int main(){
	int num, num2;
	cout << "Enter a number of minutes: ";
	cin >> num;
	
	cout << "The input corresponds to" << endl;
	cout << num/43200 << " month(s)" << endl;
	num2 = num/43200;
	num -= num2*43200;
	cout << num/1440 << " day(s)"<< endl;
	num2 = num/1440;
	num -= num2*1440;
	cout << num/60 << " hour(s)"<< endl;
	num2 = num/60;
	num -= num2*60;
	cout << num << " minute(s)"<< endl;
	
	return 0;
}
