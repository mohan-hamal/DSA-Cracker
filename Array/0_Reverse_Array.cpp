#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a[10000];
	cout << "Please enter size of array followed by the array elements:" << endl;
	cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}
	
	cout << " Array before reversing:" << endl;
	for(int i = 0; i < n; ++i){
			cout << a[i] << ' ';
	}
	
	for(int i = 0; i < n/2; ++i){
		swap(a[i], a[n-1-i]);
	}
	
	cout << endl << "Array after reversing:" << endl;
	for(int i = 0; i < n; ++i){
		cout << a[i] << " ";
	}
	return 0;
}
