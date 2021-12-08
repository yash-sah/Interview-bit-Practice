/*
Given an integer n, return the number of trailing zeroes in n!.

*Note: Your solution should be in logarithmic time complexity.*

**Example :**

```
n = 5
n! = 120
Number of trailing zeros = 1
So, return 1
```

*/
int Solution::trailingZeroes(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A;
    int i=5;
    int ans=0;
    int res;
    do
    {
        res=n/i;
        ans+=res;
        i=i*5;

    }while(res!=0);
    return ans;
}
