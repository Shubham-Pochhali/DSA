class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int total = nums2.size();
        for(int i=nums1.size()-1;i>=m;i--) nums1.pop_back();
        for(int i=0; i<total; i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
    }
};