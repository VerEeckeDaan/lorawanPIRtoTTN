#include "Pirsensor.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int PirSensor::get_motion(void){
    srand(time(NULL));
    int x = rand() %101;
    return x;
}