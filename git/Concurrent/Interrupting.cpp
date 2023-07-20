#define LED1 21
#define LED2 22 
hw_timer_t *Timer0_Cfg = NULL;
int bdn,sec1 ;
void IRAM_ATTR Timer0_ISR()
{
    bdn++;
}
void countSec() {
    //  Count if bdn >= 10 equa 1s
    if(bdn >= 10){
        bdn= bdn - 10;
        sec1++;
    }
    // 
    if(sec1 >= 2) {
        sec1 =sec1-2;
    }
}
void Blink(int time,int duty, LED) {
    if( time  <= duty)
    digitalWrite(LED, !digitalRead(LED));
    else digitalWrite(LED, !digitalRead(LED));

}
void setup()
{
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    Timer0_Cfg = timerBegin(0, 80, true);
    timerAttachInterrupt(Timer0_Cfg, &Timer0_ISR, true);
    timerAlarmWrite(Timer0_Cfg, 100, true);
    timerAlarmEnable(Timer0_Cfg);
}
void loop()
{
   Blink(bdn, 5, LED1);
   Blink(sec1, 1, LED2);
}