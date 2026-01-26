#include<iostream>
using namespace std;
//Write a program to swap three numbers entered by a user using pointers.

void swap(int *a, int *b, int *c){
	int temp;
	temp = *b;
	*b = *a;
	*a = *c;
	*c = temp;
	
	cout<<"After swapping:\n a = "<<*a<<"\n b = "<<*b<<"\n c = "<<*c<<endl;
}
int main(){
	int a, b, c;
	cout<<"Enter 3 numbers: "<<endl;
	cin>>a>>b>>c;
	
	int *ptr1, *ptr2, *ptr3;
	
	ptr1 = &a;
	ptr2= &b;
	ptr3 = &c;
	
	cout<<"Before Swapping:\n a = "<<a<<"\n b = "<<b<<"\n c = "<<c<<endl;
	swap(ptr1, ptr2, ptr3);
	
	return 0;
}