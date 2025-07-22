class Solution {
public:
    int trap(vector<int>& height) {
        int r=height.size()-1;
        int l=0;
        int leftmax=height[l];
        int rightmax=height[r];
        int totalwater=0;
        while (l<r){
            if(leftmax<rightmax){
                l++;
                leftmax=max(leftmax,height[l]);
                totalwater+=(leftmax-height[l]);
            }
            else{
                r--;
                rightmax=max(rightmax,height[r]);
                totalwater+=(rightmax-height[r]);
            }
        }
        return totalwater;
    }
};