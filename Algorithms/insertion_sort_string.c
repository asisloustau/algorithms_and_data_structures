#include <stdio.h>
#include <string.h>

void insertionSort(char s[], int n);
void printArray(char s[], int n);

int main()
{
    char myString[20];
    printf("Insert a string: ");
    scanf("%s", myString);
    int n = strlen(myString);
    printf("Unsorted String: %s\n", myString);
    insertionSort(myString, n);
    printf("Sorted String: %s\n", myString);
    return 0;
}

/* Function to print array - Not needed to print string
void printArray(char s[], int n)
{
    int i;
    printf("Sorted Array: ");
    for (i = 0; i < n; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}
*/

/* Insertion Sort for strings */
void insertionSort(char s[], int n)
{
    int i, j; /* counters */
    char key;

    for (i = 1; i < n; i++)
    {
        j = i;
        key = s[i];

        while ((j > 0) && (key < s[j - 1]))
        {
            s[j] = s[j - 1];
            j = j - 1;
        }
        s[j] = key;
    }
}