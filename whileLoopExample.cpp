#include<iostream>
using namespace std;

//printing table of a number using while loop.

int main(){
    int i = 1;
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    while (i<=10){
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
        i++;
    }
    return 0;
}