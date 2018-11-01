//Q.6.Write a function countEven(int*, int) which receives an integer array and its size, and returns the number of even numbers in the array.

#include<iostream>
using namespace std;

//function to return even elements
int nEven(int* x, int y){
	
	int count = 0;
	for(int i=0; i<y; i++){
		if(*(x+i)%2==0)
		count++;
	}	
	return count;

}

int main(){
	
	//input of array size
	int s;
	cout << "Enter the size of your array : " << endl;
	cin >> s;

	//define array
	int A[s];
	//define pointer
	int* p = A;

	//input of array elements
	cout << "Enter the elements of your array : " << endl;
	for(int i=0;i<s;i++){
		cin >> *(p+i);
	}

	//call function 
	//output
	cout << "The number of even numbers in your array is : " << nEven(p,s) << endl;

	return 0;

}


