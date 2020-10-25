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
}

int create_set(int a[], int n){
		int b[200008], k = -1, f = 1;
		for(int i = 0; i < n; i++){
			f = 1;
			for(int j = 0; j <= k; j++){
				if(a[i] == b[j]){
					f = 0;
					break;
				}
			}
			if(f == 1){
				k++;
				b[k] = a[i];
			}
		}
		
		for(int i = 0; i < k+1; i++){
			a[i] = b[i];
		}
		return k+1;
}



int main() {
	int t, a[100004], b[100004], uni[200008],inter[200008], n, m;
	cin >> t;
	
	while(t-- > 0){
	    int k = -1, l = -1;
	    cin >> n >> m;
	    
        input(a, n);
        input(b, m);
        
        int i = 0, j =0;
        
        while(i < n && j < m){
				if(a[i] < b[j]){
					k++;
					uni[k] = a[i];
					i++;
				}
				else if(b[j] < a[i]){
					k++;
					uni[k] = b[j];
					j++;
				}
				else{
					k++;
					uni[k] = a[i];
					l++;
					inter[l] = a[i];
					i++;
					j++;
				}
		}
		while(i < n){
			k++;
			uni[k] = a[i++]; 
		}
		while(j < m){
			k++;
			uni[k] = b[j++];
		}
		
		k = create_set(uni, k+1);
		l = create_set(inter, l+1);
		
		display(uni, k);
		cout << endl;
		display(inter, l);
		cout << endl;
	}
	return 0;
}
