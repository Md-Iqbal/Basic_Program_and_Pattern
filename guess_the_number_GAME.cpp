#include<iostream>
#include<stdlib.h>
#include<cstring>
using namespace std;
int main(){
	char comment='Y';
	while(comment=='Y'){
		cout<<"Guess a number between 1 to 5::: ";
		int random_number, number;
		cin>>number;
		random_number=rand()%6;
		if(random_number==number) cout << "Congratulation!!! You win...!"<<endl;
		else cout << "Sorry! You lost. The number was::: "<<random_number<<endl;	
		cout<<"Do you want to play again? ::: ";
		cin>>comment;
		comment=toupper(comment);
		if(comment!='Y') break;
	}
}
