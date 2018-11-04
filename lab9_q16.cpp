//Q.16. Contrary to Exercise 5, here, we want to show string repeatedly by shifting top character of string from right to left.



#include<iostream>
using namespace std;

int main(){
	
	//input for string
	char s[10];
	cout << "Enter a string without any spaces :" << endl;
	cin >> s;
	char* p;
	p=s;
	
	cout << endl;
	
	cout << "***************************" << endl;

	//going to end
	while(*(p+1)!='\0')
	p++;

	//print pattern from end
	while(*p!='\0'){
		cout << p <<endl;
		p--;
	}

	return 0;
}
