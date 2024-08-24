#include <iostream>
using namespace std;

void hanoi(int n, int from, int by, int to){
 
    if(n == 1){
        cout << from <<  " " << to << "\n";
    }
    
    else{
        hanoi(n-1, from, to, by);
        cout << from << " " << to << "\n";
        hanoi(n-1, by, from, to);
    }
}


int main(){
    int N;
    long count;
    count = 1;
    cin >> N;
    for(int i = 0; i < N; i++){
        count = count * 2;
    }
    
    
    
    cout << count - 1 << "\n";
    
 
        hanoi(N, 1, 2, 3);
    
   
}
