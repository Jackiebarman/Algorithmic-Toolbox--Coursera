////////////////////////////////Radhe Radhe /////////////////////////////////////
#include<bits/stdc++.h>
using namespace std;
/////////////////////////////////////////////////////Finding the actual element is easy using moore voting Algorithm//////
////////////////////////////Just trying to find if majority element exists or not using map////////////////////
bool ContainMajority(int Arr[], int n) {
	map<int, int> Freq; 
	for (size_t i = 0; i < n; i++)
		Freq[Arr[i]]++;

	for (int i = 0; i <n; i++)
		if (Freq[Arr[i]] > (n / 2))
			return true; 

	return false;
}
int main() {
	int n;
	cin >> n; 
    int arr[n];
	// vector<int> Arr(n); 
	for (int i = 0; i < n; i++)
	  cin >> arr[i];

	cout << ContainMajority(arr, n) << endl;
}