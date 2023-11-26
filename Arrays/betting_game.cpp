//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    
        int betBalance(string result)
        {
            // code here
            int sum=4;
            int bet_am=1;
            int final_sum=sum;
            int s=result.size();
            for(int i=0;i<s;i++)
            {
                if(result[i]=='W')
                {
                    final_sum=final_sum+bet_am;
                    bet_am=1;
                }
                else if(result[i]=='L')
                {
                final_sum=final_sum-bet_am;
                bet_am=2*bet_am;

                }
                
                if(bet_am>final_sum && (i!=s-1))
                {
                    return -1;
                }
            }
            
            
                
            return final_sum;
        }
    
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string result;
        cin>>result;
        
        Solution ob;
        cout<<ob.betBalance(result)<<endl;
    }
    return 0;
}
// } Driver Code Ends