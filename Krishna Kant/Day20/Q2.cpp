class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        vector<int> v1;
        vector<int> v2;
        
        int n = nums1.size();
        int m = nums2.size();
        int i = 0;
        int j = 0;
        
        while(i < n  &&  j < m){
            while(i < n-1  &&  nums1[i] == nums1[i+1])
                i++;
            while(j < m-1  &&  nums2[j] == nums2[j+1])
                j++;
            if(nums1[i] < nums2[j])
                v1.push_back(nums1[i++]);
            else if(nums1[i] > nums2[j])
                v2.push_back(nums2[j++]);
            else{
                i++;
                j++;
            }
        }
        
        while(i < n){
            while(i < n-1  &&  nums1[i] == nums1[i+1])
                i++;
            v1.push_back(nums1[i++]);
        }
        
        while(j < m){
            while(j < m-1  &&  nums2[j] == nums2[j+1])
                j++;
            v2.push_back(nums2[j++]);
        }
        
        return {v1, v2};
    }
};