#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int answer=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){ 
            int z=k-i-j;
            if(z>=1 && z<=n)answer+=1;
        }
    }
    cout<<answer<<endl;
    return 0;
}