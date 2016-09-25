#include <iostream>
#include <math.h>
#include <ctime>
#include <cstdlib>
using namespace std;
void problem1();
int call_by_value(int n);
void problem2();
int main()
{	int n;
	problem1();
	problem2();
	cout<<"\nEnter a number: ";
	cin>>n;
	cout<<"The Factorial of "<<n<<" is: "<<call_by_value(n);

	return 0; 
}
void problem1()
{
		double num;
	int r;
	cout<<"enter value to round off: ";
	cin>>num;
	r=round(num);
	cout<<r;
}

void problem2(){
	int uniques[] = {0,0,0,0,0,0,0,0,0,0};
	int num,i;
	int min = 1;
	int max = 20;
	srand( (unsigned)time( NULL )); 
	for(int i =0; i<10; i++){
		num = min + (rand() % (max - min + 1));
		for(int j=0; j<10; j++){
			if(num == uniques[j]){
				num = min + (rand() % (max - min + 1));
			}
			else{
				uniques[i] = num;
			}
		}
	}
	cout<<"\nUnique numbers: ";
	for(int i=0; i<10; i++){
		cout<< uniques[i]<<" ";
	}
 }
 int call_by_value(int n){
	if(n==1)
		return 1;
	else
		 	return n*call_by_value(n-1);
}
