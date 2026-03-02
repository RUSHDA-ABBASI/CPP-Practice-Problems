#include<iostream>
using namespace std;
enum Meal {breakfast, lunch, dinner};
int main(){
   enum Meal {breakfast, lunch, dinner}; 
    Meal m1 = breakfast;
    Meal m2 = lunch;
    Meal m3 = dinner;

    cout<<m1<<endl;
    cout<<m2<<endl;
    cout<<m3<<endl;
    return 0;
}