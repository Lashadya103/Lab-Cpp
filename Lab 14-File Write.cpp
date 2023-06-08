#include<iostream>
using namespace std;
int main (){
	FILE *pointer;
	int i,n;
	char str[1000];
	char filename[25]="text1.txt";
	char str1;
	
	cout<<"Input the number of lines to be written:";
	cin>>n;
	pointer= fopen(filename,"w");
	for(i = 0; i <n+1;i++)
		{
		fgets(str, sizeof str, stdin);
		fputs(str,pointer);
		}
  fclose (pointer);
  
  pointer= fopen (filename, "r");  
	cout<<"The content of the file"<<" "<<filename<<" "<<"is :"<<endl;
	str1 = fgetc(pointer);
	while (str1 != EOF)
		{
			printf ("%c", str1);
			str1 = fgetc(pointer);
		}
    cout<<endl;
    fclose (pointer);
    return 0;
}
