#include <stdio.h>

#define U_SIZE 26
static const char U[U_SIZE] = {
    'A','B','C','D','E','F','G','H','I','J',
    'K','L','M','N','O','P','Q','R','S','T',
    'U','V','W','X','Y','Z'
};

char set1[26], set2[26];             
int bit_vec1[26], bit_vec2[26], result[26];


void initialize(char ary[26]);
void initialize_int(int ary[26]);
void bitvector(char ary[26], int bit_vec[26]);
void setUnion(int bit1[26],int bit2[26]);
void setComplement(int bit[26]);
void setIntersection(int bit1[26], int bit2[26]);
void setDifference(int bit1[26], int bit2[26]);
void printset();


void initialize(char ary[26]) {
	for (int i = 0; i < 26; i++)
		ary[i] = 0;
}


void initialize_int(int ary[26]) {
	for (int i = 0; i < 26; i++)
		ary[i] = 0;
}


void bitvector(char ary[26], int bit_vec[26]) {
	initialize_int(bit_vec);
	for (int i = 0; ary[i] != 0; i++) {
		for (int j = 0; j < 26; j++) {
			if (ary[i] == U[j]) {
				bit_vec[j] = 1;
				break;
			}
		}
	}
}


void setUnion(int bit1[26], int bit2[26]) {

	for (int i=0;i<26;i++)
		result[i] = bit1[i] | bit2[i];
}


void setComplement(int bit[26]) {
	for (int i=0;i<26;i++)
		result[i] = (bit[i] == 0);
}


void setIntersection(int bit1[26], int bit2[26]) {
	for (int i=0;i<26; i++)
  		result[i] = bit1[i] & bit2[i];
}


void setDifference(int bit1[26], int bit2[26]) {
	int temp[26];
	for (int i=0;i<26;i++)
		temp[i] = !bit2[i];  
	setIntersection(bit1, temp);
}


void printset() {
	printf("{ ");
	for (int i = 0; i < 26; i++) {
	        if (result[i] == 1)
			printf("%c ", U[i]);
	}
	printf("}\n");
}


int main() {
	int num1, num2, choice;

	initialize(set1);
	initialize(set2);
	initialize_int(bit_vec1);
	initialize_int(bit_vec2);
	initialize_int(result);


	printf("Enter number of elements in Set 1: ");
	scanf("%d", &num1);

	printf("Enter %d characters (A-Z): ", num1);
	for (int i = 0; i < num1; i++)
		scanf(" %c", &set1[i]);


	printf("Enter number of elements in Set 2: ");
	scanf("%d", &num2);

	printf("Enter %d characters (A-Z): ", num2);
	for (int i = 0; i < num2; i++)
		scanf(" %c", &set2[i]);


	bitvector(set1, bit_vec1);
	bitvector(set2, bit_vec2);


	do {
		printf("\n--------- MENU ---------\n");
		printf("1. Union\n");
		printf("2. Intersection\n");
		printf("3. Difference (Set1 - Set2)\n");
		printf("4. Complement of Set1\n");
		printf("5. Complement of Set2\n");
		printf("0. Exit\n");
		printf("Enter choice: ");
		scanf("%d", &choice);

		switch (choice) {
			case 1:
				setUnion(bit_vec1, bit_vec2);
				printf("Union: ");
				printset();
				break;

			case 2:
				setIntersection(bit_vec1, bit_vec2);
				printf("Intersection: ");
				printset();
				break;

			case 3:
				setDifference(bit_vec1, bit_vec2);
				printf("Difference (Set1 - Set2): ");
				printset();
				break;

			case 4:
				setComplement(bit_vec1);
				printf("Complement of Set1: ");
				printset();
				break;

			case 5:
				setComplement(bit_vec2);
				printf("Complement of Set2: ");
				printset();
				break;

			case 0:
				printf("Exiting...\n");
				break;

			default:
				printf("Invalid choice.\n");
		}

	} while (choice != 0);

	return 0;
}

