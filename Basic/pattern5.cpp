//interesting one
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout<<"Enter the number of rows: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
            for(int k=0;k<=i;k++){
                cout<<" ";
            }
            for(int j=1;j<=(n-i);j++){
                cout<<(i+1);
            }
        cout<<endl;
    }

    return 0;
}