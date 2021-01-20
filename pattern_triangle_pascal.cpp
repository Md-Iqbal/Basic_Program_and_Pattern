#include<iostream>
using namespace std;
int main(){
	
	int pascal_number, n, i, j;
	cout << "Enter limit: ";
	cin >> n;
	for(i=0; i<n; i++){
		pascal_number=1;
		for(j=1; j<=(n-i); j++) cout<<"   ";
		for(j=0; j<=i;j++){
			cout <<"      "<<pascal_number;
			pascal_number=pascal_number*(i-j)/(j+1);
		}
		cout<<endl;
	}
	return 0;
}
