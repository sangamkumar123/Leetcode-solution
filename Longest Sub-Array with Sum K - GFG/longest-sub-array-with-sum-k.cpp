//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        unordered_map<int,int>m;
        int sum=0;
        int maxlength=0;
        for(int i=0; i<N; i++){
            
            sum=sum+A[i];
            
            if(sum==K){
                maxlength=max(maxlength, i+1);
            }
            
            int rem=sum-K;
            
            if(m.find(rem) != m.end()){
                maxlength=max(maxlength, i-m[rem]);
            }
            
            if(m.find(sum) == m.end()){
                m[sum]=i;
            }
        }
        return maxlength;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends