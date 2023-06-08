#include<iostream>
using namespace std;
int main(){
	int number;
	int *pointer;
	int arr[number];
	
	cout<<"Enter the number of inputs:";
	cin>>number;
	pointer= &number;
	
	for(int k=0;k<*pointer;k++){
		cout<<"Enter Number"<<(k+1)<<":";
		cin>>arr[k];
	}
	
	for(int i=0; i<*pointer; i++){
		for(int j=i+1; j<*pointer; j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				    arr[i]=arr[j];
				    arr[j]=temp;
			}
		}
	}
	cout<<"Elements of array in sorted ascending order:"<<endl;
    for(int i=0; i<*pointer; i++)
    {
        cout<<arr[i]<<endl;
    }
	return 0; 
}
