#include <iostream>
#include <cstdio>

int Calculate(char *name) // Creamos un metodo donde lea un char
{
    int total(0), temp; // Declaramos dos variables, el total es igual a cero
    while (*name) // Mientras tengamos el nombre 
    {   
        if (*name >= 'a' && *name <= 'z')
            
            total += *name - 96;
        
        else if (*name >= 'A' && *name <= 'Z')
            total += *name - 64;
        ++name;
    }
    
    while (total >= 10)
    {
        temp = 0;
        
        while (total)
        {
            temp += total % 10;
            total /= 10;
        }
        total = temp;
    }
    
    return total;
}
int main()
{
    char nameOne[30], nameTwo[30];
    int first, second;
    
    while (gets(nameOne))
    {
        gets(nameTwo);
        first = Calculate(nameOne);
        second = Calculate(nameTwo);
        
        if (first < second)
            printf("%.2f %%\n", first * 100.0 / second);
         
        else
            printf("%.2f %%\n", second * 100.0 / first);
    }
    
}