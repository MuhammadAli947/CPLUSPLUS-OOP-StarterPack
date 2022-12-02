#include<iostream>
using namespace std;
class computation;
class number
{
	private :
		float a,b,c,mean;
	public :
			friend void sums(computation c,number n);
		void seta()
		{
			cout<<"please enter value of A"<<endl;
			cin>>a;
		}
		void setb()
		{
			cout<<"please enter value of B"<<endl;
			cin>>b;
		}
		void setc()
		{
			cout<<"please enter value of c"<<endl;
		    cin>>c;
		}
		friend void display(number n);
		friend void mean(number c);
			
		
		
		
		
		
};
class computation 
{
	private :
	float sum;
	float difference;	
	public :
		friend void sums(computation c,number n);
		friend void differnces(computation c,number n);
		
		
		
		
		
};
void display(number n)
{
	cout<<"The value of A :"<<n.a<<endl;
	cout<<"The value of B :"<<n.b<<endl;
	cout<<"The value of C :"<<n.c<<endl;
}
void sums(computation c,number n)
{
  c.sum=n.a*n.a+n.b*n.b+n.c*n.c+2*n.a*n.b+2*n.b*n.c+2*n.a*n.c;
  cout<<"(a+b+c)^2 ="<<c.sum<<endl;
}
void differences(computation c,number n)
{
    c.difference=n.a*n.a+n.b*n.b+n.c*n.c-2*n.a*n.b-2*n.b*n.c-2*n.a*n.c;
    cout<<"(a-b-c)^2 ="<<n.difference<<endl;
}
void mean(number n)
{
	n.mean=(n.a+n.b+n.c)/3;
	cout<<"Mean is :"<<n.mean<<endl<
	
}
int main()
{
	number n;
	computation c;
	n.seta();
	n.setb();
	n.setc();
	display();
	cout<<endl;
	sums(c,n);
	cout<<endl;
    differences(c,n); 
	cout<<endl;
    mean();
   
   
	
	
	
	
	
	
	
	
}













