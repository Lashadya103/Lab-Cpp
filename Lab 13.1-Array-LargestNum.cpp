#include<iostream>
using namespace std;
int main(){
	int *n,*max;
	int *array;
	n= new int;
	max=new int;
	array= new int [100];
	cout<<"Input total number of elements (1 to 100):";
	cin>>*n;
	
	for(int i=0; i<*n; i++){
		cout<<"Number"<<" "<<i+1<<":";
		cin>>array[i];
	}
	*max=array[0];
	for(int i=0; i<*n; i++){
		if(*max<array[i])
		*max=array[i];
	}
	cout<<"Largest number:"<<*max<<endl;
}
