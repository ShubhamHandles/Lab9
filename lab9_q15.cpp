//Q.15. We want to show string repeatedly by shifting top character of string to right. 


#include<iostream>
using namespace std;

int main(){

	//input for string
	char s[10];
	cout << "Enter a string without any spaces :" << endl;
	cin >> s;
	char* p;
	p=s;
	
	cout << "***************************" << endl;

	//print pattern
	while(*p!='\0')
	{
		cout << p << endl;
		p++;
		
	}
	
	return 0;
}
