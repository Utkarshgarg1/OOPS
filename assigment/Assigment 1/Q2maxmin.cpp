
#include<iostream>
using namespace std;
int main()
{
	int a[50],max,min,n=0,temp;
	cout<<"Enter the array lenth"<<"\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cout<<"enter number";
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	min=a[1];
	max=a[n-2];
	cout<<"The second maximum no. is"<<max<<"\n";
	cout<<"The second minimum no. is"<<min;

	return 0;
	}
