#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[], char *envp[]) {

	printf("Printing environment: \n");

	// Loop through all env vars and print them
	while(*envp != 0) {
		printf("%s \n", *envp++);
	}

	const char *v = "BSPRAKTIKUM";
	int e = setenv(v, "2015", 0);
	if (e == 0) {
		printf("Envorinment variable %s set. \n", v);
	}
	char in[100];
	printf("Enter environment variable: \n");
	scanf("%s", in);

	if(getenv(in) != NULL) {
		printf("Value of %s is: %s \n", in, getenv(in));
	} else {
		printf("Variable %s does not exist. \n", in);
	}
	
	return 0;
}   