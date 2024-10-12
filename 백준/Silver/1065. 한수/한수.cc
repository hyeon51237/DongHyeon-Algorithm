#include <iostream>
using namespace std;
 
bool checkMatch(int n);
 
int main() {
    int n;
    cin >> n;
 
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (checkMatch(i) == true) ans += 1;
    }
    cout << ans;
 
    return 0;
}
 
bool checkMatch(int n) {
    int digit1, digit2, digit3;
    digit1 = n / 100; 
    digit2 = (n / 10) % 10; 
    digit3 = n % 10;
 
    int diff1, diff2;
    diff1 = digit1 - digit2;
    diff2 = digit2 - digit3;
    
    if (n < 100 || diff1 == diff2) return true;
    else return false;
}
