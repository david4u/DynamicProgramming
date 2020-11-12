#include <iostream>

using namespace std;

int arr[31][4];
pair<int, int> dim[6] = {{1,2}, {1,3}, {2,3}, {2,1}, {3,1}, {3,2}};
int dp[31][4];

int opt(int k, int h) {
	if ( dp[k][h] != 0 ) return dp[k][h];
	int ret = 0;
	for (int i = 1; i<= n; i++) {
		if (i == k) {
			for (int i = 0; i < 6; i++) {
				
			}
		} else {
			for (int i = 0; i < 6; i++) {
				if ()
			}
		}
	}
	return ret;

}
int n;

int main() {
	while(true) {
		cin >> n;
		if (n == 0) return 0;
		for (int i = 1; i <= n; i++) {

		}

	}
}