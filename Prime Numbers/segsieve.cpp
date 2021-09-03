/*Problem Code -PRIME1 Platform -SPOJ Solution by-Raman Mehta*/
#include<bits/stdc++.h>
using namespace std;
void FIO(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    #ifndef ONLINE_JUDGE
           freopen("input.txt","r",stdin);
           freopen("output.txt","w",stdout);
    #endif
}
#define MAX 100005
std::bitset<MAX> isPrime;
std::vector<int>primes;
void gen_primes(){
    isPrime.set();
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i*i<=MAX;i++){
        if(isPrime[i]){
            for(int j=i;j*i<=MAX;j++){
                isPrime[i*j]=false;
            }
        }
    }
    primes.push_back(2);
    for(int i=3;i<=MAX;i+=2){
        if(isPrime[i]) primes.push_back(i);
    }
}
void segseive(int a,int b){
    
    std::vector<bool> v(b-a+1,true);
    if(a==1) a++;
    for(int i=0;primes[i]*primes[i]<=b;i++){
        int p=primes[i];
        int j=(a/p)*p;
        if(j<a) j+=p;
        for(;j<=b;j+=p){
            if(j!=p){ // so that prime won't get marked false .
                v[j-a]=false;
            }
        }
    }
    for(int i=a;i<=b;i++){
        if(v[i-a]) cout<<i<<"\n";
    }
}
int main(){
    FIO();
    gen_primes();
    int t; cin>>t;
    while(t--){
        int a,b;cin>>a>>b;
        segseive(a,b);
        cout<<endl;
    }
   return 0;  
}


