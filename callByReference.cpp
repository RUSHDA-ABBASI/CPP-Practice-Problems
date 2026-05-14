#include<iostream>
using namespace std;

void swapByPointers(int *a, int *b){
   int temp = *a;
    *a = *b;
    *b = temp;
}

void swapByReferenceVariables(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int x, y;
    cout<<"Enter value of x : "<<endl;
    cin>>x;
    cout<<"Enter value of y : "<<endl;
    cin>>y;
    cout<<"Value of x and y before swapping is: "<<x<<"  "<<y<<endl;
    swapByPointers(&x, &y);
    cout<<"Value of x and y after swapping with swap by pointers is: "<<x<<"  "<<y<<endl;
    //it will swap again, so the oriinal value will be returned.
    swapByReferenceVariables(x, y);
    cout<<"Value of x and y after swapping with swap by refernce variables  is: "<<x<<"  "<<y<<endl;

    return 0;
}