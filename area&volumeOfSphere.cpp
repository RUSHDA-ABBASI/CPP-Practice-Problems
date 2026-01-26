#include<iostream>
using namespace std;

//Write a program to find Surface area and volume of a sphere using functions.

void area(float r){
	float ar;
	ar = 4 * 3.14 * r * r;
	cout<<"Surafce area is: " << ar << endl;
}

void volume(float r){
	float vol;
	vol = (4/3) * 3.14 * r*r*r;
	cout<<"Volume is: " << vol << endl;
}

int main(){
	float r;
	
	cout<<"Enter the radius of sphere: ";
	cin >> r;
	
	area(r);
	volume(r);
	
	return 0;
}