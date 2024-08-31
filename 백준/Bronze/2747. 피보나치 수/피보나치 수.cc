#include <iostream>
using namespace std;

int main() {
	int n;
	int fi[45];

	cin >> n;

	fi[0] = 0;
	fi[1] = 1;

	for (int i = 2; i <= n; i++) {
		fi[i] = fi[i - 1] + fi[i - 2];
	}

	cout << fi[n] << endl;
}