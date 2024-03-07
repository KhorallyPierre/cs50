#include <cs50.h>
#include <stdio.h>

// write a function called valid_triangle that takes three real numbers
// presenting the lengths of the three sides of a stirange as its argumnets
// and outputs either true or false, depending whather those three lenghts are capable
// of making a triange
// triangles have to have positive lengths
// the sun of the lengths of any two sides of the triangle must be greater than thel ength
// of the 3rd side
bool valid_triangle(float a, float b, float c);
int main(void)
{
  float x = get_float("x: ");
  float y = get_float("y: ");
  float z = get_float("z: ");
    printf("result %i \n", valid_triangle(x,y,z));
}
bool valid_triangle(float a, float b, float c)
{

    if (a <= 0 || b <= 0 || c <= 0)
    {
        return false;
    }
    else if ((a + b <= c) || b + c <= a || c + a <= b)
    {
        return false;
    }
    return true;
}
