// naive approach is to find the minimum of the two numbers and keep trying smaller smaller numbers
// Also to find the lcm use gcd to calculate it i.e. lcm=a*b/gcd

#include <iostream>
using namespace std;

int EuchledeanAlgorithm(int a,int b)
{
    if(b==0)
    return a;
    else 
    {
         return EuchledeanAlgorithm(b,a%b);
    }
}


int main() {
    int a=4,b=6,res;
    res=EuchledeanAlgorithm(a,b);
    cout<<res<<endl;
    return 0;
}