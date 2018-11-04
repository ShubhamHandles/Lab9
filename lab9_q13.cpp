//Q.13. Create an array of size 10. Use a loop to print array using the normal index method as well as the pointer method. 

#include <iostream>
using namespace std;

int main(){

	//define array
	int arr[10];

	//input for array
	cout << "Enter the elements of your array : " << endl;
	for(int a=0; a<10; a++){
		cin >> arr[a];
	}

	//print using index method
	cout << "Elements of your array(index method) is : " << endl;
	for(int a=0; a<10; a++){
		cout << arr[a] << ", ";
	}
	cout << endl;

	//print using pointer method
	int* p=arr;
	cout << "Elements of your array(pointer method) is : " << endl;
	for(int a=0; a<10; a++){
		cout << *(p+a) << ", ";
	}
	cout << endl;


	return 0;
}
