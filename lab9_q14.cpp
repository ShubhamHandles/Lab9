//Q.14. [STRING] Create a string and store your name in it. Use a loop to print string character by character using the normal index method as well as the pointer method. 

#include<iostream>
#include<cstring>
using namespace std;

int main(){
	
	//create string
	char name[] = "Shubham Kumar";
	
	//print using index
	for (int i=0; i<13; i++ ){
		cout << name[i];
		cout<< endl;
	}

	cout << endl;

	//print using pointer
	for(char * p=name; p<(name+13); p++){
		cout<< *p;
		cout<< endl;
	} 
		
	return 0;
}
	
