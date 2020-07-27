
#include<iostream>
using namespace std;
int main()
{
	int a[50],n=0,temp;
	cout<<"Enter the limit";
	cin>>n;
	for(int i=0;i<n;i++)
	{
        cout<<"enter numbers";
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
	cout<<"after sorting array is :";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}

