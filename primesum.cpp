/*


Given an even number ( greater than 2 ), return two prime numbers whose sum will be equal to given number.

NOTE A solution will always exist. read Goldbach’s conjecture
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> primesum(int A) {

    vector<bool> arr(A);
    vector<int> ans;

    int n=A;

    for(int i=0;i<=n;i++)
    arr[i]=1;
    arr[0]=0;
    arr[1]=0;
    for(int i=2;i<=sqrt(A);i++)
    {
        if(arr[i]==1)
        {
            for(int j=2;j*i<=n;j++)
            {
                arr[j*i]=0;
            }
        }
    }


   for(int i=2;i<=n-1;i++)
    {
            if(arr[i]==1 && arr[n-i]==1){


                ans.push_back(i);
                ans.push_back(n-i);
                 return ans;}


    }

}
int main()
{

    return 0;
}


