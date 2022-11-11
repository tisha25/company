#include <iostream>
using namespace std;
class student {
	int id;
	char name[50];
	int staf;
	int rv;
	int dr;
	int er;
	char ceo[50];
	int k,n;
	

public:
	student();
	void display();
};

student::student()
{
	cout<<"Enter No Of Company Information : ";
	cin>>n;
	for(k=1 ; k<=n ;k++){
	cout << "Enter the Company Id :";
	cin >> id;

	cout << "Enter the Company Name:";
	cin >> name;

	cout << "Enter the Staff quantity:";
	cin >> staf;

	cout << "Enter the company revenue(per year) :";
	cin >> rv;

	cout << "Enter the company import raw diamonds(per year) :";
	cin>>dr;
	
	cout << "Enter the company export diamonds(per year) :";
	cin>>er;
	
	cout << "Enter the company CEO Name : ";
	cin>>ceo;
	
	cout<<endl<<endl;
}
}

void student::display()
{
	cout << endl;
	cout << endl;
	
	cout<<"DETAILS OF DIOMAND COMPANY "<<endl<<endl;
	for(k=1 ; k<=n ; k++){
	
	cout <<"Id :"<< id<< endl;
	cout<<"Company Name : "<< name<< endl;
	cout<<"Staf Quantity : "<< staf<< endl;
	cout<<"bcompany revenue(per year) : " <<rv<< endl;
	cout<<"company import raw diamonds(per year) : " <<dr<<endl;
	cout<<"company export diamonds(per year) : "<<er<<endl;
	cout<<"company CEO Name : "<<ceo<<endl;
}
}

int main()
{
	student s;
	s.display();
    
	return 0;
}
