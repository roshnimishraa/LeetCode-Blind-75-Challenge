Given : 
Infinite set of Interger starting from 1 to infinity initlially 

Naive Approach : 

class SmallestInfiniteSet {
public:
  vector<bool> nums;
  int i; //points to current smallest
    SmallestInfiniteSet() {
//initially all ele present in vector 
//therefore mark as true
        nums = vector<bool>(1001,true);
// i points smallest value in an array
i=1;
    }
    
    int popSmallest() {
        int result =i;
        nums[i]=false;
      // points to smallest element after pop out 
for(int j=i+1;j<1001;j++){
    if(nums[j] == true){
     i=j;
     break;
    }
}
return result;
    }
    
    void addBack(int num) {
     nums[num] = true;
// if num < currentSmallest
    if(num < i){
       i=num; //currentSmallest = num
    }   
    }
};

##########################################################################################################################################

Better Approach : Min-Heap +  Unordered_set 

Why Min-Heap & unorderd_set

------> min-heap : to store the min element at top so that it is easy to get pop Smallest
------> unordered_set : to search in O(1) time weather the element is exists or not 

class SmallestInfiniteSet {
public:
int currSmallest;
priority_queue<int,vector<int>,greater<int>> pq;
unordered_set<int> st;
    SmallestInfiniteSet() {
        currSmallest = 1;
    }
    
    int popSmallest() {
        int result;
// if element exist
if(!pq.empty())
{
    result = pq.top();
    pq.pop();
    st.erase(result);
}
else{
    result = currSmallest;
    currSmallest += 1;
}
        return result;
    }
    
    void addBack(int num) {
//  corner case 
// if num > current Smallest or if it is already exist 
if(num >= currSmallest || st.find(num) != st.end())
{
    return;
}
pq.push(num);
st.insert(num);
    }
};

######################### EFFICIENT APPROACH 
Time complexity:O(n∗logn)
Space complexity:O(n)

class SmallestInfiniteSet {
public:
int currSmallest;
set<int> st;
    SmallestInfiniteSet() {
        currSmallest = 1;
    }
       int popSmallest() {
        int result;
// if element exist
if(!st.empty())
{
// *(st.begin()) -> to get top element from set
    result = *(st.begin());
    st.erase(result);
}
else{
    result = currSmallest;
    currSmallest += 1;
}
        return result;
} 
    void addBack(int num) {
//  corner case 
// if num > current Smallest or if it is already exist 
if(num >= currSmallest || st.find(num) != st.end())
{
    return;
}
st.insert(num);
    }
};

