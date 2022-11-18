//Given a list of NN contest codes, where each contest code is either START38 or LTIME108,
//help Chef count how many problems were featured in each of the contests.
#include <stdio.h>
#include<string.h>
int main(void) {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a,c=0,c1=0;char s[9];
        scanf("%d",&a);
        for(int j=0;j<a;j++){
            scanf("%s",s);
            if(strcmp(s,"START38")==0){
                c++;
            }
            else{
                c1++;
            }
            
            
        }printf("%d %d\n",c,c1);
    }
	return 0;
}

