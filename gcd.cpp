#include<bits/stdc++.h>
using namespace std;
int gcd(int n,int m)
{
	if(n>m)
		swap(n,m);
	if(n==0)
		return m;
	return gcd(n,m%n);
}
int main()
{
	int n,m;
	cin>>n>>m;
	int g=gcd(n,m);
	cout<<g<<endl;
}