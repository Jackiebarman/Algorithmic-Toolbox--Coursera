#include<bits/stdc++.h>
using namespace std;
int b_search(vector<int> v,int s,int e,int val)
{
	int mid=s+(e-s)/2;
	if(v[mid]==val)
		return mid;
	else if(v[mid]<val)
	{
		return b_search(v,mid+1,e,val);
	}
	else
	{
		return b_search(v,s,mid-1,val);
	}
}
int main()
{
	int n,m;
	cin>>n;
	int arr[n];
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		v.push_back(arr[i]);
	}
	cin>>m;
	int search[m];
	for(int i=0;i<m;i++)
	{
		cin>>search[i];
	}
	int k=0;
	while(m)
	{
		if(binary_search(v.begin(),v.end(),search[k])==0)
		{
			cout<<"-1"<<" ";
		}
		else
		{
		    cout<<b_search(v,0,n-1,search[k])<<" ";
	    }
		//cout<<
		k++;
		m--;
	}
	cout<<endl;
	//cout<<binary_search(v.begin(),v.end(),search_ele)<<endl;

}