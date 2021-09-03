/*Problem Code -CUBEFR Platform -SPOJ Solution by-Raman Mehta*/
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
#define MAX 1000001
std::bitset<MAX> isCubefree;
std::unordered_map<int,int>cubefree;
void gen_cubefree(){
    isCubefree.set();
    isCubefree[0]=false;
    for(int i=2;i*i*i<=MAX;i++){
        if(isCubefree[i]){
            for(int mul=1;i*i*i*mul<=MAX;mul++)
                isCubefree[i*i*i*mul]=false;
            }
        
    }
    cubefree[1]=1;
    int j=1;
    for(int i=2;i<=MAX;i++){
        if(isCubefree[i]) cubefree[i]=++j;
    }
}
int main(){
    FIO();
    gen_cubefree();
    int t; cin>>t; int n;
    for(int x=1;x<=t;x++){
         cin>>n;
        if(isCubefree[n]) cout<<"Case "<<x<<": "<<cubefree[n]<<endl;
        else cout<<"Case "<<x<<": "<<"Not Cube Free\n";
    }
   // for(auto x: cubefree) cout<<x<<endl;
}


