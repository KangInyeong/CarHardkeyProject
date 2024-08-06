//
// Created by MinseokK on 24. 7. 31.
//
#include <stdio.h>

// 인터페이스
typedef void (*radio_source_function)();

// 전역 변수로 전략 함수 포인터를 선언


// 전략
void AM(){
    printf("AM mode.\n");
}

void FM(){
    printf("FM mode.\n");
}

void Bluetooth(){
    printf("Bluetooth mode.\n");
}

// Context
void SwitchAudioSource(){
    char s;
    printf("AM/FM/Bt(0/1/2) : ");
    scanf("%c", &s);
    if (s == '0') {
        AM();
    }else if(s == '1') {
        FM();
    }else if(s == '2'){
        Bluetooth();
    }
}

// main
// int main(){
//     radio_source_function source_strategy = AM;
//
//     SwitchAudioSource(source_strategy);
//
//     return 0;
// }