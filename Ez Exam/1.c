#include <stdio.h>

int main()
{
    FILE *fp;
    char a[20];
    int i;
    printf("Input text do you want to insert(Please double enter to exit) : ");
    scanf("%s",a);
    getchar();
    fp = fopen("example.txt", "w");
    fputs("The first line of writing to the text file.\n", fp);
    fputs("The second line.\n", fp);
    fprintf(fp, "The third line with number %s.\n",a);
    printf("Thank you ");
    fclose(fp);
        getchar();
    return 0;
}
