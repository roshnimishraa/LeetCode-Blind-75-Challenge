
Efficient Approach : Two Pointer 
1. Take two pointer i,j where 
i = 0 and j = n-1
2. Intialize maxWater as 0 initially
3. Iterate till i < j because at i==j n=1 then it is not a container 
i) Find width = j - i
ii) Find Height = min(arr[i],arr[j])
iii) maxWater = max(maxWater,Height*width) 
4. Check if (arr[i] < arr[j] ) then i++
 else j--
5. return maxWater 


TC : O(N) 
SC : O(1) 
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int water=0;

    while(i<j)
    {
    int width = (j-i);
    int hight = min(height[i],height[j]);
    water = max(water,width*hight);

if(height[i]<=height[j]){
    i++;
}
else{
    j--;
}
    }
return water;
    }
};
