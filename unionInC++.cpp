#include<iostream>
using namespace std;
union money{
    int rice;
    char car;
    float pounds;
};
int main(){
    union money m1;
    m1.rice = 2;
    cout<<m1.rice;
    //only one data member can be used at a time while using union.
    //this helps in managing memory more efficiently.
    return 0;
}