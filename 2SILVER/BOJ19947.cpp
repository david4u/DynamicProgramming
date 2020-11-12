#include <iostream>

using namespace std;

int dp[11];

int max(int x, int y) {
	return x > y ? x : y;
}

int opt(int k) {
	if (k < 0) return 0;
	if (dp[k] != 0) return dp[k];
	int ret;
	ret = max(max(int(opt(k-3)*1.2),int(opt(k-5)*1.35)), max(int(opt(k-1)*1.05), int(opt(k-3)*1.2)));
	dp[k] = ret;
	return ret;
}
int main() {
	int h, y;
	cin >> h >> y;
	for (int i = 0; i < 11; i++) {
		dp[i] = 0;
	}
	dp[0] = h;
	cout << opt(y) << '\n';

}