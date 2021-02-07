#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int option;
    double val, rad, len, height;

    printf("1 - Calculate area of a circle.\n");
    printf("2 - Calculate circumference of a circle.\n");
    printf("3 - Calculate area of a rectangle.\n");
    printf("Please select an option by entering the relative number of the option: ");

    cin >> option;

    if (option == 1)
    {
        printf("Please enter the radius of the circle: ");
        cin >> rad;
        val = 3.14 * rad * rad;

        printf("Area of the circle is %f\n", val);
    }
    else if (option == 2)
    {
        printf("Please enter the radius of the circle: ");
        cin >> rad;
        val = 2 * 3.14 * rad;

        printf("Circumference of the circle is %f\n", val);
    }
    else if (option == 3)
    {
        printf("Please enter length and height of the rectangle: ");
        cin >> len;
        cin >> height;
        val = len * height;

        printf("Area of the rectangle is %f\n", val);
    }
    else
    {
        printf("Invalid option selected.\n");
    }
}
