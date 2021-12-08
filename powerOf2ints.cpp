

/*Given a positive integer which fits in a 32 bit signed integer, find if it can be expressed as A^P where P > 1 and A > 0. A and P both should be integers.*/

#include<bits/stdc++.h>
using namespace std;
float intlog(double base, double x) {
    return (float)(log(x) / log(base));
}
bool isPower(int A) {
    double val,vali,valf;
    //int vali;
    if(A==1)return 1;
    for(int i=2;i<=sqrt(A);i++)
    {
        val=(double)intlog(i,A);

        //vali=(int)val;
        valf=modf(val,&vali);
        //cout<<val<<" "<<i<<" "<<(int)val<<" k ";
       // cout<<valf<<" "<<val<<" "<<vali<<" i ";
        if(valf==0){
        return 1;}
    }
    return 0;
}

int main()
{

    return 0;
}



