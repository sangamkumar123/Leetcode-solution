//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
        // Your code goes here
        priority_queue<long long>h;
        for(int i=0; i<N; i++){
            h.push(A[i]);
            if(h.size()>K1){
                h.pop();
            }
        }
        int x=h.top();
        
        priority_queue<long long>p;
        for(int i=0; i<N; i++){
            p.push(A[i]);
            if(p.size()>K2){
                p.pop();
            }
        }
        int y=p.top();
        
        int sum=0;
        for(int i=0; i<N; i++){
            if(A[i]>x && A[i]<y){
                sum+=A[i];
            }
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        cin>>n;
        long long a[n+5];
        for(int i =0;i<n;i++)
            cin >> a[i];
        
        long long k1, k2;
        cin >> k1 >> k2;
        Solution ob;
        cout << ob.sumBetweenTwoKth(a, n, k1, k2) << endl;
        
    }
	return 0;
}

// } Driver Code Ends