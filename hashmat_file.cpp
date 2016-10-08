#include <iostream>
#include<stdlib.h>
#include <fstream>
using namespace std;
int main()
{	int x,y,j,dif,diff,difff;
	cout<<"Difference: "; 

	 ifstream f("input.txt");
   
    while (f >> x >> y) {
    	cout<< abs(x-y)<<endl;
    	
    		
}
		     
return 0;	
}
