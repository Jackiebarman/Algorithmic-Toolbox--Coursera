// #include<bits/stdc++.h>
// using namespace std;
// int change(int arr[],int sum,int n)
// {
// 	int t[n+1][sum+1];
// 	memset(t,-1,sizeof(t));
// 	for(int i=0;i<n+1;i++)
// 	{
// 		for(int j=0;j<sum+1;j++)
// 		{
// 			if(i==0)
// 			{
// 				t[i][j]=0;
// 			}
// 			if(j==0)
// 			{
// 				t[i][j]=1;
// 			}
// 		}
// 	}
// 	for(int i=1;i<n+1;i++)
// 	{
// 		for(int j=1;j<sum+1;j++)
// 		{
// 			if(arr[i-1]<=j)
// 			{
// 				t[i][j]=t[i-1][j]+t[i][j-arr[i-1]];
// 			}
// 			else
// 			{
// 				t[i][j]=t[i-1][j];
// 			}
// 		}
// 	}
// 	return t[n][sum];
// }
// int main()
// {
// 	int sum,n;
// 	cin>>sum;
// 	n=3;
// 	int arr[n];
// 	arr[0]=1;
// 	arr[1]=8;
// 	arr[2]=20;
// 	// for(int i=0;i<n;i++)
// 	// {
// 	// 	cin>>arr[i];
// 	// }
// 	int ans=change(arr,sum,n);
// 	cout<<ans<<endl;
// }
#include <iostream>

int get_change(int m)
{

  //write your code here
  int coins[] = {1, 3, 4};
  int min_num_coins[m + 1];
  min_num_coins[0] = 0;
  int numCoins = 0;
  for (int i = 1; i <= m; i++)
  {
    min_num_coins[i] = 9999999;
    for (int j = 0; j < 3; j++)
    {
      if (i >= coins[j])
      {
        numCoins = min_num_coins[i - coins[j]] + 1;
        if (numCoins < min_num_coins[i])
        {
          min_num_coins[i] = numCoins;
        }
      }
    }
  }
  return min_num_coins[m];
}

int main()
{
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}