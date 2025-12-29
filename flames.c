#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void check_flames(char *name1, char *name2) {
	int size = 6;
	int pos  = 0;
	int count = 0;
	int i = 0, j = 0, k = 0;
	int len1 = strlen(name1);
	int len2 = strlen(name2);
	char flames[] = "FLAMES";

	/* checking how many charecters are matching and making them as * */
	for (i = 0; i < len1; i++) {
		for (j = 0; j < len2; j++) {
			if (tolower(name1[i]) == tolower(name2[j])) {
				name1[i] = name2[j] = '*';
				break;
			}
		}
	}

	//Counting remaining letters apart from * and space
	for (i = 0; i < len1; i++) {
		if (name1[i] != '*' && name1[i] != ' ')
			count++;
	}

	for (i = 0; i < len2; i++) {
		if (name2[i] != '*' && name2[i] != ' ')
			count++;
	}

	//printf("count = %d\n", count);

	if (count > 0) {
		while (size > 0) {
			pos = (pos + count - 1) % size;
			//printf("pos = %d, count = %d\n", pos, count);
			for (k = pos; k < size - 1; k++) {
				flames[k] = flames[k+1];
			}
			size--;
		}

		switch(flames[0]) {
		case 'F':
			printf("RelationShip Status: FRIENDS\n");
			break;
		case 'L':
			printf("RelationShip Status: LOVERS\n");
			break;
		case 'A':
			printf("RelationShip Status: AFFECTION\n");
			break;
		case 'M':
			printf("RelationShip Status: MARRIAGE\n");
			break;
		case 'E':
			printf("RelationShip Status: ENEMIES\n");
			break;
		case 'S':
			printf("RelationShip Status: SIBLINGS\n");
			break;
		default:
			printf("Invalid case\n");
		}

	} else {
		printf("Both the names are similar\n");
	}	
}

int main(void) {
	char *name1, *name2;
	int len1 = strlen(name1);
	int len2 = strlen(name2);

	name1= (char *)calloc(sizeof(char), len1);
	name2= (char *)calloc(sizeof(char), len2);

	printf("************ FLAMES************\n");
	printf("First person name: ");
	scanf("%s", name1);
	printf("Second person name: ");
	scanf("%s", name2);

	check_flames(name1, name2);

	free(name1);
	free(name2);

	return 0;
	
}
