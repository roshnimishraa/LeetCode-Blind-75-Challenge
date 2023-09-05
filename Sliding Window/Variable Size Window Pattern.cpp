sum = given
sum = k

 Approach :
1. Find out calculations
2. ans <- calculation
3.  check for
  
int i=0,j=0
while(j<size) {
  calculations 
  if(j-i+1 < k)
  { j++  
  } 
    else if (j-i+1 == k) {
calculation -> ans 
  //slide the window 
      j++
    }
      else if(j-i+1 > k) {
        while(j-i+1 > k) {
          remove calculation for i //slide the window 
            i++
        }
            j++
        }
            return ans 
        }
          
