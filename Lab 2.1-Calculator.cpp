#include <iostream>
using namespace std;

void menu();
int add(int, int);
int subtract(int, int);
int multiply(int, int);
int divide(int, int);
int power(int, int);


int main(){
	int x, y;
	int choice;
	do	{
		menu();
		cin>> choice;
		switch (choice)	{
		case 1:
			cout << "Enter two numbers: ";
			cin >> x >> y;
			cout << "Sum " << add(x,y) <<endl;
			break;
		case 2:
			cout << "Enter two numbers: ";
			cin >> x >> y;
			cout << "Difference " << subtract(x,y) <<endl;
			break;
		case 3:
			cout << "Enter two numbers: ";
			cin >> x >> y;
			cout << "Product " << multiply(x,y) <<endl;
			break;
		case 4:
			cout << "Enter two numbers: ";
			cin >> x >> y;
			cout << "Power"<<power(x,y)<<endl;
			break;	
			
		case 5:
			cout << "Enter two numbers: ";
			cin >> x >> y;
			cout << "Quotient " << divide(x,y) <<endl;
			break;
		
		case 6:
			break;
		default:
			cout << "Invalid input" << endl;
		
		
		}
	}while (choice != 5);

	return 0;
}

void menu(){
	cout << "MENU" << endl;
	cout << "1: Add " << endl;
	cout << "2: Subtract" << endl;
	cout << "3: Multiply " << endl;
	cout << "4: Divide " << endl;
	cout << "5: Power " << endl;
	cout << "6: SCF (Smallest Common Factor) " << endl;
	cout << "7: Exit " << endl;
	cout << "Enter your choice :";
}

int add(int a, int b){
	return a + b;
}

int subtract(int a, int b){
	return a-b;
}

int multiply(int a, int b){
	return a*b;
}

int divide(int a, int b){
	return a/b;
}
int power(int a, int b)	{
  
int result = 1;

    cout << "Enter base and exponent respectively:  ";
    cin >>a >> b;

    cout << a << "^" << b << " = ";

    while (b != 0) {
        result *= a;
        --b;
    }

    cout << result;
    
    return 0;
} 

  

