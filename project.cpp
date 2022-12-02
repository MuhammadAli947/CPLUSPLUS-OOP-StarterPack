#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class BMS;
class login
{
protected:
	string username;
	string password;

public:
	login()
	{
	}
	~login()
	{

	}
	void setstaffname(string n)
	{
		username = n;
	}
	void setstaffpassword(string p)
	{
		password = p;
	}
	bool Trylogin(int a)
	{
		bool chk = false;
		if (a == 1)
		{
			cout << "please enter your name" << endl;
			cin >> username;
			cout << "please enter your password" << endl;
			cin >> password;
			string name;
			string pass;
			ifstream out("student.txt");
			if (out.is_open())
			{
				cout << "OKA" << endl;
				string read;
				while (!out.eof())
				{
					out >> read;
					if (read == username)
					{
						out >> pass;
						if (password == pass)
						{

							chk = true;
							break;
						}
					}

				}
			}

			out.close();
			return chk;


		}
		else if (a == 2)
		{
			cout << "please enter your name" << endl;
			cin >> username;
			cout << "please enter your password" << endl;
			cin >> password;
			string name;
			string pass;
			ifstream out("staff.txt");
			if (out.is_open())
			{
				string read;
				while (!out.eof())
				{
					out >> read;
					if (read == username)
					{
						out >> pass;
						if (password == pass)
						{

							chk = true;
							break;
						}

					}
				}

			}
			return chk;

		}
	}


};
class student
{
private:
	string regno;
public:
	student()
	{

	}
	~student()
	{

	}
	void setregno(string r)
	{
		regno = r;
	}

};
class faculty
{
private:
	string id;
	string complain;
public:
	faculty()
	{

	}
	~faculty()
	{

	}
	void setid(string i)
	{
		id = i;
	}
	void setcomplain(string c)
	{
		complain = c;
	}
	string getid()
	{
		return id;
	}
	string getcomplain()
	{
		return complain;
	}

};
class BMS
{
private:
	student *s;             // aggregation of student with bus class
	faculty *f;             // aggregation of faculty with bus class
	string busroute;
	login L;
	int buses[5];
	string busroutes[5];
	int busseats[50] = { 0 };
	int seat;
public:
	BMS()
	{
		f = new faculty();
		s = new student();
	}
	void setbusroutes()
	{
		cout << " bus No.1 : ISlAMABAD " << endl;
		cout << " bus No.2 : Rawalpindi " << endl;
		cout << " bus No.3 : Dha " << endl;
		cout << " bus No.4 : Rawat " << endl;
		cout << " bus No.5 : Westrage " << endl;
		cout << "please enter your bus route no" << endl;
		cin >> busroute;
	}
	void setbusseats()
	{
		cout << "Followinng are the buses seat numbers " << endl;
		for (int i = 0;i<50;i++)
		{
			cout << i + 1 << "    ";
		}
		cout << endl;
		cout << "please select your seat no" << endl;
		cin >> seat;
		if (busseats[seat] == 1)
		{
			cout << "seat is already booked re enter your seat no. :" << endl;
			setbusseats();
		}
		else
		{
			busseats[seat] = { 1 };
		}

	}
	void contactdetails()
	{
		cout << "Office contact details are given below :\n" << endl;
		cout << "                                          Office contact No. : 051-12345678\n" << endl;
		cout << "Booking site NO. : 0300-1234567\n" << endl;
		cout << "                                          address : E-block ground floor office no . 01\n " << endl;
	}
	void write()
	{
		ofstream out;
		out.open("booking.txt", ios::app);
		if (out.is_open())
		{
			out << "Bus no is :  "<<busroute << endl;
			out << "Bus route is : " <<busroute << endl;
			out << "Seat no selected is : "<<seat << endl;
		}
		out.close();

	}
	void read()
	{
		string d="           ******************* Booking details are *****************";
		cout << "\n\n" << endl;
		ifstream in("booking.txt");
		if (in.is_open())
		{
			string read;
		/*	for(int i=0;i<d.length();i++)
			{
				cout<<d[i];
				_sleep(100);
			}*/
			while (!in.eof())
			{
				in >> read;
			cout<<read;
			cout<<"  "<<endl;
			}
			in.close();

		}
	}
	/*	void checkbooking()
	{
	cout<<"booking details are given below"<<endl;
	cout<<"Bus no selected is "<<busroute<<endl;
	cout<<"Seat no selected is "<<seat<<endl;

	}*/
	void MainMenu()
	{
		int x;
		bool r;
	/*	string main = "        ******************   Welcome to Bus Management System   *****************";
		cout << "\n\n" << endl;
		for (int i = 0;i<main.length();i++)
		{
			cout << main[i];
			_sleep(100);
		}
		cout << "\n\n" << endl;
		string wel="           ********************   welcome to student site   ************************";
		cout << "\n\n" << endl;
		for(int i=0;i<wel.length();i++)
		{
		cout<<wel[i];
		_sleep(100);
		}*/
		cout << "\n\n" << endl;
		cout << "Press 1 for student" << endl;
		cout << "Press 2 for staff" << endl;
		cin >> x;
		r = L.Trylogin(x);
		if (r == 1)
		{
			cout << " Login successful " << endl;
			if (x == 1)
			{
				int b;
				cout << "Please choose your option " << endl;
				cout << "press 1  for booking " << endl;
				cout << "press 2 for of office contact details" << endl;
				cin >> b;
				switch (b)
				{
				case 1:
					setbusroutes();
					setbusseats();
					MainMenu();
					break;
				case 2:
					contactdetails();
					MainMenu();
					break;
				default:
					cout << "Invalid Input....enter Again" << endl;
					MainMenu();



				}
				write();

			}
			else if (x == 2)
			{
				string i;
				int n;
				string c;
			/*	string b= "        ********************   welcome to faculty site   ************************ " ;
				for (int i = 0;i<b.length();i++)
				{
					cout << b[i];
					_sleep(100);
				}*/
				cout << "Please enter staff id " << endl;
				cin >> i;
				f->setid(i);
				cout << "Please choose your option " << endl;
				cout << "press 1 for checking of bookings " << endl;
				cout << "press 2 for entering your complain " << endl;
				cin >> n;
				switch (n)
				{
				case 1:
					read();
					break;
				case 2:
					cout << "Enter your complain" << endl;
					cin >> c;
					f->setcomplain(c);

				}

			}
		}

		else
		{

			cout << "Login UN successful " << endl;
			system("cls");
			MainMenu();
		}
	}




};
int main()
{
	BMS b;
	b.MainMenu();


}
