#include<iostream>
using namespace std;
void add (int arr[3][3], int brr[3][3], float sum[3][3]){
	for(int i = 0; i<3; i++){
		for (int j = 0; j < 3 ; j++){
		sum[i][j] = arr[i][j] + brr[i][j];
	}
}
	cout<<"Sum of these matrices is: "<<endl;
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			cout<<sum[i][j] <<" ";
		}
		cout<<endl;
	}
}
void multiply(int arr[3][3], int brr[3][3], float product[3][3]){
	for(int i = 0; i<3; i++){
		for (int j = 0; j < 3 ; j++){
		product[i][j] = arr[i][j] * brr[i][j];
	}
}
	cout<<"Product of these matrices is: "<<endl;
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			cout<<product[i][j] <<" ";
		}
		cout<<endl;
	}
}
int main(){
	int m1[3][3];
	int m2[3][3];
	cout<<"Enter the elements of 1st matrix: "<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> m1[i][j];
		}
	}
	cout<<"Enter the elements of 2nd matrix: "<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> m2[i][j];
		}
	}
	float sum[3][3];
	float product[3][3];
	add( m1, m2, sum);
	multiply(m1, m2, product);
	return 0; }