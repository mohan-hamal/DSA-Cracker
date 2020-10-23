#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, a[10000];
	cout << "Enter no. of elements in array followed by the elements: ";
	cin >> n;
	for(int i = 0; i < n; ++i){
			cin >> a[i];
	}
	
	for(int i = 0, j = n-1; i <= j;){
		if(a[i] > 0 && a[j] < 0){
			swap(a[i], a[j]);
			i++;
			j--;
		}
		else if(a[i] < 0 && a[j] < 0){
			i++;
		}
		else if(a[i] > 0 && a[j] > 0){
			j--;
		}
		else{
			i++;
			j--;
		}
	}
	
	cout << "The final array is: " << endl;
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	return 0;
}
