// Define pin numbers
const int buzzerPin = 
const int sensorPin =

// Minecraft note block frequencies in Hz
int noteFrequencies[] = {
  185, 196, 207, 220, 233, 247, 262, 277, 294, 311, 330, 349,
  370, 392, 415, 440, 466, 494, 523, 554, 587, 622, 659, 698, 740
};

// Variable to store the current note index
int currentNoteIndex = 0;

// Variable to store the previous state of the sensor
int previousSensorState = HIGH;

void setup() {
  // Set the buzzer pin as output
  pinMode(buzzerPin, OUTPUT);
  // Set the sensor pin as input
  pinMode(sensorPin, INPUT);
}

void loop() {
  // Read the current state of the beam break sensor
  int currentSensorState = digitalRead(sensorPin);

  // Check for a complete cycle (unbroken -> broken -> unbroken)
  
   


   

  // If the beam is broken, play the tone at the current frequency
  if (currentSensorState == LOW) {
    tone(buzzerPin, 1000);
  } else {
    // Stop the tone when the beam is not broken
    noTone(buzzerPin);
  }

  // Update the previous sensor state
  previousSensorState = currentSensorState;

  // Add a small delay to debounce the sensor
  delay(50);
}
