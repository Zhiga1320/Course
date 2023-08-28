#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, m = 0;
    cin >> N;
    while(int(pow(2,m)) < N) {
        cout << pow(2,m) << " ";
        m++;  
    }
    
    
}



