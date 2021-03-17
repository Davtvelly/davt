



#include <iostream>
#include <string.h>
using namespace std;

class Registration
{
	protected:

	string firstName;
	string secondName;
	string fullName;
	short regNumber;
	string email;
	string mailConfirm;
	short index;
	short password;
	short confirmPassword;

	public:
	Registration(string firstName = "0", string secondName =  "0",
	 short regNumber = 0, string email = "0",string mailConfirm = "0",
	 short index = 0, short password = 0, short confirmPassword = 0)
	{
		this->firstName = firstName;
		this->secondName = secondName;
		this->regNumber = regNumber;
		this->email = email;
		this->mailConfirm = mailConfirm;
		this->index = index;
		this->password = password;
		this->confirmPassword = confirmPassword;


	 }
	 friend void output(Registration &registration);

};

void output(Registration &registration)
{
	cout<<"\n     Click 1 to register ";
	cin>>registration.index;

	if(registration.index == 1)

	{
	cout<<"\n     Student's first name: ";
	cin>> registration.firstName;
	cout<<"\n     Student's second name: ";
	cin>>registration.secondName;
	cout<<"\n     Student's full name: "<<registration.firstName +
	registration.secondName;
	cout<<"\n      student registration number: ";
	cin>>registration.regNumber;
	cout<<"\n       Enter email address : ";
	getline(cin,registration.email);
	cout<<"\n     confirm your email address: ";
	getline(cin, registration.mailConfirm);

	if(registration.email != registration.mailConfirm)
	{
		cout<<"\n  two emails dont match "
		      "\n   click one to repeat again ";
		      cin>>registration.index;
	}

	cout<<"\n Enter your password "<<endl;
	cin>>registration.password;
	cout<<"\n confirm your password "<<endl;
	cin>>registration.confirmPassword;

	if(registration.password != registration.confirmPassword)
	{
		cout<<"\n  two passwords dont match "
		      "\n  click one to reset it again ";
		      cin>>registration.index;

	}
	}
}

class Login: public Registration
{
	protected:
	short passWord;
	string myEmail;

	public:
	void doSomething( short word, string mymail)
	{
		passWord = word;
		myEmail = mymail;
	}
	void printall()
	{
		if(index == 2)
		{
			cout<<"/n  Enter your email ";
			getline(cin, myEmail);
			if(myEmail != email)
			{
			cout<<"/n  incorrect email address  "<<endl;
			cout<<"/n click two to reset ";
			cin>>index;
			}

			cout<<"/n Enter password ";
			cin>>passWord;
			if(passWord != password)
			{
				cout<<"/n you have entered wrong password try again "
				      "/n click 2 to try again ";
				      cin>>index;
			}
		}
	}
};


	int main()
	{
		cout<<"        WELCOME TO OUR REGISTRATION PLATFORM "<<endl;
		cout<<"       ------------------------------------- "<<endl;

		cout<<"          <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< "<<endl;
	cout<<"         >                                   >"<<endl;
	cout<<"         >                                   >"<<endl;
	cout<<"         >   1. click here to register       >"<<endl;
	cout<<"         >                                   >"<<endl;
	cout<<"         >                                   >"<<endl;
	cout<<"         >   2. click here to log in         >"<<endl;
	cout<<"         >                                   >"<<endl;
	cout<<"         >                                   >"<<endl;
	cout<<"         >                                   >"<<endl;
	cout<<"         >                                   >"<<endl;
	cout<<"         >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;

	Login test;
	output(test);
	test.printall();
	return 0;
}
