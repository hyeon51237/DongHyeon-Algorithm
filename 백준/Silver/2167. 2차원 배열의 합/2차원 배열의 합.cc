#include <iostream>
using namespace std;
 
int arr[301][301];
 
int main() {
    int n, m, i, j, x, y, k;
    cin >> n >> m;
 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> arr[i][j];
        }
    }
 
    cin >> k;
 
    while (k--) {
        int res = 0;
        cin >> i >> j >> x >> y;
 
        for (int a = i; a <= x; a++) {
            for (int b = j; b <= y; b++) {
                res = res + arr[a][b];
            }
        }
        cout << res << '\n';
    }
 
}