#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    char A[n][n], NA[n][n];
   
   

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
       
    }

   
    for(int j = 0; j < n-1; j++) {
        NA[0][j+1] = A[0][j];
    }

    
    for(int i = 0; i <n-1; i++) {
        NA[i+1][n-1] = A[i][n-1];
    }

 
    for(int j = 1; j <n; j++) {
        NA[n-1][j-1] = A[n-1][j];
    }

    
    for(int i = 1; i <n; i++) {
        NA[i-1][0] = A[i][0];
    }

    
    for(int i = 1; i < n-1; i++) {
        for(int j = 1; j < n-1; j++) {
            NA[i][j] = A[i][j];
        }
    }

    cout << endl;

    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << NA[i][j];
        }
        
        cout << endl;
        
    }
    

    return 0;
}
