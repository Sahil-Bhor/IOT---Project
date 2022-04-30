int r1 = 13;
int o1 = 12;
int g1 = 11;

int r2 = 10;
int o2 = 9;
int g2 = 8;

int r3 = 7;
int o3 = 6;
int g3 = 5;

int r4 = 4;
int o4 = 3;
int g4 = 2;

int input_byte;

void setup()
{
  Serial.begin(9600);
  
  pinMode(r1, OUTPUT);
  pinMode(o1, OUTPUT);
  pinMode(g1, OUTPUT);
  
  pinMode(r2, OUTPUT);
  pinMode(o2, OUTPUT);
  pinMode(g2, OUTPUT);
  
  pinMode(r3, OUTPUT);
  pinMode(o3, OUTPUT);
  pinMode(g3, OUTPUT);
  
  pinMode(r4, OUTPUT);
  pinMode(o4, OUTPUT);
  pinMode(g4, OUTPUT);
}

void glow(int red, int yellow, int green)
{
    digitalWrite(r1, HIGH);
    digitalWrite(r2, HIGH);
    digitalWrite(r3, HIGH);
    digitalWrite(r4, HIGH);

  	digitalWrite(red, LOW);
	
    digitalWrite(yellow, HIGH);
    digitalWrite(green, LOW);
  	delay(2000);
  
    digitalWrite(green, HIGH);
    digitalWrite(yellow, LOW);
  	delay(5000);
	
  	digitalWrite(green, LOW);
}

void driverCode()
{
  digitalWrite(r1, HIGH);
  digitalWrite(r2, HIGH);
  digitalWrite(r3, HIGH);
  digitalWrite(r4, HIGH);
  delay(1000);
  
  glow(r1,o1,g1);
  glow(r3,o3,g3);
  glow(r4,o4,g4);
  glow(r2,o2,g2);
}

void loop()
{
    driverCode();
}


