#o meu refrigerador nao funciona
s = input()

tam = len(s)

i_eszett = -1;
qnt_eszett = 0;

i = 0
while i < tam:
    
    if s[i] == 'S' and s[i+1] == 'S':
            
        i_eszett = i;
        qnt_eszett+=1;
        
        if i + 2 < tam - 1 and s[i+2] == 'S':
            
            qnt_eszett+=1;
            i += 3;
            break;
            
        else:
            
            i+= 2;
            
            
    
    i += 1
    
print(s.lower())
s = s.lower()

if i_eszett != -1:
        
        if qnt_eszett == 1:
           
            primeira_parte = s[0:(i_eszett-1)]
            print(primeira_parte)
            #print(s[0:(i_eszett-1)] ++ 'B' ++ s[i_eszett + (2:tam-1]))
            
            
            
        
