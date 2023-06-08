#include <iostream>
using namespace std;
int main(){
	int b;
	int a;
	int num[b];
	int min=0;
	int max=0;
	cout << "Input values: ";
	cin>>b;
	
	for(int a=0;a<b;a++){
		cout<<" Enter number: ";
		cin>>num[a];
		}
		
	max = num[0];
	for (int a=0;a<b;a++)	
	{
		if (max<num[a])
		max=num[a];
	}
		min=num[0];
		for (int a=0;a<b;a++){
			if(min>num[a])
			min=num[a];
		}
	cout<<"The largest value is "<<max<<endl;
	cout<< "The smallest value is "<<min<<endl;
}

//IM/2019/103-Lashadya
