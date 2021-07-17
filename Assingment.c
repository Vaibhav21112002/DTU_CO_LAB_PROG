//<------Header File Decleration Starts------------>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <strings.h>
//<------Header File Decleration Ends------------>

//<------Macro Decleration Starts------------>
#define br printf("\n")
#define readi(a) scanf("%d", &a)
#define readf(a) scanf("%f", &a)
#define readc(a) scanf("%c", &a)
#define reads(a) scanf("%s", &a)
//<------Macro Decleration Ends------------>

//<-------Function for Printing Specific type of characters-------->
void printData(char arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ' ')
        {
            printf("'%c'", arr[i]);
        }
        else
        {
            printf("%c", arr[i]);
        }
        if (i != n - 1)
        {
            printf("%c", ',');
        }
    }
}
//<-------Function Ends-------->

//<-------Main Function Starts-------->
int main()
{
    char s[1000]; //Decleare Input String
    printf("Enter the String:\n");
    gets(s); //Input the String

    int up = 0, low = 0, num = 0, spec = 0;              //Declare number of types of characters
    char upa[1000], lowa[1000], numa[1000], speca[1000]; //Declear array for types of characters

    /*
    Now Iterating through the string and check each character whether it is an uppercase, lowercase, numeral or a special character and storing that character in its specified array and increamenting the value of their respective by one each time.
    */
    for (int i = 0; i < strlen(s); i++)
    {
        //<--------Uppercase----------->
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            upa[up] = s[i];
            up++;
        }

        //<--------Lowercase----------->
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            lowa[low] = s[i];
            low++;
        }

        //<--------Numerals----------->
        else if (s[i] >= '0' && s[i] <= '9')
        {
            numa[num] = s[i];
            num++;
        }

        //<--------All Special Characters---->
        else
        {
            speca[spec] = s[i];
            spec++;
        }
    }
    printf("Output:\n");
    //<-----Output Printing Starts----------->
    // <------For Uppercase Letter------>
    printf("Number of uppercase characters:\t");
    printf("%d\n", up);
    printf("Uppercase characters:\t");
    printData(upa, up);
    printf("\n");

    // <----------For Lowercase Letter--->
    printf("Number of lowercase characters:\t");
    printf("%d\n", low);
    printf("Lowercase characters:\t");
    printData(lowa, low);
    printf("\n");

    // <----------For Numerals----------->
    printf("Number of numerals:\t");
    printf("%d\n", num);
    printf("Numerals are:\t");
    printData(numa, num);
    printf("\n");

    // <------------For Special Characters------->
    printf("Number of special characters:\t");
    printf("%d\n", spec);
    printf("Special characters:\t");
    printData(speca, spec);
    printf("\n");

    //<-----Output Printing Ends----------->
}
//<---------Main Function Ends------->