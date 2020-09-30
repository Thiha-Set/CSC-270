#include <stdio.h>
#include <string.h>

typedef struct{
    char *face;
    char *suit;
}Card;

Card myFunc(){
    Card myCard = {"Three","Hearts"};
    return myCard;
}

int main(void){
    Card myCard = myFunc(), *cardPtr = &myCard;

    printf("%s of %s\n", myCard.face, cardPtr->suit);
    return 0;
}
