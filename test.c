#include <stdio.h>
int main() {
    int a,sum,count;
    do {
        printf("num %d = ", ++count);
        scanf("%d",&a);
        if(a > 0){
           sum+=a;
        }
    }while (a > 0);
    printf("sum is %d\n", sum);
    printf("average is %d", sum/(count-1));
    return 0;
}
