/* Online C Compiler and Editor */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int sumOrTriple(int a, int b);
bool threeOrSevenMultiple(int a);
int tripeltCount(int *a, int b);
int 

void main()
{
    int a;
    bool b;
    // ex 1
    printf("Hello, World!\n");
    a = sumOrTriple(1,1);
    printf("sumOrTriple(1,1): %d\n",a);
    a = sumOrTriple(1,2);
    printf("sumOrTriple(1,2): %d\n",a);
    
    // ex 2
    b = threeOrSevenMultiple(0);
    printf("threeOrSevenMultiple(0): %s\n", b ? "True" : "False"); 
    b = threeOrSevenMultiple(3);
    printf("threeOrSevenMultiple(3): %s\n", b ? "True" : "False"); 
    b = threeOrSevenMultiple(7);
    printf("threeOrSevenMultiple(7): %s\n", b ? "True" : "False"); 
    b = threeOrSevenMultiple(21);
    printf("threeOrSevenMultiple(21): %s\n", b ? "True" : "False"); 
    b = threeOrSevenMultiple(4);
    printf("threeOrSevenMultiple(4): %s\n", b ? "True" : "False"); 
    b = threeOrSevenMultiple(100);
    printf("threeOrSevenMultiple(100): %s\n", b ? "True" : "False"); 
    
    // ex 3
    int c[] = {1,1,1};
    a = tripeltCount(c, 3);
    printf("tripeltCount(1,1,1): %d\n",a);
    int d[] = {1,2,2,2,2};
    a = tripeltCount(d, 5);
    printf("tripeltCount(1,2,2,2,2): %d\n",a);
}

int sumOrTriple(int a, int b){
    if(a == b){
        return 3 * (a + b);
    } else {
        return a + b;
    }
}

bool threeOrSevenMultiple(int a){
    int temp3 = a % 3;
    int temp7 = a % 7;
    
    if(temp3 == 0 || temp7 == 0){
        return true;
    }
    
    return false;
}

int tripeltCount(int *a, int b){
    int counter = 0;
    for(int i = 0; i < b-2; i++){
        if(*a == *(a+1) && *a == *(a+2)){
            counter++;
        }
        a++;
    }
    return counter;
}