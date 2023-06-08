#include<iostream>
using namespace std;
int main (){
	FILE *pointer;
	char filename[25];
	char str;
	cout<<"Input file name what you want to open:";
	cin>>filename;
	pointer=fopen(filename,"r");
	if(pointer==NULL){
 		cout<<"Error in opening file!"<<endl;
 	}
	cout<<"\n The content of file"<<" "<< filename<<" "<<"is :"<<endl;
	str = fgetc(pointer);
	while (str != EOF)
		{
			printf("%c",str);
			str = fgetc(pointer);
		}
	fclose(pointer);
    return 0;
}
