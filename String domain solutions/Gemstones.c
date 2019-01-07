#include<stdio.h>
int init(int* ar){
    for(int i=0;i<26;i++)
        ar[i] = 0;
    return 0;
}
int main(){
    int n;
    char str[101];
    int ar1[26],ar2[26];
    init(ar1);
    init(ar2);
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",str);
        for(int j=0;str[j] != '\0';j++){
            ar1[str[j]-'a']++;
        }
        for(int j=0;j<26;j++){
            if(ar1[j] != 0){
                ar2[j]++;
            }
        }
        init(ar1);
    }
    int sum = 0;
    for(int i=0;i<26;i++){
        if(ar2[i] == n){
            sum ++;
        }
    }
    printf("%d",sum);
    return 0;
}
