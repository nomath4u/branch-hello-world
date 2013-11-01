#include <stdio.h> //Needed for printf to work
void add_message (int include_newline){
	printf("Hello World");
	if (include_newline)
	{
		printf("\n");
	}
}

int main (int argc, char **argv){
	add_message(0);
	add_message(1);
	return 0;
}
