#ifndef BUZZER_H_
#define BUZZER_H_

#include "STD_TYPES.h"
#include "DIO.h"

#define  BUZZER_0 PA3

void BUZZER_INIT(u8);
void BUZZER_ON(u8);
void BUZZER_OFF(u8);
void BUZZER_NEAR(u8);
void BUZZER_INTERMEDIATE(u8);
void BUZZER_FAR(u8);

#endif /* BUZZER_H_ */