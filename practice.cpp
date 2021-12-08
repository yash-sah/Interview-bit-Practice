#include<bits/stdc++.h>
using namespace std;
/*int main()
{
    int arr[]={1,2,3,2,5};
    sort(arr,arr+4);
    reverse(arr,arr+4);
    cout<<strcmp("1001","1010");
    //for(int i=0;i<5;i++)
     //   cout<<arr[i]<<" ";
    return 0;
}
*/
#include <iostream>

#include <set>

int main ()
{
  set<std::string> s;
  cout << "Adding 'Hello' and 'World' to the set twice" << endl;


  s.insert("World");
  s.insert("Hello");
  s.insert("World");

  cout << "Set contains:";
  //int i=0;
  /*while (i<s.size()) {
      cout<<s.at(i)<<" ";
        i++;
  }*/
  string a;
  for(auto i=s.begin();i != s.end(); i++)
  {
      a=*i;
      cout<<a<<" ";
  }

  return 0;
}
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

*/
