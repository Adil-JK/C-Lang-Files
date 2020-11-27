int button0 = 0;
int button1 = 1;
int led13 = 13;
bool state = false;


void setup() {
  // put your setup code here, to run once:
pinMode(button0, INPUT);
pinMode(button1, INPUT);
pinMode(led13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(button0)){
  state = true;
}

if (digitalRead(button1)){
  state = false; 
}

digitalWrite(led13, state);

//else if ((digitalRead(button1)) {
//   
//    state = true;
// 
//}



}
