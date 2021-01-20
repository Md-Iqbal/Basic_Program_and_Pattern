#include<iostream>
using namespace std;
int main(){
	
	int n, i, j;
	cout<<"Enter limit of pattern: ";
	cin >>n;
	for(i=1;i<=n; i++){
		for(j=1;j<=i;j++){
			if(i==1 || i==n || j==1 || j==i)
				cout<<"*";
			else cout << " ";
		}
		cout<<endl;
	}
	
	return 0;
}
