#include<iostream>
using namespace std;
int main(){
	
	double Celsius, Kelvin, Fahrenheit;
	int option;
	cout << "1. Celsius\n";
	cout << "2. Fahrenheit\n";
	cout << "3. Kelvin\n";
	cout << "Enter input temperature type: ";
	cin >> option;
	if(option == 1){
		cout << "Enter input Celsius temperature: ";
		cin >> Celsius;
		cout << "1. Fahrenheit\n";
		cout << "2. Kelvin\n";
		cout << "Enter convertion temperature type: ";
		cin >> option;
		if(option==1){
			Fahrenheit = 1.8*Celsius+32;
			cout << "Converted Fehrenheit tempurature is: "<<Fahrenheit;
		}
		if(option==2){
			Kelvin = Celsius+273;
			cout << "Converted Kelvin tempurature is: "<<Kelvin;
		}
	}
	else if(option == 2){
		cout << "Enter input Fahrenheit temperature: ";
		cin >> Fahrenheit;
		Celsius = (Fahrenheit-32)/1.8;
		cout << "Converted Celsius tempurature is: "<<Celsius;
	}
	else
		exit(1);
	return 0;
}
