#include <iostream>
using namespace std;

int main() {
	
	int num,a;					
	double sum=0;
	int count=0;
	int p=0;        			//p is the numbers greater than 10
	
	cout<<"Enter the numbers that you want to calculate the average: ";
	cin>> num;
	
	if(num<=0){
 	cout << "Error! Enter values greater than 0: "<<endl;
 	return 0; 	
	}

	
	while(count<num){
		
	cout<< "Enter the number: ";
	cin>>a;
	if (a>10){
		sum=sum+a;
		p++;
		}
		count++;
}
	double average=sum/p;
	cout<<"Average is: "<<average<<endl;
	return 0;

}

//IM/2019/103-Lashadya
