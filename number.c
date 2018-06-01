#include<stdio.h>

int main(int argc, char* argv[])
{
	int i;
        unsigned long long fact=1;
	int d=1;
	

	if (argc < 0)
        printf("Error! Factorial of a negative number doesn't exist.");

    else
    {
        for(i=1; i<=argc; ++i)
        {
            fact *= i;              // factorial = factorial*i;
        }
        printf("Factorial of %d = %llu", argc, fact);
    }

	printf("\n%d\n",argc);
}




