/*Problem Code -DIVFACT Platform -SPOJ Solution by-Raman Mehta*/
#include<bits/stdc++.h>
#define m 1000000007
#define int long long
using namespace std;

void FIO(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    // #ifndef ONLINE_JUDGE
    //        freopen("input.txt","r",stdin);
    //        freopen("output.txt","w",stdout);
    // #endif

}
#define MAX 50005
std::bitset<MAX> isPrime;
std::vector<int>primes;
void gen_primes(){
    isPrime.set();
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i*i<=MAX;i++){
        if(isPrime[i]){
            for(int j=i;j*i<=MAX;j++){
                isPrime[i*j]=false;

            }
        }
    }
    primes.push_back(2);
    for(int i=3;i<=MAX;i+=2){
        if(isPrime[i]) primes.push_back(i);
    }
}
int divisors(int n){
    int res=1;
    for(int i=0;primes[i]<=n;i++){
        int p=primes[i];
        int count =0;
        while((n/p)!=0){
            count=(count+(n/p))%m;
            p=p*primes[i];
        }
        res=((res)*(count+1)%m)%m;
    }
    return res;
}
int32_t main(){
    FIO();
    gen_primes();
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
         cout<<divisors(n)<<endl;

    }
     return 0;
}


