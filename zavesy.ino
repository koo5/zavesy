



int kroky = 5000;
/*************************************************
http://forum.arduino.cc/index.php?topic=229750.msg1658325#msg1658325
 * Public Constants
 *************************************************/
#define NOTE_Si0  31
#define NOTE_Do1  33
#define NOTE_DoS1 35
#define NOTE_Re1  37
#define NOTE_ReS1 39
#define NOTE_Mi1  41
#define NOTE_Fa1  44
#define NOTE_FaS1 46
#define NOTE_Sol1  49
#define NOTE_SolS1 52
#define NOTE_La1  55
#define NOTE_LaS1 58
#define NOTE_Si1  62
#define NOTE_Do2  65
#define NOTE_DoS2 69
#define NOTE_Re2  73
#define NOTE_ReS2 78
#define NOTE_Mi2  82
#define NOTE_Fa2  87
#define NOTE_FaS2 93
#define NOTE_Sol2  98
#define NOTE_SolS2 104
#define NOTE_La2  110
#define NOTE_LaS2 117
#define NOTE_Si2  123
#define NOTE_Do3  131
#define NOTE_DoS3 139
#define NOTE_Re3  147
#define NOTE_ReS3 156
#define NOTE_Mi3  165
#define NOTE_Fa3  175
#define NOTE_FaS3 185
#define NOTE_Sol3  196
#define NOTE_SolS3 208
#define NOTE_La3  220
#define NOTE_LaS3 233
#define NOTE_Si3  247
#define NOTE_Do4  262
#define NOTE_DoS4 277
#define NOTE_Re4  294
#define NOTE_ReS4 311
#define NOTE_Mi4  330
#define NOTE_Fa4  349
#define NOTE_FaS4 370
#define NOTE_Sol4  392
#define NOTE_SolS4 415
#define NOTE_La4  440
#define NOTE_LaS4 466
#define NOTE_Si4  494
#define NOTE_Do5  523
#define NOTE_DoS5 554
#define NOTE_Re5  587
#define NOTE_ReS5 622
#define NOTE_Mi5  659
#define NOTE_Fa5  698
#define NOTE_FaS5 740
#define NOTE_Sol5  784
#define NOTE_SolS5 831
#define NOTE_La5  880
#define NOTE_LaS5 932
#define NOTE_Si5  988
#define NOTE_Do6  1047
#define NOTE_DoS6 1109
#define NOTE_Re6  1175
#define NOTE_ReS6 1245
#define NOTE_Mi6  1319
#define NOTE_Fa6  1397
#define NOTE_FaS6 1480
#define NOTE_Sol6  1568
#define NOTE_SolS6 1661
#define NOTE_La6  1760
#define NOTE_LaS6 1865
#define NOTE_Si6  1976
#define NOTE_Do7  2093
#define NOTE_DoS7 2217
#define NOTE_Re7  2349
#define NOTE_ReS7 2489
#define NOTE_Mi7  2637
#define NOTE_Fa7  2794
#define NOTE_FaS7 2960
#define NOTE_Sol7  3136
#define NOTE_SolS7 3322
#define NOTE_La7  3520
#define NOTE_LaS7 3729
#define NOTE_Si7  3951
#define NOTE_Do8  4186
#define NOTE_DoS8 4435
#define NOTE_Re8  4699
#define NOTE_ReS8 4978

int bPin = 4;
int oldTempo;

bool stopbutton()
{
  return ( Serial.available()&&(Serial.read() == ' ')) || (digitalRead(10) == 1) || (digitalRead(9) == 0);
}

bool playNote(int noteInt, long length, long tempo = oldTempo,long breath = 0){
  oldTempo = tempo;
  length = length - breath;
  buzz(bPin, noteInt, length, tempo);
  if(breath > 0) { //take a short pause or 'breath' if specified
    delay(breath);
  }
  return(stopbutton());
    
}

void buzz(int targetPin, long frequency, long length, long tempo) {
  long delayValue = 1000000/frequency/2;
  long numCycles = frequency * length/ (tempo/.3);
  for (long i=0; i < numCycles; i++){
    digitalWrite(targetPin,HIGH);
    delayMicroseconds(delayValue/2);
    digitalWrite(targetPin,LOW);
    delayMicroseconds(delayValue*1.5);
  }
}

void hesAPirate()
{
  long tempo = 260;
    /* Note Lenghts:
     62.5 - Sixteenth
     125 - Eight
     250 - Quarter
     500 - Half
     1000 - Whole */
    playNote(NOTE_Re4, 250);if(stopbutton())return;
    playNote(NOTE_Re4, 125);if(stopbutton())return;
    playNote(NOTE_Re4, 250);if(stopbutton())return;
    playNote(NOTE_Re4, 125);if(stopbutton())return;
    playNote(NOTE_Re4, 250);if(stopbutton())return;
    playNote(NOTE_Re4, 125);if(stopbutton())return;
    playNote(NOTE_Re4, 125);if(stopbutton())return;
    playNote(NOTE_Re4, 125);if(stopbutton())return;
    playNote(NOTE_Re4, 125);if(stopbutton())return;
    
    playNote(NOTE_Re4, 250);if(stopbutton())return;
    playNote(NOTE_Re4, 125);if(stopbutton())return;
    playNote(NOTE_Re4, 250);if(stopbutton())return;
    playNote(NOTE_Re4, 125);if(stopbutton())return;
    playNote(NOTE_Re4, 250);if(stopbutton())return;
    playNote(NOTE_Re4, 125);if(stopbutton())return;
    playNote(NOTE_Re4, 125);if(stopbutton())return;
    playNote(NOTE_Re4, 125);if(stopbutton())return;
    playNote(NOTE_Re4, 125);if(stopbutton())return;
    
    playNote(NOTE_Re4, 250);if(stopbutton())return;
    playNote(NOTE_Re4, 125);if(stopbutton())return;
    playNote(NOTE_Re4, 250);if(stopbutton())return;
    playNote(NOTE_Re4, 125);if(stopbutton())return;
    playNote(NOTE_Re4, 250);if(stopbutton())return;
    playNote(NOTE_Re4, 125);if(stopbutton())return;
    playNote(NOTE_Re4, 125);if(stopbutton())return;
    playNote(NOTE_La3, 125);if(stopbutton())return;
    playNote(NOTE_Do4, 125);if(stopbutton())return;
    
    playNote(NOTE_Re4, 250);
    playNote(NOTE_Re4, 250);
    playNote(NOTE_Re4, 125);
    playNote(NOTE_Mi4, 125);
    playNote(NOTE_Fa4, 250);
    playNote(NOTE_Fa4, 250);
    playNote(NOTE_Fa4, 125);
    playNote(NOTE_Sol4, 125);
    if(stopbutton())return;
    playNote(NOTE_Mi4, 250);
    playNote(NOTE_Mi4, 250);
    playNote(NOTE_Re4, 125);
    playNote(NOTE_Do4, 125);
    playNote(NOTE_Do4, 125);
    playNote(NOTE_Re4, 375);
    playNote(NOTE_La3, 125);
    playNote(NOTE_Do4, 125);
    if(stopbutton())return;
    playNote(NOTE_Re4, 250);
    playNote(NOTE_Re4, 250);
    playNote(NOTE_Re4, 125);
    playNote(NOTE_Mi4, 125);
    playNote(NOTE_Fa4, 250);
    playNote(NOTE_Fa4, 250);
    playNote(NOTE_Fa4, 125);
    playNote(NOTE_Sol4, 125);
    if(stopbutton())return;
    playNote(NOTE_Mi4, 250);
    playNote(NOTE_Mi4, 250);
    playNote(NOTE_Re4, 125);
    playNote(NOTE_Do4, 125);
    playNote(NOTE_Re4, 500);
    playNote(NOTE_La3, 125);
    playNote(NOTE_Do4, 125);
    if(stopbutton())return;
    playNote(NOTE_Re4, 250);
    playNote(NOTE_Re4, 250);
    playNote(NOTE_Re4, 125);
    playNote(NOTE_Fa4, 125);
    playNote(NOTE_Sol4, 250);
    playNote(NOTE_Sol4, 250);
    playNote(NOTE_Sol4, 125);
    playNote(NOTE_La4, 125);
    if(stopbutton())return;
    playNote(NOTE_LaS4, 250);
    playNote(NOTE_LaS4, 250);
    playNote(NOTE_La4, 125);
    playNote(NOTE_Sol4, 125);
    playNote(NOTE_La4, 125);
    playNote(NOTE_Re4, 375);
    playNote(NOTE_Re4, 125);
    playNote(NOTE_Mi4, 125);
    if(stopbutton())return;
    playNote(NOTE_Fa4, 250);
    playNote(NOTE_Fa4, 250);
    playNote(NOTE_Sol4, 250);
    playNote(NOTE_La4, 125);
    playNote(NOTE_Re4, 375);
    playNote(NOTE_Re4, 125);
    playNote(NOTE_Fa4, 125);
    if(stopbutton())return;
    playNote(NOTE_Mi4, 250);
    playNote(NOTE_Mi4, 250);
    playNote(NOTE_Fa4, 125);
    playNote(NOTE_Re4, 125);
    playNote(NOTE_Mi4, 500);
    playNote(NOTE_La4, 125);
    playNote(NOTE_Do5, 125);
    if(stopbutton())return;
    playNote(NOTE_Re5, 250);
    playNote(NOTE_Re5, 250);
    playNote(NOTE_Re5, 125);
    playNote(NOTE_Mi5, 125);
    playNote(NOTE_Fa5, 250);
    playNote(NOTE_Fa5, 250);
    playNote(NOTE_Fa5, 125);
    playNote(NOTE_Sol5, 125);
    if(stopbutton())return;
    playNote(NOTE_Mi5, 250);
    playNote(NOTE_Mi5, 250);
    playNote(NOTE_Re5, 125);
    playNote(NOTE_Do5, 125);
    playNote(NOTE_Do5, 125);
    playNote(NOTE_Re5, 375);
    playNote(NOTE_La4, 125);
    playNote(NOTE_Do5, 125);
    if(stopbutton())return;
    playNote(NOTE_Re5, 250);
    playNote(NOTE_Re5, 250);
    playNote(NOTE_Re5, 125);
    playNote(NOTE_Mi5, 125);
    playNote(NOTE_Fa5, 250);
    playNote(NOTE_Fa5, 250);
    playNote(NOTE_Fa5, 125);
    playNote(NOTE_Sol5, 125);
    if(stopbutton())return;
    playNote(NOTE_Mi5, 250);
    playNote(NOTE_Mi5, 250);
    playNote(NOTE_Re5, 125);
    playNote(NOTE_Do5, 125);
    playNote(NOTE_Re5, 500);
    playNote(NOTE_La4, 125);
    playNote(NOTE_Do5, 125);
    if(stopbutton())return;
    playNote(NOTE_Re5, 250);
    playNote(NOTE_Re5, 250);
    playNote(NOTE_Re5, 125);
    playNote(NOTE_Fa5, 125);
    playNote(NOTE_Sol5, 250);
    playNote(NOTE_Sol5, 250);
    playNote(NOTE_Sol5, 125);
    playNote(NOTE_La5, 125);
    if(stopbutton())return;
    playNote(NOTE_LaS5, 250);
    playNote(NOTE_LaS5, 250);
    playNote(NOTE_La5, 125);
    playNote(NOTE_Sol5, 125);
    playNote(NOTE_La5, 125);
    playNote(NOTE_Re5, 375);
    playNote(NOTE_Re5, 125);
    playNote(NOTE_Mi5, 125);
    if(stopbutton())return;
    playNote(NOTE_Fa5, 250);
    playNote(NOTE_Fa5, 250);
    playNote(NOTE_Sol5, 250);
    playNote(NOTE_La5, 125);
    playNote(NOTE_Re5, 375);
    playNote(NOTE_Re5, 125);
    playNote(NOTE_Fa5, 125);
    if(stopbutton())return;
    playNote(NOTE_Mi5, 250);
    playNote(NOTE_Mi5, 250);
    playNote(NOTE_Re5, 125);
    playNote(NOTE_Do5, 125);
    playNote(NOTE_Re5, 250);
    playNote(NOTE_Re5, 250);
    playNote(NOTE_Mi5, 250);
    if(stopbutton())return;
    playNote(NOTE_Fa5, 250);
    playNote(NOTE_Fa5, 125);
    playNote(NOTE_Fa5, 125);
    playNote(NOTE_Sol5, 250);
    playNote(NOTE_La5, 500);
    playNote(NOTE_Fa5, 125);
    playNote(NOTE_Re5, 125);
    if(stopbutton())return;
    playNote(NOTE_La4, 750);
    playNote(NOTE_LaS5, 500);
    playNote(NOTE_Sol5, 125);
    playNote(NOTE_Re5, 125);
    if(stopbutton())return;
    playNote(NOTE_LaS4, 750);
    playNote(NOTE_Mi4, 125);
    playNote(NOTE_Mi4, 250);
    playNote(NOTE_Fa4, 375);
    playNote(NOTE_Sol4, 500);
    playNote(NOTE_Fa4, 125);
    playNote(NOTE_Sol4, 125);
    if(stopbutton())return;
    playNote(NOTE_La4, 250);
    playNote(NOTE_La4, 250);
    playNote(NOTE_La4, 250);
    playNote(NOTE_LaS4, 125);
    playNote(NOTE_La4, 625);
    if(stopbutton())return;
    playNote(NOTE_Sol4, 250);
    playNote(NOTE_Sol4, 250);
    playNote(NOTE_Sol4, 250);
    playNote(NOTE_Sol4, 125);
    playNote(NOTE_La4, 625);
    if(stopbutton())return;
    playNote(NOTE_La4, 250);
    playNote(NOTE_La4, 250);
    playNote(NOTE_La4, 250);
    playNote(NOTE_LaS4, 125);
    playNote(NOTE_La4, 625);
    if(stopbutton())return;
    playNote(NOTE_Sol4, 250);
    playNote(NOTE_Fa4, 250);
    playNote(NOTE_Mi4, 250);
    playNote(NOTE_Re4, 500);
    playNote(NOTE_Re4, 125);
    playNote(NOTE_Mi4, 125);
    if(stopbutton())return;
    playNote(NOTE_Fa4, 500);
    playNote(NOTE_Sol4, 125);
    playNote(NOTE_La4, 125);
    playNote(NOTE_Sol4, 250);
    playNote(NOTE_Fa4, 250);
    playNote(NOTE_Mi4, 250);
    if(stopbutton())return;
    playNote(NOTE_Fa4, 250);
    playNote(NOTE_Sol4, 250);
    playNote(NOTE_La4, 250);
    playNote(NOTE_Sol4, 500);
    playNote(NOTE_Fa4, 125);
    playNote(NOTE_Sol4, 125);
    if(stopbutton())return;
    playNote(NOTE_La4, 500);
    playNote(NOTE_Sol4, 125);
    playNote(NOTE_Fa4, 125);
    playNote(NOTE_Mi4, 250);
    playNote(NOTE_Fa4, 250);
    playNote(NOTE_Mi4, 250);
    if(stopbutton())return;
    playNote(NOTE_Re4, 500);
    playNote(NOTE_Mi4, 125);
    playNote(NOTE_Do4, 125);
    playNote(NOTE_Re4, 500);
    playNote(NOTE_Re5, 125);
    playNote(NOTE_Mi5, 125);
    if(stopbutton())return;
    playNote(NOTE_Fa5, 500);
    playNote(NOTE_Mi5, 125);
    playNote(NOTE_Fa5, 125);
    playNote(NOTE_Sol5, 250);
    playNote(NOTE_Fa5, 250);
    playNote(NOTE_Sol5, 250);
    if(stopbutton())return;
    playNote(NOTE_La5, 250);
    playNote(NOTE_Sol5, 250);
    playNote(NOTE_Fa5, 250);
    playNote(NOTE_Re5, 500);
    playNote(NOTE_Re5, 125);
    playNote(NOTE_Mi5, 125);
    if(stopbutton())return;
    playNote(NOTE_Fa5, 250);
    playNote(NOTE_Sol5, 250);
    playNote(NOTE_La5, 250);
    playNote(NOTE_LaS5, 250);
    playNote(NOTE_Re5, 250);
    playNote(NOTE_Sol5, 250);
    if(stopbutton())return;
    playNote(NOTE_Fa5, 500);
    playNote(NOTE_Sol5, 125);
    playNote(NOTE_Mi5, 125);
    playNote(NOTE_Re5, 500);
    
    playNote(NOTE_Mi5, 125);if(stopbutton())return;
    playNote(NOTE_Do5, 125);if(stopbutton())return;
    playNote(NOTE_La5, 750);if(stopbutton())return;
    playNote(NOTE_LaS5, 750);if(stopbutton())return;
    playNote(NOTE_La5, 250);if(stopbutton())return;
    playNote(NOTE_La5, 250);if(stopbutton())return;
    playNote(NOTE_La5, 250);if(stopbutton())return;
    
    playNote(NOTE_La5, 125);if(stopbutton())return;
    playNote(NOTE_Sol5, 625);if(stopbutton())return;
    playNote(NOTE_Sol5, 750);if(stopbutton())return;
    
    playNote(NOTE_Fa5, 750);if(stopbutton())return;
    playNote(NOTE_Mi5, 250);if(stopbutton())return;
    playNote(NOTE_Fa5, 250);if(stopbutton())return;
    playNote(NOTE_Mi5, 250);if(stopbutton())return;
    
    playNote(NOTE_Re5, 375);if(stopbutton())return;
    playNote(NOTE_Re5, 125);if(stopbutton())return;
    playNote(NOTE_Mi5, 125);if(stopbutton())return;
    playNote(NOTE_Fa5, 125);if(stopbutton())return;
    playNote(NOTE_La5, 375);if(stopbutton())return;
    playNote(NOTE_Re5, 125);if(stopbutton())return;
    playNote(NOTE_Mi5, 125);if(stopbutton())return;
    playNote(NOTE_Fa5, 125);if(stopbutton())return;
    
    playNote(NOTE_LaS5, 375);if(stopbutton())return;
    playNote(NOTE_Re5, 125);if(stopbutton())return;
    playNote(NOTE_Mi5, 125);if(stopbutton())return;
    playNote(NOTE_Fa5, 125);if(stopbutton())return;
    playNote(NOTE_La5, 250);if(stopbutton())return;
    playNote(NOTE_La5, 250);if(stopbutton())return;
    playNote(NOTE_Do6, 250);if(stopbutton())return;
    
    playNote(NOTE_La5, 125);if(stopbutton())return;
    playNote(NOTE_Sol5, 625);if(stopbutton())return;
    playNote(NOTE_Sol5, 750);if(stopbutton())return;
 
    playNote(NOTE_Fa5, 750);if(stopbutton())return;
    playNote(NOTE_Mi5, 250);if(stopbutton())return;
    playNote(NOTE_Fa5, 250);if(stopbutton())return;
    playNote(NOTE_Mi5, 250);if(stopbutton())return;
    
    playNote(NOTE_Re5, 750);if(stopbutton())return;
    playNote(NOTE_Re4, 1000);if(stopbutton())return;
    clear();
}




/*-----------------------------------------------------*/



byte obejvak_pins[4] = {A0, A1, A2, A3};



int stepCount = 0;         // number of steps the motor has taken

void setup() {
  Serial.begin(115200);
  digitalWrite(10, 1);
  digitalWrite(9, 1);

  for (int i = 4; i <= 7; i++)
    pinMode(i, 1);
  wind();
  unwind();
  hesAPirate();
    for (int i = 4; i <= 7; i++)
    pinMode(i, 0);

  obejvak_go();//

}
void pauza()
{
    /*
  Serial.println("wt");
  long nextMicros= micros() + 1000*60*14;
  Serial.println("f");
  while (micros() < nextMicros)
  {
    Serial.println("...");
    if(stopbutton()){
      Serial.println("ok");
      delay(1000);
      break;
    }
    Serial.print(nextMicros - micros());
    Serial.println("us pause");
  }*/
}


int dir;
byte holdtime;
bool is_unwind;
int pause, real_pause;
int pin = 1;
byte pins[6] = {7, 4,5,6,7, 4};


float unfinishedness()
{
  if(kroky==0)kroky=1;
  float ret = ((double)kroky + 1 - (double)stepCount*3) / (double)kroky;
  if(ret < 0) ret = 0;
  return ret;
}


#include <SoftPWM.h>
const int pwmlevels = 11;

SOFTPWM_DEFINE_OBJECT_WITH_PWM_LEVELS(4, (pwmlevels));
SOFTPWM_DEFINE_CHANNEL(0, DDRC, PORTC, PORTC0);  //Arduino pin A0
SOFTPWM_DEFINE_CHANNEL(1, DDRC, PORTC, PORTC1);  //Arduino pin A1
SOFTPWM_DEFINE_CHANNEL(2, DDRC, PORTC, PORTC2);  //Arduino pin A2
SOFTPWM_DEFINE_CHANNEL(3, DDRC, PORTC, PORTC3);  //Arduino pin A3


void obejvak_go()
{
  for (byte pin = 0; pin < 4; pin++)
    pinMode(obejvak_pins[pin], 1);
  Serial.println("palantis");
  Palatis::SoftPWM.begin(215000/pwmlevels);

  // print interrupt load for diagnostic purposes
  Palatis::SoftPWM.printInterruptLoad();

  //const byte pins[4][4] = {{1,0,1,0},{0,1,1,0},{0,1,0,1},{1,0,0,1}};
  const byte pins[16][4] = {
    {0,0,0,0},
    {0,0,0,0},
    {0,0,0,0},
    {0,1,1,0},
//    {0,0,1,0},//
    {0,0,0,0},
    {0,0,0,0},
    {0,0,0,0},
    {0,1,0,1},
//    {0,1,0,0},//
    {0,0,0,0},
    {0,0,0,0},
    {0,0,0,0},
    {1,0,0,1},
//    {0,0,0,1},//
    {0,0,0,0},
    {0,0,0,0},
    {0,0,0,0},
    {1,0,1,0}
//    {1,0,0,0}//
    };
  
//  const byte pins[4][4] = {{1,0,0,0},{0,0,1,0},{0,1,0,0},{0,0,0,1}};
  
  for (int step = 0; step < 30000; step++)
  {
    Serial.print("step ");
    Serial.println(step);

    unsigned long const WAIT = 50000 / pwmlevels;
    unsigned long nextMicros = 0;
    int max_level = pwmlevels - 1;
    for (unsigned int v = 0; v <= max_level; ++v)
    {
      if(stopbutton())return;
      //Serial.println(micros());
      while (micros() < nextMicros);
      nextMicros = micros() + WAIT;
      
      for (byte pin = 0; pin < 4; pin++)
      {
        const byte cur = pins[step &     0b1111][pin];
        const byte next= pins[(1+step) & 0b1111][pin];

        int l;
        if (cur && next)
          l = max_level;
        if (cur && !next)
          l = max_level - v;
        if (!cur && !next)
          l = 0;
        if (!cur && next)
          l = v;
         
        Palatis::SoftPWM.set(pin, l);
        //digitalWrite(obejvak_pins[pin], l);
      }
    }
  }
  for (byte pin = 0; pin < 4; pin++)
  {
//    int p = obejvak_pins[pin];
      //Palatis::SoftPWM.set(pin, 0);
    Palatis::SoftPWM.allOff();
//    digitalWrite(p, 0);
//    pinMode(p, 0);
  }
}

void step() {
  
  real_pause = pause;
  int force = 45;
  if(is_unwind)
    force = 10 + ((float)(45 - 7) * unfinishedness());
  if (holdtime != force)
  {
    holdtime = force;
    Serial.print("FORCE:");
    Serial.println(force);
  }
  real_pause = holdtime * 10;
  
  digitalWrite(pins[pin], 1);
  
  delay(holdtime);
  Serial.print("stepCount:");
  Serial.println(stepCount);
  Serial.print("real_pause:");
  Serial.println(real_pause);

  if (!is_unwind)
    digitalWrite(pins[pin+1], 1);
    
  digitalWrite(pins[pin], 0);
  
  if (!is_unwind)
  {
    delay(holdtime);
    digitalWrite(pins[pin+1], 0);
  }
  pin += dir;
  if (pin > 4) pin = 1;
  if (pin < 1) pin = 4;
  stepCount++;
}

void loop() {

}

void unwind()
{
  is_unwind  = 1;
  holdtime = 15;
  pause = 175;
  kroky = 4600;
  dir = -1;
  go();
}

void wind()
{
  is_unwind  = 0;
  holdtime = 45;
  pause = 610;
  kroky = 5000;
  dir = 1;
  go();
}

void go()
{
  for (int steps = 0; steps < kroky; steps++)
  {
    step();
    delay(real_pause);
    if(stopbutton())
      goto end;
  }
  end:
    delay(2000);
  clear();
}

void clear()
{
    for (int i = 0; i <= 5; i++)
      digitalWrite(pins[i], 0);
    stepCount = 0;
}

