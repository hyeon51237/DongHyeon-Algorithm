#include <iostream>
#include <algorithm>
using namespace std;

long long DP[101];
long long A[501];
long long arr[501];

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int tempA, tempB;
        cin >> tempA >> tempB;
        A[tempA] = tempB;
    }
    
    int k = 1;
    
    for(int i = 0; i < 501; i++){
        if(A[i] != 0){
            arr[k++] = A[i];
        }
    }
    
    DP[1] = 1;
    
    for(int i = 2; i < n + 1; i++){
        
        long long max = 0;
        for(int j = 1; j < i; j++){
            if(arr[i] > arr[j] && DP[j] > max){
                max = DP[j];
            }
        }
        DP[i] = max + 1;
        
    }
    
    long long ans = 0;
    for(int i = 1; i < n + 1; i++){
        if(ans < DP[i]){
            ans = DP[i];
        }
    }
    cout << n - ans;
    
}
