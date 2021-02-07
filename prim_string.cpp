#include <cstdio>

using namespace std;

int main()
{
    char s[] = "Thavarshan";

    printf("String is: %s\n", s);

    for (int i = 0; s[i] != 0; i++)
    {
        printf("Char is: %c\n", s[i]);
    }

    for (char *cp = s; *cp; ++cp)
    {
        printf("Char is: %c\n", *cp);
    }

    return 0;
}
