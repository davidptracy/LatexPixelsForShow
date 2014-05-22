/*
    This sketch sweeps a servo on channel 0.

    To connect a servo:
     1. Put a 2k-5k pull-up resistor (R0 below; I've tried with 3.3k) between the
          servo control output pin and +5v.
     2. Connect that same pin to the servo's control line like so

        servo data pin
              |     _____
     OUTn ----+----[_____]---+5v
                      R0

    Steve Pomeroy <steve ~AT~ staticfree.info>, 2009-01-20 */

#include "Tlc5940.h"
#include "tlc_servos.h"

#define SERVO_CHANNEL1   0
#define SERVO_CHANNEL2   1
#define SERVO_CHANNEL3   2
#define SERVO_CHANNEL4   3
#define SERVO_CHANNEL5   4
#define SERVO_CHANNEL6   5
#define SERVO_CHANNEL7   6
#define SERVO_CHANNEL8   7
#define SERVO_CHANNEL9   8
#define SERVO_CHANNEL10   9
#define SERVO_CHANNEL11   10
#define SERVO_CHANNEL12   11
#define SERVO_CHANNEL13   12
#define SERVO_CHANNEL14   13
#define SERVO_CHANNEL15   14
#define SERVO_CHANNEL16   15


#define SERVO_CHANNEL17   16
#define SERVO_CHANNEL18   17
#define SERVO_CHANNEL19   18
#define SERVO_CHANNEL20   19
#define SERVO_CHANNEL21   20
#define SERVO_CHANNEL22   21
#define SERVO_CHANNEL23   22
#define SERVO_CHANNEL24   23
#define SERVO_CHANNEL25   24
#define SERVO_CHANNEL26   25
#define SERVO_CHANNEL27   26
#define SERVO_CHANNEL28   27
#define SERVO_CHANNEL29   28
#define SERVO_CHANNEL30   29
#define SERVO_CHANNEL31   30
#define SERVO_CHANNEL32   31


#define DELAY_TIME      25

void setup()
{
  tlc_initServos();  // Note: this will drop the PWM freqency down to 50Hz.
}

void loop()
{
  for (int angle = 0; angle < 180; angle++) {
    tlc_setServo(SERVO_CHANNEL1, angle);
    tlc_setServo(SERVO_CHANNEL2, angle);
    tlc_setServo(SERVO_CHANNEL3, angle);
    tlc_setServo(SERVO_CHANNEL4, angle);
    tlc_setServo(SERVO_CHANNEL5, angle);
    tlc_setServo(SERVO_CHANNEL6, angle);
    tlc_setServo(SERVO_CHANNEL7, angle);
    tlc_setServo(SERVO_CHANNEL8, angle);
    tlc_setServo(SERVO_CHANNEL9, angle);
    tlc_setServo(SERVO_CHANNEL10, angle);
    tlc_setServo(SERVO_CHANNEL11, angle);
    tlc_setServo(SERVO_CHANNEL12, angle);
    tlc_setServo(SERVO_CHANNEL13, angle);
    tlc_setServo(SERVO_CHANNEL14, angle);
    tlc_setServo(SERVO_CHANNEL15, angle);
    tlc_setServo(SERVO_CHANNEL16, angle);

    tlc_setServo(SERVO_CHANNEL17, angle);
    tlc_setServo(SERVO_CHANNEL18, angle);
    tlc_setServo(SERVO_CHANNEL19, angle);
    tlc_setServo(SERVO_CHANNEL20, angle);
    tlc_setServo(SERVO_CHANNEL21, angle);
    tlc_setServo(SERVO_CHANNEL22, angle);
    tlc_setServo(SERVO_CHANNEL23, angle);
    tlc_setServo(SERVO_CHANNEL24, angle);
    tlc_setServo(SERVO_CHANNEL25, angle);
    tlc_setServo(SERVO_CHANNEL26, angle);
    tlc_setServo(SERVO_CHANNEL27, angle);
    tlc_setServo(SERVO_CHANNEL28, angle);
    tlc_setServo(SERVO_CHANNEL29, angle);
    tlc_setServo(SERVO_CHANNEL30, angle);
    tlc_setServo(SERVO_CHANNEL31, angle);
    
    Tlc.update();
    delay(DELAY_TIME);
  }
  for (int angle = 180; angle >= 0; angle--) {
    tlc_setServo(SERVO_CHANNEL1, angle);
    tlc_setServo(SERVO_CHANNEL2, angle);
    tlc_setServo(SERVO_CHANNEL3, angle);
    tlc_setServo(SERVO_CHANNEL4, angle);
    tlc_setServo(SERVO_CHANNEL5, angle);
    tlc_setServo(SERVO_CHANNEL6, angle);
    tlc_setServo(SERVO_CHANNEL7, angle);
    tlc_setServo(SERVO_CHANNEL8, angle);
    tlc_setServo(SERVO_CHANNEL9, angle);
    tlc_setServo(SERVO_CHANNEL10, angle);
    tlc_setServo(SERVO_CHANNEL11, angle);
    tlc_setServo(SERVO_CHANNEL12, angle);
    tlc_setServo(SERVO_CHANNEL13, angle);
    tlc_setServo(SERVO_CHANNEL14, angle);
    tlc_setServo(SERVO_CHANNEL15, angle);
    tlc_setServo(SERVO_CHANNEL16, angle);

    tlc_setServo(SERVO_CHANNEL17, angle);
    tlc_setServo(SERVO_CHANNEL18, angle);
    tlc_setServo(SERVO_CHANNEL19, angle);
    tlc_setServo(SERVO_CHANNEL20, angle);
    tlc_setServo(SERVO_CHANNEL21, angle);
    tlc_setServo(SERVO_CHANNEL22, angle);
    tlc_setServo(SERVO_CHANNEL23, angle);
    tlc_setServo(SERVO_CHANNEL24, angle);
    tlc_setServo(SERVO_CHANNEL25, angle);
    tlc_setServo(SERVO_CHANNEL26, angle);
    tlc_setServo(SERVO_CHANNEL27, angle);
    tlc_setServo(SERVO_CHANNEL28, angle);
    tlc_setServo(SERVO_CHANNEL29, angle);
    tlc_setServo(SERVO_CHANNEL30, angle);
    tlc_setServo(SERVO_CHANNEL31, angle);
    
    Tlc.update();
    delay(DELAY_TIME);
  }
}

