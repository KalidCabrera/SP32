int Pot = 36;

void setup() {
Serial.begin(115200);
pinMode(Pot,INPUT);

}
void loop() {
int valor = AnalogRead(Pot);

Serial.printIn(valor);
delay(100);

}