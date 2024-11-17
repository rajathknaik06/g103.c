/* Nina is studying geometry and wants to calculate the properties of a sphere. Write a program to help her find the diameter, surface area, and volume of a sphere based on its radius. 



Prompt Nina to input the radius, then output the calculated results.



Formula

Diameter of a sphere = 2.0 * radius
Surface area of a sphere = 4.0 * pi * radius2
Volume of a sphere = (4.0 / 3.0) * pi * radius3


Note: The power is calculated using pow() function and the pi value is calculated using M_PI constant from the math library.

Input format :
The input consists of a double-value r, representing the radius of a sphere.

Output format :
The first line prints "Diameter: " followed by a double value, representing the diameter of the sphere, rounded to two decimal places.

The second line prints "Surface area: " followed by a double value, representing the surface area of the sphere, rounded to two decimal places.

The third line prints "Volume: " followed by a double value, representing the volume of the sphere, rounded to two decimal places.

*/

#include <stdio.h>
#include <math.h>

int main() {
    double radius;
    scanf("%lf", &radius);

    double diameter = 2.0 * radius;
    double surface_area = 4.0 * M_PI * pow(radius, 2);
    double volume = (4.0 / 3.0) * M_PI * pow(radius, 3);

    printf("Diameter: %.2lf\n", diameter);
    printf("Surface area: %.2lf\n", surface_area);
    printf("Volume: %.2lf\n", volume);

    return 0;
}
