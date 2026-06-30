#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int x=1;
    cout<<"Enter the number of rows: "<<endl;
    cin>>n;
    int count=1;
    for(int i=0;i<n;i++){
        for(int j=1;j<=count;j++){
            cout<<x<<" ";
            x++;
        }
        count++;
        cout<<endl;
    }

    return 0;
}