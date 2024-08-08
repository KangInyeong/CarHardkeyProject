#include "menuw.h"
#include <stdio.h>
#include "observer.h"
#include "file.c"

//30~39
#include "lock_strategy.c"
#include "rear_defrost_strategy.c"
#include "MUTE_BUTTON.c"
#include "VOICE_COMMAND.c"
#include "NAVIGATION.c"
#include "Lane_Support.c"
#include "ParkingAssistance.c"
#include "end_call.c"
#include "answer_call.c"
#include "HILL_DESCENT.c"

#define MAX_NUM 5
#define ONE 1
#define TWO 2



void MUTE_BUTTON_MENU(){
    int option, value;
    int values[MAX_NUM];

    printf("TRUNK RELEASE Menu:\n");
    printf("1. Activate trunk release\n");
    printf("2. Listen to event\n");
    printf("Enter your choice: ");

    if (scanf("%d", &option) != 1) {
        printf("Invalid input. Returning to menu.\n");
        return;
    }

    switch (option) {
        case 1:
            printf("Enter MUTE_BUTTON (0=ON, 1=OFF: ");

        registerHandler(MUTE_BUTTON, muteButtonHandler);
        handlerEvent(MUTE_BUTTON);
        unregisterHandler(MUTE_BUTTON, muteButtonHandler);

        break;

        case 2:
            printf("Listening to events...\n");
            printCurrentValues("MUTE_BUTTON", 1);

        break;

        default:
            printf("Invalid choice. Returning to menu.\n");
        break;
    }

}

void VOICE_COMMAND_MENU(){

    printf("Steering Adjust Menu:\n");
    printf("1. Write value to file\n");
    printf("2. Listen to event\n");
    printf("Enter your choice: ");

    int option, value;
    int values[MAX_NUM];

    if (scanf("%d", &option) != 1) {
        printf("Invalid input. Returning to menu.\n");
        return;
    }


    switch (option) {
        case 1:
            printf("Enter VOICE_COMMAND (0=ON, 1=OFF): ");

        registerHandler(VOICE_COMMAND, voiceCommandToggle);
        handlerEvent(VOICE_COMMAND);
        unregisterHandler(VOICE_COMMAND, voiceCommandToggle);

        break;

        case 2:
            printf("Listening to events...\n");
            printCurrentValues("VOICE_COMMAND", 1);
        break;

        default:
            printf("Invalid choice. Returning to menu.\n");
        break;
    }

}


void PARKING_ASSIST_MENU(){

    printf("Steering Adjust Menu:\n");
    printf("1. Write value to file\n");
    printf("2. Listen to event\n");
    printf("Enter your choice: ");

    int option, value;
    int values[MAX_NUM];

    if (scanf("%d", &option) != 1) {
        printf("Invalid input. Returning to menu.\n");
        return;
    }

    switch (option) {
        case 1:
            printf("Enter PARKING_ASSIST (0=ON, 1=OFF): ");

        if (scanf("%d", &value) != 1 || (value != 0 && value != 1 && value != 2)) {
            printf("Invalid input. Enter 0 or 1.\n");
            return;
        }

        registerHandler(PARKING_ASSIST, handleParkingAssistCommand);
        handlerEvent(PARKING_ASSIST);
        unregisterHandler(PARKING_ASSIST, handleParkingAssistCommand);

        break;

        case 2:
            printf("Listening to events...\n");

        break;

        default:
            printf("Invalid choice. Returning to menu.\n");
            printCurrentValues("PARKING_ASSIST", 1);
        break;
    }

}


void REAR_DEFROST_MENU(){
    int option, value;


    printf("Steering Adjust Menu:\n");
    printf("1. Write value to file\n");
    printf("2. Listen to event\n");
    printf("Enter your choice: ");

    if (scanf("%d", &option) != 1) {
        printf("Invalid input. Returning to menu.\n");
        return;
    }


    switch (option) {
        case 1:
            printf("Enter VOICE_COMMAND (0=ON, 1=OFF): ");

        if (scanf("%d", &value) != 1 || (value != 0 && value != 1)) {
            printf("Invalid input. Enter 0 or 1.\n");
            return;
        }



        registerHandler(REAR_DEFROST, handleDefrostCommand);
        handlerEvent(REAR_DEFROST);
        unregisterHandler(REAR_DEFROST, handleDefrostCommand);


        break;

        case 2:
            printf("Listening to events...\n");

        break;

        default:
            printf("Invalid choice. Returning to menu.\n");
            printCurrentValues("REAR_DEFROST", 1);
        break;
    }

}


void CHILD_LOCK_MENU(){


    int option, value;
    int values[MAX_NUM];

    printf("Steering Adjust Menu:\n");
    printf("1. Write value to file\n");
    printf("2. Listen to event\n");
    printf("Enter your choice: ");

    if (scanf("%d", &option) != 1) {
        printf("Invalid input. Returning to menu.\n");
        return;
    }

    switch (option) {
        case 1:
            printf("Enter VOICE_COMMAND (0=ON, 1=OFF): ");

        registerHandler(CHILD_LOCK, handleLockCommand);
        handlerEvent(CHILD_LOCK);
        unregisterHandler(CHILD_LOCK, handleLockCommand);

        break;

        case 2:
            printf("Listening to events...\n");
            printCurrentValues("CHILD_LOCK", 1);
        break;

        default:
            printf("Invalid choice. Returning to menu.\n");
        break;
    }

}


void NAVIGATION_MENU(){

    int option, value;
    int values[MAX_NUM];

    printf("Steering Adjust Menu:\n");
    printf("1. Write value to file\n");
    printf("2. Listen to event\n");
    printf("Enter your choice: ");

    if (scanf("%d", &option) != 1) {
        printf("Invalid input. Returning to menu.\n");
        return;
    }


    switch (option) {
        case 1:
            printf("Enter VOICE_COMMAND (0=ON, 1=OFF): ");

        registerHandler(NAVIGATION, navigatehandle);
        handlerEvent(NAVIGATION);
        unregisterHandler(NAVIGATION, navigatehandle);

        break;

        case 2:
            printf("Listening to events...\n");
            printCurrentValues("NAVIGATION", 2);

        break;

        default:
            printf("Invalid choice. Returning to menu.\n");
        break;
    }

}


void LANE_ASSIST_MENU(){

    int option, value;
    int values[MAX_NUM];

    printf("Steering Adjust Menu:\n");
    printf("1. Write value to file\n");
    printf("2. Listen to event\n");
    printf("Enter your choice: ");

    if (scanf("%d", &option) != 1) {
        printf("Invalid input. Returning to menu.\n");
        return;
    }

    switch (option) {
        case 1:
        printf("Enter VOICE_COMMAND (0=ON, 1=OFF): ");

        registerHandler(LANE_ASSIST, handleLaneSupportCommand);
        handlerEvent(LANE_ASSIST);
        unregisterHandler(LANE_ASSIST, handleLaneSupportCommand);

        break;

        case 2:
            printf("Listening to events...\n");

        break;

        default:
            printf("Invalid choice. Returning to menu.\n");
            printCurrentValues("LANE_ASSIST", 1);
        break;
    }

}


void Phone_Answer_MENU(){ //35
    int option, value;
    int values[MAX_NUM];

    printf("Steering Adjust Menu:\n");
    printf("1. Write value to file\n");
    printf("2. Listen to event\n");
    printf("Enter your choice: ");

    if (scanf("%d", &option) != 1) {
        printf("Invalid input. Returning to menu.\n");
        return;
    }

    switch (option) {
        case 1:
            printf("Enter VOICE_COMMAND (0=ON, 1=OFF): ");
        registerHandler(PHONE_ANSWER,answerCall);
        handlerEvent(PHONE_ANSWER);
        unregisterHandler(PHONE_ANSWER,answerCall);
        break;

        case 2:
            printf("Listening to events...\n");
        printCurrentValues("PHONE_ANSWER", 1);

        break;

        default:
            printf("Invalid choice. Returning to menu.\n");
        break;
    }

}

void Phone_End_Call_MENU(){
    int option, value;
    int values[MAX_NUM];

    printf("Steering Adjust Menu:\n");
    printf("1. Write value to file\n");
    printf("2. Listen to event\n");
    printf("Enter your choice: ");

    if (scanf("%d", &option) != 1) {
        printf("Invalid input. Returning to menu.\n");
        return;
    }

    switch (option) {
        case 1:
            printf("Enter VOICE_COMMAND (0=ON, 1=OFF): ");

        registerHandler(PHONE_END_CALL,endCallImpl);
        handlerEvent(PHONE_END_CALL);
        unregisterHandler(PHONE_END_CALL,endCallImpl);

        break;

        case 2:
            printf("Listening to events...\n");
            printCurrentValues("PHONE_END_CALL", 1);
        break;

        default:
            printf("Invalid choice. Returning to menu.\n");
        break;
    }

}