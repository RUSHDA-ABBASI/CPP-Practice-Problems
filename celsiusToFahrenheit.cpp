#include<iostream>
using namespace std;
/*
Write a program to convert temp from Fahrenheit to Celsius unit using equation C=(F-
32)/1.8.
*/
int main(){
	float f;
	cout<<"Enter temperature in fahrenheit: ";
	cin>>f;
	
	float c;
	c = (f - 32)/1.8;
	
	cout<<"Temperature in celsius is: "<<c<<endl;
	return 0;
}