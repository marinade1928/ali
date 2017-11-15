#include <stdio.h>

int main() {
    char s1[8][8] ;
    int i, j, x=0;

    for (i=1; i<=7; i++) {
        for(j=1; j<=8; j++)
            scanf("%c", &s1[i][j] );
    }

    for (i=1; i<=7; i++) {
        for(j=1; j<=8; j++) {

            if(s1[i][j]=='.')
            {
                if(s1[i][j+1]=='o'&& j<=5)
                    if(s1[i][j+2]=='o')
                        x++;
                if(s1[i][j-1]=='o'&& j>=3)
                    if(s1[i][j-2]=='o')
                        x++;
                if(s1[i+1][j]=='o'&& i<=5)
                    if(s1[i+2][j]=='o')
                        x++;
                if(s1[i-1][j]=='o'&& i>=3)
                    if(s1[i-2][j]=='o')
                        x++;
            }

        }

    }

    printf("%d", x);



    return 0;
}


