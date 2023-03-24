#include<stdio.h>
//source = https://www.youtube.com/watch?v=-B8-ZBTX7Og&list=PL3F9Hs9aMou0og6Dzfwx__h1jjb8e81vR&index=3

int main()
{
    int n, m, a, exit, exi;

    printf("Welcome to Modern Perodic Table\n\n");

    printf(">Enter 1 to know about an element\n\n");
    printf(">Enter 2 to close the perodic table\n\n");
    
    printf("ENTER\n");
    scanf("%d", &n);

    if(n==1)
    {
        printf("> Press 3 to search the element by atomic number\n\n");
        printf("ENTER\n");
        scanf("%d", &m);

        if(m==3)
        {
            printf("Enter the atomic number of the element to be searched : ");
            scanf("%d", &a);

            if(a==1)
            {
                printf("Name : Hydrogen\n");
                printf("Syymbol : H\n");
                printf("Atomic number : 1\n");
                printf("Electronic Configuration : 1s^1\n");
                printf("Discovered by : Henry Cayendish\n");
                printf("Charge : +1\n");
            }
        }
    }
    else if(n==2)
    {
        printf("Do you want to exit?(Yes/No)\n");
        printf("> Press 6 for Yes\n");
        printf("Press 7 for No\n");

        printf("ENTER\n");
        scanf("%d", &exit);

        if (exit==6)
        {
            printf("The periodic table has closed");
        } else if(exit==7)
        {
            printf("The periodic not closed yet and you can still continue to learn\n\n");
            printf("Enter the atomic number of the element to be searched : \n\n");
            scanf("%d", &a);

            if (a==1)
            {
                printf("Name : Hydrogen\n");
                printf("Syymbol : H\n");
                printf("Atomic number : 1\n");
                printf("Electronic Configuration : 1s^1\n");
                printf("Discovered by : Henry Cayendish\n");
                printf("Charge : +1\n");
            }
        }
    }
}
