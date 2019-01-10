#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int compare(char *a, char *b);
void sort(char **ar, int n);
char **temp;

int main(){
char **strings;
int n, i, j, min;
scanf("%d", &n);
strings=(char **)malloc(n*sizeof(char *));
temp=(char **)malloc(n*sizeof(char *));
for(i=0; i<n; i++) scanf("%ms", &(strings[i]));
sort(strings, n);
for(i=0; i<n; i++) puts(strings[i]);
return 0;
}

int compare(char *a, char *b) {
if (strlen(a)!=strlen(b)) return strlen(a)-strlen(b);
return strcmp(a, b);
}

void sort(char **ar, int n) {
int nl, nh, i, j, k;

if (n<=1) return;
nl=n/2;
nh=n-nl;
sort(ar, nl);
sort(&(ar[nl]), nh);
for(k=i=0, j=nl; i<nl&& j<n; k++) {
        //fprintf(stderr, "%d %d %d %d\n", i, j, k, n);
if (compare(ar[i], ar[j])<0) {
temp[k]=ar[i++];
        } else {
temp[k]=ar[j++];
        }
    }
while (i<nl) temp[k++]=ar[i++];
while (j<n) temp[k++]=ar[j++];
for(i=0; i<n; i++) ar[i]=temp[i];
}


