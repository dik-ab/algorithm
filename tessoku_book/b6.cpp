#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(){
    int n,q,a[100009],l[100009],r[100009];
    int atari[100009],hazure[100009];
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    cin>>q;
    for(int i=1;i<=q;i++)cin>>l[i]>>r[i];
    atari[0]=0;
    hazure[0]=0;
    for(int i=1;i<=n;i++){
        atari[i]=atari[i-1];if(a[i]==1)atari[i]+=1;
        hazure[i]=hazure[i-1];if(a[i]==0)hazure[i]+=1;
    }
    for(int i=1;i<=q;i++){
        int anum=atari[r[i]]-atari[l[i]-1];
        int hnum=hazure[r[i]]-hazure[l[i]-1];
        if(anum>hnum)cout<<"win"<<endl;
        else if(anum==hnum)cout<<"draw"<<endl;
        else cout<<"lose"<<endl;
    }
    return 0;
}