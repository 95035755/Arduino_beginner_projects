void setup() {
  // put your setup code here, to run once:
  int switchState = 0;
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  switchState = digitalRead(2);
}

myFunction(a, b) {
  int answer = a + b;
  return answer;
}
