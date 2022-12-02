#include<string>
#include<iostream>
using namespace std;
class company
{
	protected :
		string companyname;
		int companyid;
	public :
	company()
    {
	}
	company(string n,int i)
	{
	  companyname=n;
	  companyid=i;	
	}	
	void setcompanyname()
	{
		cout<<"please enter the company name"<<endl;
		cin>>companyname;
	}
	void setcompanyid()
	{
		cout<<"please enter the company id"<<endl;
		cin>>companyid;
	}
	string getcompanyname()
	{
		return companyname;
	}
	int getcompanyid()
	{
		return companyid;
	}
};
class mobile :public company
{
	private :
		string mobilePhoneName;
		int mobileid;
	public :
		mobile()
		{
		}
		~mobile()
		{
		}
		void setmobilename()
		{
			cout<<"please enter mobile name"<<endl;
			cin>>mobilePhoneName;
		}
		void setmobileid()
		{
			cout<<"please enter mobile id"<<endl;
			cin>>mobileid;
		}
		string getmobilename()
		{
			return mobilePhoneName;
		}
		int getmobileid()
		{
			return mobileid;
		}
		void display()
		{
			cout<<"name of commapmny is "<<companyname<<endl;
			cout<<"Company id is :"<<companyid<<endl;
			cout<<"Mobile name is :"<<mobilePhoneName<<endl;
			cout<<"Mobile id is :"<<mobileid<<endl;
		}
};
class laptop : public company
{
	private :
		string laptopname;
	public :
		laptop()
		{
			
		}
		void setlaptopname()
		{
			cout<<"please enter the name of laptop"<<endl;
			cin>>laptopname;
		}
		void display()
		{
			cout<<"name of commapmny is "<<companyname<<endl;
			cout<<"Company id is :"<<companyid<<endl;
			cout<<"Laptop name is :"<<laptopname<<endl;
		}
};
int main()
{
	mobile m;
	laptop l;
	m.setcompanyname();
	m.setcompanyid();
	m.setmobilename();
	m.setmobileid();
    cout<<"details of base class and mobile using object of derived class"<<endl;
	m.display();
	cout<<"*********************************************************************************"<<endl;
	l.setcompanyname();
    l.setcompanyid();
	l.setlaptopname();
	cout<<"details of base and derived class using derived class object of laptop"<<endl;
	l.display(); 
}
