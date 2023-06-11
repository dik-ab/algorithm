#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(){
    string n;
    cin>>n;
    int answer=0;
    for(int i=0;i<n.size();i++)
    {
        int keta;
        int kurai=(1<<(n.size()-1-i));
        if(n[i]=='0')keta=0;
        if(n[i]=='1')keta==1;
        answer+=keta*kurai;
    }
    cout<<answer<<endl;
    return 0;
}