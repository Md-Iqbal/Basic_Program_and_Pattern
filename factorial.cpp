#include<iostream>
using namespace std;
int main(){
	
	cout << "Enter a positive number to find its factorial: ";
	int factorial=1, number;
	cin >> number;
	for(int i=2;i<=number; i++){
		factorial = factorial*i;
	}
	cout << "Factorial of "<< number <<" is: "<<factorial;
	
	return 0;
}
