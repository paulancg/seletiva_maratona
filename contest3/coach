//link

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<int> itens;
    vector<ll> pref;
    
    int n; cin >> n;
    int x; cin >> x;
    int d; cin >> d;
    
    
    for (int i = 0; i < n; i++){
        
        int a; cin >> a;
        itens.push_back(a);
        
        
    }
    
    sort(itens.begin(), itens.end());
    
    for (int i = 0; i < n; i++){
        
        if(i > 0){
            
            pref.push_back(pref[i-1] + itens[i]);
            
            
        }
        else{
            
            pref.push_back(itens[0]);
            
        }
        
    }
    
    int qnt_times = 0;
    
    auto lower = std::lower_bound(pref.begin(), pref.end(), x) - pref.begin();

    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            
            if (j>0){
                if (itens[i] - itens[j] <= d and pref[i] - pref[j-1] >= x){
                    
                    qnt_times++;
                    
                }
            }
            else{
                
                if (itens[i] - itens[j] <= d and pref[i] >= x){
                    
                    qnt_times++;
                    
                }
                
                
            }
        }
    }

    cout << qnt_times << '\n';

    return 0;
}
