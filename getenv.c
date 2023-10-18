#include "shell.h"

int main(void)
{
	char *path = getenv("Home");

	printf("%s\n", path);
