#include <iostream>
#include<climits>
using namespace std;
int findindex(int arr[],int size,int target)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}

int main() {

    int arr[5]={5,7,9,9,12};
    int arr2[4]={4,6,9,1};
    int sum=0;
    int product=1;
    int minimum=INT_MAX;
    int maximum=INT_MIN;

    //FINDINF SUM AND PRODUCT OF ALL ELEMENTS OF AN ARRAY


    for(int i=0;i<5;i++)
    {
        sum+=arr[i];
        product*=arr[i];
    }
    cout<<"The sum of all elements of array is: "<<sum<<endl;
    cout<<"The product of all elements of array is: "<<product<<endl;

    //SWAPPING MINIMUM AND MAXIMUM VALUE ELEMENT IN ARRAY


    for(int i=0;i<5;i++)
    {
        minimum=min(minimum,arr[i]);
        maximum=max(maximum,arr[i]);
    }
    int a=findindex(arr,5,maximum);
    int b=findindex(arr,5,minimum);
    swap(arr[a],arr[b]);
    cout<<"The new array after swapping the maximum and minimum value element is: ";
    for(int i=0;i<5;i++){
        cout<<arr[i];
        if(i!=4){
            cout<<", ";
        }
    }
    cout<<endl;

    //PRINTING ALL UNIQUE VALUES OF AN ARRAY

    cout<<"The unique elements in arrays is: ";
    for(int i=0;i<5;i++)
    {
        bool duplicate=false;
        for(int j=i+1;j<5;j++){
            if(arr[i]==arr[j]){
                duplicate=true;
                break;
            }
        }
        if(!duplicate)
        {
            cout<<arr[i];
            if(i!=4)
            {
                cout<<", ";
            }
        }
    }


    //PRINTING INTERSECTION OF TWO ARRAYS
    cout<<endl;

    cout<<"The intersection of two arrays is: ";
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(arr[i]==arr2[j])
            {
                cout<<arr[i]<<" ";
            }
        }
    }
    return 0;
}

//WAF to print only the values in array which are not repeated.
//WAF to print intersection of two array(PRINT ONE NUMBER ONLY ONCE).