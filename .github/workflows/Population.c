//Abhay Bhandarkar
//MSRIT CSE 2026
//1-01-2023
//CS50 Harvard- LAB-1- Population Growth | 2023
#include <cs50.h>
#include <stdio.h>

int main()
{
    // TODO: Prompt for start size
    int start;
    do
    {
        start=get_int("Enter the starting population size: \n");
    }
    while(start<9);
    /*This part of code asks you to re-enter the start number
    if the number is less than 9*/

    // TODO: Prompt for end size
    int end;
    do
    {
        end=get_int("Enter the ending population size: \n");
    }
    while(end<start);

    /*This above part of code asks you to re-enter the end number
    if the number is less than start as there must be more Llamas*/

    // TODO: Calculate number of years until we reach threshold
    int year=0;

    //Case if both the start number and end number is equal
    if (start==end)
    {
        printf("Years: 0");
    }

    do
    {
        start=(start + (start/3) - (start/4));
        year += 1;
    }

    // TODO: Print number of years
    while(start < end);
    printf("Years: %i\n",year);
}
