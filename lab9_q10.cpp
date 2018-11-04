//Q.10.Write a function revString(char*) which reverses the parameter cstring.  The function returns nothing.  You may use C++ string handling functions in <cstring> in the function if you wish.


#include<iostream>
using namespace std;

//function to reverse a string
void revString(char* s){

	char* p;
	p=s;
	
	// going to end	
	while(*p!='\0')
	p++;
	
	// print from end
	cout << "Reverse of your string is : ";	
	while(p>=s)
	cout << *p--;
	cout << endl;
}

int main(){

	//input of string
	char s[10];
	cout << "Enter a string without any spaces :" << endl;
	cin >> s;
	
	// call function to print results
	revString(s);  

	return 0;

}
