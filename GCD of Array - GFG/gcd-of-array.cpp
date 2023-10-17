//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	int find_gcd(int a, int b){
	    if(a == 0)
	    return b;
	    
	    return find_gcd( b%a , a);
	}
	
    int gcd(int N, int arr[])
    {   
        if (N == 1)
        return arr[0];
        
        int x = arr[0];
        int y = arr[1];
        int ans = find_gcd(x,y);
        
    	for(int i=2; i<N; i++){
    	    
    	    ans = find_gcd(ans, arr[i]);
    	}
    	return ans;
    }
};


//{ Driver Code Starts.

int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        int arr[N];
        for(int i = 0; i < N; i++)
        	cin >> arr[i];
        Solution ob;
       	cout <<  ob.gcd(N, arr) << "\n";
   
    }
    return 0;
}
// } Driver Code Ends