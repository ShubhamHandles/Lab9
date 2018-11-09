//strstr
#include<iostream>
using namespace std; 

int mystrlen(char *str){
	
	int i;
	for(i=0;str[i]!='\0';i++);
	return i;
}

char *mystrstr(char *str,char *str1){
	while(*str!='\0'){
		int count = 0;
		for(int i=0;i<mystrlen(str1);i++){
			if(*(str+i) == *(str1+i)){
				count++;
			}
		}
		
		if(count == mystrlen(str1)){
			return str;
		}
		str++;
	}
	return NULL;                                 
}

int main(){

	char str[10],str1[10];
	
	//enter a string
	cout<<"Enter a string\n";
	cin>>str;
	
	//enter string to be searched
	cout<<"Enter string to be searched\n";
	cin>>str1;
	
	//result
	if(mystrstr(str,str1)==NULL){
		cout<<"The string DOESN'T exist\n";
	}
	
	else{
		cout<<"The string DOES exist\n";
		cout<<"The location of the string is "<< mystrstr(str,str1) - str + 1<<endl;           
	}

	return 0;
}
