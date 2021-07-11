#include<bits/stdc++.h> 
#define int long long  
using namespace std; 
 
const int N = 1e6; 
int arr[N],temp1[N],temp2[N]; 
 
 
void calculate( int n) 
{ 
    temp1[1] = arr[1]; 
    temp2[n] = arr[n]; 
    for(int i=n-1;i>0;i--) 
        temp2[i] = __gcd(temp2[i+1],arr[i]); 
    for(int i=2;i<n+1;i++) 
        temp1[i] = __gcd(temp1[i-1],arr[i]); 
} 
int32_t main() 
{ 
    ios_base:: sync_with_stdio(false); 
    cin.tie(NULL); 
    int t; 
    cin>>t; 
    while(t--) 
    { 
        int n; 
        cin>>n; 
        for(int i=1;i<n+1;i++) 
            cin>>arr[i]; 
        sort(arr,arr+n+1); 
        calculate(n); 
        int temp = 0; 
        int sum = 0; 
        int result = LLONG_MAX; 
        for(int i=1;i<n+1;i++) 
        {    
            sum+=arr[i]; 
        } 
        for(int i=1;i<n+1;i++) 
        { 
            temp = (sum - arr[i]+ __gcd(temp1[i-1],temp2[i+1])) / __gcd(temp1[i-1],temp2[i+1]); 
            if(temp < result) 
                result = temp; 
        } 
        cout<<result<<endl; 
    } 
    return 0; 
}
