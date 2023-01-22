
// #include <stdio.h>

// int main()
// {
//     int unit;
//     float amt, total_amt, sur_charge;

//     /* Input unit consumed from user */
//     printf("Enter total units consumed: ");
//     scanf("%d", &unit);

//     /* Calculate electricity bill according to given conditions */
//     if(unit <= 50)
//     {
//         amt = unit * 0.50;
//     }
//     else if(unit <= 150)
//     {
//         amt = 25 + ((unit-50) * 0.75);
//     }
//     else if(unit <= 250)
//     {
//         amt = 100 + ((unit-150) * 1.20);
//     }
//     else
//     {
//         amt = 220 + ((unit-250) * 1.50);
//     }

//     /*
//      * Calculate total electricity bill
//      * after adding surcharge
//      */
//     sur_charge = amt * 0.20;
//     total_amt  = amt + sur_charge;

//     printf("Electricity Bill = Rs. %.2f", total_amt);

//     return 0;
// }

#include <stdio.h>
#include <math.h> /* Used for sqrt() */

int main()
{
    float a, b, c;
    float root1, root2, imaginary;
    float discriminant;

    printf("Enter values of a, b, c of quadratic equation (aX^2 + bX + c): ");
    scanf("%f%f%f", &a, &b, &c);

    /* Find discriminant of the equation */
    discriminant = (b * b) - (4 * a * c);

    /* Find the nature of discriminant */
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Two distinct and real roots exists: %.2f and %.2f", root1, root2);
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);

        printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);
    }
    else if (discriminant < 0)
    {
        root1 = root2 = -b / (2 * a);
        imaginary = sqrt(-discriminant) / (2 * a);

        printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f",
               root1, imaginary, root2, imaginary);
    }

    return 0;
}