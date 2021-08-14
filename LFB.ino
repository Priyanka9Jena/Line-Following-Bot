//pins  for motors 
int leftf=A0;
int leftb=A1;
int rightf=A2;
int rightb=A3;
for(int i=1;i<=6;i++)
{
int pi=i-1; // pins for photo diodes
int ledi=i+5; // pins for leds
}
void setup() 
{pinMode(A0,OUTPUT); // set motor pin A0 as output pin
pinMode(A1,OUTPUT);
pinMode(A2,OUTPUT);
pinMode(A3,OUTPUT);
for(i=0;i<=5;i++)
{
pinMode(i,INPUT); // set photo diode pins as input pins
 }
for(i=6;i<=11;i++)
{
pinMode(i,OUTPUT); // set led pins as output pins
}
serial.begin(9600);  
}

void loop() 
{
  for(i=6;i<=11;i++)
  {
digitalWrite(i,1); // turn ON all the leds
  } 
for(i=0;i<=5;i++)
 {
  int si=digitalRead(i); // read the pins whether the output of photodiode is 1 or 0 
  }
   if((s0==i)&&(s1==1)&&(s2==0)&&(s3==0)&&(s4==1)&&(s5==1))
   forward();
   else if((s0==1)&&(s1==0)&&(s2==0)&&(s3==1)&&(s4==1)&&(s5==1))
slightleft();
   else if((s0==0)&&(s1==0)&&(s2==1)&&(s3==1)&&(s4==1)&&(s5==1))
hardleft();
   else if((s0==1)&&(s1==1)&&(s2==1)&&(s3==0)&&(s4==0)&&(s5==1))
slightright();
   else if((s0==1)&&(s1==1)&&(s2==1)&&(s3==1)&&(s4==0)&&(s5==0))
hardright();
   else if((s0==1)&&(s1==1)&&(s2==0)&&(s3==0)&&(s4==0)&&(s5==0))
hardright();
   else if((s0==0)&&(s1==0)&&(s2==0)&&(s3==0)&&(s4==1)&&(s5==1))
hardright();
   else if((s0==0)&&(s1==0)&&(s2==0)&&(s3==0)&&(s4==0)&&(s5==0))
   stop();
   else if((s0==1)&&(s1==1)&&(s2==1)&&(s3==1)&&(s4==1)&&(s5==1))
   {
hardright();
    delay(2000); // the program stops for 2000ms and continues the previous function
    }
}
void forward()
{ analogWrite(A0,255);
analogWrite(A1,0);
analogWrite(A2,255);
analogWrite(A3,0);
}
void stop()
{
analogWrite(A0,0);
analogWrite(A1,0);
analogWrite(A2,0);
analogWrite(A3,0);
}
void slightleft()
{
analogWrite(A0,0);
analogWrite(A1,0);
analogWrite(A2,127);
analogWrite(A3,0);
}
void hardleft()
{
analogWrite(A0,0);
analogWrite(A1,0);
analogWrite(A2,255);
analogWrite(A3,0);
}
void slightright()
{
analogWrite(A0,127);
analogWrite(A1,0);
analogWrite(A2,0);
analogWrite(A3,0);
}
void hardright()
{
analogWrite(A0,255);
analogWrite(A1,0);
analogWrite(A2,0);
analogWrite(A3,0);
}
