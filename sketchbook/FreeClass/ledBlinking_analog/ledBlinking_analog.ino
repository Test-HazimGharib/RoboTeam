/*
  ledBlinking_analog
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  Code definition :
  * #define - A usefule C component that allows the programmer to give a name to a constant value before the program is compiled
     Syntax - #define constantName value
     Reference - https://www.arduino.cc/en/reference/define
  * int - Integers are your primary data-type for number storage
     Syntax - int var = val;
               var - you int variable name
               val - the value you assign to that variable
     Reference - https://www.arduino.cc/en/reference/int
  * delay(ms) - Pauses the program for the amount of time (in milliseconds) specified as parameter.
     Parameters - ms : the number of milliseconds to pause
     Reference - https://www.arduino.cc/en/reference/delay
  * analogWrite(pin, value) - Writes an analog value(PWM wave) to a pin
     Parameters - pin : the pin to write to
                  value : the duty cycle: between 0(always off) and 255(always on)
     Reference - https://www.arduino.cc/en/Reference/analogWrite
 */

//  Library
//    Put your libraries that you want to use here

//  Define
//    Put your constant definition here
#define led 11

//  Variable
//    Put your variables here
int time = 1000; // 1 second

//  Extras
//    Put your extra setup here, ex. library initialization


void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly: 
  
  analogWrite(led, 255);
  delay(time);
  analogWrite(led, 0);
  delay(time);
}
