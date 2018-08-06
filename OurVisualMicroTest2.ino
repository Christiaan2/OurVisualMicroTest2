#define DefaultLED 13
#define Test 8

int x = 0;

void setup()
{
	Serial.begin(115200);
	Serial.println("Hello, this is a test");
	pinMode(DefaultLED, OUTPUT);
	digitalWrite(DefaultLED, LOW);
}

void loop()
{
	digitalWrite(DefaultLED, LOW);
	delay(1000);
	Serial.print("X = ");
	Serial.println(x);
	digitalWrite(DefaultLED, HIGH);
	delay(1000);
	x++;
	if (x > 9) {
		x = 0;
	}
}

int test() {
	Serial.print("This is a new branch");
}