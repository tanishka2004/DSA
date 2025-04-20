void nStarTriangle(int n) {
   for(int i =0; i < n; i++){
    //    space
    for(int j = 0; j < n-i-1; j++){
        cout << " ";
    }
    for(int j=0; j < 2*i + 1; j++){
        cout << "*";
    }
    for(int j = 0; j < n-i-1; j++){
        cout << " ";
    }
    cout<< endl;
   }
}
// Input: ‘N’ = 3

// Output: 

//   *
//  ***
// *****

void nStarTriangle(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < i; j++) {
            cout << " ";
        }
        for(int j = 1; j <= 2*(n - i) + 1; j++) {
            cout << "*";
        }

        cout << endl; 
    }
}
// Input: ‘N’ = 3

// Output: 

// *****
//  ***
//   *
