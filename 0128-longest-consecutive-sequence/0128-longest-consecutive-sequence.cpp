class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_set<int> s(nums.begin(),nums.end());
        int longest = 1;
        for(auto i:s){
            if(s.find(i-1)==s.end()){
                int cc=1; //current count
                int last_smallest = i;
                while(s.find(last_smallest+1)!=s.end()){
                    last_smallest++;
                    cc++;
                }
                longest=max(longest,cc);
            }
        }

        return longest;
    }
};