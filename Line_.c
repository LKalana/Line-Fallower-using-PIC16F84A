//LINE_FALLOWER
//AUTHOR:L.K.PERERA

#define Left_Sensor PORTA.F0
#define Middle_Sensor PORTA.F1
#define Right_Sensor PORTA.F2
#define Left_Motor_A PORTB.F0
#define Left_Motor_B PORTB.F1
#define Right_Motor_A PORTB.F3
#define Right_Motor_B PORTB.F2
int Line_Check;
void main(){
TRISA.F0 = 0xFF;
TRISA.F1 = 0xFF;
TRISA.F2 = 0xFF;
TRISB.F0 = 0x00;
TRISB.F1 = 0x00;
TRISB.F2 = 0x00;
TRISB.F3 = 0x00;

Left_Sensor = 0x00;
Middle_Sensor = 0x00;
Right_Sensor = 0x00;
Left_Motor_A = 0x00;
Left_Motor_B = 0x00;
Right_Motor_A = 0x00;
Right_Motor_B = 0x00;

while(1){
/*
BLACK_STRIPE_FUNCTIONS_
*/
if(Left_Sensor==1){
 if(Middle_Sensor==0){
  if(Right_Sensor==1){
   Left_Motor_A = 0xFF;
   Left_Motor_B = 0x00;
   Right_Motor_A = 0xFF;
   Right_Motor_B = 0x00;
  }
 }
}
if(Left_Sensor==0){
 if(Middle_Sensor==0){
  if(Right_Sensor==0){
   if(Line_Check==1){
   Left_Motor_A = 0xFF;
   Left_Motor_B = 0x00;
   Right_Motor_A = 0xFF;
   Right_Motor_B = 0x00;
   delay_ms(1000);
   Left_Motor_A = 0x00;
   Left_Motor_B = 0x00;
   Right_Motor_A = 0x00;
   Right_Motor_B = 0x00;
   Line_Check=0;
   }
  }
 }
}
if(Left_Sensor==1){
 if(Middle_Sensor==0){
  if(Right_Sensor==1){
   if(Line_Check==1){
   Left_Motor_A = 0xFF;
   Left_Motor_B = 0x00;
   Right_Motor_A = 0xFF;
   Right_Motor_B = 0x00;
   Line_Check=0;
   }
  }
 }
}
if(Left_Sensor==0){
 if(Middle_Sensor==0){
  if(Right_Sensor==1){
   Left_Motor_A = 0x00;
   Left_Motor_B = 0xFF;
   Right_Motor_A = 0xFF;
   Right_Motor_B = 0x00;
  }
 }
}
if(Left_Sensor==0){
 if(Middle_Sensor==1){
  if(Right_Sensor==1){
   Left_Motor_A = 0x00;
   Left_Motor_B = 0xFF;
   Right_Motor_A = 0xFF;
   Right_Motor_B = 0x00;
  }
 }
}
if(Left_Sensor==1){
 if(Middle_Sensor==0){
  if(Right_Sensor==0){
   Left_Motor_A = 0xFF;
   Left_Motor_B = 0x00;
   Right_Motor_A = 0x00;
   Right_Motor_B = 0xFF;
  }
 }
}
if(Left_Sensor==1){
 if(Middle_Sensor==1){
  if(Right_Sensor==0){
   Left_Motor_A = 0xFF;
   Left_Motor_B = 0x00;
   Right_Motor_A = 0x00;
   Right_Motor_B = 0xFF;
  }
 }
}
if(Left_Sensor==1){
 if(Middle_Sensor==1){
  if(Right_Sensor==1){
   Line_Check = 1;
   Left_Motor_A = 0x00;
   Left_Motor_B = 0x00;
   Right_Motor_A = 0x00;
   Right_Motor_B = 0x00;
  }
 }
}
if(Left_Sensor==0){
 if(Middle_Sensor==0){
  if(Right_Sensor==0){
   Left_Motor_A = 0xFF;
   Left_Motor_B = 0x00;
   Right_Motor_A = 0xFF;
   Right_Motor_B = 0x00;
  }
 }
}
if(Left_Sensor==1){
 if(Right_Sensor==0){
   Left_Motor_A = 0xFF;
   Left_Motor_B = 0x00;
   Right_Motor_A = 0x00;
   Right_Motor_B = 0xFF;
 }
}
if(Left_Sensor==0){
 if(Right_Sensor==1){
   Left_Motor_A = 0x00;
   Left_Motor_B = 0xFF;
   Right_Motor_A = 0xFF;
   Right_Motor_B = 0x00;
 }
}


 }
}