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

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
