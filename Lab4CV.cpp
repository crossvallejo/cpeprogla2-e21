#include<iostream>
#include<cstring>
using namespace std;
char *w1, *w2,str1[50], str2[50], s[50];
int l=1,si,j=0;

void strcpy() {
	cout<<"---Function like strcpy---";
	cout<<"\nEnter first string:  ";
    gets(str1);
    cout<<"Enter second string: ";
    gets(str2);
	for(int i=0;i<50;i++){
    	w1=&str1[i];
    	w2=&str2[i];
    	*w1=*w2;
    	cout<<str1[i];
    
	}  
}


void strcat() {
		cout<<"\n---Function like strcat---";

	cout<<"\nEnter first string:  ";
    gets(str1);
    cout<<"Enter second string: ";
    gets(str2);
	for(int i=0;i<strlen(str1);i++){
    	w1=&str1[i];
    	cout<<*w1;
	}
	for(int i=0;i<strlen(str2);i++){
    	w2=&str2[i];
    	cout<<*w2;
	}


}
char reverse(char* s) {
	cout<<"\n---function that will reverse a string---";
	cout<<"\nEnter a string: ";
    gets(s);
    cout<<"The reverse is: ";
	si=strlen(s);
	for(int i=si-1;i>=0;i--) {
		cout<<s[i];
	}
}
int strlen(char*w1){
	cout<<"\n---function like strlen---";
	cout<<"\nEnter a string:  ";
	cin.ignore();
    gets(str1);
	while(*w1!='\0') {
		l++;
		w1++;
	}
	cout<<"The length of the string is: "<<l;
	return l;
}

void strcmp() {
	cout<<"---function like strcmp---";
	cout<<"\nEnter first string:  ";
    gets(str1);
    cout<<"Enter second string: ";
    gets(str2);
	for(int i=0;i<50;i++){
    	w1=&str1[i]; w2=&str2[i];
    if (*w1==*w2) j+=0;
	else if (*w2<*w1) j+=1;
	else if (*w2>*w1) j-=1;
}
	if (j==0) cout<<"Equal";
	else if (j>0) cout<<"Positive";
	else if (j<0) cout<<"Negative";
}

int main(){
	strcpy();
	strcat();
	strlen(str1);
	reverse(s);
	strcmp();
}

