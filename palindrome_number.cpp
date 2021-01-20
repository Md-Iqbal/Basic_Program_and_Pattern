#include<iostream>
using namespace std;
int main(){
	
	int sum=0, number, reminder, temp;
	cout << "Enter a number to test: ";
	cin >> number;
	temp = number;
	while(temp!=0){
		reminder=temp%10;
		sum=sum*10+reminder;
		temp=temp/10;
	}
	(sum==number) ? cout<<number<<" is a palindrome number.\n" : cout<<number<<" is not a palindrome number.\n";
	
	return 0;
}
