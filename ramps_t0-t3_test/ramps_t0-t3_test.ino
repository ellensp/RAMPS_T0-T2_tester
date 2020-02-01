

//RAMPS 1.4 Thermistor pins
#define TEMP_0_PIN       A13   // Analog Input
#define TEMP_1_PIN       A14   // Analog Input
#define TEMP_2_PIN       A15   // Analog Input

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);

  Serial.println("Initializing...");
  Serial.println("Simple RAMPS analog ports T0, T1 and T2 tester");
  Serial.println("A RAW value close to 1023 is unplugged");
  Serial.println("A RAW value close to 978 is type 1 at 25 degrees C");
  Serial.println("The RAW value will decrease as temperature increases");


  delay(5000);
  Serial.print("Starting test in 3");
  delay(333);
  Serial.print(".");
  delay(333);
  Serial.print(".");
  delay(333);
  Serial.print("2");
  delay(333);
  Serial.print(".");
  delay(333);
  Serial.print(".");
  delay(333);
  Serial.print("1");
  delay(333);
  Serial.print(".");
  delay(333);
  Serial.print(".");
  delay(333);
  Serial.println("Started");
  
    
}

void loop() {
  // read the analog in value:
  int t0Value = analogRead(TEMP_0_PIN);
  int t1Value = analogRead(TEMP_1_PIN);
  int t2Value = analogRead(TEMP_2_PIN);

  // print the results to the Serial Monitor:
  Serial.print("T0 RAW value = ");
  Serial.println(t0Value);
  Serial.print("T1 RAW value = ");
  Serial.println(t1Value);
  Serial.print("T2 RAW value = ");
  Serial.println(t2Value);

  Serial.print("Next reading in 5");
  delay(333);
  Serial.print(".");
  delay(333);
  Serial.print(".");
  delay(333);
  Serial.print("4");
  delay(333);
  Serial.print(".");
  delay(333);
  Serial.print(".");
  delay(333);
  Serial.print("3");
  delay(333);
  Serial.print(".");
  delay(333);
  Serial.print(".");
  delay(333);
  Serial.print("2");
  delay(333);
  Serial.print(".");
  delay(333);
  Serial.print(".");
  delay(333);
  Serial.print("1");
  delay(333);
  Serial.print(".");
  delay(333);
  Serial.println(".");
  delay(333);

}
