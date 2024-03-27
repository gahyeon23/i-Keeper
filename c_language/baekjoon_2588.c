#include <stdio.h>

int main(){
    int A,B;
    scanf("%d %d",&A,&B);
    int n1 = B%10;
    int n2 = (B/10)%10;
    int n3 = B/100;
    printf("%d\n",A*n1);
    printf("%d\n",A*n2);
    printf("%d\n",A*n3);
    printf("%d",A*B);
    return 0;
}