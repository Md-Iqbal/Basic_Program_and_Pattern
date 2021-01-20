#include<iostream>
using namespace std;
int main(){
	
	int i, j, n;
	cout << "Enter limit of pattern: ";
	cin>>n;
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			char ch=i+64;//for small latter, add 96 in stead of 64 and these number a ascii number of a charecter.
			cout<<ch<<" ";
		}
		cout<<endl;
	}
	
	return 0;
} 
