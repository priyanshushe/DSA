#include <iostream>
using namespace std;

int main() {

    int arr[6]={2,6,3,9,7,10};
    int arr2[6];
    int size1=sizeof(arr);//here sizeof return byte value not int
    cout<<size1<<endl;
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;

    //REVERSING AND STORING VALUE IN DIFFERENT ARRAY

    //int size =6;
    // cout<<"The reverse of given array is: "<<endl;
    // for(int i=5;i>=0;i--)
    // {
    //     arr2[size-1-i]=arr[i];
    //     cout<<arr2[size-1-i];
    //     if(i!=0)
    //     {
    //         cout<<", ";
    //     }
    // }



    //USING 2-POINTER APPROACH
    
    int start=0;
    int end=size-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;end--;
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i];
        if(i!=size-1)
        {
            cout<<", ";
        }
    }

    return 0;
}