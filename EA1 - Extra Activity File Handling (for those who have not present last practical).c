#include<stdio.h>

int main ()
{
    int num, i, a[50];
    int Math,Science,English;
    char input, path;

    FILE *fpoint;

    fpoint = fopen("text.txt", "w");
    fclose(fpoint);

    fpoint = fopen("text.txt", "a");

    {

        printf("Name: ");
        scanf("%s", &a[i]);
        fprintf(fpoint,"Name: " "%s\n", &a[i]);
    }
    {

        printf("ID: ");
        scanf("%s", &a[i]);
        fprintf(fpoint,"ID: " "%s\n", &a[i]);
    }

    {
        printf("Enter Math Grade:" );
        scanf("%d", &Math);
        fprintf(fpoint,"\nMath:" "%d\n", Math);
    }
    {
        printf("Enter Science Grade:" );
        scanf("%d", &Science);
        fprintf(fpoint,"Science:" "%d\n", Science);
    }
    {
        printf("Enter English Grade:" );

        scanf("%d", &English);
        fprintf(fpoint,"English: " "%d\n\n", English);
    }

    int avg=(Math+Science+English);
    printf("Total Grade: %d\n" ,avg);
    fprintf(fpoint,"Total Grade: " "%d\n", avg);

    int ave=(Math+Science+English)/3;
    printf("Total Average: %d\n\n" ,ave);
    fprintf(fpoint,"Total Average: " "%d\n", ave);

        fclose(fpoint);









    fpoint = fopen("text2.txt", "w");
    fclose(fpoint);

    fpoint = fopen("text2.txt", "a");

    {

        printf("Name: ");
        scanf("%s", &a[i]);
        fprintf(fpoint,"Name: " "%s\n", &a[i]);
    }
    {

        printf("ID: ");
        scanf("%s", &a[i]);
        fprintf(fpoint,"ID: " "%s\n", &a[i]);
    }

    {
        printf("Enter Math Grade:" );
        scanf("%d", &Math);
        fprintf(fpoint,"\nMath:" "%d\n", Math);
    }
    {
        printf("Enter Science Grade:" );
        scanf("%d", &Science);
        fprintf(fpoint,"Science:" "%d\n", Science);
    }
    {
        printf("Enter English Grade:" );

        scanf("%d", &English);
        fprintf(fpoint,"English: " "%d\n\n", English);
    }

     avg=(Math+Science+English);
    printf("Total Grade: %d\n" ,avg);
    fprintf(fpoint,"Total Grade: " "%d\n", avg);

     ave=(Math+Science+English)/3;
    printf("Total Average: %d\n\n" ,ave);
    fprintf(fpoint,"Total Average: " "%d\n", ave);



        fclose(fpoint);




    return 0;
}
