#include <iostream>
#include<climits>
using namespace std;
int findindex(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target)
        {
            return i;
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int highest=0;
    int marks[10];
    int size=10;
    int lowest=INT_MAX;
    cout<<"Enter the marks scored by students: "<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>marks[i];
    }
    // for(int i=0;i<10;i++)
    // {
    //     if(marks[i]>highest)
    //     {
    //         highest=marks[i];
    //     }
    // }
    // for(int i=0;i<10;i++)
    // {
    //     if(marks[i]<lowest)
    //     {
    //         lowest=marks[i];
    //     }
    // }
    //In place of multiple loops we can use single loop and min/max function to write optimal code
    for(int i=0;i<10;i++)
    {
        lowest=min(marks[i],lowest);
        highest=max(marks[i],highest);
    }
    int a=findindex(marks,size,lowest);
    int b=findindex(marks,size,highest);
    cout<<"The highest score is: "<<highest<<" and is at index: "<<b<<endl;
    cout<<"The lowest marks scored is: "<<lowest<<" and is at index: "<<a<<endl;
    return 0;
}