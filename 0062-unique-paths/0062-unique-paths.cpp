class Solution {
public:
    int uniquePaths(int m, int n) {
        int N = m-1+n-1;
        int r = min(m-1,n-1);
        double res=1;
        //for NCR = 10x9x8/1x2x3
        for(int i=1;i<=r;i++){
            res=res*(N-r+i)/i;
        }
        return (int)res;
    }
};