#include <string.h>
char Morse;
String str;
int i,j,k,m,n;
void setup() {
    Serial.begin(9600);
    pinMode(2, OUTPUT);
}
void loop() {
    if(Serial.available()>0){
      Morse = Serial.read(); 
      if( Morse=='\n'||Morse==' '){
      str += " / ";
      }
          else{
             switch(Morse){
        case 'a':str = "*-";break; 
        case 'b':str = "-***";break;
        case 'c':str = "-*-*";break;
        case 'd':str = "-**";break;
        case 'e':str = "*";break;
        case 'f':str = "**-*";break;
        case 'g':str = "--*";break;
        case 'h':str = "****";break;
        case 'i':str = "**";break;
        case 'j':str = "*---";break;
        case 'k':str = "-*-";break;
        case 'l':str = "*-**";break;
        case 'm':str = "--";break;
        case 'n':str = "-*";break;
        case 'o':str = "---";break;
        case 'p':str = "*--*";break;
        case 'q':str = "--*-";break;
        case 'r':str = "*-*";break;
        case 's':str = "***";break;
        case 't':str = "-";break;
        case 'u':str = "**-";break;
        case 'v':str = "***-";break;
        case 'w':str = "*--";break;
        case 'x':str = "-**-";break;
        case 'y':str = "-*--";break;
        case 'z':str = "--**";break;
        }  
      } 
      for(j=0;j<10;j++)
      {
        j++;
      }
      for(k=0;k<10;k++)
      {
        k++;
      }
      for(m=0;m<10;m++)
      {
        m++;
      }
       for(n=0;n<10;n++)
      {
        n++;
      }
      for(i=0;i<4;i++){
          if(str[i] == '*'){
              turnon(1);
              turnoff(1);
          }
          else if(str[i] == '-'){
              turnon(3);
              turnoff(1);
          }else if(str[i] == '/'){
              turnoff(4);
          }        
      }
      turnoff(4);
      }
}  
void turnoff(int time){
    int t1 = 500;
    digitalWrite(2, LOW);
    delay(time * t1);
}
void turnon(int time){
    int t1 = 500;
    digitalWrite(2, HIGH);
    delay(time * t1);
}

void stop(char a){
  int t1 = 500;
    digitalWrite(2, LOW);
}
