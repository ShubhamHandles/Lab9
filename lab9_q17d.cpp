//strcmp
#include<iostream>
using namespace std;

void mystrcmp(char *p1,char *p2,char *str1,char *str2){
    	
    	int i=0,a;
    	str1 = p1;
    	str2 = p2;
    	while(*p1!='\0' || *p2!='\0'){
        	if(*p1>*p2)
		i++;

        	else
        	i--;
    
    		if(i>0)
		a=1;
       
    		else if(i<0)
    		a=-1;
       
    		else
       		continue;
       
    		p1++;
    		p2++;
    	}
    
    if(a==1)
    {
        cout<<str1<<" is greater than "<<str2<<endl;
    }
    
    else if(a==-1)
    {
        cout<<str2<<" is greater than "<<str1<<endl;
    }
}

int main(){

    char str1[10],str2[10],*p1,*p2;
    
	//inputs
    	cout<<"Enter first string\n";
    	cin>>str1;

    	cout<<"Enter second string\n";
    	cin>>str2;
    
    	//display the result
    	mystrcmp(str1,str2,p1,p2);

    	return 0;
    
}
