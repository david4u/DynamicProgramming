#include <iostream>

using namespace std;

int b[21];
int w[21];
int dp[21];
int n;

int max( int x, int y) {
	return x > y ? x : y;
}
int opt(int k) {
	if (dp[k] != 0) {
		return dp[k];
	}
	int ret = 1;
	for (int i = 1; i<= n; i++) {
		if (i == k) continue;
		if (b[k] > b[i] && w[k] > w[i]) {
			ret = max(ret, opt(i) + 1);
		}
	}
	dp[k] = ret;
	return ret;

}

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> b[i] >> w[i];
	}
	for (int i = 1; i <= n; i++) {
		opt(i);
	}
	int ans = 1;
	for (int i = 1; i <= n; i++) {
		ans = max(ans, dp[i]);
	}
	cout << ans << '\n';

}