#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{	int x,y,j,dif,diff,difff;
	cout<<"Enter number of soldiers  ( Hashmat's then opponent's): ";
	cin>>x>>y;

	if (x<=2^32 || y<= 2^32)
	{
	dif=(x-y); 
	}
	else
	{
	cout<<"invalid number";
	}
	cout<<"Enter number of soldiers  ( Hashmat's then opponent's): ";
	cin>>x>>y;
	if (x<=2^32 || y<= 2^32)
	{
	diff=(x-y); 
	}
	else
	{
	cout<<"invalid number";
	}	cout<<"Enter number of soldiers  ( Hashmat's then opponent's): ";
	cin>>x>>y;
	if (x<=2^32 || y<= 2^32)
	{
	difff=(x-y); 
	}
	else
	{
	cout<<"invalid number";
	}
	cout<<abs(dif)<<endl;
	cout<<abs(diff)<<endl;
	cout<<abs(difff)<<endl;
	
return 0;	
}
