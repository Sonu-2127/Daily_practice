#include<stdio.h>
#include<stdint.h>
int countOdds(unsigned int, unsigned int);

int countOdds(unsigned int low, unsigned int high)
{

int count = (high - low) / 2;
    if (high % 2 != 0 || low % 2 != 0) 
        count += 1;
	return count;
}

int main()
{
    unsigned int low;
    unsigned int high;

    printf("Enter the low numnber:-");
    scanf("%lu", &low);
    printf("\nEnter the high numnber:-");
    scanf("%lu", &high);
    int answer  = countOdds(low, high);
    printf("%d", answer);
    return 0;
}