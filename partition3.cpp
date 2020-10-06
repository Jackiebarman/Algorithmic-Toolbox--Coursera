#include <bits/stdc++.h>
// #include <vector>

// using std::vector;
using namespace std;
bool subsetsum(int W, vector<int> &w) {
  //write your code here
  int n=w.size();
  bool t[n+1][W+1];
   memset(t,false,sizeof(t));
   for(int i=0;i<n+1;i++)
   {
    for(int j=0;j<W+1;j++)
    {
      if(i==0)//|| j==0)
      {
        t[i][j]=false;
      }
      if(j==0)
      {
      	t[i][j]=true;
      }
    }
   }
   for(int i=1;i<n+1;i++)
   {
    for(int j=1;j<W+1;j++)
    {
     if(w[i-1]<=j)
     {
      t[i][j]=t[i-1][j] || t[i-1][j-w[i-1]];
     }
     else
     {
      t[i][j]=t[i-1][j];
     }
    }
   }
   return t[n][W];
  // int current_weight = 0;
  // for (size_t i = 0; i < w.size(); ++i) {
  //   if (current_weight + w[i] <= W) {
  //     current_weight += w[i];
  //   }
  // }
  // return current_weight;
}
int partition3(vector<int> &A) {
  //write your code here
	int n=A.size();
	long long sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=A[i];
	}
	if(sum%3!=0)
	{
		return 0;
	}
	if(subsetsum(sum/3,A))
	{
		return 1;
       //
	}
	else
	{
		return 0;
	}
	return 1;

  //return 0;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> A(n);
  for (size_t i = 0; i < A.size(); ++i) {
    std::cin >> A[i];
  }
  std::cout << partition3(A) << '\n';
}