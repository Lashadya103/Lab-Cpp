#include<iostream>
using namespace std;
int main(){
	int  value;
	int *pointer;
	cout<<"Enter any value:";
	cin>>value;
	cout<<endl;
	pointer= &value;
	cout<<"Value="<<value<<endl;
	cout<<endl;
	cout<<"Address of the value="<<pointer<<endl;
	cout<<"Address of the pointer="<<&pointer<<endl;
	return 0;
}
