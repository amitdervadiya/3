#include <stdio.h>
#include <string.h>
struct Employees
{
    int id;
    char name[50];
    char time[50];
    char city[50];
};
void write()
{
    FILE *p;
    p = fopen("data.txt", "w");

    if (p == NULL)
    {
        printf("File not found");
    }
    else
    {
        printf("File opened successfully\n\n");
        char b[100];
        while (fgets(b, 100, p))
        {
            printf("old text : \n%s\n\n", b);
        }
        printf("Enter your new writing : \n");
        int n;
        printf("Enter the detailes number: ");
        scanf("%d", &n);
        struct Employees employess[n];
        for (int i = 0; i < n; i++)
        {
            printf("Enter employees %d details:\n", i + 1);
            printf("Enter employee id:");
            scanf("%d", &employess[i].id);
            printf("Enter employee name:");
            scanf("%s", &employess[i].name);
            printf("Enter employee time: ");
            scanf("%s", &employess[i].time);
            printf("Enter employee city: ");
            scanf("%s", &employess[i].city);
        }
        for (int i = 0; i < n; i++)
        {
            fprintf(p,"\nemployees %d details:\n", i + 1);
            fprintf(p,"employee id: %d\n", employess[i].id);
            fprintf(p,"employee name: %d\n", employess[i].name);
            fprintf(p,"employee time: %s\n", employess[i].time);
            fprintf(p,"employee city: %s\n", employess[i].city);
        }
        fclose(p);
    }
}

void read()
{
    FILE *p;
    p = fopen("data.txt", "r");

    if (p == NULL)
    {
        printf("File not found");
    }
    else
    {
        printf("File opened successfully\n\n");
        printf("read file :\n");
        char b[100];
        while (fgets(b, 100, p))
        {
            printf("%s", b);
        }
        fclose(p);
    }
}

void append()
{
    FILE *p;
    p = fopen("data.txt", "a");

    if (p == NULL)
    {
        printf("File not found");
    }
    else
    {
        printf("File opened successfully\n\n");
        char b[100];
        while (fgets(b, 100, p))
        {
            printf("old text : \n%s\n\n", b);
        }
        printf("Enter your new writing : \n");
        int n;
        printf("Enter the detailes number: ");
        scanf("%d", &n);
        struct Employees employess[n];
        for (int i = 0; i < n; i++)
        {
            printf("Enter employees %d details:\n", i + 1);
            printf("Enter employee id:");
            scanf("%d", &employess[i].id);
            printf("Enter employee name:");
            scanf("%s", &employess[i].name);
            printf("Enter employee time: ");
            scanf("%s", &employess[i].time);
            printf("Enter employee city: ");
            scanf("%s", &employess[i].city);
        }
        for (int i = 0; i < n; i++)
        {
            fprintf(p,"\nemployees %d details:\n", i + 1);
            fprintf(p,"employee id: %d\n", employess[i].id);
            fprintf(p,"employee name: %d\n", employess[i].name);
            fprintf(p,"employee time: %s\n", employess[i].time);
            fprintf(p,"employee city: %s\n", employess[i].city);
        }
        fclose(p);
    }
}

int main()
{
    int a;
    char b[100];
    printf("if you will old writing remove to file and new writing write in file enter : 1,\nif you will only read file enter : 2,\nif you will only add new writing write in file and no remove old writing enter : 3.\nenter your choice :");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        write();
        break;
    case 2:
        read();
        break;
    case 3:
        append();
        break;

    default:
        printf("Invalid choice");
        break;
    }
    return 0;
    main();
}