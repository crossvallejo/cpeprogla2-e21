#include <iostream>
#include<stdlib.h>
#include <fstream>
using namespace std;
int main()
{	int x,total;
	 ifstream f("input.txt"); 
    while (f >> x) {
    for ( int i = 0; i < x; i++ ) {
        if ( i % 3 == 0 || i % 5 == 0 ) {
            total = total + i;
        }
    }
    cout<<total<<endl;
}
 return 0;
}
