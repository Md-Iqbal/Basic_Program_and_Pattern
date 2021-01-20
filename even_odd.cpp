#include<iostream>
using namespace std;
int main(){
	int number;
	cout << "Enter a number: ";
	cin >> number;
	if(number%2==0){
		cout << number << " is even number.\n";
	}
	else if(number%2!=0){
		cout << number << " is odd number.\n";
	}
	else{
		cout << number << " is 0.\n";
	}
}
