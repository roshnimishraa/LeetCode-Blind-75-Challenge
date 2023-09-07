Approach 1: Using Sorting 

Time Complexity: O(N log N)
Auxiliary Space: O(1) 

The Idea here is to simply sort the array in non-increasing/decreasing order and return the element at kth-1 index.

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), greater<int>());
        return nums[k-1];
    }
};

Efficient Approach 2 : Min Heap 

Time complexity: O(N + K Log N).
Auxiliary Space: O(N)

1. The idea here is to use a min-heap of size k.
2. Now a min heap of size k will store k elements in such a way that least of those k elements will be at top.
3.After storing the first k elements of nums in min-heap, we simply traverse through our nums array, and if the element at top of min-heap is lesser 
than element in nums, we extract the top element of min heap and push the current element.
4.In this way we keep track of k-largest element in the min-heap and kth largets element at top of the min-heap.

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // min-heap
    priority_queue<int,vector<int>,greater<int>>pq;
for(int i=0;i<k;i++)
{
    pq.push(nums[i]);
}
//min heap me min uper rkho
for(int i=k;i<nums.size();i++)
{
       if(pq.top() < nums[i]){  //min heap 
               pq.pop();
        //push min 
                pq.push(nums[i]);
            }\
}
return pq.top();
    }
};
