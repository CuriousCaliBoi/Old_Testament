#include <stdio.h>

// print Farenheit-Celcius Table for fahr = 0,20,..,300
int main()
{
    printf("I will be printing a Farnehit to Celcius Table -_-\n\n");
    // initialize variables
    // version 2.0 has floats to be more accurarte for temperature calculations
    float fahr;
    float celc;

    int lower;
    int upper;
    int step;

    //  assign values to variables
    lower = 0;
    upper = 300;
    step = 20;

    celc = lower;

    // Write the heading for the table I dont wanna go to try hard and build a table or actualy fuck it
    // Hm I'm not sure if the bars do much
    // honestly the bars are really fucking cool you can probaby have just enough digits you want to fill it
    // and then you can create letters or shit
    printf("Celc  |  Fahr\n");
    printf("***************\n");
    while (celc <= upper){
        fahr = celc * 9.0/5.0 +32;
        printf("|%.f|\t|%.2f|\t\n", celc, fahr);
        celc = celc + step;
    }

}
// Now i'm going to write a heading above the table
// I would like to somehow standardize the beginning of the celcius values there's probably a way in python

