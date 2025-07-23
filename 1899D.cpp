#include<iostream>
#include<map>
#include<vector>
using namespace std;
using ll = long long;
 
void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int& x : a) cin >> x;

	ll ans = 0;
	map<int, int> mp;
	for (int i = 0; i < n; i++) {
		ans += mp[a[i]];
		if (a[i] == 1) ans += mp[2];
		else if (a[i] == 2) ans += mp[1];
		mp[a[i]]++;
	}
	cout << ans << "\n";
}
 
signed main() {
	int t;
	cin >> t;
	while (t--) solve();
}