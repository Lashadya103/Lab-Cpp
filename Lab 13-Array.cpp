#include<iostream>
using namespace std;

int main(){
	double *d_var,*d_array;
	d_var= new double;
	d_array= new double[10];
	
	cout<<"Enter value:";
	cin>>*d_var;
	cout<<*d_var<<endl;
	
	for(int i=0; i<10; i++){
		cout<<"Enter values for the array" <<" "<<i+1<<":";
		cin>>d_array[i];
	}
	for(int i=0;i<10;i++){
		cout<<d_array[i];
	}
	
	delete d_var;
	delete []d_array;
	
	return 0;
}
