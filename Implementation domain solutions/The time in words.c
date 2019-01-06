#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int h; 
    scanf("%d",&h);
    int m; 
    scanf("%d",&m);
    char* ho;
    if (m>30){
        if(h==12){
            h=0;
        }
        h=h+1;
    }
    if (h==1){
        ho="one";
    }
    else if(h==2){
        ho="two";
    }
    else if(h==3){
        ho="three";
    }
    else if(h==4){
        ho="four";
    }
    else if(h==5){
        ho="five";
    }
    else if(h==6){
        ho="six";
    }
    else if(h==7){
        ho="seven";
    }
    else if(h==8){
        ho="eight";
    }
    else if(h==9){
        ho="nine";
    }
    else if(h==10){
        ho="ten";
    }
    else if(h==11){
        ho="eleven";
    }
    else if(h==12){
        ho="twelve";
    }
    if (m==00){
        printf("%s o' clock",ho);
    }
    else if(m==1){
        printf("one mintue past %s",ho);
    }
    else if(m==2){
        printf("two minute past %s",ho);
    }
    else if(m==3){
        printf("three minute past %s",ho);
    }
    else if(m==4){
        printf("four minute past %s",ho);
    }
    else if (m==5){
        printf("five minute past %s",ho);
    }
    else if(m==6){
        printf("six minute past %s",ho);
    }
    else if(m==7){
        printf("seven minute past %s",ho);
    }
    else if(m==8){
        printf("eight minute past %s",ho);
    }
    else if(m==9){
        printf("nine minute past %s",ho);
    }
    else if(m==10){
        printf("ten minute past %s",ho);
    }
    else if(m==11){
        printf("eleven minute past %s",ho);
    }
    else if(m==12){
        printf("twelve minute past %s",ho);
    }
    else if(m==13){
        printf("thirteen minute past %s",ho);
    }
    else if(m==14){
        printf("fourteen minute past %s",ho);
    }
    else if(m==15){
        printf("quarter past %s",ho);
    }
    else if(m==16){
        printf("sixteen minute past %s",ho);
    }
    else if(m==17){
        printf("sixteen minute past %s",ho);
    }
    else if(m==18){
        printf("eighteen minute past %s",ho);
    }
    else if(m==19){
        printf("nineteen minute past %s",ho);
    }
    else if(m==20){
        printf("twenty minute past %s",ho);
    }
    else if(m==21){
        printf("twenty one minute past %s",ho);
    }
    else if(m==22){
        printf("twenty two minute past %s",ho);
    }
    else if(m==23){
        printf("twenty three minute past %s",ho);
    }
    else if(m==24){
        printf("twenty four minute past %s",ho);
    }
    else if(m==25){
        printf("twenty five minute past %s",ho);
    }
    else if(m==26){
        printf("twenty six minute past %s",ho);
    }
    else if(m==27){
        printf("twenty seven minute past %s",ho);
    }
    else if(m==28){
        printf("twenty eight minute past %s",ho);
    }
    else if(m==29){
        printf("twenty nine minutes past %s",ho);
    }
    else if(m==30){
        printf("half past %s",ho);
    }
    else if(m==31){
        printf("twenty nine minute to %s",ho);
    }
    else if(m==32){
        printf("twenty eight minute to %s",ho);
    }
     else if(m==33){
        printf("twenty seven minute to %s",ho);
    }
     else if(m==34){
        printf("twenty six minute to %s",ho);
    }
     else if(m==35){
        printf("twenty five minutes to %s",ho);
    }
     else if(m==36){
        printf("twenty four minute to %s",ho);
    }
     else if(m==37){
        printf("twenty three minute to %s",ho);
    }
     else if(m==38){
        printf("twenty two minute to %s",ho);
    }
     else if(m==39){
        printf("twenty one minute to %s",ho);
    }
     else if(m==40){
        printf("twenty minute to %s",ho);
    }
    else if(m==41){
        printf("nineteen minutes to %s",ho);
    }
    else if(m==42){
        printf("eighteen minutes to %s",ho);
    }
    else if(m==43){
        printf("seventeen minutes to %s",ho);
    }
    else if(m==44){
        printf("sixteen minutes to %s",ho);
    }
    else if(m==45){
        printf("quarter to %s",ho);
    }
    else if(m==46){
        printf("fourteen minutes to %s",ho);
    }
    else if(m==47){
        printf("thirteen minutes to %s",ho);
    }
    else if(m==48){
        printf("twelve minutes to %s",ho);
    }
    else if(m==49){
        printf("eleven minutes to %s",ho);
    }
    else if(m==50){
        printf("ten minutes to %s",ho);
    }
    else if(m==51){
        printf("nine minutes to %s",ho);
    }
    else if(m==52){
        printf("eight minutes to %s",ho);
    }
    else if(m==53){
        printf("seven minutes to %s",ho);
    }
    else if(m==54){
        printf("six minutes to %s",ho);
    }
    else if(m==55){
        printf("five minutes to %s",ho);
    }
    else if(m==56){
        printf("four minutes to %s",ho);
    }
    else if(m==57){
        printf("three minutes to %s",ho);
    }
    else if(m==58){
        printf("two minutes to %s",ho);
    }
    else if(m==59){
        printf("one minutes to %s",ho);
    }
    return 0;
}
