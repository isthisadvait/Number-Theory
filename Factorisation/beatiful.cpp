/* Problem Code -BDOI16B Platform -SPOJ Solution by-Raman Mehta*/
	
#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void FIO(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

}


int main(){
    FIO();
    int t; std::cin>>t;ll ct =0;
    while(t--){
      ll n,k; std::cin>>n>>k;
      ll ans =LONG_MAX;
      for(int i=2;i*i<=k;i++){
          ll a1=0;
          while(k%i==0){
              a1++;
              k/=i;
          }
          if(a1==0) continue;
          ll b1=0;
          ll prime =i;
          while(prime<=n){
              b1+=(n/prime);
              prime*=i;
          }
          
          ans=std::min(ans,b1/a1);
      }
      if(k>1)//it will itself be prime
       {
           ll b1=0;
          ll prime = k;
          while(prime<=n){
              b1+=(n/prime);
              prime*=k;
          }
    
          ans=std::min(ans,b1);
       }
      if(ans==LONG_MAX){
          ans=0;
      }
      ct++;
      std::cout<<"Case "<<ct<<": "<<ans<<"\n";
    }
     return 0;
}


