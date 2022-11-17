//Given the list of numbers, you are to sort them in non decreasing order.
#include<stdio.h>
int arr[1000000];
void main(){
    int a,n,in=0;
    scanf("%d",&n);
    int arr2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        arr[i]=a;
    }
    for(int i=0;i<n;i++){
         int great=0;
        for(int j=0;j<n;j++){
            if(arr[j]>great){
                great=arr[j];
            }else {
                great=great;}
        }
        arr2[in]=great;
        in++;
        int c=0;
        for(int i=0;i<n;i++){
            if(great==arr[i]){
                break;
            }else{c++;}
        }
      arr[c]=0;
}
for(int i=n-1;i>=0;i--){
    printf("%d\n",arr2[i]);
}}