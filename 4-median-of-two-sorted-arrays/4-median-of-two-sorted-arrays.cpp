class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        for(int x:nums1)
            v.push_back(x);
        for(int x:nums2)
            v.push_back(x);
        sort(v.begin(),v.end());
        if(v.size()%2==0)
            return ((double)v[v.size()/2-1]+(double)v[v.size()/2])/2;
        else
            return double(v[v.size()/2]);
        
    }
};