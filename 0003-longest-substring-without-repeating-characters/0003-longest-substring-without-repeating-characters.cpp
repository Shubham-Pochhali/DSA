class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>mpp(256,-1);
        int n=s.size();
        int l=0; //for start
        int r=0; //for end
        int len=0;
        while(r<n){
            if(mpp[s[r]]!=-1){
                l=max(mpp[s[r]]+1,l);
            }
            mpp[s[r]]=r;
            len=max(len,r-l+1);
            r++;
        }
        return len;
    }
};