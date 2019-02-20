#include <stdio.h>
#include <string.h>
int main(){
    int i, j=0, k=0;
    char str[100]="";
    char str2[100]="";
    char ch;

    printf("Please enter a message: ");

    while ((ch=getchar())!='\n'&& j!=100){
      str[j]=ch;
      j++;
    }

    for (i=100; i>=0; i--){
        if(str[i]=='\0'){
            continue;
         }
        str2[k]=str[i];
        k++;
    }

    printf("%s\n", str);
    puts(str2);

    return 0;
}
