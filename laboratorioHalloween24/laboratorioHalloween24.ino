#define led_pin1 2
#define led_pin2 3
#define led_pin3 7
#define led_pin4 8
#define led_pin5 12
#define led_pin6 13

#define led_eye1 5
#define led_eye2 6

void setup() {
  // put your setup code here, to run once:
  pinMode(led_pin1, OUTPUT);
  pinMode(led_pin2, OUTPUT);
  pinMode(led_pin3, OUTPUT);
  pinMode(led_pin4, OUTPUT);
  pinMode(led_pin5, OUTPUT);
  pinMode(led_pin6, OUTPUT);

  pinMode(led_eye1, OUTPUT);
  pinMode(led_eye2, OUTPUT);
}

void pulse_led(int led_num) {
  digitalWrite(led_num, HIGH);
  delay(1000);
  
  digitalWrite(led_num, LOW);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led_pin1, HIGH);
  digitalWrite(led_pin2, HIGH);
  digitalWrite(led_pin3, HIGH);
  digitalWrite(led_pin4, HIGH);
  digitalWrite(led_pin5, HIGH);
  digitalWrite(led_pin6, HIGH);

  pulse_led(led_eye1);
  pulse_led(led_eye2);
}
