#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int i = 9;
	
	switch(i){
		case 1:{
			printf("Mot");
			break;
		}
		case 2:{
			printf("Hai");
			break;
		}
		default:{
			printf("Khong biet");
			break;
		}
	}
}

