#include <iostream>
using namespace std;

int main() {
    int n, m, st, en, num;
    cin >> n >> m;
    int arr[101] = {0};
    
    while(m--){
        cin >> st >> en >> num;
        for(int i = st; i <= en; i++){
            arr[i] = num;
        }
    }
    
    for(int i = 0; i < n; i++){
        cout << arr[i + 1] << " ";
    }
}

