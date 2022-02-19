#include "ULTRA_SONIC.h"
#include "BUZZER.h"
#include "STD_TYPES.h"
#define  F_CPU 16000000UL
#include "util/delay.h"

int main(void){
    ULTRA_SONIC_INIT_1();
    ULTRA_SONIC_INIT_2();
    BUZZER_INIT(BUZZER_0);
    u16 reading_1;
    u16 reading_2;
    while(1){
        reading_1 = MEASURE_DISTANCE_1();
        reading_2 = MEASURE_DISTANCE_2();
        if(reading_1 < 10 || reading_2 < 10){
            BUZZER_NEAR(BUZZER_0);
        }else if(reading_1 < 20 || reading_2 < 20){
            BUZZER_INTERMEDIATE(BUZZER_0);
        }else if(reading_1 < 30 || reading_2 < 30){
            BUZZER_FAR(BUZZER_0);
        }else{
            BUZZER_OFF(BUZZER_0);
        }
    }
}