#ifndef HANDS_FREE_H
#define HANDS_FREE_H

typedef void (*handsFreeFunction)();

void activateHandsFree(void);
void setupHandsFree(handsFreeFunction hff);

#endif // HANDS_FREE_H
