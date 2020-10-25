#include <bits/stdc++.h>
using namespace std;

void input(int a[], int n){
    for(int i=0; i < n; i++){
        cin >> a[i];
    }    
}

void display(int a[], int n){
	for(int i=0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}


int main() {
	int t, a[1004], n;
	cin >> t;
	
	while(t-- > 0){
	    cin >> n;
	    
        input(a, n);
        
        int temp = a[n-1];
        for(int i = n-1; i > 0; i--){
			a[i] = a[i-1];
		}
		a[0] = temp;
		
		display(a, n);
		
	}
	return 0;
}
