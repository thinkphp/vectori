#include <stdio.h>
#include <malloc.h>
#define FIN "scarface.in"
#define NOT_FOUND 0

void sort(int *p, int count) {

     int finished = 0, swapped, size = count, i;

     while(!finished) {

     	    swapped = 0;

     	    for (int i = 0; i < size - 1; ++i)
     	    {
     	    	if(p[i] > p[i+1]) {int holder = p[i]; p[i] = p[i+1]; p[i+1] = holder;swapped = 1;}
     	    }
     	    if(swapped) size--; else finished = 1;
     } 
}

int rec_bs(int *p, int lo, int hi, int key) {

int m;

	if(lo > hi) return NOT_FOUND;

	 m = (lo + hi) >> 1;

	if(key < p[m]) return rec_bs(p, 0, m - 1, key);

    else if(key > p[m]) return rec_bs(p, m + 1, hi, key);		

    else return m + 1;
    
}

int _recursive_bs(int *p, int n, int key) {

	rec_bs(p, 0, n - 1, key);
}

int _iterative_bs(int *p, int n, int key) {
	
	int lo = 0, hi = n - 1, found = 0, m;

	while(lo<=hi && !found) {

		  m = (lo + hi)>>1; 

		  if(key < p[m]) hi = m - 1;

		  else if(key > p[m]) lo = m + 1;

		  else found = 1;
	}

	return found;
}

int binary_search(int *p, int count, int key) {
    int i;   
	sort(p, count);
		
    //return _iterative_bs(p, count, key);
    return _recursive_bs(p, count, key);  
    
}

int main(int argc, char **argv) {

	int *p, n, i;

	int num;

	num = atoi(argv[1]);

	freopen(FIN, "r", stdin);

	scanf("%d", &n);

    p = (int*)malloc(sizeof(int) * n);

	for(i = 0; i < n; ++i) {

		scanf("%d", &p[i]);
	}

	for(i = 0; i < n; ++i) {

		printf("%d ", p[i]);
	}

	
    printf("\n");
    
    if(binary_search(p, n, num)) printf("%s\n", "found"); else printf("%s\n", "Not Found");
	

    printf("\n");

	return(0);
}