// https://www.acmicpc.net/problem/14697

#include <iostream>

using namespace std;

int a, b, c;
int dp[301];

int main() {
	cin >> a >> b >> c;
	for (int i = 1; i <= 300; i++) {
		if (i < a && i < b && i < c) {
			dp[i] = 0;
		}
		if (i % a ==0 || i % b == 0 || i % c == 0) {
			dp[i] = 1;
		}
		if ( i-a > 0 && dp[i-a] == 1) {
			dp[i] = 1;
		}
		if (i-b >0 && dp[i-b] == 1) {
			dp[i] = 1;
		}
		if (i-c >0 && dp[i-c] == 1) {
			dp[i] = 1;
		}
	}
	int n;
	cin >> n;
	cout << dp[n] << '\n';

}