#include <stdio.h>
 
int main() {
 
    int n;                              
                                            
        for (int i = 0; i < 3; i++) {
            int num_0 = 0;                   
                                                 
            for (int i = 0; i < 4; i++) {
                scanf("%d", &n);
                if (n == 0)
                    num_0++;                       
            }
            if (num_0 == 0)
                printf("E\n");
 
 
            else if (num_0 == 1)
                printf("A\n");
 
 
            else if (num_0 == 2)
                printf("B\n");
 
 
            else if (num_0 == 3)
                printf("C\n");
 
 
            else if (num_0 == 4)
                printf("D\n");
 
 
        }
}
