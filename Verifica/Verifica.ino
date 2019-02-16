int ROSSO = 13;
int GIALLO = 11;
int BLU = 7;
int VERDE = 5;
int T = 2000;

void setup() {
  // put your setup code here, to run once:
  pinMode(ROSSO, OUTPUT);//13
  pinMode(GIALLO, OUTPUT);//11
  pinMode(BLU, OUTPUT);//7
  pinMode(VERDE, OUTPUT);//VERDE5
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ROSSO, HIGH);
  delay(T);
  digitalWrite(ROSSO, LOW);

  digitalWrite(GIALLO, HIGH);
  delay(T);
  digitalWrite(GIALLO, LOW);

  digitalWrite(BLU, HIGH);
  delay(T);
  digitalWrite(BLU, LOW);

  digitalWrite(VERDE, HIGH);
  delay(T);
  digitalWrite(VERDE, LOW);

}
