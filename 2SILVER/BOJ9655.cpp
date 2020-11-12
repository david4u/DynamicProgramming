#include <iostream>

using namespace std;
// 1 = SK, 2 = CY
int dp[1001];



int main() {
	int n;
	cin >> n;
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 1;
	for (int i = 1; i <= n; i++) {
		if (i >= 998) break;
		dp[i+3] = 3 - dp[i];
	}
	if (dp[n] == 1) {
		cout << "SK\n";
	}
	else {
		cout << "CY\n";
	}
}