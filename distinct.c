#include <stdio.h>

int main(int argc, char const *argv[])
{
	int vec[] = {23, 2, 1, 13, 23, 13, 5, 2, 1}, n;

	n = sizeof(vec)/sizeof(vec[0]);

    for(int i = 0; i < n - 1; i++) {

    	   if( vec[i] ) {

    	   	  printf("%d ", vec[i]);

    	   	  for(int j = i + 1; j < n; ++j) {

    	   	  	if(vec[i] == vec[j]) {

    	   	  		vec[j] = 0;
    	   	  	}
    	   	  }
    	   }
    } 

    if(vec[n-1]) printf("%d", vec[n-1]);

	return 0;
}
