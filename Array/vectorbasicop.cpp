#include <iostream>
#include<vector>
using namespace std;
int linearsearch(vector<int> &nums,int target)
{
    for(auto it=nums.begin();it<nums.end();it++){
        if(*it==target){
            return 1;
        }
    }
    return -1;
}
int main() {
    vector<int> vec={4,8,6,2,9};

    //LINEAR SEARCH ON VECTOR


    int target;
    cout<<"Enter the key to be found: ";
    cin>>target;
    int a=linearsearch(vec,target);
    if(a==1){
        cout<<"Key found"<<endl;
    }
    else{
        cout<<"Key not found"<<endl;
    }

    //REVERSE OF VECTOR

    
    cout<<"Reverse of given vector is: "<<endl;
    for(auto it=vec.rbegin();it<vec.rend();it++){
        cout<<*it;
        if(it!=vec.rend()-1){
            cout<<", ";
        }
    }
    return 0;
}