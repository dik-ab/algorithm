#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)


double f(double x){
    return x*x*x + x;
}

int main(){
    int n;
    cin>>n;
    double left=0,right=100,mid;
    while(right-left>0.0001){
        mid=(left+right)/2.0;
        double val=f(mid);
        if(val>1.0*n)right=mid;
        else left=mid;
    }
    printf("%.12lf\n",mid);
    return 0;
}