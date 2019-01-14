// do not change this code except in the following ways:
//   * write code for the following functions:
//      * bigOrSmallEndian()
//      * getNextFloat()
//      * printNumberData()
//   * change studentName by changing "I. Forgot" to your actual name

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

static char *studentName = "Jaime Landers";

// report whether machine is big or small endian
void bigOrSmallEndian()
{
    printf("\nbigOrSmallEndian working\n");

    unsigned int endInt = 0x12345678;
    char *endChar = (char*) &endInt;

//    printf("endChar = %X", *endChar);
    printf("\n");

    if (*endChar == 0x78)
        printf("This computer is Little Endian");
    else
        printf("This computer is Big Endian");

    printf("\n");
}

// get next float using scanf()
// returns true (success) or false (failure)
// if call succeeded, return float value via fPtr
bool getNextFloat(float *fPtr)
{
    // replace this code with the call to scanf()
//    *fPtr = 0.0;

    int testNum = 1; 
    float testFloat = 0.0;

    printf("\nEnter a number to output: ");
//    scanf("%e", &fPtr);
    scanf("%e", &testFloat);
//    scanf("%d", &testNum);
    
/*    printf("%10d", testNum);
    printf(" ");
    printf("%#010X", testNum);
    printf("\n");

    testFloat = (float) testNum;

*/    printf("%10.2f", testFloat);
/*    printf(" ");
    printf("%#010X", testFloat);
    printf("\n");

*/    *fPtr = testFloat;
//    *fPtr = (float) testNum;
//    printf("fPtr = %.2f", &fPtr);
    printf("fPtr = %f", &fPtr);
    printf("\n");

    return true;
}

// print requested data for the given number
void printNumberData(float f)
{
//  replace this call to printf with your actual code
//	printf("%f\n", f);
//
//    int fInt = 0;
//    fInt = (int) f;

    printf("\nprintNumberData working\n");
    printf("%10d", (int) f);
//    printf("%10d", fInt);
    printf(" ");
    printf("%#010X", (int) f);
//    printf("%#010X", fInt);
    printf("\n");

//    testFloat = (float) testNum;

    printf("%10.2f", f);
    printf(" ");
    printf("%#010X", f);
//    printf("%#010X", (int) &f);
//    printf("%#010X", f);
    printf("\n");
}

// do not change this function in any way
int main(int argc, char **argv)
{
	float	f;								// number currently being analyzed
	bool	validInput;						// was user input valid?

	printf("CS201 - A01 - %s\n\n", studentName);
	bigOrSmallEndian();
	for (;;) {
		if (argc == 1)						// allow grading script to control ...
			printf("> ");					// ... whether prompt character is printed
		validInput = getNextFloat(&f);
//        printf("validInput = %d", validInput); // Temp
//        printf("\n"); // Temp
//        printf("f = %f", &f); // Temp
		if (! validInput) {					// encountered bad input
			printf("bad input\n");
			while (getchar() != '\n') ;		// flush bad line from input buffer
			continue;
			}
		printNumberData(f);
		if (f == 0.0) {
			printf("bye...\n");
			break;
			}
		}
	printf("\n");
	return 0;
}
