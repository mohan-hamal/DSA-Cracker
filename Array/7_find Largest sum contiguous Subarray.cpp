#include <bits/stdc++.h>
using namespace std;

void input(long long int a[], int n){
    for(int i=0; i < n; i++){
        cin >> a[i];
    }    
}


int main() {
	int t, n;
	long long int a[1000004];
	cin >> t;
	
	while(t-- > 0){
	    cin >> n;
	    
        input(a, n);
        
		int max_overall = INT_MIN, max_sub = 0;
		
		for(int i = 0; i < n; i++){
			max_sub = max_sub + a[i];
			if(max_overall < max_sub)
				max_overall = max_sub;
			if(max_sub < 0)
				max_sub = 0;
		}
		cout << max_overall << endl;		
	}
	return 0;
}
