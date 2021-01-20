#include<iostream>
using namespace std;
int main(){
	int count = 0;
	for(int i =1; i<100001;i++){
		for(int j =2; j<=((int)(i/2)+1);j++){
			if(i%j==0){
				count = 1;
				break;
			}
		}
		if(count!=1) cout<<i<<", ";
		count=0;
	}
	
	return 0;
}
