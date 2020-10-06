#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	long long int tmp=0;
	cin>>n;
	long long int arr[n];
	long long int sum=1;
	arr[0]=0;
	if(n==0)
	{
		cout<<"0"<<endl;
		exit(0);
	}
	arr[1]=1;
	if(n==1)
	{
		cout<<"1"<<endl;
		exit(0);
	}
	for(int i=2;i<=n;i++)
	{
      arr[i]=arr[i-1]+arr[i-2];
      //sum+=arr[i];
      tmp+=(arr[i]%10);
	}
	cout<<tmp%10<<endl;
}