#include <stdio.h>
#include <stdlib.h>

int SPIRead(int addr, void *outptr, int len){
	char* read = (char*) addr;
	char* out = (char*) outptr;
	while(len > 0){
		if(read != 0 && out != 0){
			*out = 1; //using *read here causes seg fault
			++out;
			++read;
			--len;
		}
		else{
			return 1;
		}
	}
	return 0;
}

 /* main.c */
int main(int argc, char *argv[]) {
    char r = 'a';
    char* w = malloc(sizeof(char));
 
    printf("Hallo1 %d\n", sizeof(char));
    
    SPIRead(&r, w, sizeof(char));

    printf("Hallo2 %c", *w);
}