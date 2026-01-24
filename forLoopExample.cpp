#include<iostream>
using namespace std;

//printing table of a number using for loop

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i = 1; i <= 10; i++){
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }

    return 0;
}