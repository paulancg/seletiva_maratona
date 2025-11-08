//link

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    
    string s; cin >> s;
    int tam = s.size();
    int i_eszett = -1;
    int qnt_eszett = 0;
    
    for (int i = 0; i < tam - 1; i++){

        if (s[i] == 'S' and s[i+1] == 'S'){
            
            i_eszett = i;
            qnt_eszett++;
            
            if(i + 2 < tam - 1 and s[i+2] == 'S'){
                
                qnt_eszett++;
                i += 3;
                break;
                
            }
            else{
                
                i+= 2;
                
                
            }
            
            
        }
    }
    
    for (int i = 0; i < tam; i++){

        //cout << tolower(s[i]);
        //cout << s[i] +32;
        
    }
    
    cout << '\n';
    
    
    if(i_eszett != -1){
        
        if (qnt_eszett == 1){
            
            for(int i = 0; i < i_eszett; i++){
                
                cout << s[i];
                
                
            }
            
            cout << 'B';
            
            for(int i = i_eszett + 2; i < tam; i++){
                
                cout << s[i];
                
                
            }
            
            cout << '\n';
            
        }
        
        
    }
    

    return 0;
}
