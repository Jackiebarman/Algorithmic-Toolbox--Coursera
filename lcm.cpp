#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int n,long long int m)
{
	if(n>m)
		swap(n,m);
	if(n==0)
		return m;
	return gcd(n,m%n);
}
int main()
{
	long long int n,m;
	cin>>n>>m;
	long long int g=gcd(n,m);
	long long int x,y;
	long long int z;
	x=m/g;
	y=n/g;
	z=x*y*g;
	cout<<z<<endl;
}