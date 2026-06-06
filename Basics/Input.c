
/*        THIS PROGRAM DEMONSTRATES HOW TO TAKE DIFFERENT TYPES OF USER INPUT USING
                            VARIOUS FORMAT SPECIFIERS IN C.  
                            
 - %d → Integer
 - %f → Float
 - %c → Character
 - %s → String*/

#include <stdio.h>

int main() {
    // For INTEGER input -
    
    int age;
    printf("enter the age ");
    scanf("%d",&age); // & = address of variable 
    printf("age = %d\n",age);

    // For CHARACTER input -

    char star;
    printf("enter the character ");
    scanf(" %c",&star); // & = address of variable 
    printf("star = %c\n",star);

    // For FLOAT input -

    float number;
    printf("enter the number ");
    scanf(" %f",&number); // & = address of variable 
    printf("number = %f\n",number);

    // For STRINGE input -

    char name[50];
    printf("enter the name =  ");
    scanf(" %s",name); // & = address of variable 
    printf("name = %s\n",name);


    

    return 0;
}