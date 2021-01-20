#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	cout << "How many random number you want? :: ";
	int n, random_number;
	cin>>n;
	for(int i=0;i<n; i++) cout<<"Random number is: "<<(rand())<<endl;
}
