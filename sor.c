#include <stdio.h>
#include <string.h>
#define MAX_LEN 100
  

void selectionSort(char arr[][MAX_LEN], int n)
{
    int i, j, min_idx;
  

    char minStr[MAX_LEN];
    for (i = 0; i < n-1; i++)
    {

        int min_idx = i;
        strcpy(minStr, arr[i]);
        for (j = i+1; j < n; j++)
        {

            if (strcmp(minStr, arr[j]) > 0)
            {

                strcpy(minStr, arr[j]);
                min_idx = j;
            }
        }
  

        if (min_idx != i)
        {
            char temp[MAX_LEN];
            strcpy(temp, arr[i]); 
            strcpy(arr[i], arr[min_idx]);
            strcpy(arr[min_idx], temp);
        }
    }
}
  

int main()
{
    char arr[][MAX_LEN] = {"RUBY", "GARNET","AMETHYST","BLOODSTONE","SAPPHIRE","AGATE","EMERALD","ONXY","CARNELIAN","PERIDOT",
						"BERYL","TOPAZ"};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;
  
    printf("Given array is\n");
    for (i = 0; i < n; i++)
        printf("%d: %s \n", i, arr[i]);
  
    selectionSort(arr, n);
  
    printf("\nSorted array is\n");
    for (i = 0; i < n; i++)
        printf("%d: %s \n", i, arr[i]);
  
    return 0;
}
