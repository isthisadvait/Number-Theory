/* Problem Code -NFACTOR Platform -SPOJ Solution by-Raman Mehta*/
	
    	#include<bits/stdc++.h>
	#define ll long long 
	using namespace std;
	void FIO(){
	    std::ios_base::sync_with_stdio(0);
	    std::cin.tie(0);
	    std::cout.tie(0);
	    // #ifndef ONLINE_JUDGE
	    //        freopen("input.txt","r",stdin);
	    //        freopen("output.txt","w",stdout);
	    // #endif
	}
	#define MAX 1000005
	std::vector<std::vector<ll>>ff(11,std::vector<ll>(MAX,0));
	std::vector<int>dis_prime_fac(MAX,0);
	
	void precompute(){
	     //storing distint prime factor a number have.
	    for(ll i=2;i<MAX;i++){
	        if(dis_prime_fac[i]==0){
	            for(ll j=i;j<MAX;j+=i){
	                dis_prime_fac[j]++;
	            }
	        }
	    }
	    // precomputing factorful array
	    for(int i=0;i<=10;i++){
	        for(int j=1;j<MAX;j++){
	            
	            ff[i][j]=ff[i][j-1]+(dis_prime_fac[j]==i);
	        }
	    }
	}
	int main(){
	   FIO();
	    precompute();
	    int t; std::cin>>t;
	    while(t--){
	        ll a,b,n;
	        std::cin>>a>>b>>n;
	        ll ans =ff[n][b];
	        if(a-1>=0) ans=ans-ff[n][a-1];
	        cout<<ans<<endl;
	    }
	     
	}
	
	


