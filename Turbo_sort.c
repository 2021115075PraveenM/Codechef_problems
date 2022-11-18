//Given the list of numbers, you are to sort them in non decreasing order.
//code 1
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

//code 2
   /*
    * C program to accept a set of numbers and arrange them
    * in a descending order
    */
 
    #include <stdio.h>
    void main ()
    {
 
        int number[30];
 
        int i, j, a, n;
        printf("Enter the value of N\n");
        scanf("%d", &n);
 
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
	        scanf("%d", &number[i]);
 
        /*  sorting begins ... */
 
        for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j) 
            {
                if (number[i] < number[j]) 
                {
                    a = number[i];
                    number[i] = number[j];
                    number[j] = a;
                }}}
 
        printf("The numbers arranged in descending order are given below\n");
 
        for (i = 0; i < n; ++i) 
        {
            printf("%d\n", number[i]);
        }}

// code 3
//Given the list of numbers, you are to sort them in non decreasing order.
#include<stdio.h>
int arr[1000000];
int main(){
    int n,a,b,c,count,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        b;scanf("%d",&b);
        arr[i]=b;}
    for(int k=0;k<n;k++){
            c=1000000;
        for(j=0;j<n;j++){
            if(arr[j]<c){
                c=arr[j];
            }else{
                c=c;
            }}
        count=0;
        for(int h=0;h<n;h++){
            if(c==arr[h]){
                break;
            }else count++;
        }
        
        printf("%d\n",c);
        arr[count]=1000000;}
    return 0;
}







