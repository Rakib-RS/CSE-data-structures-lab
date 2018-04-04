#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,l,a[10][10],b[30],r,c;
    for(i=1;i<=15;i++){
        cin>>b[i];
    }
    cout<<"Enter row and colom that you want :\n";
    cin>>r>>c;
    l=(r*(r-1))/2+c;
    cout<<b[l]<<endl;
    return 0;
}
