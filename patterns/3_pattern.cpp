void triangle(int n) {
	for(int i=1; i <= n; i++){
		for(int j=1; j <=i; j++){
			cout << i << " ";
		}
		cout << endl; 
	}
}
// Input: ‘N’ = 3

// Output: 
// 1
// 2 2 
// 3 3 3

void nTriangle(int n) {
	for(int i =1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout << j << " ";
		}
		cout<<endl;
	}
}

// Input: ‘N’ = 3

// Output: 
// 1
// 1 2 
// 1 2 3
//  2 :
// 1
