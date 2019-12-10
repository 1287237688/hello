int lpin = 13;

void setup() {
    pinMode(lpin, OUTPUT); //设置管脚为输出模式
}

void loop() {
    printf("hello");
    delay(999);
    for(int i=0;i<6;i++)
    {
        digitalWrite(lpin, HIGH);
        delay(200);
        digitalWrite(lpin, LOW);
        delay(200);
    }
    delay(500);
    for(int i=0;i<1;i++)
    {
        digitalWrite(lpin, HIGH);
        delay(640);
        digitalWrite(lpin, LOW);
        delay(500);
    }
    delay(500);
    for(int i=0;i<3;i++)
    {
        digitalWrite(lpin, HIGH);
        delay(120);
        digitalWrite(lpin, LOW);
        delay(120);
    }
    delay(500);
    for(int i=0;i<1;i++)
    {
        digitalWrite(lpin, HIGH);
        delay(640);
        digitalWrite(lpin, LOW);
        delay(500);
    }
    delay(500);
    for(int i=0;i<2;i++)
    {
        digitalWrite(lpin, HIGH);
        delay(120);
        digitalWrite(lpin, LOW);
        delay(120);
    }
    delay(500);
    for(int i=0;i<3;i++)
    {
        digitalWrite(lpin, HIGH);
        delay(640);
        digitalWrite(lpin, LOW);
        delay(500);
    }
    delay(500);
}
