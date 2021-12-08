/*
Given a string, find the rank of the string amongst its permutations sorted lexicographically.
Assume that no characters are repeated.

**Example :**

```
Input : 'acb'
Output : 2

The order permutations with letters 'a', 'c', and 'b' :
abc
acb
bac
bca
cab
cba
```

The answer might not fit in an integer, so return ```your answer % 1000003```

*/


class Solution {
    public:
        #define MOD 1000003

        void initializeFactorials(int totalLen, vector<int> &fact) {
            long long int factorial = 1;
            fact.push_back(1); // 0!= 1
            for (int curIndex = 1; curIndex < totalLen; curIndex++) {
                factorial = (factorial * curIndex) % MOD;
                fact.push_back(factorial);
            }
            return;
        }

        int findRank(string S) {
            // Initializations

            int charCount[256]; // count of characters in S.
            memset(charCount, 0, sizeof(charCount));
            for (int i = 0; i < S.length(); i++) charCount[S[i]]++;

            vector<int> fact; // fact[i] will contain i! % MOD
            initializeFactorials(S.length() + 1, fact);

            long long int rank =  1;
            for (int i = 0; i < S.length(); i++) {
                // find number of characters smaller than S[i] still left.
                int less = 0;
                for (int ch = 0; ch < S[i]; ch++) {
                    less += charCount[ch];
                }
                rank = (rank + ((long long)fact[S.length() - i - 1] * less)) % MOD;
                // remove the current character from the set.
                charCount[S[i]]--;
            }
            return rank;
        }
};


/*
void swap(char *x, char*y)
{
    char temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void back(char *s,int l, int size, set <string> &lis)
{
    if(l==size-1){
    lis.insert(s);
    //cout<<s;
    }
    else{
        for(int i=l;i<size;i++)
        {
            swap(s+i,s+l);
            back(s,l+1,size,lis);
            swap(s+i,s+l);
        }
    }
}
int Solution::findRank(string A) {
    int size=A.length();
    set <string> lis;

    //vector<char> str(A.c_str(), A.c_str() + A.size());
    char *str= new char[A.length()];
    strcpy(str,A.c_str());
    //cout<<str.size();
    back(str,0,size,lis);
    string a;int x=0;
     delete [] str;
    for(auto i=lis.begin();i!=lis.end();i++)
    {
        a=*i;
        if(a.compare(A)==0)return (x+1)%1000003;
        x++;
    }


}

---------------------------------------------------------------------

long long factorial(long long x, long long result = 1) {
  if (x == 1) return result; else return factorial(x - 1, x * result);
}
long long back(vector <char> &st, int r, int sz)
{
    if(r==sz-1)
    return 0;
    char c=st[r];char ch;
    long long rank=0;
    long long sum=0;
    for(int i=r+1;i<sz;i++)
    {
        ch=st[i];
        if(ch<c)
            sum++;
    }
    rank= rank + (sum)*factorial(sz-r-1);

    return (rank + back(st,r+1,sz))%1000003;

}
int Solution::findRank(string A) {
    int size=A.length();
    set <string> lis;

    vector<char> str(A.c_str(), A.c_str() + A.size());
    //cout<<str.size()<<"hol";
    long long ans=back(str,0,size);

    //cout<<ans;
    return (int)((ans+1) % 1000003);


}
