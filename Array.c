#include <stdio.h>

int main(){
    int a[10] = {1,5,4,8,9,2,0,6,11,7}, find, count;
    printf("enter the element which you want to find: ");
    scanf("%d", &find);

    for (int i = 0; i < sizeof(a)/sizeof(int); i++){
        if (i == find){
            count++;
        }
    }

    if (count>=1){
        printf("YES\n");
    } else{
        printf("NO\n");
    }
    
    for (int i = 0; i < sizeof(a)/sizeof(int); i++){
        printf("%d", a[i]);
    }
    

    return 0;
}