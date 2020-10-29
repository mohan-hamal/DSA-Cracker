// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

//User function template for C++

class Solution{   
public:
    int getMinDiff(int arr[], int n, int k) {

        int sm, big, sub, add, ans;
        
        sort(arr, arr+n);
        
        ans = arr[n-1] - arr[0];
        
        big = arr[n-1] - k;
        sm = arr[0] + k;
        
        if(sm > big)
            swap(sm,big);
        
        for(int i = 1; i< n-1; i++){
                
                sub = arr[i] - k;
                add = arr[i] + k;
                
                if(sub >= sm || add <= big)
                    continue;
                
                if(big-sub <= add - sm)
                    sm = sub;
                else
                    big = add;
        }

        return min(ans, big - sm);
    }
    
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
