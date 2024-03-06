#include<stdio.h>

int main() {
    int ccount = 0, pcount = 0, scount = 0,i;
    char str[50];

    printf("\nEnter any expression:\n");
    scanf("%[^\n]s", str);  

   while(str[i]!='\0'){
        switch (str[i]) {
            case '{': ccount++; break;
            case '[': scount++; break;
            case '(': pcount++; break;
            case '}': ccount--; break;
            case ']': scount--; break;
            case ')': pcount--; break;
        }
        i++;
    }

    if (ccount == 0 && scount == 0 && pcount == 0) {
        printf("\nExpression is valid.\n");
    } else {
        printf("\nInvalid expression.\n");
    }

    return 0;
}
