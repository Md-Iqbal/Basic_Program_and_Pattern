#include<iostream>
using namespace std;
int main(){
	
	int n, i, j;
	cout << "Enter limit: ";
	cin >> n;
	for(i=n; i>=1; i--){
		for(j=1; j<=n-i; j++){
			cout<<" ";
		}
		for(j=1; j<=i*2-1; j++){
			cout<<j;
		}
		cout<<endl;
	}
	
	return 0;
}
