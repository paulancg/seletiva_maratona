//link

#include <bits/stdc++.h>
#define ll long long int
using namespace std;



string str_tolower(string s)
{
    transform(s.begin(), s.end(), s.begin(),
                
                   [](unsigned char c){ return tolower(c); }
                  );
    return s;
}


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
            
            if(i + 2 <= tam - 1 and s[i+2] == 'S'){
                
                qnt_eszett++;
                i += 3;
                break;
                
            }
            else{
                
                i+= 2;
                
                
            }
            
            
        }
    }
    
    s = str_tolower(s);
    cout << s << '\n';
    
    
    
    
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
        
        else if(qnt_eszett == 2){
            
            
            for(int i = 0; i < i_eszett; i++){
                
                cout << s[i];
                
                
            }
            
             cout << 'B';
            
            for(int i = i_eszett + 2; i < tam; i++){
                
                cout << s[i];
                
                
            }
            
            cout << '\n';
            
            
            //caso 2
            
            for(int i = 0; i <= i_eszett; i++){
                
                cout << s[i];
                
                
            }
            
             cout << 'B';
            
            for(int i = i_eszett + 3; i < tam; i++){
                
                cout << s[i];
                
                
            }
            
            cout << '\n';
            
            
        }
        
        
    }
    

    return 0;
}
