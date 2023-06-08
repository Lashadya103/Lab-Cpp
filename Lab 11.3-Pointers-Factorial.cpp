#include<iostream>
using namespace std;
int main (){
	int value;
	int *pointer;
	double factorial=1;
	cout<<"Enter a number:";
	cin>>value;
	pointer=&value;
	for (int i=1;i<=*pointer;i++) {
		factorial=factorial*i;
	}
	cout<<"Factorial of Given Number is ="<<" "<<factorial<<endl;
	return 0;
}
