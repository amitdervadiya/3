#include <stdio.h>
#include<string.h>

enum {
   Monday=1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday,
} Day;

int main() {
   
    
    for (int day = Monday; day <= Sunday; day++) {
        printf("index value:-%d\n", day);
    }


}