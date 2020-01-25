#include "LedStatus.h"

LedStatus::LedStatus(int pino){
    pin=pino;
    pinMode(pin,OUTPUT);
}

void LedStatus::acenderLed(){
    digitalWrite(pin,HIGH);
}

void LedStatus::apagarLed(){
    digitalWrite(pin,LOW);
}

void LedStatus::atividade(int tempo){
    acenderLed();
    delay(tempo);
    apagarLed();
    delay(tempo);
}