int a = 0,i,j;
void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  if(Serial.available()>0){
      a = Serial.read() - '0';
      Serial.println(a);
      int arr[4];
      int tem = 0;
      while(a > 0){
        if(a==2||a==4){
            arr[tem] = 0;
        }
        else{
            arr[tem] = 1;
        }
        a /=  2;
        tem += 1;
    }
      for(i=0;i<4;i++)
       {
          if(arr[i]==0){
              digitalWrite(i+2, LOW);
       }
          else{
              digitalWrite(i+2, HIGH);
       }
       
       }
      Serial.print("Pin:");
      Serial.print(digitalRead(4));
      Serial.print(digitalRead(3));
      Serial.print(digitalRead(2));
      Serial.print(digitalRead(1));
      Serial.println();Serial.print("YOUR CODE:");
      for(j=0;j<4;j++){
          Serial.print(arr[j]);
    }
    //delay(2000);
   
      Serial.println();
  }
  
  
}
