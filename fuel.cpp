#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll minfill(ll x[],ll n,ll l)
{
	int nr,cr,lr;
	nr=0;
	cr=0;
	while(cr<=n)
	{
      lr=cr;
      while(cr<=n && x[cr+1]-x[lr]<=l)
      {
      	cr+=1;
      }
      if(cr==lr)
      {
      	return -1;
      }
      if(cr<=n)
      {
      	nr+=1;
      }
	}
	return nr;
}
int main()
{
	ll n,l,res;
	cin>>n>>l;
	ll x[n];
	for(ll i=0;i<n;i++)
	{
		cin>>x[i];
	}
    res=minfill(x,n,l); 
    cout<<res<<endl;
}