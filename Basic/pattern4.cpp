#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout<<"Enter the  number of rows: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<i;
        }
        cout<<endl;
    }

    return 0;
}