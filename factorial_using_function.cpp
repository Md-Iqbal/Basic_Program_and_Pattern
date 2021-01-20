#include<iostream>
using namespace std;
int fact(int);
int fact(int n){
	if(n==1) return 1;
	else return n*fact(n-1);
}
int main(){
	
	int n;
	cout << "Enter a number to find it's factorial ::: ";
	cin >> n;
	cout<<"The factorial of "<<n<<" is: "<<fact(n)<<endl;
	
	return 0;
}
