#include <stdio.h>


void displayMenu();
unsigned int setBit(unsigned int num, int pos);
unsigned int clearBit(unsigned int num, int pos);
unsigned int toggleBit(unsigned int num, int pos);
int testBit(unsigned int num, int pos);
void printBinary(unsigned int num);

int main() {
    unsigned int bitVector = 0; 
    int choice, position;

    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter bit position to set (0-31): ");
                scanf("%d", &position);
                if (position >= 0 && position < 32) {
                    bitVector = setBit(bitVector, position);
                    printf("Bit %d set. New vector: ", position);
                    printBinary(bitVector);
                } else {
                    printf("Invalid position.\n");
                }
                break;
            case 2:
                printf("Enter bit position to clear (0-31): ");
                scanf("%d", &position);
                if (position >= 0 && position < 32) {
                    bitVector = clearBit(bitVector, position);
                    printf("Bit %d cleared. New vector: ", position);
                    printBinary(bitVector);
                } else {
                    printf("Invalid position.\n");
                }
                break;
            case 3:
                printf("Enter bit position to toggle (0-31): ");
                scanf("%d", &position);
                if (position >= 0 && position < 32) {
                    bitVector = toggleBit(bitVector, position);
                    printf("Bit %d toggled. New vector: ", position);
                    printBinary(bitVector);
                } else {
                    printf("Invalid position.\n");
                }
                break;
            case 4:
                printf("Enter bit position to test (0-31): ");
                scanf("%d", &position);
                if (position >= 0 && position < 32) {
                    if (testBit(bitVector, position)) {
                        printf("Bit %d is SET (1).\n", position);
                    } else {
                        printf("Bit %d is CLEAR (0).\n", position);
                    }
                } else {
                    printf("Invalid position.\n");
                }
                break;
            case 5:
                printf("Current bit vector: ");
                printBinary(bitVector);
                break;
            case 6:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
        printf("\n");
    } while (choice != 6);

    return 0;
}

void displayMenu() {
    printf("--- Bit Vector Menu ---\n");
    printf("1. Set a bit\n");
    printf("2. Clear a bit\n");
    printf("3. Toggle a bit\n");
    printf("4. Test a bit\n");
    printf("5. Display bit vector\n");
    printf("6. Exit\n");
    printf("-----------------------\n");
}

// Function to set a specific bit (make it 1)
unsigned int setBit(unsigned int num, int pos) {
    return num | (1U << pos); // Use bitwise OR and left shift
}

// Function to clear a specific bit (make it 0)
unsigned int clearBit(unsigned int num, int pos) {
    return num & ~(1U << pos); // Use bitwise AND and NOT
}

// Function to toggle a specific bit (flip its value)
unsigned int toggleBit(unsigned int num, int pos) {
    return num ^ (1U << pos); // Use bitwise XOR
}

// Function to test if a specific bit is set
int testBit(unsigned int num, int pos) {
    return (num >> pos) & 1U; // Right shift and bitwise AND
}

// Function to print the binary representation of the unsigned int
void printBinary(unsigned int num) {
    int i;
    for (i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1U);
        if (i % 8 == 0) {
            printf(" ");
        }
    }
    printf("\n");
}

