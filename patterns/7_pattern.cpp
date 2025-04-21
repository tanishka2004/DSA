void nLetterTriangle(int n) {
    for(int i=0; i<n; i++){
        for(char ch='A'; ch<='A'+ i; ch++){
            cout << ch << " ";
        }
        cout<< endl;
    }
}

// Input: ‘N’ = 3

// Output: 

// A
// A B
// A B C

void nLetterTriangle(int n) {
   for(int i=0; i<n; i++){
       for(char ch='A'; ch<='A' + (n - i - 1); ch++){
           cout << ch << " ";
       }
       cout<< endl;
   }
}
// Input: ‘N’ = 3

// Output: 

// A B C
// A B
// A
void alphaRamp(int n) {
     for(int i=0; i<n; i++){
         char ch='A'+i;
       for(int j=0; j<=i; j++){
           cout << ch << " ";
       }
       cout<< endl;
   }
}

// Input: ‘N’ = 3

// Output: 
// A
// B B
// C C C
