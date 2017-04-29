/*
  ledBlinking_digital
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
  * pinMode(pin, mode) - Configures the specified pin to behave either as an input or an output
     Parameters - pin : the number of the pin whose mode you wish to set
                  mode : INPUT, OUTPUT or INPUT_PULLUP
     Reference - https://www.arduino.cc/en/Reference/pinMode
  * digitalWrite(pin, value) - Write a HIGH or a LOW value to a digital pin
     Parameters - pin : the pin number
                  value : HIGH or LOW
     Reference - https://www.arduino.cc/en/Reference/digitalWrite
  * delay(ms) - Pauses the program for the amount of time (in milliseconds) specified as parameter.
     Parameters - ms : the number of milliseconds to pause
     Reference - https://www.arduino.cc/en/reference/delay
 */

//  Library
//    Put your libraries that you want to use here

//  Define
//    Put your constant definition here
#define led 13

//  Variable
//    Put your variables here
int time = 1000; // 1 second

//  Extras
//    Put your extra setup here, ex. library initialization


void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly: 
  
  digitalWrite(led, HIGH);
  delay(time);
  digitalWrite(led, LOW);
  delay(time);
}
