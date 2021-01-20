#include<iostream>
using namespace std;
int main(){
	
	int num1, num2, gcd, lcd, rem, i, temp1, temp2;
	cout <<"Enter two number: ";
	cin >> num1>>num2;
	temp1=num1;
	temp2=num2;
	if(num2>num1){
		num1=num1+num2;
		num2=num1-num2;
	}
	while(num2!=0){
		rem=num1%num2;
		num1=num2;
		num2=rem;
	}
	cout << "GCD of "<<temp1<<" and "<<temp2<<" is: "<<num1<<endl;
	cout << "LCM of "<<temp1<<" and "<<temp2<<" is: "<<(temp1*temp2)/num1<<endl;
	
	return 0;
}
