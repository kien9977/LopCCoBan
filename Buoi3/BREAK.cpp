 #include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	for(int i = 0; i < 5; i ++){
		if(i == 2){
			break;
		}
		printf("%d\n", i);
	}
}

