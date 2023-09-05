Time complexity: O(n) , where n is length of array
Auxiliary Space is O(1)

Algorithm 
1. First find max sum
2. then return sum/k = avg

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // fix size window technique
    int i=0,j=0;
    int sum=0;
    int maxi=INT_MIN;
    int n=nums.size();
    while(j<n)
    {
        sum+=nums[j];

    if(j-i+1 < k){
        j++;
    }
    else if(j-i+1 == k){
          maxi = max(sum,maxi);
   //remove for i  
        sum -= nums[i];
         //slide the window  
        i++;
        j++;
    }
    }
 return (double)maxi/k;
    }
};
