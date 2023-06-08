#include <iostream>
using namespace std;

int main()
{
   int num1;
   int num2;
   int i;
   int GCD;
   int LCM;

   cout << "Enter two numbers: " << endl;
   cin >> num1 >> num2;

   for(i=1; i <= num1 && i <= num2; ++i) {
   	
      if(num1 % i == 0 && num2 % i == 0)
      GCD = i;
   }
  // cout<< "GCD of "<< num2 <<", "<< num1 <<" = "<< GCD << endl;
 
   LCM = (num1 * num2) / GCD;
   cout << "LCM of "<< num2 <<", "<< num1 <<" = "<< LCM << endl;

   return 0;
} 

//IM/2019/103-Lashadya
