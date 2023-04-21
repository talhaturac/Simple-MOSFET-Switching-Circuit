//                                  CODES OF THE STUDY
//   STUDY NAME       :      Simple MOSFET Switching Circuit 
//   MAIN GOAL        :      Creating a Simple MOSFET Trigger Code
//   CONTACT          :      tturac.turk@gazi.edu.tr  &  linkedin.com/in/talhaturacturk/

int ledPin1 = A0;                // First LED is Connected to Pin A0
int ledPin2 = A1;                // Second LED is Connected to Pin A1

void setup() {
  pinMode(ledPin1, OUTPUT);      // Set the First LED Pin as Output
  pinMode(ledPin2, OUTPUT);      // Set the Second LED Pin as Output
}

void loop() {
  digitalWrite(ledPin1, HIGH);   // Turn On the First LED
  delay(500);                    // Wait for 0.5 Seconds
  digitalWrite(ledPin1, LOW);    // Turn Off the First LED
  delay(300);                    // Wait for 0.3 Seconds
  digitalWrite(ledPin2, HIGH);   // Turn On the Second LED
  delay(500);                    // Wait for 0.5 Seconds
  digitalWrite(ledPin2, LOW);    // Turn Off the Second LED
  delay(300);                    // Wait for 0.3 Seconds
}
