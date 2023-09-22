//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        int s=0, e=n-1, left=-1;
        while(s<=e){
            int mid = s-(s-e)/2;
            
            if(arr[mid]==x){
                left=mid;
                e=mid-1;
            }
            else if(arr[mid] < x){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        
        int s1=0, e1=n-1, right=-1;
        while(s1<=e1){
            int mid = s1-(s1-e1)/2;
            
            if(arr[mid]==x){
                right=mid;
                s1=mid+1;
            }
            else if(arr[mid] < x){
                s1=mid+1;
            }
            else{
                e1=mid-1;
            }
        }
        if(left >= 0){
            return { left, right};
        }
        return {-1 , -1};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends