#include "motion.h"


    Motion::Motion(PinName pin) : _interrupt(pin) {
        _interrupt.rise(this, &Motion::status);
    }

    void Motion::status() {
        state = true;
    }

    int Motion::read() {
        bool tempstate = state;
        state = false;
        return tempstate;
    }