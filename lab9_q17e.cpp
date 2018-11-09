//strchr
#include<iostream>

using namespace std;

char * mystrchr(char *str,char ch){
	while(*str!='\0'){
		if(*str == ch)
		return str;
		
		str++;
	}
	
	return NULL;
}

int main(){

	char arr[10],ch, *chptr;
	chptr = arr;
	
	//enter a string
	cout<<"Enter a string\n";
	cin>>arr;
	//enter character to be searched
	cout<<"Enter character to be searched\n";
	cin>>ch;
	
	//displays the location and returns corresponding character pointer
	if(*chptr == ch){
		cout<<"The location is "<<1<<endl;
	}

	else {
		while(chptr!=NULL){
		chptr = mystrchr(chptr+1,ch);
		cout<<"The location is "<<chptr - arr + 1<<endl;
		}
	}

	return 0;
}
