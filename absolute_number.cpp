#include<iostream>
using namespace std;
int main(){
	int number;
	cout << "Enter a number: ";
	cin >> number;
	if(number<0){
		cout <<"Absolute value of "<< number << " is " << -number <<"\n";//at (-number) - is a unary operator
	}
	else{
		cout <<"Absolute value of "<< number <<" is "<< number <<"\n";
	}
}
