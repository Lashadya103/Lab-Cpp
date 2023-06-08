#include<iostream>
using namespace std;
 int main (){
 	char str[5000];
 	char filename[20]="test.txt";
 	FILE *pointer;
 	pointer=fopen(filename,"w");
 	
 	if(pointer==NULL){
 		cout<<"Error in opening file!"<<endl;
 		
	 }
	 cout<<"Input a sentence for the file:";
	 fgets(str, sizeof str, stdin);
   fprintf(pointer,"%s",str);
   fclose(pointer);
   cout<<"\n The file is created successfully...!!\n"<<filename<<endl;
   return 0;
}
