Task : 
Find out the state of the asteroids after all collision

>> When Collision Happen ? 
  When +ve and -ve meet then find 
sum = i+ st.top() 
If two asteroids meet, the smaller one will explode. 

Algorithm 
1. Push all the elements in st 
2. traverse through st until st is not empty and st.top() > 0 and ith ele < 0       // collision condition
i) Find sum = ith pos + st.top() 
ii) if(sum < 0 ) -ve win remove positive 
st.pop()
iii) else if ( sum > 0 ) positive win remove neg
 i=0
iv) sum == 0 remove both 
 st.pop()
  i=0
3. store ans in reverse order use vector push from last 
4. return ans 

  TC  : O(N) 
  SC : O(N) 

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
    for(auto a : asteroids)
    {
        while(!st.empty() && a <0 && st.top() > 0)
        {
 int sum = a + st.top();

 if(sum > 0) //positive win 
 {
  a=0;
 }
 else if(sum < 0){
     //negative win 
    st.pop();
 }
 else{
     //sum == 0
    st.pop();
   a=0;
 }
}

if(a != 0)
 {
     st.push(a);
 }
    }

int n = st.size();
vector<int> ans(n);
int i=n-1;
while(!st.empty())
{
    ans[i]=st.top();
    st.pop();
    i--;
}
    return ans;
    }
};
