#include<iostream>
using namespace std;

int main(){
    int marks[4] = {20, 30, 40, 50};

    marks[2] = 59;
    cout<<"Marks with loop: "<<endl;
    for(int i = 0; i < 4; i++){
        cout<<marks[i] << endl;
    }
    cout<<"Marks without loop: "<<endl;
    cout<<marks[0] << endl;
    cout<<marks[1] << endl;
    cout<<marks[2] << endl;
    cout<<marks[3] << endl;

    return 0;
}