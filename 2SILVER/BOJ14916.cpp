#include <iostream>

using namespace std;

int dp[100001];

int coin(int k) {
	if (k <= 0) return -1;
	if (dp[k] != 0) {
		return dp[k];
	}
	int ret = dp[k];
	int tmp1 = coin(k-2);
	int tmp2 = coin(k-5);
	if (tmp1 == -1 && tmp2 == -1) {
		return -1;
	}
	else if (tmp1 == -1) {
		dp[k] = tmp2 + 1;
		return tmp2 + 1;
	}
	else if (tmp2 == -1) {
		dp[k] = tmp1 + 1;
		return tmp1 + 1;
	}
	else {
		if (tmp1 > tmp2) {
			dp[k] = tmp2 + 1;
			return tmp2 + 1;
		}
		else {
			dp[k] = tmp1 + 1;
			return tmp1 + 1;
		}
	}
}

int main() {
	for (int i = 0; i <= 100000; i++) {
		dp[i] = 0;
	}
	dp[2] = 1;
	dp[5] = 1;
	dp[4] = 2;
	int n;
	cin >> n;
	cout << coin(n) << '\n';
}