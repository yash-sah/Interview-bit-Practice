/*
Reverse digits of an integer.

**Example1:**

x = 123,

return 321
**Example2:**

x = -123,

return -321

Return 0 if the result overflows and does not fit in a 32 bit signed integer

*/
int Solution::reverse(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int flag=1;
    int n=0;
    if(A<0)
    {    flag=-1;
         A=A*-1;
    }
    //int n=0;
    int d;
    while(A>0)
    {
        d=A%10;
        if((n>(INT_MAX/10)) || (n==(INT_MAX/10) && d>(INT_MAX % 10)))
        return 0;
        n=(n*10)+d;
        A=A/10;
    }
    //cout<<n<<" kya ho raha hai";

    //cout<<n;
    /*
    int x=10;
    while(n>0)
    {
        if(n%10 != num/x)return 0;
        n=n/10;
        x=x*10;
    }
    */


        return n*flag;
   // return 1;
   // cout<<n<<" holla ";
       // cout<<INT_MAX;
   // if(n>INT_MAX || n<INT_MIN) return 0;
    //return n;


}

