#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, a[10000], k;
	cout << "Please enter size of array followed by the array elements:" << endl;
	cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}
	
	sort(a, a+n);
	cout<< "Value of k: ";
	cin >> k;
	
	cout << "Maximun kth element in array: " << a[n-k] << endl << "Minimun kth element in array: " << a[k-1];
	return 0;
}
