#include<iostream>
using namespace std;

int main(){
    double n, m, arr[1000];
    m = 0;
    cin >> n;
    
    for(int i = 0; i < n; i ++){
        cin >> arr[i];
    }
    
    for(int i =0; i < n; i++){
        if(m < arr[i]){
            m = arr[i];
         }
    }
    
    double sum = 0;
    for(int i = 0; i < n; i++){
        sum += (arr[i]/m)*100;
        
    }
    
    float avg = sum / n;
    
    cout << avg;
    
}



