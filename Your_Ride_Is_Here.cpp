/*
    ID:19005001
    LANG:C++
    PROG: ride

*/
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
 
typedef tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update> order_set;
typedef long long  ll ;
#define     rep(i, begin, end)          for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define     what_is(x)                  cout << #x << " is " << x << endl;
// #define     endl                        '\n'
#define     fi                          first
#define     sec                         second
#define     pb                          push_back
#define     vi                          vector<int>
#define     vii                         vector<pair<int,int>>     
#define 	fio 						ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define 	sz(x) 						(int)x.size()
#define 	all(x) 						begin(x), end(x)
void solve(){
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string a;
    string b;
    fin>>a>>b;
    int n1=1,n2=1;
    for(auto ch:a){
        n1*=ch-'A'+1;
        n1%=47;
    }
    for(auto ch:b){
        n2*=ch-'A'+1;
        n2%=47;
    }
    if(n1==n2){fout<<"GO"<<endl;}
    else{fout<<"STAY"<<endl;}

}
int main(){
    fio;   
    int test;
    // cin>>test;
    test=1;
    while(test--){
        solve();
    }
    return 0;
}
 
 