#include <stdio.h>

int main(void) {
    int ora1,ora2,minuti1,minuti2,secondi1,secondi2;
    printf("ora1");
    scanf("%d",&ora1);
    printf("ora2");
    scanf("%d",&ora2);
    printf("minuti1");
    scanf("%d",&minuti1);
    printf("minuti2");
    scanf("%d",&minuti2);
    printf("secondi1");
    scanf("%d",&secondi1);
    printf("secondi2");
    scanf("%d",&secondi2);
    int secondi1total=ora1*3600 + minuti1*60;
    printf("secondi totali prima ora=%d",secondi1total);
    int secondi2total=ora2*3600+ minuti2*60;
    printf("secondi totali seconda ora=%d" , secondi2total);
    if(secondi1total>secondi2total){int diff=secondi1total-secondi2total;}
    else{int diff=secondi2total-secondi1total;}
    printf("differenza è:%d,diff");

    return 0;

}