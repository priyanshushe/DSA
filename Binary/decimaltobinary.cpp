#include <iostream>
using namespace std;
int findbinar(int num)
{
    int power=1;
    int ans=0;
    int rem;
    while(num!=0)
    {
        rem=num%2;
        num=num/2;
        ans+=(rem*power);
        power= power*10;
    }
    return ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int decNum;
    cout<<"Enter the decimal number you want to convert:"<<endl;
    cin>>decNum;
    cout<<"The binary value of given decimal number is: "<<findbinar(decNum);
    return 0;
}