#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define l1 long long
#define mod 1000000007

l1 power(l1 bs, l1 pw){
    l1 res=1;
    while(pw!=0){
        if(pw%2==0){
            bs=((bs%mod)*(bs%mod))%mod;
            pw=floor(pw/2);
        }
        else{
            res=((res%mod)*(bs%mod))%mod;
            pw=pw-1;
        }
    }
    return res;
}

l1 chefona(l1 num){
    l1 chefnum=num;
    l1 retnum=0;
    if(num<10){
        retnum=chefnum;
    }
    else if(num>=10){
        num=num/10;
        while(num!=0){
            chefnum=chefnum*10+num%10;
            num=num/10;
        }
        retnum=chefnum;
    }
    return retnum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    l1 a[100001]={0};
    l1 prearray[100001]={0};
    for(l1 i=1;i<=100001;i++){
        a[i]=chefona(i);
        prearray[i]=prearray[i-1]+a[i];
    }
    l1 t;
    cin>>t;
    while(t--){
        l1 l,r;
        cin>>l>>r;
        l1 diff=prearray[r]-prearray[l];
        cout<<power(a[l],diff)<<"\n";
        
    }
    return 0;
}
