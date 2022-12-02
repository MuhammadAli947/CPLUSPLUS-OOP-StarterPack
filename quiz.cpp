#include<iostream>
#include<string>
using namespace std;
class employee
{
	protected :
		string name;
		string no;
		string hiredate;
	public :
	employee()
	{
		cout<<"EMPOLYEE constructor called"<<endl;
		name="muhammad ali";
		no="03001234567";
		hiredate="23-05-2016";
	}
	void setanme()
	{
		cout<<"please enter your name"<<endl;
		cin>>name;
	}
	void setno()
	{
		cout<<"please enter phone no"<<endl;
		cin>>no;
	}
	void setdate()
	{
		cout<<"please enter the hire date"<<endl;
		cin>>hiredate;
	}
	string getname()
	{
		return name;
	}
	string getno()
	{
		return no;
	}
	string gethiredate()
	{
		return hiredate;
	}
	void display()
	{
		cout<<"name is :"<<name;
		cout<<"no is :"<<no<<endl;
		cout<<"date is :"<<hiredate<<endl;
	}
};
class productionworker:public employee
{
	private :
		int shift;
		double rate;
	public :
	productionworker()
	{
		
	}	
	void setshift()
	{
		cout<<"please enter 1 for morning 2 for evening and 0 for leave "<<endl;
		cin>>shift;
		
	}
	void setrate()
    {
    	cout<<"please enter the rate per hour"<<endl;
    	cin>>rate;
	}
    void getshift()
    {
    	if(shift==1)
		{
			cout<<"shift is of morning"<<endl;
		}
		else if(shift==2)
		{
			cout<<"shift is of evening"<<endl;
		}
		else if(shift==0)
		{
			cout<<"person is on leave"<<endl;
		}
	}
	double getrate()
	{
		return rate;
	}
    	
};
class dutywork : public productionworker,public employee
{
	private :
		int noofworkers;
		int noofworkers2;
	public :
		void setnoofworkers()
		{
			cout<<"please enter no of workers in morning shift"<<endl;
			cin>>noofworkers;
		}
		void setnoofworkers2()
		{
			cout<<"please enter the no of workers in evening shhift"<<endl;
			cin>>noofworkers2;
		}
		int getnoofworkers()
		{
		   return noofworkers;
		}
        	int getnoofworkers2()
		{
		   return noofworkers2;
		}		
	 dutywork()
	 {
	 	
	 }
	 
		
};
int main()
{
	int a;
	dutywork d;
	d.setnoofworkers();
	d.setnoofworkers2();
    productionworker p;
    p.setanme();
    p.setdate();
    p.setno();
    p.setrate();
    p.setshift();
    cout<<"press 1 for morning shift details"<<endl;
    cout<<"press 2 for evening shift details"<<endl;
    cin>>a;
    if(a==1)
    {
    	p.display();
    	p.getrate();
    	p.getshift();
    	d.getnoofworkers();
	}
	else if(a==2)
	{
		p.display();
    	p.getrate();
    	p.getshift();
    	d.getnoofworkers2();
	}
}

