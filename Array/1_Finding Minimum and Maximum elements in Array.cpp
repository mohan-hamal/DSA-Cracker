#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a[10000];
	cout << "Please enter size of array followed by the array elements:" << endl;
	cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}
	
	int max = a[0], min = a[0];
	for(int i = 1; i < n; ++i){
		if(a[i] < min)
			min = a[i];
		if(a[i] > max)
			max = a[i];
	}
	
	cout << "Maximun element in array: " << max << endl << "Minimun element in array: " << min;
	return 0;
}
