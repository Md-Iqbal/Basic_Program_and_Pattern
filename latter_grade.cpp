#include<iostream>
using namespace std;
int main(){
	int number;
	cout << "Enter a number: ";
	cin >> number;
	if(number > 100 || number < 0){
		cout <<"Invalid Mark.\n";
	}
	else if(number >= 80){
		cout <<"A+\n";
	}
	else if(number >= 70){
		cout <<"A\n";
	}
	else if(number >= 60){
		cout <<"A-\n";
	}
	else if(number >= 50){
		cout <<"B\n";
	}
	else if(number >= 40){
		cout <<"C\n";
	}
	else if(number >= 33){
		cout <<"D\n";
	}
	else{
		cout <<"F\n";
	}
}
