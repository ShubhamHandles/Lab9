//Q.5.Write a piece of code which prints the characters in a cstring in a reverse order.

#include<iostream>
using namespace std;

int main(){

	char s[10];
	cout << "Enter a string without any spaces :" << endl;
	cin >> s;
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
	
	return 0;

}
