//write a function called valid_triangle that takes three real numbers representing the
//lengths of the three sides of a triangle as its arguments,and outputs either true or false
//depending on whether those three lenghts are capable of making a triangle
// a triangle may only have sides with positive length
//the sum of the lengths of any two sides of the triangle must be greater than the legnth of the third side

#include <cs50.h>
#include <stdio.h>

bool valid_triangle(float x, float y, float z);
bool valid_triangle(float x, float y, float z){
    if (x <= 0 || y <= 0 || z <= 0){
        return false;
    }
    if ((x + y) <= z ||(x + z) <= y || (y + z) <= x ){
        return false;
    }
     return true;
}

//cc triangle.c  -lcs50 -lm -o debug
