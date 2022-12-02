#include<iostream>
using namespace std;
class Matrix
{
private:
	int arr1[3][3];
	int arr2[3][3];
	int sum[3][3];
public:
	Matrix() 
	{
	}
	void getdata()
	{
		for (int i = 0; i < 3; i++)
		{
		
			for (int j = 0; j < 3; j++)
			{
				
				cin >> arr1[i][j];
			}
			cout << endl;
		}
		cout << "second array" << endl;	
		for (int i = 0; i < 3; i++)
		{

			for (int j = 0; j < 3; j++)
			{

				cin >> arr2[i][j];
			}
			cout << endl;
		}
	}
	
	friend void func(Matrix);

};
void func(Matrix b)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			b.sum[i][j] = b.arr1[i][j] + b.arr2[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << b.sum[i][j] << "  ";
		}
		cout << endl;
	}
	
}
int main()
{
	Matrix m;
	m.getdata();
	cout << "sum is" <<endl;
	func(m);
	
}

