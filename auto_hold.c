#include <stdio.h>
#include "auto_hold.h"


//1on 0off

typedef void(*autoHoldFunction)();

void autoHoldOff() {
    printf("Off the autohold\n");
}

void autoHoldOn() {
    printf("\n--On the autohold mode--\n");
}

void setAutoHold(autoHoldFunction af) {
    // af();
    printf("\n<<Change the current state successful>>\n");
}