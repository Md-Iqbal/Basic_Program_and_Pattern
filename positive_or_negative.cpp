#include<iostream>
using namespace std;
int main(){
	int number;
	cout << "Enter a number to check positive or negative: ";
	cin >> number;
	if(number>0){
		cout << number << " is positive number.\n";
	}
	else if(number<0){
		cout << number << " is negative number.\n";
	}
	else{
		cout << number << " is zero.\n";
	}
}
