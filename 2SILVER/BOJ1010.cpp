#include <iostream>

using namespace std;

int cache[31][31];
int n, m;

int bino(int n, int r) {
	if (n == 1) return 1;
	if (n == r) return 1;
	if (r == 1) return n;
	int ret = cache[n][r];
	if (ret != 0) {
		return ret;
	}
	ret = bino(n-1, r) + bino(n-1, r-1);
	cache[n][r] = ret;
	return ret;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> m;
		cout << bino(m,n) << '\n';
	}
}