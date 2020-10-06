#include<bits/stdc++.h>
using namespace std;
int lcs(vector<int> s1,int s2[],int n,int m)
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
vector<int> findstr(int s1[],int s2[],int n,int m,int &jk)
{
	vector<int> res;
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
	jk=t[n][m];
	int i=n;
	int j=m;
    while(i && j)
    {
    	if(t[i][j]==1+t[i-1][j-1])
    	{
          res.push_back(s1[i-1]);
          i--;
          j--;
        }
        else
        {
           if(t[i][j]==t[i-1][j])
           {
           	i--;
           }
           else
           {
           	j--;
           }
        }
    }
    reverse(res.begin(),res.end());

	return res;
}
int main()
{
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
	int p;
	cin>>p;
	int s3[p];
	for(int i=0;i<p;i++)
	{
		cin>>s3[i];
	}
	int jk=0,jk1=0,jk2=0;
	vector<int> s1s2= findstr(s1,s2,n,m,jk);
	vector<int> s2s3= findstr(s2,s3,m,p,jk1);
	vector<int> s1s3= findstr(s1,s3,n,p,jk2);

	int ans1=lcs(s1s2,s3,jk,p);
	int ans2=lcs(s2s3,s1,jk1,n);
	int ans3=lcs(s1s3,s2,jk2,m);
    int ans=max(ans1,max(ans2,ans3));
	cout<<ans<<endl;
}