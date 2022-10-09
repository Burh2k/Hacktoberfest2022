#include<bits/stdc++.h>

using namespace std;

int main(){
    int a[]={1,2};
    int n=NULL;
    cin>>n;

    for (int i=0;i<sizeof(a);i++){
        if(n==a[i])?cout<<"Found":cout<<"Not Found";
    }

    return 0;
}
