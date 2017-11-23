// Horse project ISEP
// code to generate signal from microprocessor to EM4095, 
int LED = 13;
int SHD = 23;
int MOD = 24;
int CLK = 25;
int DEMOD = 26;

void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT); //O LED
  pinMode(23, OUTPUT); //O SHD
  pinMode(24, OUTPUT); //O MOD
  pinMode(25, INPUT);  //I RDY/CLK
  pinMode(26, INPUT);  //I DEMOD_OUT

  Serial.begin(9600);
  
}

// the loop function runs over and over again forever
void loop() {
    SendSignal();
    int CLKstate = digitalRead(CLK);
    int DEMODstate = digitalRead(DEMOD);
    // print out the state of the inputs:
    Serial.println(CLKstate);
    Serial.println(DEMODstate);
    delay(1); 
}


void SendSignal()
{
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(SHD, LOW);
  digitalWrite(MOD, HIGH);  
}

  

