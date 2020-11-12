#include <iostream>
#include <cstring>

using namespace std;

long long dp[92];

long long fib(long long i) {
	if (dp[i] != -1) {
		return dp[i];
	}
	long long ret;
	ret = fib(i-1) + fib(i-2);
	dp[i] = ret;
	return ret;
}

int main() {
	memset(dp, -1, sizeof(dp));
	dp[0] = 0;
	dp[1] = 1;
	long long n;
	cin >> n;
	cout << fib(n) << '\n';
}