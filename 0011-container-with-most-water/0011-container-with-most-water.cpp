class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int maxWater=0;
        while(l<r){
            int w=r-l;
            int h=min(height[l],height[r]);
            maxWater=max(w*h,maxWater);
            height[l]<height[r]?l++:r--;
        }
        return maxWater;
    }
};