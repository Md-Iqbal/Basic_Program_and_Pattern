#include<iostream>
using namespace std;
int main(){
	
	int number, temp, count=0, reminder;
	cout << "Enter a number to count digit: ";
	cin >> number;
	temp = number;
	while(temp!=0){
		reminder=temp%10;
		++count;
		temp=temp/10;
	}
	cout<<"There is "<<count<<" digit(s) in "<<number<<".\n";
	
	return 0;
}
