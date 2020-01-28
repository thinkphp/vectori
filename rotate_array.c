void rotate(int* v, int size, int k){
    
     for(int i = 1; i <= k; ++i) {
         
         int lastElement = v[size-1];
         
         for(int j = size - 1; j > 0 ; --j) {
             
            v[ j ] = v[ j - 1];
         }
         
         v[0] = lastElement;
     }
}

