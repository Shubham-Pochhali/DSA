class Solution {
    public int maxArea(int[] height) {
        int finalArea=0;
        int currentArea=0;
        int l=0, r=height.length-1;
        while(l<r){
            currentArea=Math.min(height[l],height[r])*(r-l);
            finalArea=Math.max(currentArea,finalArea);
            if(height[l]>height[r]) r--;
            else l++;
        }
        return finalArea;
    }
}