void seeding(int n) {
	for(int i=1; i <= n; i++){
		for(int j= 1; j <= n-i+1; j++){
			cout << "* ";
		}
		cout << endl;
	}
}
// Input: ‘N’ = 3

// Output: 
// * * *
// * *
// *

void nNumberTriangle(int n) {
   for(int i=1; i<= n; i++){
       for(int j=1; j <= n-i+1; j++){
           cout << j << " ";
       }
       cout << endl;
   }
}

// Input: ‘N’ = 3

// Output: 

// 1 2 3
// 1 2
// 1
