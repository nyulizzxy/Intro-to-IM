// The setup function runs once when you press reset or power the board
void setup() {

  pinMode(13, OUTPUT);   // Set digital pin #13 as an output
  pinMode(A2, INPUT);  // Set analog pin A2 as an input
}

// The loop function runs over and over again forever
void loop() {

  // Read the state of the buttons
  int buttonState = digitalRead(A2);

  if (buttonState == HIGH){
    digitalWrite(13, HIGH); // Turn on light
  } else {
    digitalWrite(13, LOW); // Turn off light
  }

}