#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	int print2largest(int arr[], int n) {
	 int largest = -1;
	 int secondlargest = -1;
	 for(int i =0;i<n;i++){
	     if(largest<arr[i]){
	        secondlargest = largest;
	        largest=arr[i];
	     }else if(secondlargest<arr[i]  && largest>arr[i]){
	         secondlargest = arr[i];
	     }
	 }
	 
	 return secondlargest;
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
