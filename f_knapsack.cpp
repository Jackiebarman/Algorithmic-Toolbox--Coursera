#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, SizeOfKnapSack; 
	cin >> n >> SizeOfKnapSack;
	vector<pair<int, int>> myValue_Wigth(n); 
	vector<pair<double,int>> ValuePerUnit(n); 
	for (int i = 0; i < n; i++) {
		cin >> myValue_Wigth[i].first >> myValue_Wigth[i].second;
		ValuePerUnit[i].first = 1.0 * myValue_Wigth[i].first / myValue_Wigth[i].second; 
		ValuePerUnit[i].second = myValue_Wigth[i].second;
	}
	sort(ValuePerUnit.begin(), ValuePerUnit.end(),greater<pair<double,int>>());
	double Res = 0;
	for (int i = 0; i < ValuePerUnit.size() && SizeOfKnapSack>0; i++) {
		Res += min(ValuePerUnit[i].second, SizeOfKnapSack)*ValuePerUnit[i].first;
		SizeOfKnapSack -= min(ValuePerUnit[i].second, SizeOfKnapSack); 
	}
	cout << fixed << setprecision(4) << Res << endl;
}