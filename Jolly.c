#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define tam 3000
int main() {
    int a, n, k, i, v[tam], w[tam], d, z;
    while(scanf("%d", &n)!=EOF){
    d=0;
    for(k=0;k<n;k++){scanf("%d", &v[k]);}
    for(k=0;k<n-1;k++){
        if(v[k]>=v[k+1])w[k]=v[k]-v[k+1];
        if(v[k]<v[k+1])w[k]=v[k+1]-v[k];
    }   
    for(k=0;k<n-1;k++)for(i=0;i<n-1;i++)
    {
        if(i>k)if(w[k]>w[i]){z=w[i];w[i]=w[k];w[k]=z;}
    }
    for(k=0;k<n-1;k++){
      
        if(w[k]==k+1)d++;
        
    }
    /*for(k=0;k<n-1;k++){
        if(w[k]>=w[k+1])if(w[k]-w[k+1]!=1)d++;
        if(w[k]<w[k+1])if(w[k+1]-w[k]!=1)d++;
    }*/
	if(d!=n-1)printf("Not jolly\n");
	else printf("Jolly\n");
        
    }
	return 0;
}