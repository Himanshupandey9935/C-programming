/* Logical operator
 It is used when we check the multiple condution */

 #include<stdio.h>

 int main() {

    // And = && 
    printf("%d \n", (4>3) && (5>2)); // Its gives true when both condition are true 
    printf("%d \n", (4>6) && (5>2)); // Its gives false when any one condition are false

    // OR = || 
    printf("%d \n", (4>9) || (5>2)); // Its gives true when any one codition is true
    printf("%d \n", (4>5) || (5>9)); // Its gives false when both condition are false

    // NOT = !
    printf("%d \n", !(4>3)); // it the always the opposite answer 

    return 0;
 }