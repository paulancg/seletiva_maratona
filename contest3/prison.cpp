//tle é uma mentira inventada pelos reptilianos

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    std::vector<int> esquerdas;
    vector<int> direitas;
    
    int n; cin >> n;
    
    int m; cin >> m;
    
    for (int i = 0; i < m; i++){

        int l; cin >> l;
        esquerdas.push_back(l);
        
        int r; cin >> r;
        direitas.push_back(r);
    }

    vector<int> inter;
    
    for (int i = 0; i < m-1; i++){

        if (esquerdas[i] <= esquerdas[i+1] and esquerdas[i+1] <= direitas[i]){ //fzr para mais casos dps
            
            
            if (i > 0){
                
                set<int> temp;
                
                for (int j = esquerdas[i+1]; j <= direitas[i]; j++){
                    
                    temp.insert(j);
                    
                    
                }
                
                std::vector<int> v_intersection;
                std::set_intersection(inter.begin(), inter.end(), temp.begin(), temp.end(),
                          std::back_inserter(v_intersection));
                inter = v_intersection;
            }
            
            else{
                
                for (int j = esquerdas[i+1]; j <= direitas[i]; j++){
                    
                    inter.push_back(j);
                    
                    
                }
                
                
            }    
            
        }
        
        else if (direitas[i+1] >= esquerdas[i] and direitas[i+1] <= direitas[i]){//ver se tem mais casos dps
            
            
            if (i>0){
                
                set<int> temp;
                for (int j = esquerdas[i]; j <= direitas[i+1]; j++){
                    
                    temp.insert(j);
                    
                    
                }
                std::vector<int> v_intersection;
                std::set_intersection(inter.begin(), inter.end(), temp.begin(), temp.end(),
                          std::back_inserter(v_intersection));
                inter = v_intersection;
                
            }
            else{
                
                for (int j = esquerdas[i]; j <= direitas[i+1]; j++){
                    
                    inter.push_back(j);
                    
                    
                }
            }
            
        }
    }
    
    int tam = inter.size();
    
    if (tam > 0){
        
        cout << tam << '\n';
        
    }
    else{ //isso vai precisar ser mudado pq depende
        
        
        cout << n << '\n';
        
    }
    

    return 0;
}
