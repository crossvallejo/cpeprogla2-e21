#include <iostream>
#include<cstring>
using namespace std;

struct Name{
       char lastName[30];
       char firstName[30];
};

struct Student{
       int contactn;
       Name name;
       double grade[3];       
};
struct date{
       int day;
 	   int month;
	   int year;      
};
struct items{
	double item[100];
	string itemname[100];
};

void newLine();

int main(){
    Student stud;
    date d;
    items items;
    cout << "Customer information 1\n";

     cout << "First Name: ";
    cin.getline(stud.name.firstName, 29);
    cout << "Last Name: ";
    cin.getline(stud.name.lastName, 29);  
    cout << "Contact no.: ";
	 cin >> stud.contactn;
    newLine();
	cout<<"Order Date: "<<endl;
	cout<<"day: ";
	cin>>d.day;
	cout<<"month: ";
	cin>>d.month;
	cout<<"year: ";
	cin>>d.year;
	cout<<"Enter 3 items: "<<endl;
	
    for(int i=1; i<4; i++){
            cout << "Item: "<< i << endl;
            cout<<" name: ";
            cin>>items.itemname[i];
            cout<<"price: ";
            cin >> items.item[i];      
    }
 
    cout << "\n\n";
    cout << "Display student records\n";
 
    cout << "First Name: " << stud.name.firstName << endl;
    cout << "Last Name: " << stud.name.lastName << endl;  
	cout << "contact number: " << stud.contactn << endl;
    for(int i=1; i<4; i++){
            cout << "item: "<< i <<  endl;  
			cout<<" name: "<<items.itemname[i]<<endl;
		 cout<<"price: " << items.item[i] << endl;
    }
    cout<<"day: "<<d.day<<endl;
    cout<<"month: "<<d.month<<endl;
    cout<<"year: "<<d.year<<endl;
    system("pause > 0");
    return 0;   
}
void newLine(){
     char s;
     do{cin.get(s);}while(s!='\n');     
}
