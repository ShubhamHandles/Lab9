//Q.11. Write a program to declare variables of all predefined sizes and declare corresponding pointers (of all predefined types). Print out the sizes of each of variables and pointer variables. (Hint: use sizeof )

#include <iostream>
using namespace std;

int main(){

	int a;
	int* p1=&a;
	cout << "The size of integer variable is " << sizeof(a) << " bytes." <<endl;
	cout << "The size of integer pointer is " << sizeof(p1) << " bytes." <<endl;

	short b;
	short* p2=&b; 
	cout << "The size of short variable is " << sizeof(b) << " bytes." <<endl;
	cout << "The size of short pointer is " << sizeof(p2) << " bytes." <<endl;

	long c;
	long* p3=&c;
	cout << "The size of long variable is "<< sizeof(c) <<" bytes."<< endl;
	cout << "The size of long pointer is "<< sizeof(p3) <<" bytes."<< endl;

	bool d;
	bool* p4=&d;
	cout << "The size of boolean variable is " << sizeof(d) <<" bytes."<< endl;
	cout << "The size of boolean pointer is " << sizeof(p4) <<" bytes."<< endl;

	double e;
	double* p5=&e;
	cout << "The size of double variable is " << sizeof(e) <<" bytes."<< endl;
	cout << "The size of double pointer is "<< sizeof(p5) <<" bytes."<< endl;
 
	float f;
	float* p6=&f;
	cout << "The size of float variable is " << sizeof(f) <<" bytes."<< endl;	
	cout << "The size of float pointer is " << sizeof(p6) <<" bytes."<< endl;

	return 0;
}
