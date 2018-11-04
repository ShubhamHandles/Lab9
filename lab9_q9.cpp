//Q.9.Write a function contains(char*, char) which returns true if the 1st parameter cstring contains the 2nd parameter char, or false otherwise.

#include <iostream>
using namespace std;

bool contains(char* p,char c){
	
	while(*p!='\0'){
		if(*p==c)
		return true;
		p++;
	}
	
	return false;
}

int main(){

	//input for the string
	char s[10];
	cout << "Enter a string without any spaces :" << endl;
	cin >> s;
	
	//input for the character
	char c;
	cout << "Enter a character to check if it is present in your string or not : " << endl;
	cin >> c;

	//call function
	bool result = contains(s,c);

	//print results
	if(result==true)	
	cout << "The character '" << c << "' is present in your string!" << endl;
	else
	cout << "The character '" << c << "' is not present in your string!" << endl;
	return 0;
}

