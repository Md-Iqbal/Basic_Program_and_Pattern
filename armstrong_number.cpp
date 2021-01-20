#include<iostream>
#include<cmath>
using namespace std;
int main(){
	
	int sum=0, number, reminder, temp;
	cout << "Enter a number to test: ";
	cin >> number;
	temp = number;
	while(temp!=0){
		reminder=temp%10;
		sum=sum+pow(reminder, 3);
		temp=temp/10;
	}
	(sum==number) ? cout<<number<<" is a Armstrong number.\n" : cout<<number<<" is not a Armstrong number.\n";
	
	return 0;
}
