class Solution {
public:
    int maxArea(vector<int>& height) {
        int n;
        int length;
        int breadth;
        int area=0;
        n=height.size();
        for(int i=0;i<n-1;i++){
            for(int j=i;j<n;j++){
                length=min(height[i],height[j]);
                breadth=abs(i-j);
                int temparea=length*breadth;
                if(area<temparea){
                    area=temparea;
                }
            }
        }
        return area;
    }