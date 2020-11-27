int led0 = 0;
int led1 = 1;
int led2 = 2;

bool a;
bool b;
bool c;

void setup() {
  // put your setup code here, to run once:
pinMode(led0, OUTPUT);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(3, INPUT);
pinMode(4, INPUT);
pinMode(5, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
a = digitalRead(3);
b = digitalRead(4);
c = digitalRead(5);

digitalWrite(led0, a);
digitalWrite(led1, b);
digitalWrite(led2, c);


}
