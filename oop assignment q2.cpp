#include<Iostream>
#include<string>
using namespace std;
class tyre
{
	private :
		int tyres;
	public :
	    tyre()
	    {
	    	
		}
		~tyre()
		{
			
		}
		
};
class car
{
	private :
		string cars;
		tyre *t;
	public :
		car()
		{
			
		}
		~car()
		{
			
		}
		void setcars(string c)
		{
		
			cars=c;
		}
		void getcars()
		{
			cout<<"car name :"<< cars;
		}
		void *tyres(int t)
		{
			
			tyres=t;
		}
		void *gettyres()
		{
			cout<<"no of tyres :"<< t->tyres;
		}
		
		
};
int main()
{
	car c;
	tyre t;
	c.setcars("honda");
	t.settyres(5);
	c.getcars();
	cout<<endl;
	t.gettyres();
	
	
}
