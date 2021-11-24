#include<bits/stdc++.h>
using namespace std;
int main(){
	cout<<"Enter a sequence of bits: ";
	string data;
	cin>>data;
	
	char arr[data.length()+1];
	strcpy(arr, data.c_str());
	
	int count = 0;
	
	for(int i = 0 ; i < data.length() ; i++){
		if(arr[i] == '1' && arr[i+1] == '1'){
			cout<<"A";
			i+=1;
		} 
		else if(arr[i] == '1' && arr[i+1] == '0'){
			cout << "B";
			i+=1;
		}
		else if(arr[i] == '0' && arr[i+1] == '1'){
			cout << "C";
			i+=1;
		}
		else if(arr[i] == '0' && arr[i+1] == '0' && arr[i+2] == '1'){
			cout << "D";
			i+=2;
		}
		else if(arr[i] == '0' && arr[i+1] == '0' && arr[i+2] == '0'){
			cout <<"E";
			i+=2;
		}
	}
	
	return 0;
} 
