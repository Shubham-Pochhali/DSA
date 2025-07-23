class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()) return false;
        vector<int>freqS1(26,0);
        vector<int>freqS2(26,0);
        
        for(int i=0;i<s1.length();i++){
            freqS1[s1[i]-'a']++;
        }
        int l=0;
        for(int r=0;r<s2.length();r++){
            freqS2[s2[r] - 'a']++;
            if(r-l+1>s1.length()){
                freqS2[s2[l]-'a']--;
                l++;
            }
            if(freqS1==freqS2) return true;
        }
        return false;

    }
};