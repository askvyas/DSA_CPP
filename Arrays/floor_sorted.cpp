/* Floor in a sorted array */

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    int findFloor(vector<long long> v, long long n, long long x){
        
        
        
        long long int start = 0; 
        long long int end = n-1;
        long long int min_d = -1;

        
        while(start<=end)
        {
            long long int mid=(start+end)/2;

            
            if(v[mid]<=x)
            {
                min_d=mid;
                
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        
        return min_d;
        
        
    }
};


//{ Driver Code Starts.

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}
// } Driver Code Ends