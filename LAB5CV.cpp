#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
struct Name{
       char lastName[30];
       char firstName[30];
};
struct pr3 {
	char firstn[20];
	char lastn[10];
	char contact[10];
	int day;
	int month;
	int year;
	struct {
		int id;
		char item[20];
		float price;
		int quantity;
	}
items[3];
} pr3[3];
struct pr1{
       int id;
       Name name;
       double grade[3];       
};


void prob1(){
	    pr1 stud;
    cout << "Enter student records: \n";
    cout << "ID: ";
    cin >> stud.id;
    cout << "First Name: ";
    cin.getline(stud.name.firstName, 29);
    cout << "Last Name: ";
    cin.getline(stud.name.lastName, 29);
    for(int i=0; i<3; i++){
            cout << "Grade "<< i+1 << ": ";
            cin >> stud.grade[i];        
    }
    
    cout << "\n\n";
    cout << "Display student records\n";
    cout << "ID: " << stud.id << endl;
    cout << "First Name: " << stud.name.firstName << endl;
    cout << "Last Name: " << stud.name.lastName << endl;
    for(int i=0; i<3; i++){
            cout << "Grade "<< i+1 << ": " << stud.grade[i] << endl;        
}
}

void prob3(){
float TotalPrice,Total;
	for(int a=0; a<3; a++){
		cout<<"CUSTOMER INFORMATION "<<a+1<<endl;
		cout<<"First Name: ";
		cin.ignore();
		gets(pr3[a].firstn);
		cout << "Last Name: ";
		gets(pr3[a].lastn);
		cout << "Contact Number: ";
		cin >> pr3[a].contact;
		cout << "Order  Date: " << endl;
		cout << "Day: ";
		cin >> pr3[a].day;
		cout << "Month: ";
		cin >> pr3[a].month;
		cout << "Year: ";
		cin >> pr3[a].year;
		cout<<"Enter three items: \n";
		for(int b=0;b<3;b++) {
			cout<<"ID: ";
			cin>>pr3[a].items[b].id;
			cout<<"Name: ";
			cin.ignore();
			gets(pr3[a].items[b].item);
			cout<<"Price: ";
			cin>>pr3[a].items[b].price;
			cout<<"Quantity: ";
			cin>>pr3[a].items[b].quantity;
			
		} 
		cout << endl << endl;
		system("cls");		
		
	}
	Total = 0;
	cout << "SUMMARY REPORT" << endl;

	cout.precision(2);
	cout << "#" << setw(20) << "Customer Name" << setw(15) << "Order Date" << setw(15) << "Items" << setw(10) << "Price" << setw(15) << "Quantity" << endl << endl;
	for(int c=0; c < 3; c++){
		cout<<" "<<c+1;
		cout << setw(14) << pr3[c].lastn << "," << pr3[c].firstn;
		cout <<setw(7)<<pr3[c].month<<"/"<<pr3[c].day<<"/"<<pr3[c].year << setw(25) <<"                       \t\t\t";
	
	for(int d=0;d<3;d++) {
			cout<<"\t\t\t\t\t"<<setw(12)<<pr3[c].items[d].item;
			cout<<setw(12)<<pr3[c].items[d].price;
			cout<<setw(12)<<pr3[c].items[d].quantity<<endl;
			TotalPrice = (pr3[c].items[d].quantity)*(pr3[c].items[d].price);
			TotalPrice += TotalPrice;
		} cout << setw(70) << "TOTAL PRICE: "<< TotalPrice << endl;
	} 
}
void problem2(){
	struct record{
	int id;
	char name[50];
	struct Grade{
		float quiz;
	};
 Grade grade[3];
};

void newLine();

	record stud[5];
	cout<<endl;
	cout << "Enter 5 Student<s> Record" << endl;
	for (int i=0; i<5; i++){
		cout << "\nStudent " << (i+1) << endl;
		cout << "ID: ";
		cin >> stud[i].id;
		newLine();
		cout << "Name: ";
		cin.getline(stud[i].name, 49);
		cout << "Enter 3 quizze(s): ";
		for(int j=0;j<3;j++){	
			cin >> stud[i].grade[j].quiz;	
		}
}
	cout << setw(5) << "No."
		 << setw(15) << "Student No"
	 	 << setw(20) << "Name"
		 << setw(10) << "Grade"
		 << setw(10) << "Remark";
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	
	for(int i=0; i<5; i++){
		int sum=0;
		for(int j=0;j<3;j++){
		sum+=stud[i].grade[j].quiz;
		}
		cout << endl;
		cout << setw(5) << i+1
			 << setw(15) << stud[i].id
			 << setw(20) <<stud[i].name
		 	 << setw(10)<< sum/3 
			 << setw(10);
		if( sum/3>=75 ){
			cout << "Passed";
			}
			else{
			cout << "Failed";
			}
		}
		cout << endl;

}

int main(){
	//prob1();	
	//prob3();
	problem2();
}
void newLine(){
     char s;
     do{cin.get(s);}while(s!='\n');     
}


