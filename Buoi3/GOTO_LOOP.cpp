#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int i = 0;
	
	loop:
	if(i == 5){
		goto end;
	}
	printf("%d\n", i);
	i++;
	goto loop;
	
	end:
	return 0;
}

