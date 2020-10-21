/*
    ID:19005001
    LANG:C++
    PROG: gift1

*/
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
 
typedef tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update> order_set;
typedef long long  ll ;
#define     rep(i, begin, end)          for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define     what_is(x)                  fout << #x << " is " << x << endl;
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
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
    int n;
    fin>>n;
    string name[n];
    for(int i=0;i<n;i++){fin>>name[i];}
    map<string,int> mp;
    for(int i=0;i<n;i++){
        string nm;
        fin>>nm;
        int mn;
        fin>>mn;
        int fr;
        fin>>fr;
        mp[nm]-=mn;
        if(fr==0){mp[nm]+=mn;}
        else{
            for(int j=0;j<fr;j++){
                string frname;
                fin>>frname;
                mp[frname]+=mn/fr;
            }
            mp[nm]+=mn%fr;
        }
    }
    for(int i=0;i<n;i++){
        fout<<name[i]<<" "<<mp[name[i]]<<endl;
    }

}
int main(){
    fio;   
    int test;
    // fin>>test;
    test=1;
    while(test--){
        solve();
    }
    return 0;
}
 
 