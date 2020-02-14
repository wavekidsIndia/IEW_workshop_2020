/* Photocell simple testing sketch. 
 
Connect one end of the photocell to 5V, the other end to Analog 0.
Then connect one end of a 10K resistor from Analog 0 to ground 
Connect LED from pin 11 through a resistor to ground 
For more information see*/
 
int LEDpin = 11;          // connect Red LED to pin 11 (PWM pin)
int LEDbrightness;        // 
void setup(void) {
  // We'll send debugging information via the Serial monitor
  Serial.begin(9600);   
  pinMode(LEDpin,OUTPUT);
}
 
void loop(void) {
  //Fading The LED
 for(int i=0;i<255;i=10+i){
     analogWrite(LEDpin, i);
 }
  for(int i=255;i>20;i=i-10){
     
     analogWrite(LEDpin, i);
  }
  Serial.print("Analog reading = ");
 
}
