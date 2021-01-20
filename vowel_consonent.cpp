#include<iostream>
using namespace std;
int main(){
	
	char latter;
	cout << "Enter a latter: ";
	cin >> latter;
	latter = toupper(latter);
	if(latter == 'A' || latter == 'E' || latter == 'I' || latter == 'O' || latter == 'U'){
		cout << "'" << latter << "' is a vowel.\n";
	}
	else{
		cout << "'" << latter << "' is a consonent.\n";
	}
	
	return 0;
}
