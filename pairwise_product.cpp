#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,ind;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	long long int ans=0,maxi1=0,maxi2=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>maxi1)
		{
			maxi1=arr[i];
			ind=i;
		}
	}
	    for(int j=0;j<n;j++)
		{
			if(arr[j]>maxi2 && j!=ind)
			{
				maxi2=arr[j];
			}
		}
		ans=maxi1*maxi2;
	cout<<ans<<endl;
}