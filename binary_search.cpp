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
