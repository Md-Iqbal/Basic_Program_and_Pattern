#include<iostream>
using namespace std;
int main(){
	
	int sum=0, number, reminder, temp;
	cout << "Enter a number to get its sum: ";
	cin >> number;
	temp = number;
	while(temp!=0){
		reminder=temp%10;
		sum+=reminder;
		temp=temp/10;
	}
	cout<<"Sum of digits in "<<number<<" is: "<<sum<<endl;
	
	return 0;
}
