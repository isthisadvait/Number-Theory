/*Algorithm - Sieve Of Eratosthenes TC = O(nln(ln)) Raman Mehta*/
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
#define MAX 10000000
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
int main(){
    FIO();
    gen_primes();
    for(int i=0;i<100;i++) cout<<primes[i]<<"\n";
     
}


