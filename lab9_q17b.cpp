//strcat
#include<iostream>   

using namespace std;    

void mystrcat(char *str1, char *str2){
   
	cout<<str1<<str2<<endl;
}    

int main(){
    
    	char str1[10],str2[10];
    
	//strings
    	cout << "Enter first string\n" << endl;
    	cin>>str1;
    	cout<<"Enter second string" << endl;
    	cin>>str2;
    	
	//concatenated string
    	mystrcat(str1,str2);
    	
    	return 0;
}
