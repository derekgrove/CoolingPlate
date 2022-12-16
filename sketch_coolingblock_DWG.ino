
void setup() {
  pinMode(3, OUTPUT);
  //TCCR2B = TCCR2B & B11111000 | B00000010; // for PWM frequency of 3921.16 Hz
}

void loop() {
  //Read the value of the potentiometer (Voltage from 0 - 5 Volts) from analog input A0
  //Also, in case it isn't clear, use the potenitometer to create a voltage divider using the 5V output, ground, and the variable resistor part connected to A0, in this case.
 int readPot = analogRead(A0);
  //convert the analog value read on A0 (readPot) to a value from 0 to 255, the required range of values for a duty cycle in arduino code
 //int dutyCylce = 
 int dutyCycle = map(readPot, 0, 1023, 0, 255);
 //int dutyCycle = 200;
 //Output a pwm signal on Digital Output pin 10 with duty cycle dutyCycle
 analogWrite (3, dutyCycle);
 //Wait a ms before running loop again. Honestly, probably don't need this part, idk
 delay(1);

}