#include <iostream>
#include <cstring>

using namespace std;

int M[100][100];

void set() {
	memset(M, 0, sizeof(M));
	M[1][1] = 1;
	for (int i = 1; i <= 70; i++) {

	}
	for (int i = 1; i <= 70; i++) {
		M[i][1] = 1;
		M[i][i] = 1;
		for (int j = 2; j < i; j++) {
			M[i][j] = M[i-1][j-1] + M[i-1][j];
		}
	}
}
int get(int r, int c, int w) {
	int ret = 0;
	for (int i = r; i < r+w; i++) {
		for (int j = c; j <= i-r+c; j++) {
			ret += M[i][j];
		}
	}
	return ret;
}
int main() {
	int R, C, W;
	cin >> R >> C >> W;
	set();
	cout << get(R, C, W) << '\n';
}