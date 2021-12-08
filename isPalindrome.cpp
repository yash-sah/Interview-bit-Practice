/*
Determine whether an integer is a palindrome. Do this without extra space.

A palindrome integer is an integer x for which reverse(x) = x where reverse(x) is x with its digit reversed.
Negative numbers are not palindromic.

**Example :**

```
Input : 12121
Output : True

Input : 123
Output : False
```



*/
bool Solution::isPalindrome(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A<0)
    return 0;

    string s=to_string(A);
    string n=to_string(A);
    reverse(s.begin(),s.end());
    if(s.compare(n)==0)
    return 1;
    else return 0;

}
