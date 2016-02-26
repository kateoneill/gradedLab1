//input from button turns on LED(output)

void setup() {
  // setup code goes here, only runs once:
    pinMode(3, INPUT);  //input comes from button attached to pin 3
    pinMode(7, OUTPUT); //output to LED attached to pin 7
}

void loop() {
  // main code goes here, which runs repeatedly:
    digitalWrite(7, digitalRead(3));  //when buuton is pressed LED 
                                      // lights up
}
