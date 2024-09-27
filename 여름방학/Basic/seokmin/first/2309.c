#include <stdio.h>
int main() {
	int dwarf[9]; 
	int total = 0; 
	int over = 0; 
	int i, j; 
    
    
   for ( i = 0; i < 9; i++) {
		scanf("%d", &dwarf[i]);
		total = total + dwarf[i];
	}
    over = total - 100;
    int p = 0;
	int q = 0;
    
    for (i = 0; i < 9; i++) {
		for (j = i + 1; j < 9; j++) {
			if ((dwarf[i] + dwarf[j]) == over) {
				p = i;
				q = j;
				break;
			}
		}
	}
    
    int tmp;
	int r_dwarf[7]; 
	j = 0;
	for (i = 0; i < 9; i++) {
		if (i != p && i != q) {
			r_dwarf[j] = dwarf[i];
			j++;
		}
	}

    for (i = 0; i < 7; i++) {
		for (j = i + 1; j < 7; j++) {
			if (r_dwarf[i] > r_dwarf[j]) {
				tmp = r_dwarf[i];
				r_dwarf[i] = r_dwarf[j];
				r_dwarf[j] = tmp;
			}
		}
	}


    for (i = 0; i < 7; i++) {
		printf("%d\n", r_dwarf[i]);
	}
}
