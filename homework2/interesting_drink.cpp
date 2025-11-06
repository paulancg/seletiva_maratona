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
        
        
    }

/**

    bool Binary_Search(int n, int x, int a[]){
        
        int left = 0;
        int right = n - 1:
        
        while (left <= right){
            
            int mid = (left + right)/2;
            
            if (a[mid] < x){
                
                left = mid + 1;
                
            }
            
            else if (a[mid] > x){
                
                right = mid - 1;
                
            }
            
            else{
                
                return true;
            
            }
        }
        return false;
        
    }
**/    
    return 0;
}
