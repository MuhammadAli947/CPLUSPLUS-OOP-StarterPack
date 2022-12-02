#include<iostream>
using namespace std;
class shape
{
	protected :
		float length;
		float area;
	public :
		shape()
		{
			
		}
   ~shape()
   {
	
   }   
   void setlength()
   {
   	cout<<"please enter length"<<endl;
   	cin>>length;
   }
   void getlength()
   {
   	cout<<length<<endl;;
   }
  /* void getarea()
   {
   	cout<<area<<endl;
   }*/
   
   
   
};
class square : public shape
{
	private :
		float area;
	public :
		square()
		{
			
		}
		~square()
		{
			
		}
		void calarea()
		{
			area=length*length;
		}
		void getarea()
		{
			cout<<"area :"<<area<<endl;
		}
		
};
class rectangle : public shape
{
	private :
		float area;
		float width;
	public :
		rectangle()
		{
			
		}
		~rectangle()
		{
			
		}
		void setwidth()
		{
			cout<<"please enter the width"<<endl;
			cin>>width;
		}
		void calarea()
		{
			area=length*width;
		}
		void getwidth()
		{
		cout<< width;
		}
		void getarea()
		{
			cout<< area;
		}
		
};
class triangle : public shape
{
	private :
		float area;
		float base;
		public :
	triangle()
	{
		
	}
	~triangle()
	{
		
	}
	void setbase()
	{
		cout<<"please enter base value"<<endl;
		cin>>base;
	}
	void calarea()
	{
		area=0.5*(base*length);
	}
	void getarea()
	{
		cout<< area;
	}
};
int main()
{
	triangle t;
	rectangle r;
	square s;
	cout<<"for rectangle "<<endl;
	r.setlength();
	r.setwidth();
	r.calarea();
	r.getarea();
	cout<<endl;
	cout<<"for triangle "<<endl;
	t.setlength();
	t.setbase();
	t.calarea();
	t.getarea();
	cout<<endl;
	cout<<" for square "<<endl;
	s.setlength();
	s.calarea();
	s.getarea();
	
}






































