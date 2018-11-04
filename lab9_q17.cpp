//Q.17. Implement your versions for the following functions:
//Strcpy
//Strcat
//Strlen
//Strcmp
//Strchr
//Strstr 

#include<iostream>
#include<cstring>
using namespace std;

int main(){

	char str1[]= "copied", str2[]="useless";
	strcpy(str2, str1);
	cout<<"strcpy : it copys the array"<< endl;
	cout<< str2<< " " << str1<<endl;
		
	char att1[]="attachment ", att2[]="complete";
	strcat (att1, att2);
	cout<<"strcat attaches two arrays "<<endl;
	cout<< att1<<endl;
	cout<< att2<<endl;
		
	cout<<"strlen displayes size of string"<<endl;
	char size1[]="baiusia", size2[]="sdfjbisudfusyv";
	cout<<"size of the array1 is "<<strlen(size1)<<endl<<"size of the array2 is "<<strlen(size2)<<endl;
		
	char axx[] = "somthing" , ayy[]="somthing somthing";
	int strcmp(char *s1, char *s2);
	s1= axx, s2= ayy;
	cout<< "the strcmp function returns a negative, zero, or positive integer depending on whether the object pointed to by s1 is less than, equal to, or greater than the object pointed to by s2."<<endl;
	cout<< strcmp;
		
		
		
		
	return 0;
	}
