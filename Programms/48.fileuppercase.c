// Including header files and macro
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define br printf("\n")
#define readi(a) scanf("%d", &a)
#define readf(a) scanf("%f", &a)
#define readc(a) scanf("%c", &a)
#define reads(a) scanf("%s", &a)
#define readarr(a, n)           \
    for (int i = 0; i < n; i++) \
    {                           \
        readi(a[i]);            \
    }
#define printarr(a, n)          \
    for (int i = 0; i < n; i++) \
    {                           \
        printf("%d ", a[i]);    \
    }

int main()
{
    FILE *file1;                        //file pointer for original file
    FILE *file2;                        //file pointer for new file
    file1 = fopen("original.txt", "r"); //opens first file in read mode
    file2 = fopen("copied.txt", "w");   //opens second file in write mode
    if (file1 == NULL || file2 == NULL) //if any of the file is null
    {
        printf("File can't open");
        return 0;
    }
    char c = fgetc(file1); //first character from first file
    while (c != EOF)       //while c reachers the end of file
        while (c != EOF)
        {
            fputc((c >= 'a' && c <= 'z' ? c - 32 : c), file2); //copy the uppercase of the letter
            c = fgetc(file1);                                  //increamenting the character
        }

    printf("Content is writter in another file with uppercase letters\n"); //green signal
    fclose(file1);                                                         //closing first file
    fclose(file2);                                                         //closing second file
}