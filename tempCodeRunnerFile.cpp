#include <iostream>

using namespace std;

int dp[100];
int n;

int main() {
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 1;
	cin >> n;
	if (n == 1) {
		cout << 4 << '\n';
		return 0;
	}
	for (int i = 3 ;i <= n; i++) {
		dp[i] = dp[i-1] + dp[i-2];
	}
	cout << (dp[n] + dp[n-1] + dp[n])*2 << '\n';
}