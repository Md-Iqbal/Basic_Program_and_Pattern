#include<iostream>
using namespace std;
int main(){
	
	cout << "Enter the number of multiplication table: ";
	int number;
	cin >> number;
	for(int i=1; i<11; i++){
		cout <<number<<" * "<<i<<" = "<<i*number<<endl;
	}
	
	return 0;
}
