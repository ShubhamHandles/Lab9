//Q.8.Write a function myStrLen(char*) which returns the length of the parameter cstring.  Write the function without using the C++ function strlen.

#include<iostream>
using namespace std;

//function to determine length of a string
int myStrLen(char*x){

	int count=0;
	for(;*x!='\0'; x++)
	count = count+1;
	return count;
}

int main(){

	//input for string
	char s[10];
	cout << "Enter a string without any spaces :" << endl;
	cin >> s;

	//call function
	int length = myStrLen(s);
	//print length
	cout << "The length of the string is : " << length << endl;

	return 0;
}


