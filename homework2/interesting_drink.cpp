//link

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    std::vector<int> vec;
    int n; cin >> n;
    
    for (int i = 0; i < n; i++){
        
        int x; cin >> x;
        vec.push_back(x);
        
    }

    sort(vec.begin(), vec.end());

    int q; cin >> q;

    for (int i = 0; i < q; i++){
        
        int m; cin >> m;
        int valor = upper_bound(vec.begin(), vec.end(), m) - vec.begin();
        cout << valor << '\n';
        
    }


    return 0;
}
