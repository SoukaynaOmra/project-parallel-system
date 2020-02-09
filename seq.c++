#include <iostream>
#include <stdio.h>
#include <mpi.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;


int main(int argc, char *argv[]){

	
int n = atoi(argv[1]);

int * a=(int*)malloc(sizeof(int)*n);
for(i = 0; i < n; i++) {
	    a[i] = rand()%100;
	 }

  int phase,temp;
  for (phase = 0; phase<n; phase++) {
    if (phase%2 ==0) {
      /* even phase*/
      for (int i=1; i<n; i+=2) {
        if (a[i-1]> a[i]){
          temp=a[i];
          a[i]=a[i-1];
          a[i-1]=temp;
        }
      }
      }else {/*odd phase*/
        for ( int i = 1; i < n-1; i+=2) {
          if (a[i]>a[i+1]) {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
      	   }
    	}
       }
   }

return 0;
}
