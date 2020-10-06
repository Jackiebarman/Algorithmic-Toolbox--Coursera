#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int fun(int m)
{
  if(m==10 || m==5 || m==1)
	{
		return 1;
	}
	int cnt=0;
	while(m!=0)
	{
		if(m>=10)
		{
			m-=10;
			cnt++;
			continue;
		}
		if(m<10 && m>=5)
		{
			m-=5;
			cnt++;
			continue;
		}
		if(m<5 && m>=1)
		{
			m-=1;
			cnt++;
			continue;
		}
	}
	return cnt;
}
int main()
{
	int m;
	cin>>m;
	int ans=fun(m);
	cout<<ans<<endl;
	
}