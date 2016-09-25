#include<iostream>
#include<cstring>
#include <bits/stdc++.h>
using namespace std;
 char p6s[100];
 int n;
void prob5(char*a){
	int i;
 	cout<<"Enter string: ";
 	gets(a);
 	strlwr(a);
 	a[0]-=32;
 	for(i=1;i<strlen(a);i++){
 		if(a[i]==' ')
 		a[i+1]-=32;
 
 	}
 	puts(a);
}
char* myStrCmp(char* str1, char* str2){
  switch(strcmp(str1, str2)){
    case -1:
      cout << "negative";
      break;
    case 0:
      cout << "equal";
      break;
    case 1:
      cout << "positive";
      break;
  }
}
void myStrCpy(char* str1, char* str2)
{
  strcpy(str1, str2);
  	cout<<str1;
}

void myStrCat(char* str1, char* str2){
  strcat(str1, str2);  
   cout<<str1;
}
void pal(char* a,char* b){
	cout<<"Enter the string to check if it is a palindrome\n";
gets(a);
strcpy(b,a);
strrev(b);
if(strcmp(a,b)==0)
cout<<a<<" is a palindrome";
else 
cout<<a<<" is not a palindrome";
}
//prob6 aint shit
void prob6(char* p6s){
		cout<<"Enter string: ";
	gets(p6s);
	n=strlen(p6s);
	for(int i=n;i>=0;i--) {
		if (p6s[i]==32) {
			int j=i+1;
			while(p6s[j]!=32&&j<n) {
				cout<<p6s[j];
				j++;
			}
			cout<<endl;
		}
	}
	int k=0;
	while(p6s[k]!=32) {
		cout<<p6s[k];
		k++;
}
}
int main(){
  char str1[100]="Hello";
  char str2[100]="hello";
  char a[100];
  char b[100]; 
 
  string str,stri,i;
  cout<<"str1=Hello ; str2=hello"<<endl;
  cout<<"**************"<<endl<<"STRING COMPARE"<<endl<<"**************"<<endl;
  myStrCmp(str1, str2);
  cout<<endl;
  cout<<"******************"<<endl<<"STRING CONCATINATE"<<endl<<"******************"<<endl;
  myStrCpy(str1, str2);
  cout<<endl;
  cout<<"**************"<<endl<<"STRING COPY"<<endl<<"**************"<<endl;
  myStrCat(str1, str2);
  cout<<endl;
  cout<<"**************"<<endl<<"PALINDROME"<<endl<<"**************"<<endl; 
  pal(a,b);
  cout<<endl;
    cout<<"**************"<<endl<<"PROBLEM 5"<<endl<<"**************"<<endl; 
  prob5(a);
cout<<endl;
    cout<<"**************"<<endl<<"PROBLEM 6"<<endl<<"**************"<<endl; 
prob6(p6s);


  cout<<endl;  
}
