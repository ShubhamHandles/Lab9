//Q.7.Write a function that returns a pointer to the maximum value of an array of double's.  If the array is empty, return NULL.

#include<iostream>
using namespace std;

//function that returns a pointer to the maximum value of an array
double* maximum(double* a, int size){

	double* max = a;
	for(int i=0; i<size; i++){
		if(*max<*(a+i))
		*max = *(a+i);
	}
	return max;
}

int main(){
	
	//input of array size
	int s;
	cout << "Enter the size of your array : " << endl;
	cin >> s;

	//define array
	double A[s];
	//define pointer
	double* p = A;

	//input of array elements
	cout << "Enter the elements of your array : " << endl;
	for(int i=0;i<s;i++){
		cin >> *(p+i);
	}

	//call function
	double* max = maximum(p,s); 
	//output
	cout << "The pointer to the maximum value is : " << maximum(p,s) << endl;
	cout << "The maximum number in your array is : " << *max << endl;

	return 0;

}

