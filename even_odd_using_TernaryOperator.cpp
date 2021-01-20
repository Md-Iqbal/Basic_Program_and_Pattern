#include<iostream>
using namespace std;
int main(){
	
	int number;
	cout << "Enter any number: ";
	cin >> number;
	(number%2==0) ? cout<<number<<" is even.\n" : cout<<number<<" is odd.\n";
	
	return 0;
}
