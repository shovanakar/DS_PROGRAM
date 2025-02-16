// C program to demonstrate use of rename()
#include <stdio.h>

int main()
{
	char old_name[] = "sk.txt";
	char new_name[] = "shovus.txt";
	int value;
	value = rename(old_name, new_name);
	if (!value) {
		printf("%s", "File name changed successfully");
	}
	else {
		perror("Error");
	}
	return 0;
}
