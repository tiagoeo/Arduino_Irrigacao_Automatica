// Projeto de Irrigação automática - Arduino
#define rele 3
#define sensor 2

bool irrigar = false;

void setup() {
  pinMode(rele, OUTPUT);
  pinMode(sensor, INPUT);

  digitalWrite(rele, HIGH);
}

void loop() {

}
