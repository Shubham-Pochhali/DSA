class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int n= nums.size();
        int longest=1;
        int cc=0;//current count
        int last_smaller = INT_MIN;

        for(int i=0; i<n;i++){
            if(nums[i]==last_smaller){
                continue;
            }
            else if(nums[i]-1==last_smaller){
                cc++;
                last_smaller=nums[i];
            }
            else if(nums[i]-1!=last_smaller){
                cc=1;
                last_smaller=nums[i];
            }
            longest=max(longest,cc);
        }
        return longest;
    }
};