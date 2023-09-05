Task : Return number/count of identical row and column 

Naive Approach : TC = O(N) ^ 3 
The idea is to calculate the count of each row and store them in an array, do the same for each column. Compare values 
from these arrays and return the result.

  
  class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size();
        int count=0;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n;col++)
        {
        int isEqual = true;
  for(int i=0;i<n;i++){
   if(grid[row][i] != grid[i][col])
   {
 isEqual = false;
        break;
}      
 }
  count += isEqual;
 }
}  
    return count;
    }
};

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>EFFICIENT APPROACH : unordered_map 

Time Complexity: O(N2)
Auxiliary Space: O(N2)

Algorithm
1. Iterate on the matrix and keep all the elements of each row into a vector and store these strings 
into map with their frequency.

2. Iterate over the map and keep all the elements of each column into a string and then
  
3. check if column vector has any occurrence into map. If there exist any occurrence into map then keep 
adding their count into temp vector.

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size();
  map<vector<int>, int> map;
int count=0;
for(int row=0;row<n;row++)
{
   map[grid[row]]++;
}
// iterate through col
for(int col=0;col<n;col++){
       vector<int> temp;
    for(int row=0;row<n;row++){
     
        temp.push_back(grid[row][col]);
    }
    count += map[temp];
}
return count;
    }
};
