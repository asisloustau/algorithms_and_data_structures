/* Problem: Substring Pattern Matching
Input: A text string and a pattern string
Output: 
1. Is the pattern string in text string?
2. Where? */

#include <stdio.h>
#include <string.h>

/* first intuitive solution - Optimize */
/* Time complexity
With nArr = n && nPat = m:
for loop: O(n-m)
while loop: O(m)
strlen function: ?? Assuming O(m) and O(n)

Total time complexity: O((n-m)m + m + n) = O(mn - m^2 + m + n)
=> Taking out negatives O(mn + n + m) 
=> O(nm) (worst case when both n and m are great numbers) 
*/
int isInString(char arr[], char pat[])
{
    int nArr = strlen(arr);
    int nPat = strlen(pat);
    int patternMatch = 0;
    int i, j;
    if (nPat > nArr)
    {
        printf("Pattern is longer than string!\n");
    }
    else
    {
        for (i = 0; i <= (nArr - nPat); i++)
        {
            j = 0;
            while ((arr[i] == pat[j]) && (patternMatch == 0))
            {
                // printf("i = %d, Arrchar = %c\n", i, arr[i]);
                // printf("j = %d, Patchar = %c\n", j, pat[j]);
                if ((j + 1) == nPat)
                {
                    printf("Pattern match!\n");
                    return (i + 1 - nPat); // returns index of first pattern character
                    patternMatch = 1;
                }

                else
                {
                    i = i + 1;
                    j = j + 1;
                }
            }
        }
        return (-1);
    }
}

int main()
{
    char inputString[20];
    char patternString[20];
    // int patternMatch = 0;
    printf("Insert a string: ");
    scanf("%s", inputString);
    printf("Insert a pattern: ");
    scanf("%s", patternString);

    int locationChar = isInString(inputString, patternString);
    if (locationChar == -1)
    {
        printf("Pattern not found");
    }
    else
    {
        printf("Pattern found, index %d", locationChar);
    }
    return 0;
}