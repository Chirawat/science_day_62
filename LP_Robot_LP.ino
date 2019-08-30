#include "F:\3-LP\Science_day_62\LP_Robot_LP\LP_robot_LP.h"

void setup(){
  lp_init();
 
  
} 


void loop(){ 
  Serial.print(digitalRead(14));
  Serial.print(", ");
  Serial.print(digitalRead(15));
  Serial.print(", ");
  Serial.print(digitalRead(16));
  Serial.print(", ");
  Serial.println(digitalRead(17));

  ////////////////////////////
  if(digitalRead(14) && digitalRead(15) && digitalRead(16) && !digitalRead(17)){
    fd(100,100); 
  }
  else if(digitalRead(14) && digitalRead(15) && !digitalRead(16) && digitalRead(17)){
    bk(100,100);
  }
  else if(!digitalRead(14) && digitalRead(15) && digitalRead(16) && digitalRead(17)){
    sl(100,100);
  }
  else if(digitalRead(14) && !digitalRead(15) && digitalRead(16) && digitalRead(17)){
    sr(100,100);
  }
  else if(!digitalRead(14) && digitalRead(15) && digitalRead(16) && !digitalRead(17)){
    sl(100,100);
  }
  else if(digitalRead(14) && !digitalRead(15) && digitalRead(16) && !digitalRead(17)){
    sr(100,100);
  }
  else if(!digitalRead(14) && digitalRead(15) && !digitalRead(16) && digitalRead(17)){
    sl(100,100);
  }
  else if(digitalRead(14) && !digitalRead(15) && !digitalRead(16) && digitalRead(17)){
    sr(100,100);
  }
  else{
    ao();
  }

  
}
