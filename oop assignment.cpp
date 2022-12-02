#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class shape
{
	protected :
		string color;
	public :
		shape()
		{
			cout<<"**********************************Muhammad ali***********************************************"<<endl;
		}
		shape(string c)
		{
		    color=c;	
		}
		~shape()
		{
			
		}
		void setcolor(string c)
		{
			color=c;
		}
		void getcolor()
		{
			cout<<"color is :"<<color<<endl;
		}
};
class circle : public shape
{
	private :
		float radius;
	    float pie;
		float area;
		public :
			circle()
			{
				pie=3.14;
			}
			circle(float r,string c)
			{
				color=c;
				radius=r;
			}
			void setradius(float r)
			{
				radius=r;
			}
			void read()
			{
				ifstream in("Circle.txt");
				if(in.is_open())
				{
					string read;
					float read2;
					while(!in.eof())
					{
					    in>>read;
						if(read=="color")
						{
						setcolor(read);
						in>>read2;
						setradius(read2);
					}
					}
				}
				in.close();
			}
			void calarea()
			{
				area=pie*radius*radius;
			}
			float getradius()
			{
				return radius;
			}
			float getarea()
			{
				return area;
			}
				void display()
			{
				cout<<"color of circle is :"<<color<<endl;
				cout<<"Radius of circle is :"<<getradius()<<endl;
				cout<<"Area of Circle is :"<<getarea()<<endl;
			}
		
		
};
class rectangle  : public shape
{
	private :
		float width;
		float length;
		float area;
	public :
		rectangle()
		{
			
		}
	rectangle(float l,float w)
	{
		length=l;
		width=w;
	}
	~rectangle()
	{
		
	}
	void setwidth(float w)
	{
		width=w;
	}
	void setlength(float l)
	{
		length=l;
	}
	float getlength()
	{
		return length;
    }
	float getwidth()
	{
		return width;
	}
	void read()
	{
		ifstream in("Rectangle.txt");
		if(in.is_open());
		{
			string read;
			float read1;
			float read2;
			while(!in.eof())
			{
				
				in>>read;
			    if(read=="color");
			    {
				setcolor(read);
				in>>read1;
				cout<<read;
				setwidth(read1);
				in>>read2;
			    setlength(read2);
			}
			}
		}
		in.close();
	}
	void calarea()
	{
	area=length*width;
	}
	float getarea()
	{
	return area;
	}
	void display()
	{
		cout<<"color of rctangle is :"<<color<<endl;
		cout<<"length of rectangle is :"<<length<<endl;
		cout<<"Width of rectangle is :"<<width<<endl;
		cout<<"Area of rectangle is :"<<area<<endl;
	}
	
};
int main()
{
    rectangle r;
    circle c;
	c.read();
	c.calarea();
	c.display();
	r.read();
	r.calarea();
	r.display();*/
}

	
	
	
	
	

