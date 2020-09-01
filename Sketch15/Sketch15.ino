/*
 Name:		Sketch15.ino
 Created:	7/30/2020 10:18:58 AM
 Author:	Janie
*/

// the setup function runs once when you press reset or power the board
int dir = 0;

void setup() {
	Serial.begin(9600);

	pinMode(6, OUTPUT);
	pinMode(7, OUTPUT);
	pinMode(8, OUTPUT);
	pinMode(9, OUTPUT);	
	pinMode(10, OUTPUT);
	pinMode(11, OUTPUT);
	pinMode(12, OUTPUT);

	digitalWrite(6, LOW);
	digitalWrite(7, LOW);
	digitalWrite(8, LOW);
	digitalWrite(9, LOW);	
	digitalWrite(10, LOW);
	digitalWrite(11, LOW);
	digitalWrite(12, LOW);
}

// the loop function runs over and over again until power down or reset
void loop() {
	for (int i = 6; i < 13;)
	{
		if (dir == 0) {
			if (i == 12) { dir = 1; }
			else { i++; }
		}
		else if (dir == 1) {
			if (i == 6) { dir = 0; }
			else { i--; }
		}

		digitalWrite(6, LOW);
		digitalWrite(7, LOW);
		digitalWrite(8, LOW);
		digitalWrite(9, LOW);
		digitalWrite(10, LOW);
		digitalWrite(11, LOW);
		digitalWrite(12, LOW);
		digitalWrite(i, HIGH);
		delay(50);
	}
}
