#include <stdio.h>
#define N 80
 
int main() { 
    FILE *file;
    char line[N];

    file = fopen("1 stroka.txt", "r");
    if(file)
    {
        while((fgets(line, sizeof(line), file))!=NULL)
        {
            printf("%s", line);
        }
        
        fclose(file);
    } 
    return 0;
}
