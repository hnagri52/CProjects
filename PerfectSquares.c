#include <stdio.h>

main(){
long int n, x;

printf("Enter a number");
scanf("%ld", &n);

for (x=2; x*x<=n; x++){
    if (x%2==0){
    printf("%ld", x*x);
        printf("\n");
    }
}

return 0;
}
