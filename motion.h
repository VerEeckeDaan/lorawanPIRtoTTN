#include "mbed.h"

class Motion {

public:
    Motion(PinName pin);

    void status();

    int read();

    private:

        InterruptIn _interrupt;
        volatile int _motion;
        bool state;
};


