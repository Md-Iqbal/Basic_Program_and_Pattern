#include<iostream>
using namespace std;
int main(){
	
	int n,i,j;
	cout <<"Enter limit: ";
	cin>>n;
	for(i=1; i<=n; i++){
		for(j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(j=1;j<=2*i-1;j++){
			cout<<j;
		}
		cout<<endl;
	}
	for(i=n-1; i>=1; i--){
		for(j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(j=1;j<=2*i-1;j++){
			cout<<j;
		}
		cout<<endl;
	}
	
	return 0;
}
