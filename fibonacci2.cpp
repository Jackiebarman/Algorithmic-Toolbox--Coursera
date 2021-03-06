#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 
  

ll fib(ll f[], ll n) 
{ 
    f[0] = 0; 
    f[1] = 1; 
    for (ll i = 2; i <= n; i++) 
        f[i] = (f[i - 1] + f[i - 2]) % 10; 
  
    return f[n]; 
} 
  
int findLastDigit(int n) 
{ 
    ll f[60] = {0}; 
  
    // Precomputing units digit of   
    // first 60 Fibonacci numbers 
    fib(f, 60); 
  
    return f[n % 60]; 
} 
int main()
{
	int n;
	long long int tmp=0;
	cin>>n;
	tmp=findLastDigit(n);
	// long long int arr[n];
	// arr[0]=0;
	// arr[1]=1;
	// for(int i=2;i<=n;i++)
	// {
 //      arr[i]=arr[i-1]+arr[i-2];
 //      //tmp+=arr[i]%10;
	// }
	cout<<tmp<<endl;
}
//0 1 1 2 3 5 8