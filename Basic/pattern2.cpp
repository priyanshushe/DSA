#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout<<"Enter the number of rows: "<<endl;
    cin>>n;
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }

    return 0;
}