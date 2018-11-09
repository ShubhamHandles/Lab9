#include<iostream>    
using namespace std;

void mystrcpy(char *str,char *p){
    	while(*str!='\0'){
		*p = *str;
       		str++;
        	p++;
    	}
    
    	*p = '\0';
}

int main(){
   
    	char str[],c[];
    
	//input string
    	cout<<"Enter a string" << endl;
    	cin>>str;
    	mystrcpy(str,c);
    
    	//display copied string
    	cout<<"Copied string: "<<endl;
    	cout<< c << endl;
    

    	return 0;
    
}
