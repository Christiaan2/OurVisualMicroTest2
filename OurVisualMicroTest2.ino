#define LED 13
#define Test 8

int x = 0;

void setup()
{
	Serial.begin(9600);
	Serial.println("Hello, this is a test");
	pinMode(LED, OUTPUT);
	digitalWrite(LED, LOW);
}

void loop()
{
	digitalWrite(LED, LOW);
	delay(1000);
	Serial.print("X = ");
	Serial.println(x);
	digitalWrite(LED, HIGH);
	delay(1000);
	x++;
	if (x > 9) {
		x = 0;
	}
}
