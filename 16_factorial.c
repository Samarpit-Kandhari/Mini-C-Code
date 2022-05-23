#include <stdio.h>

int main()
// {
//     int i,n,fac,temp;
//     printf("Enter the no. to calculate the factorial: ");
//     scanf("%d",&n);
//     temp=n;
//     for(i=1;i<temp;i++){
//         fac=n*i;
//         n=fac;
//     }
//     printf("Factorial value is:%d",fac);
//     return 0;
// }

{   
    int i=1,fac,n,temp;
    printf("Enter the no. to calculate the factorial: ");
    scanf("%d",&n);
    temp=n;
    while(i<temp){
        fac=n*i;
        i++;
        n=fac;
    }
    printf("%d",fac);
    return 0;
}