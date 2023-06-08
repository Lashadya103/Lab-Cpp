#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
  FILE *f1, *f2, *f3;

  char ch, file1[25], file2[25], file3[25];

  cout<<"Input the 1st file name:";
  cin>>file1;

  cout<<"Input the 2nd file name:";
  cin>>file2;

  cout<<"Input the new file name where to merge the above two files:";
  cin>>file3;

  f1 = fopen(file1, "r");
  f2 = fopen(file2, "r");

  if (f1 == NULL){
  	cout<<".....Error in opening this file.....";
    cout<<"Again input 1st file name:";
  }
  if (f2 == NULL){
  	cout<<".....Error in opening this file.....";
    cout<<"Again input 2st file name:";
  }

  f3 = fopen(file3, "w"); 

  if (f3 == NULL){
  	cout<<".....Error in opening this file.....";
    cout<<"Again input the new file name where to merge the above two files:";
  }

  while ((ch = fgetc(f1)) != EOF)
    fputc(ch,f3);

  while ((ch = fgetc(f2)) != EOF)
    fputc(ch,f3);

  cout<<"The two files were merged into"<<" "<<file3<<" "<<"file successfully"<<endl;

  fclose(f1);
  fclose(f2);
  fclose(f3);

  return 0;
}

