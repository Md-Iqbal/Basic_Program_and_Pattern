#include<iostream>
using namespace std;
int main(){
	int number1, number2;
	cout << "Enter two number: ";
	cin >> number1 >> number2;
	if(number1 > number2){
		cout << number1 << " is bigger than "<< number2 <<".\n";
	}
	else{
		cout << number2 << " is bigger than "<< number1 <<".\n";
	}
}
