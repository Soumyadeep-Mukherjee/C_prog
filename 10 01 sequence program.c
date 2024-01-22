#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N);
        char c[N];  

        
        c[0]='\0';

        if (N % 2 != 0) {
            for (int j = 0; j < N; j++) {
                if (j % 2 == 0) {
                    strcat(c, "0");
                } else {
                    strcat(c, "1");
                }
            }
        } else {
            int m= N/2;
            if(m%2 ==0){
                for(int i=0;i<m;i++){
                    if (i%2==0){
                        strcat(c,"01");
                    }
                    else{
                        strcat(c,"10");
                    }
                }
            }
            else{
                for (int j = 0; j < (m-1); j++) {
                    if (j%2==0){
                        strcat(c,"01");
                    }
                    else{
                        strcat(c,"10");
                    }
                
                }
                strcat(c,"00");
            }

            
        }
        printf("%s\n", c);

    }
}