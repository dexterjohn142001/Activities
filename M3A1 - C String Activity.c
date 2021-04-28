#include <stdio.h>

int main()
{
    char inputString [255];
    int index = 0;

    //input string//

    printf("input a string: ");
    fgets(inputString, sizeof inputString, stdin);

    //Go through each character of the string//
    while( inputString[index] !='\0')
    {
        //Determine if the character is a vowel in a lowercase.//
        //if it is a vowel convert it into uppercase//
        if (inputString[index]== 'a'|| inputString[index]== 'e' ||
            inputString[index]== 'i'|| inputString[index]== 'o' ||
            inputString[index]== 'u')
{
    // deduct ascii value to get its uppercase character//
        inputString[index] = inputString[index]- 32;
}
    // Got o the next character of the string//
    index++;
    }
    //print result//
    printf("\nOutput :\n");
    puts(inputString);

    return 0;
}
