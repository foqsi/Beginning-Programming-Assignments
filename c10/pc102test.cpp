#include <iostream>
#include <string.h>
using namespace std;

int reverse(char *s)
{
    int i = 0, n = strlen(s);
    for (i = n - 1; i >= 0; i--)
    {
        printf("%c", s[i]);
    }
}

int main()
{
    char s[100];

    cout << "\nEnter string :";
    gets(s);
    cout << "revers = ";
    reverse(s);
}