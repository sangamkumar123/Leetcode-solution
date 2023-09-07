//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumMultiplications(vector<int>& arr, int start, int end) {
        // code here
         if(start==end) return 0;
        vector<int> vis(1e5,-1);
        // priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
        queue<pair<int,int>> q;
        int count=1;
        q.push({0,start});
        vis[start]=1;
        while(!q.empty()){
            int a=q.front().second;
            int dist=q.front().first;
            q.pop();
            
            for(auto it:arr){
                int x=(it%100000*a%100000)%100000;
                if(x==end) return dist+1;
                if(vis[x]==-1){
                    vis[x]=1;
                    q.push({dist+1,x});
                }
            }
        }
        return -1;
        // code here
    
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int start, end;
        cin >> start >> end;
        Solution obj;
        cout << obj.minimumMultiplications(arr, start, end) << endl;
    }
}

// } Driver Code Ends