// naive approach is to find the minimum of the two numbers and keep trying smaller smaller numbers
// Also to find the lcm use gcd to calculate it i.e. lcm=a*b/gcd

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
