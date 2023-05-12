#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	char name[25];
	char *description;
	strcpy(name, "Faculty of Technology");
	/* allocate memory dynamically */
	description = malloc( 200 * sizeof(char) );
	if( description == NULL ) {
		printf("Error - unable to allocate required memory\n");
	}
	else {
		strcpy( description, "I am a student of University of Ruhuna");
	}
	printf("Description: %s\n", description );
	printf("Name = %s\n", name );
	/* release memory using free() function */
	free(description);
	return 0;
}
