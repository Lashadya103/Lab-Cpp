#include<iostream>
using namespace std;
int main (){
	int num1,num2,num3;
	int *pointer1,*pointer2,*pointer3;
	
	cout<<"Enter first value:";
	cin>>num1;
	cout<<endl;
	cout<<"Enter second value:";
	cin>>num2;
	cout<<endl;
	cout<<"Enetr third value:";
	cin>>num3;
	cout<<endl;
	
	pointer1=&num1;
	pointer2=&num2;
	pointer3=&num3;
	
	if(*pointer1>*pointer2){
		if(*pointer1>*pointer3){
			cout<<"The largest value is :"<<*pointer1<<endl;
		}
	    else{
	    	cout<<"The largest value is :"<<*pointer3<<endl;
		
		}
	}
	
	else {
		if(*pointer2>*pointer3){
			cout<<"The largest value is :"<<*pointer2<<endl;
		}
		else {
			cout<<"The largest value is :"<<*pointer3<<endl;
		}
		
	}
	
	
	if(*pointer1<*pointer2){
		if(*pointer1<*pointer3){
			cout<<"The smallest value is :"<<*pointer1<<endl;
		}
	    else{
	    	cout<<"The smallest value is :"<<*pointer3<<endl;
		
		}
	}
	
	else {
		if(*pointer2<*pointer3){
			cout<<"The smallest value is :"<<*pointer2<<endl;
		}
		else {
			cout<<"The smallest value is :"<<*pointer3<<endl;
		}
		
	}
	
	return 0;
}
