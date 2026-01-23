#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if (age >= 0 && age <= 12){
        cout<<"You are a kid."<<endl;
    }
    else if(age >= 13 && age <=19) {
        cout<<"You are a teenager."<<endl;
    }
    else if(age >19 && age <=60){
        cout<<"You are an adult."<<endl;
    }
    else{
        cout<<"You are a senior citizen."<<endl;
    }
    
    return 0;
}