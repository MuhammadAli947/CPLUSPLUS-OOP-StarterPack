#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class login
{
	protected :
		string username;
		string password;
	
	public :
    login()
	{
    }
	~login()
    {
    	
	}    
    	void setstaffname(string n)
		{
			username=n;
		}
		void setstaffpassword(string p)
	    {
		   	password=p;
		}
		bool Trylogin(int a)
		{
			cout<<"acb"<<endl;
			bool chk=false;
			if(a==1)
		{
			cout<<"please enter your name"<<endl;
			cin>>username;
			cout<<"please enter your password"<<endl;
			cin>>password;
				string name;
				string pass;
			ifstream out;
			out.open("student.txt");
				if(out.is_open())
				{
				cout<<"OKA"<<endl;
					string read;
					while(!out.eof())
					{
						out>>read;
						if(read==username)
						{
							cout<<"HELLO"<<endl;
				       		out>>pass;
				       		if(password==pass)
				       		{
				       			break;
				       			chk=true;
							   }
				        }
				        
  					}
				}
			
			out.close();
			return chk;
			
	     	}
		else if(a==2)
	     	{
	     		cout<<"please enter your name"<<endl;
			cin>>username;
			cout<<"please enter your password"<<endl;
			cin>>password;
			string name;
			string pass;
			ifstream out("staff.txt");
				if(out.is_open())
				{
			     	string read;
					while(!out.eof())
					{
						getline(out,read);
						if(read==username)
						{
							out>>pass;
				        if(password==pass)
				        {
						
				            chk=true;
				            break;
				        }
				        
  					}
				}
				
			}
	    	return chk;
			
	    	}
		}
	
		

	
};


class BMS
{
	private:
		login L;
	public:
		BMS(){}
		void MainMenu()
		{
			int x;
			bool r;
			cout<<"Press 1 for student"<<endl;
			cout<<"Press 2 for staff"<<endl;
			cin>>x;
			r=L.Trylogin(x);
			if(r==1)
			{
				cout<<"Login successful "<<endl;
			}
			else
			{
			
				cout<<"Login UN successful "<<endl;
			}
			}
					
		  
		 
	
	

};
int main()
{
	BMS b;
	b.MainMenu();
	
	
}
