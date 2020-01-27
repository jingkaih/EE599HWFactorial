# EE599HWFactorial
When the input is negative, I throw an error and tell people this is wrong. 
I don't know how to deal with the out of range problem when a very large input is applied.
The only thing I could do is to use the unsigned long long int defining result in order to make a larger capacity.
Time complexities of two functions (recursive or not) are both O(n).

Proof of non-recursive version:
In the main part of function "Solution::FuncFactorial_NonRe", which is as below:

  unsigned long long int result = 1;
      if (m >= 0)
    {
      for(int i = 1 ; i <= m ; i++) {
        result = result * i;
      }
        return result;
    }

I prove the correctness by induction. 
At first let us consider the initial condition which is the input m = 0. 
When m = 0, the for-loop runs only a single time and the result is 1. 
It is easily justified in such a simple situation. 
For the second step of induction, I assume that when the input m = k, the result is k-factorial. 
Notice that not like m is a variable, k is a constant. 
Now we have to prove the result is still correct when m = k+1 is applied. 
We get into the for-loop once again, and multiply the k-factorial by k+1, which leads to a new result k+1-factorial and that¡¯s exactly the correct result. 
