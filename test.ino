86400000 = 1 day in ms

FailBackup = 400 ms
MinTurn = 100 ms
Align = 25 ms

void dispense()
{
turn = millis();
delay(MinTurn);

while ( DigitalRead(HES) == LOW){
    Servo 10°
    if (millis() - turn  > FailBackup)
    {
        Break;
    }
}
Servo 90°
}
