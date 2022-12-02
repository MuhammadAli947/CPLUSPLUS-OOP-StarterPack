#include<iostream>
#include<string>
using namespace std;
class person
{
	protected :
		string name;
		int age;
		string regno;
		int pay;
		string cellno;
		public :
			person()
			{
				
			}
			~person()
			{
				
			}
			void setname()
			{
				cout<<"please enter name"<<endl;
				cin>>name;
			}
			void setage()
			{
				cout<<"please enter your age"<<endl;
				cin>>age;
			}
			void setregno()
			{
				cout<<"please enter your reg no "<<endl;
				cin>>regno;
			}
			void setpay()
			{
				cout<<"please enter your age"<<endl;
				cin>>age;
			}
			void setcellno()
			{
				cout<<"please enter your cell no"<<endl;
				cin>>cellno;
			}
	   virtual void display()=0;
	    string getname()
	    {
	       return name;
		}
		string getregno()
		{
			return regno;
		}
		int getage()
		{
			return age;
		}
		int getpay()
		{
			return pay;
		}
		string getcellno()
		{
			return cellno;
		}
		
};
class employee : public person
{
	public :
		employee(string n,int a,int p, string c)
		{
			name=n;
		    age=a;
		    pay=p;
		    cellno=c;
		}
		employee()
		{
			cout<<"employee info"<<endl;
		}
		~employee()
		{
			
		}
			void display()
		{
			cout<<"Name is :"<<name<<endl;
			cout<<"cell No :"<<cellno<<endl;
			cout<<"Age is :"<<age<<endl;
			cout<<"Pay is :"<<pay<<endl;
		}
				
		
		
};
class student : public person
{
	public :
		student(string n,string r,string c,int a)
		{
			name=n;
			regno=r;
			cellno=c;
			age=a;
		}
		student()
		{
			cout<<"Student information"<<endl;
		}
		~student()
		{
			
		}
		void display()
		{
			cout<<"Name is :"<<name<<endl;
			cout<<"Reg no is :"<<regno<<endl;
			cout<<"cell No :"<<cellno<<endl;
			cout<<"Age is :"<<age<<endl;
		}
};
void information(person *p)
{
   p=new employee();
   p->display();
   p=new student();
   p->display();
}
int main()
{
	employee e[5];
	student s[5];
	for(int i=0;i<5;i++)
	{
		e[i].setname();
		e[i].setage();
		e[i].setcellno();
		e[i].setpay();
	}
	for(int i=0;i<5;i++)
	{
		s[i].setname();
		s[i].setage();
		s[i].setcellno();
		s[i].setregno();
	}
	void information();
}














