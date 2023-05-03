#include <stdio.h>

int main() {
	for(int i = 1;i<=24;i++){
		if(i==3||i==7||i==13||i==19||i==23) {
			printf("\n");
		}
		if(i==1||i==23) {
			printf("    ");
		}
		if(i==3||i==19) {
			printf("  ");
		}
		printf("++");
	}
	printf("\n");
    return 0;
}
