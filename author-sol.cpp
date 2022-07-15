#include <bits/stdc++.h>

using namespace std;

//int x[8] = {1, 0, -1, 0, 1, 1, -1, -1};
//int y[8] = {0, 1, 0, -1, 1, -1, 1, -1};

//int x[4] = {1, 0, -1, 0};
//int y[4] = {0, 1, 0, -1};

//int x[4] = {-1, -1, 1, 1};
//int y[4] = {-1, 1, -1, 1};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		long long ans = 0;
		for (int i = 0; i < n - 1; i++) {
			ans += max(0, a[i] - a[i + 1]);
		}
		cout << ans << '\n';
	}
}
