//ta errado ainda, mas pelo menos agr a função ta lendo os array <3 (eu acho)

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

    

    //bicoloridade
    bool dfs(int v, vector<vector<int>> &adj, bool (&vis)[], bool (&cor)[]){

        vis[v] = true;
        for (int u: adj[v]){
            
            if(!vis[u]){
                
                cor[u] = !cor[v];
                if(!dfs(u, adj, vis, cor)){

                    return false;

                }
                else if(cor[v] == cor[u]){

                    return false;

                }
                

            }



        }

        return true;

    }



int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    
    int n; cin >> n;
    int m; cin >> m;
    vector<vector<int>> grafo(n);
    bool vis[n];
    bool cor[n];

    for (int i = 0; i < m; i++){

        int a; cin >> a;
        int b; cin >> b;

        grafo[a-1].push_back(b-1);
        grafo[b-1].push_back(a-1);


    }

    if(dfs(0, grafo, vis, cor)){ //não tenho ctz se é 1 mesmo, pq daí se um não tiver amizade e o resto tiver amizade entre si, lascou...

        for(bool b:cor){

            if(b == true){
                cout << 1 << " ";
            }
            else{

                cout << 2 << " ";
            }

        }


    }
    else{

        cout << "IMPOSSIBLE" <<'\n';

    }

    return 0;
}
