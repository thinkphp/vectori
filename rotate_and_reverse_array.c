#include <stdio.h>

void _reverse_arr(int *p, int lo, int hi) {
 
     if(lo < hi) {

     	int holder = p[lo];
     	    p[lo] = p[hi];     	
     	    p[hi] = holder; 
            _reverse_arr(p, lo + 1, hi - 1); 
     }      

}

void reverse_arr(int *p, int size) {

     _reverse_arr(p, 0, size - 1);
}

void rotate_arr(int *p, int size, int k) {

     for(int i = 1; i <= k; ++i) {

     	 int last = p[size - 1];

     	 for(int j = size - 1; j > 0; --j) {

     	 	 p[ j ] = p[ j - 1];
     	 }

     	 p [ 0 ] = last;
     }
}

void display(int *p, int size) {

	 for(int i = 0; i < size; ++i) printf("%d ", p[i]);

	 printf("\n"); 	
}

//Rotate and Reverse the Array
int main(int argc, char const *argv[])
{

	int arr[10] = {1,2,3,4,5,6,7,8,9,0};

	int *p = arr, size = sizeof(arr)/sizeof(arr[0]);

    printf("Initial Array\n");
	display(p, size);

    printf("Rotate 3 k\n");
  	rotate_arr(p, size, 3);

  	display(p, size);

    printf("Reverse Array\n");
  	reverse_arr(p, size);

  	display(p, size);

	return 0;
}
