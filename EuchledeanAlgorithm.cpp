#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int EuchledeanAlgorithm(int ae,int be)
{
    if(be==0)
    return ae;
    else 
    {
         return EuchledeanAlgorithm(be,ae%be);
    }
}


int main() {
    int ae=4,be=6,resr;
    resr = EuchledeanAlgorithm(ae,be);
    cout<<resr<<endl;
    return 0;
}
