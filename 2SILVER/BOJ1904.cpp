#include <iostream>

using namespace std;

int n;
int dp[1000001];
int main() {
	dp[0] = 0;
	dp[1] = 1;
	cin >> n;
	for (int i = 2; i <= n; i+=2) {
		dp[i] = (dp[i-2]*2 + (dp[i-1]-1)*2 + 1);
		dp[i+1] = (dp[i]);
	}
	cout << dp[n] << '\n';
}

/*

1
11 00
111 100 001
1111 0000 1100 1001 0011
11111 11100 10000 00100 00001 10011 11001 




*/