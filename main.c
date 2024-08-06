#include <stdio.h>
#include "observer.h"
#include "observer.c"
#include "RADIO_SOURCE.c"

int main(){
    // 1. 인터페이스에서 기능을 선택 (1,창문 열임 , 2번 선루프)
    // 2. 1번 선택시 (1. 레지스터 핸들러,2 un레지스터,3 - notify,4,종료)
    initializeObservers();
    // 전략 설정
    registerHandler(RADIO_SOURCE, SwitchAudioSource); // 라디오 소스 기능
    //registerHandler
    //
    handlerEvent(RADIO_SOURCE);

    return 0;


}
