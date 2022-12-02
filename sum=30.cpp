#include<iostream>
using namespace std;
int main()
{
	int arr[8]={1,3,5,7,9,11,13,15};
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			for(int k=0;k<8;k++)
			{
				if(arr[i]+arr[j]+arr[k]==30)
				{
					cout<<arr[i]<<" + "<<arr[j]<<" + "<<arr[k]<<" :30"<<endl;
				}
			}
		}
	}
	return 0;
}
