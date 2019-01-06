#include<stdio.h>
int main (){
	char s[20];
	int i;
	scanf("%s",s);
	if (s[8]=='P'){
		if (s[0]=='1' && s[1]=='2'){
			
		}
		else{
		i=((int)s[0]-48)*10+(int)s[1]-48;
		i=i+12;
		//printf("%d\n",i);
		s[0]=i/10+'0';
		s[1]=i%10+'0';
	}
	}
	else if (s[8]=='A'){
		if (s[0]=='1' && s[1]=='2'){
			s[0]='0';
			s[1]='0';
		}
	}
	s[8]='\0';
	printf("%s",s);
	return 0;
}
