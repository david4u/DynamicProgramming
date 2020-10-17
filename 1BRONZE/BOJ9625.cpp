#include <iostream>

using namespace std;

int n;
pair<int, int> dp[50];

int main() {
	cin >> n;
	dp[1] = {0, 1};
	dp[2] = {1, 1};
	for (int i = 3; i <= n; i++) {
		dp[i].first = dp[i-1].second;
		dp[i].second = dp[i-1].first + dp[i-1].second;
	}
	cout << dp[n].first << " " << dp[n].second << '\n';

}