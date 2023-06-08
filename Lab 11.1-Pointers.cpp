#include<iostream>
using namespace std;

void getvalue(int *ptr){
	cout<<"User inserted value is" << *ptr << endl;
}
int main (){
	int userinput;
	cout<<"Please enter your input:";
	cin>>userinput;
	getvalue(&userinput);
}
