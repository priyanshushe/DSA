#include <iostream>
using namespace std;
int linearsearch(int arr[],int size,int target) /*here we need not to use '&' because for passing we are using array 
variable name only which itself contains the address of variables in it*/
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==target)
            return i;
    }
    return -1;
}
int main() {
    int target;
    int weight[5]={82,75,64,67,90};
    cout<<"Enter the weight to be searched: ";
    cin>>target;
    int index=linearsearch(weight,5,target);
    if(index!=-1)
    {
        cout<<"The searched weight is as position "<<index<<" in list."<<endl;
    }
    else{
        cout<<"Weight not found"<<endl;
    }
    return 0;
}
