#include<iostream>
using namespace std;
class length
{
	public :
	float meters;
	float inches;
	public :
		length(float m,float i)
		{
			meters=m;
			inches=i;
		}
		~length()
		{
			
		}
	
};
 void distance(length l,length l2)
	{
			float newmeters=l.meters+l2.meters;
			float newinches=l.inches+l2.inches;
			if(l.inches>=39.37)
			{
				newmeters=newmeters+1;
				newinches=newinches-39.37;
			}
			cout<<"Meters :"<<newmeters<<endl;
			cout<<"Inches :"<<newinches<<endl;
			
		}
int main()
{
	length l(5,42);
	length l2(3,45);
	distance(l,l2);
	
}
