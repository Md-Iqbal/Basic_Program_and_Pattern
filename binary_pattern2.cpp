#include<iostream>
using namespace std;
int main(){
	
	int i, j, n;
	cout << "Enter limit of pattern: ";
	cin>>n;
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			if(i%2==0){
				cout<<0<<" ";
			}
			if(i%2==1){
				cout<<1<<" ";
			}
		}
		cout<<endl;
	}
	
	return 0;
}
