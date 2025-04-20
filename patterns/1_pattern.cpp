#include <iostream>
using namespace std;
void nForest(int n) 
{
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++)
		{
			cout << "*";
			  if (j != n - 1) cout << " ";
		}
		cout << endl;
	}
}

#  output
* * *
* * *
* * *
