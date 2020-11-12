#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

double dp[10001];
double arr[10001];

int n;

int main() {
	cin >> n;
	for (int i =0; i < n; i++) {
		cin >> arr[i];
	}
	dp[0] = arr[0];
	for (int i = 1; i < n; i++) {
		if (dp[i-1] > 1) {
			dp[i] = dp[i-1]*arr[i];
		} else {
			dp[i] = arr[i];
		}
	}
	double ans;
	ans = 0;
	for (int i = 0; i < n; i++) {
		if (ans < dp[i]) {
			ans = dp[i];
		}
	}
	printf("%.3f", ans);
}