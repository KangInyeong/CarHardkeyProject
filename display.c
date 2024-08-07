#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "display.h"
#include "observer.h"
#include "horn.h"

void displayMenu() {
    printf("\nAvailable features:\n");
    printf("1. HORN\n");
    printf("2. HEADLIGHTS\n");
    printf("3. TURN_SIGNALS\n");
    printf("4. WINDSHIELD_WIPERS\n");
    printf("5. HAZARD_LIGHTS\n");
    printf("6. CRUISE_CONTROL\n");
    printf("7. RADIO_VOLUME\n");
    printf("8. RADIO_TUNING\n");
    printf("50. EXIT\n");
    printf("3. RADIO\n");
    printf("20. SUNROOF\n");
    printf("21. TRUNK RELEASE\n");
    printf("22. Fuel Cap Release\n");
    printf("23. PARKING BRAKE\n");
    printf("24. DRIVE MODE\n");
    printf("25. TRACTION\n");
    printf("28. STEERING ADJUST\n");
    printf("29. INTERIOR LIGHT\n");
    printf("4. EXIT\n");
    printf("3O. REAR_DEFROST \n");
    printf("31. CHILD_LOCK\n");
    printf("32. MUTE_BUTTON\n");
    printf("33. VOICE_COMMAND\n");
    printf("34. PHONE_ANSWER\n");
    printf("35. PHONE_END_CALL\n");
    printf("36. NAVIGATION\n");
    printf("37. LANE_ASSIST\n");
    printf("38. PARKING_ASSIST\n");
    printf("39. HILL_DESCENT\n");


}

void handleHornCommands() {
    handlerEvent(HORN);
}

void handleHeadlightsCommands() {

    handlerEvent(HEADLIGHTS);
    //unregisterHandler(HEADLIGHTS);

}

void handleTurnSignalsCommands() {

    handlerEvent(TURN_SIGNALS);

}

void handleWindshieldWipersCommands(){
    handlerEvent(WINDSHIELD_WIPERS);
}

void handleHazardLightsCommands(){
    handlerEvent(HAZARD_LIGHTS);
}

void handleCruiseControlCommands(){
    handlerEvent(CRUISE_CONTROL);
}

void handleRadioVolumeCommands(){
    handlerEvent(RADIO_VOLUME);
}

void handleRadioTuningCommands(){
    handlerEvent(RADIO_TUNING);
}

void initializeFeatureHandlers() {
    // Initialize handlers for various features
    initializeHornHandlers();
    initializeHeadlightsHandlers();
    initializeTurnSignalsHandlers();
    initializeWindshieldWipersHandlers();
    initializeHazardLightsHandlers();
    initializeCruiseControlHandlers();
    initializeRadioHandlers();
}

void cleanupFeatureHandlers() {
    // Unregister handlers for various features
    unregisterHandler(HORN, handleHorn);
}
