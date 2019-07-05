  int i,j,t;
  String Morsemode[100];
  String Normalmode;
  char tem;
  char Morsecode[26][4] = 
  {
    {'*', '-'},
    {'-', '*', '*', '*'}, 
    {'-', '*', '-', '*'}, 
    {'-', '*', '*'}, 
    {'*'}, 
    {'*', '*', '-', '*'}, 
    {'-', '-', '*'}, 
    {'*', '*', '*', '*'},
    {'*', '*'},
    {'*', '-', '-', '-'}, 
    {'-', '*', '-'}, 
    {'*', '-', '*', '*'}, 
    {'-', '-'},
    {'-', '*'}, 
    {'-', '-', '-'}, 
    {'*', '-', '-', '*'}, 
    {'-', '-', '*', '-'},
    {'*', '-', '*'},
    {'*', '*', '*'},
    {'-'},
    {'*', '*', '-'},
    {'*', '*', '*', '-'},
    {'*', '-', '-'},
    {'-', '*', '*', '-'},
    {'-', '*', '-', '-'},
    {'-', '-', '*', '*'}
  };
void setup() {
Serial.begin(9600);
}

void loop() {
for(i=0;Serial.available() > 0;i++)
{
   Normalmode[i]=Serial.read();
}
for(j=0;j<=i;j++)
{ tem=Normalmode[j];
  if(tem==13||tem==32)
  Morsemode[j]=" / ";
  else
  for(t=0;;t++)
  {Morsemode[j]+=Morsecode[Normalmode[j]-97][t];
  if(Morsecode[Normalmode[j]-97][t+1]=='0')
  break;
}
}
for(j=0;j<=i;j++)
Serial.print(Morsemode[j]);}
