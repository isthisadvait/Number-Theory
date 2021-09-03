/* Solution by-Raman Mehta*/
		#include<bits/stdc++.h>
          using namespace std;
	
	int main(){
	    //FIO();
	    int t; std::cin>>t;
	    while(t--){
	    int n; std::cin>>n;
	    std::vector<int>v(n),fre(500005,0);
	    std::unordered_map<int,bool> m;
	    for(int i=0;i<n;i++){std::cin>>v[i];fre[v[i]]=1;m[v[i]]=true;}
	    for(int i=1;i<500005;i++){
	        if(m.count(i)){
	            for(int j=i*2;j<500005;j+=i){
	                fre[j]+=fre[i];
	            }
	        }
	    }
	    int res=0;
	    for(int i=1;i<500005;i++){
	        if(m.count(i)){
	            res+=fre[i];
	        }
	    }
	    if(m.count(0)){
	        res*=2;
	        res++;
	    }
	    cout<<res<<endl;
	    }
	    return 0;
	}


