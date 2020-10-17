#include <iostream>
#include <cstring>

using namespace std;

int dp[5001];
const int INF = 987654321;

int min(int x, int y) {
	return x < y ? x : y;
}

int n;

int main() {
	int n;
	cin >> n;
	for (int i = 0 ;i < 5001; i++) {
		dp[i] = INF;
	}
	dp[3] = 1;
	dp[5] = 1;
	for (int i = 4; i < 5001; i++) {
		dp[i] = min(dp[i], dp[i-3] + 1);
		if (i > 5) {
			dp[i] = min(dp[i], dp[i-5] + 1);
		}
	}
	if (dp[n] == INF) {
		cout << -1 << '\n';
		return 0;
	}
	cout << dp[n] << '\n';
}