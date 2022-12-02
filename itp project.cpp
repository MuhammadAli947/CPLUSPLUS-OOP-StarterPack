#include<iostream>
#include<string>
using namespace std;
void mainmenu()
{
	int a;
	cout << "  	******** welcome to the bus management ********     " << endl;
	cout << "main menu is given below :" << endl;
	cout << "press 1 for student log in" << endl;
	cout << "press 2 for staff log in" << endl;
	//cin >> a;
}
void studentlogin()
{
	int perinfo();
	int b;
	int id;
	int x;
	int r,n;
	int pass;
	cout << "login id:";
	cin >> id;
	cout << "please enter your password:";
	cin >> pass;
	cout << endl;
	if ((id == 1234) && (pass == 1234))
	{
		int stafflogin();
		int busroutes(int r);
		int booking(int x);
		string contactdetails();

		cout << "press 1 for bus routes" << endl;
		cout << "press 2 for booking of seat" << endl;
		cout << "press 3 for contact details" << endl;
		cout << "press 4 to log out." << endl;
		cin >> b;
		switch (b)
		{
		case 1:
			busroutes(r);
			cout << "please enter the bus route no. :";
			cin >> r;
			cout << "the bus route no selected is:  " << r << endl;
			cout <<"press 5 to go back to main menu";
				cin >>n;
				switch(n);
				case 5:
	mainmenu();
	int o;
    cin >>o;
    if(o==1)
	{
		studentlogin();
	}
    if(o==2)
    {
		stafflogin();
		
    }
			break;
		case 2:
			booking(x);
			cout << "Please select your seat no..  :    ";
			cin >> x;
			cout << "the seat you have booked is :  " << x << endl;
			perinfo();
			cout <<"press 6 to go back to main menu";
				cin >>n;
				switch(n);
				case 6:
	mainmenu();
	int k;
    cin >>o;
  if(k==1)
	{

		studentlogin();
    }
	if(k==2)
	{
		stafflogin();
    }
			break;
		case 3:
			contactdetails();
			cout <<"press 7 to go back to main menu";
				cin >>n;
				switch(n);
				case 7:
	mainmenu();
	int g;
    cin >>g;
    if(g==1)
	{
		studentlogin();
    }
	if(g==2)
	{
		stafflogin();
    }
			break;
		case 4:
			mainmenu();
			break;
		}
	}
	else
	{
		cout << "incorrect id or password";
	}
}
void stafflogin()
{
	int perinfo();
		int complain(string g);
		string  g,l;
		int booking(int x);
		int busroutes(int h);
		string contactdetails();
		int c, a,d,n;
		int id;
		int pass;
		cout << "Enter LOG IN ID:";cin >> id;
		cout << "Enter PASSWORD:";cin >> pass;
		if (id == 1234 && pass == 1234)
		{
			cout << "press 1 for bus routes" << endl;
			cout << "press 2 for booking seat" << endl;
			cout << "press 3 for contact details" << endl;
			cout << "press 4 for any complain" << endl;
			cin >> c;
			switch (c)
			{
			case 1:
				busroutes(d);
				cout << "please enter your route no. :";
				cin >> d;
				cout << "the bus route selected is:" << d << endl;
				cout <<"press 8 to go back to main menu";
				cin >>n;
				switch(n);
				case 8:
	mainmenu();
	int o;
    cin >>o;
    if (o==1)
	{
		studentlogin();
	}
	if(o==2)
	{
		stafflogin();	
    }
				break;
			case 2:
				booking(a);
				{
					cout << "enter your seat no :" << endl;
					cin >> a;
					cout << "the seat booked is :" << a << endl;
					perinfo();
					cout <<"press 5 to go back to main menu";
				cin >>n;
				switch(n);
				case 5:
	mainmenu();
	int o;
    cin >>o;
   if(o==1)
	{
		studentlogin();
}
	if(o==2)
	{
		stafflogin();
    }
				}
				break;
			case 3:
				contactdetails();
				cout <<"press 6 to go back to main menu";
				cin >>n;
				switch(n);
				case 6:
	mainmenu();
	int p;
    cin >>o;
    if(p==1)
	{
		studentlogin();
	}
	if(p==2)
	{
		stafflogin();
    }
				break;
			case 4:
				complain(g);
		         getline (cin,l);
				cout << "the complain you entered is :" << l << endl;
				cout <<"press 7 to go back to main menu";
				cin >>n;
				switch(n);
				case 7:
	mainmenu();
	int k;
    cin >>k;
    if(k==1)
	{
		studentlogin();
	}
	if (k==2)
	{
		stafflogin();
    }
				break;
			}
		}
	
}

void complain(string g)
{
	
	cout << "please enter your complain:";
	getline (cin,g);
}
void busroutes(int r)
{

	string busroute[5] = { "islamabad","rawalpindi","dha","bahria","rawat" };
	cout << "following are the bus routes" << endl;
	for (int i = 0; i<5; i++)
	{
		cout << "bus route   " << i << "  is  " << busroute[i] << endl;
		cout << "please enter your route no:";

	}
}
void perinfo()
{
	string name;
	cout << "please enter your name:";
	cin>>name;
	string cellno;
	cout << "enter your cell no:";
	cin>>cellno;
	cout <<"name of the person is :"<<name<<endl;
	cout <<"cell no. of the person is :"<<cellno<<endl;
	


}
void contactdetails()
{
	string name = "abdul samad";
	string cellno = "03001234567";
	cout << "name :   " << name << endl;
	cout << "contact no :  " << cellno << endl;


}
void booking(int a)
{
	cout << "buses have following seat no.s" << endl;
	for (int i = 1;i <= 50;i++)
	{
		cout << i << "      ";
	}
	cout << endl;
	
}
int main()
{
	int x;
	mainmenu();
	cin >> x;
	switch (x)
	{
	case 1:
		studentlogin();
		break;
	case 2:
		stafflogin();
		break;
    }
}


