TC : O(N) 
SC : O(1) 

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi=0;
    vector<bool> ans;
for(int it : candies)
{
    maxi =max(maxi,it);
}

for(int it : candies)
{
    if(it + extraCandies >= maxi)
    {
        ans.push_back(true);
    } 
else{
    ans.push_back(false);
}
}
return ans;
    }
};
