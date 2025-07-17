class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currcnt=0;
        int maxcnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                currcnt++;
                maxcnt=max(maxcnt,currcnt);
            }
            else { 
                currcnt=0;
            }
        }
        return maxcnt;
    }
};