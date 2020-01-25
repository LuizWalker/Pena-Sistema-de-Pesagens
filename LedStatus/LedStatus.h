#ifndef LEDSTATUS_H
#define LEDSTATUS_H

#include <Arduino.h>

class LedStatus{
    private: 

    int pin;

    public:

    LedStatus(int pino);
    void acenderLed();
    void apagarLed();
    void atividade(int tempo);


};
#endif