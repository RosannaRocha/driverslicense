//
//  main.c
//  drivers license
//
//  Created by Rosanna Rocha on 9/11/20.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declare variables
    int age, waiting_years;
    
    // Get input from the user
    printf("How old are you?\n");
    scanf("%d", &age);
    
    // Calculate waiting years
    waiting_years = (16 - age);
    
    // Print output depending on age
    if (age >= 16)
    {
        printf("Since you are %d, you are old enough to get a driver's license!\n\n", age);
    }
    
    else
    {
        printf("Since you are %d, you are not old enough to get a driver's license! You must wait %d year(s). \n\n", age, waiting_years);
    }
    
    // Return statement 
    return 0;
}
