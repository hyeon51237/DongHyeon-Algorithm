#include<iostream>
using namespace std;

int main(){
    int paper[100][100] = {0};
    
    
    int N;
    cin >> N;
    
    for(int i = 0; i < N; i++){
        int a, b;
        
        cin >> a >> b;
        
        
        for(int j = 0; j < 10; j++){
            for(int k = 0; k < 10; k++){
                paper[a + j][b + k] = 1;

            }
        }
    }
    
    int sum = 0;
    
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            if(paper[i][j] == 1){
                sum += 1;
            }
        }
    }
    
    cout << sum;
    
}

