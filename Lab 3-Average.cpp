#include <iostream>
using namespace std;

int main() {
	
	int num,a;					// a=the number that user enter
	double sum=0;
	int count=0;
	
	cout<<"Enter the numbers that you want to calculate the average: ";
	cin>> num;
	
	if(num<=0){
 	cout << "Error! Enter values greater than 0: "<<endl;
 	return 0; 	
	}
	while(count<num){
	cout<< "Enter the number: ";
	cin>>a;
	sum=sum+a;
	count++;		
	}
	double average=sum/num;
	cout<<"Average is: "<<average<<endl;
	return 0;
}


//IM/2019/103-Lashadya
