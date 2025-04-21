void nStarTriangle(int n) {
    for(int i=1; i<=2*n-1; i++){
        int stars = i;
        if(i>n) stars=2*n-i;
        for(int j=1; j<=stars; j++){
            cout << "*";
        }
        cout<<endl;
    }
}
// Input: ‘N’ = 3

// Output: 

// *
// **
// ***
// **
// *

void nNumberTriangle(int n) {
    int num = 1;
    for(int i=1; i<=n;i++){
        for(int j=1; j<=i; j++){
            cout << num << " ";
            num = num + 1;
        }
        cout<< endl;
    }
}
// Input: ‘N’ = 3

// Output: 

// 1
// 2 3
// 4 5 6

