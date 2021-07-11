// cpp

#include<iostream>
using namespace std;
int main()
{
    int d,x,y,z;
    int n;
    cin>>n;
    while(n--){
        cin>>d>>x>>y>>z;
        int w1 = x*7;
        int w2 = y*d + z*(7-d);
        if(w1>w2)
            cout<<w1<<endl;
        else
            cout<<w2<<endl;
    }

    return 0;
}
