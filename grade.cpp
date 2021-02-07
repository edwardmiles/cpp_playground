/**
 * @file grade.cpp
 * @author Thavarshan Thayananthajothy (tjthavarshan@gmail.com)
 * @brief Caculate total, average and grade of student based on provided marks.
 * @version 0.1
 * @date 2021-01-30
 *
 * @copyright Thavarshan (c) 2021
 *
 */

#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

/**
 * @brief Calculate total marks of given three subjects.
 *
 * @param sub1
 * @param sub2
 * @param sub3
 * @return int
 */
int calculateTotal(int sub1, int sub2, int sub3)
{
    return sub1 + sub2 + sub3;
}

/**
 * @brief Calculate average value of three subjects.
 *
 * @param sub1
 * @param sub2
 * @param sub3
 * @return int
 */
int calculateAverage(int sub1, int sub2, int sub3)
{
    return calculateTotal(sub1, sub2, sub3) / 3;
}

/**
 * @brief Determine if the given number is between the minimum and maximum numbers.
 *
 * @param min
 * @param max
 * @param num
 * @return true
 * @return false
 */
bool inRange(unsigned min, unsigned max, unsigned num)
{
    return (min <= num && num <= max);
}

/**
 * @brief Determine the grade of the student.
 *
 * @param sub
 */
void gradeStudent(int sub)
{
    if (inRange(75, 100, sub))
        printf("Your grade for subject with marks %d is 'A'\n", sub);
    else if (inRange(65, 74, sub))
        printf("Your grade for subject with marks %d is 'B'\n", sub);
    else if (inRange(55, 64, sub))
        printf("Your grade for subject with marks %d is 'C'\n", sub);
    else if (inRange(45, 54, sub))
        printf("Your grade for subject with marks %d is 'D'\n", sub);
    else
        printf("Unfortunately, you have failed in the subject with %d marks.\n", sub);
}

/**
 * @brief Execute program.
 *
 * @return int
 */
int main()
{
    string name;
    int total, average, sub1, sub2, sub3;

    // First we ask the name of the student.
    printf("Hello! Please enter your name: ");
    // We then set the name of the student to the "name" variable.
    cin >> name;

    // We now produce a welcome message using the name provided by the student.
    printf("Welcome %s,\n", name.c_str());

    // Now we ask for marks of three subject from the student.
    printf("Please enter 3 subject marks: ");
    // And set them to three separate variables.
    cin >> sub1;
    cin >> sub2;
    cin >> sub3;

    // We will save the three variables to an integer array for use later.
    int subs[] = {sub1, sub2, sub3};

    // Using the three marks we calculate the total.
    total = calculateTotal(sub1, sub2, sub3);
    // And the average of the student.
    average = calculateAverage(sub1, sub2, sub3);

    // Now we iteratively print out the grade of each subject marks.
    for (int sub : subs)
        gradeStudent(sub);

    // Finally we print out the total and average of the student.
    printf("Your total marks is %d and average is %d.\n", total, average);

    return 0;
}
