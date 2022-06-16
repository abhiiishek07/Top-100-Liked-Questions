// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        // Your code goes here   
        int i=0,j=0,ans=INT_MAX;
        unordered_map<char,int>mp;
        for(char ch:str)
        mp[ch]++;
        int unique=mp.size();
        mp.clear();
        while(j<str.size()){
            mp[str[j]]++;
            if(mp.size()==unique){
                while(mp[str[i]]>1){
                     mp[str[i]]--;
                     i++;
                }
                ans=min(ans,j-i+1);
            }
            j++;
        }
        return ans;
        
    }
};

// { Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}  // } Driver Code Ends