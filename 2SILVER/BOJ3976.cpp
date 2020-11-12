#include <iostream>

using namespace std;

int min(int x, int y) {
	return x < y ? x : y;
}
int pass[100001][3];
int drb[100001][3];
int dp[100001][3];

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		int l1, l2, s1, s2;
		cin >> n >> l1 >> l2 >> s1 >> s2;
		int shoot1, shoot2;
		for (int i = 1; i < n; i++) {
			cin >> pass[i][1];
		}
		for (int i = 1; i < n; i++) {
			cin >> drb[i][1];
		}
		for (int i = 1; i < n; i++) {
			cin >> pass[i][2];
		}
		for (int i = 1; i < n; i++) {
			cin >> drb[i][2];
		}
		dp[1][1] = l1;
		dp[1][2] = l2;
		for (int i = 1; i < n; i++) {
			dp[i+1][1] = min(dp[i][1] + drb[i][1] , dp[i][2] + pass[i][2]);
			dp[i+1][2] = min(dp[i][2] + drb[i][2] , dp[i][1] + pass[i][1]);
		}
		shoot1 = dp[n][1] + s1;
		shoot2 = dp[n][2] + s2;
		cout << min(shoot1, shoot2) << '\n';
	}
	return 0;
}