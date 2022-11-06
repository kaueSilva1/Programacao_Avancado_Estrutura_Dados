#include <stdio.h>

int main (){
    double P1, P2, P3, media;
    scanf ("%lf", &P1);
    scanf ("%lf", &P2);
    scanf ("%lf", &P3);
    
    media=(P1*2 + P2*2+ P3*4)/(2+2+4);
    if(media >=6.0)
    printf("\nAprovado...");
    else
    printf("\nReprovado...");
    
    printf("\nMedia: %lf", media);
    return 0;
}