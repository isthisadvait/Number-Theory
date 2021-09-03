/*Algorithm-Sieve in Linear Time Solution by-Raman Mehta*/
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
#define MAX 1000005
int sieve[MAX];
void gen_primes(){
    for(int i=1;i<MAX;i++){
        sieve[i]=i;
    }
    std::vector<int>primes;
    for(int i=2;i<MAX;i++){
        if(sieve[i]==i){
            primes.push_back(i);
        }
        for(int j=0;j < primes.size() and primes[j]<=sieve[i] and i*primes[j]<MAX;j++){
           sieve[i*primes[j]]=primes[j]; 
        
        }
    }
}
int main(){
    
    gen_primes();
    int N;
    cin
    return 0;
     
}

