#include<bits/stdc++.h>
using namespace std;
int lcs(int s1[],int s2[],int n,int m)
{
	//int n=s1.size();
	//int m=s2.size();
	int t[n+1][m+1];
	memset(t,-1,sizeof(t));
	for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<m+1;j++)
		{
			if(i==0 || j==0)
			{
				t[i][j]=0;
			}
		}
	}
	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<m+1;j++)
		{
			if(s1[i-1]==s2[j-1])
			{
				t[i][j]=t[i-1][j-1]+1;
			}
			else
			{
				t[i][j]=max(t[i][j-1],t[i-1][j]);
			}
		}
	}
	return t[n][m];

}
int main()
{
	//string s1,s2;
	int n;
	cin>>n;
	int s1[n];
	for(int i=0;i<n;i++)
	{
		cin>>s1[i];
	}
	int m;
	cin>>m;
	int s2[m];
	for(int i=0;i<m;i++)
	{
		cin>>s2[i];
	}

	//cin>>s1>>s2;
	int ans=lcs(s1,s2,n,m);
	cout<<ans<<endl;
}