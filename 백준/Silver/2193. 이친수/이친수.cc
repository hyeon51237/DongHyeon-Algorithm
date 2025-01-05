#include <iostream>
using namespace std;
long long DP[91];

int main(){
    int n;
    cin >> n;
    
    DP[1] = 1;
    DP[2] = 1;
    DP[3] = 2;
    
    for(int i = 4; i <= n; i++){
        DP[i] = DP[i - 3] + DP[i - 2] * 2;
    }
    
    cout << DP[n];
    
}
