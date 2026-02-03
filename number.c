#include <stdio.h>
int main(void){
    int water;
    int milk;
    water = 198;
    milk = 138;
    printf("%d\n", ((int)(1000 - ((water + milk * 2 )* 1.05 ))));
    return 0;
}
