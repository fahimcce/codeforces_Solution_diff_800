#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
      int n;cin>>n;
      vector<int>v(n);
      int ans=0;
      for(int i = 0;i < n;i++){
        cin>>v[i];
        if(i %2==0){
            ans=ans+v[i];
        }
        else{
            ans = ans-v[i];
        }
      }
      cout<<ans<<endl;
    }
    
}
