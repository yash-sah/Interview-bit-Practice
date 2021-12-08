#include<bits/stdc++.h>
using namespace std;
vector<int> sieve(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> ans;
    int n=A;
    int primes[A];
    for(int j=0;j<=n;j++)primes[j]=1;
    primes[0]=0;
    primes[1]=0;
    primes[2]=1;
    int i=0;
    for(int j=2;j<=sqrt(A);j++)
    {
        if(primes[j]==1)
        for(int k=2;k*j<=n;k++)
        {
            primes[k*j]=0;
        }
    }

    for(int j=0;j<=n;j++)
    {
        if(primes[j]==1)
        ans.push_back(j);
    }


    return ans;
}
int main()
{

    return 0;
}
