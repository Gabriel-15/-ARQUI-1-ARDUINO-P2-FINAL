#include <MatrizLed.h>
MatrizLed matriz;
String ecuacion="4x^2+2x+1";
void setup() {
matriz.begin(12,11,13,2);
Serial.begin(9600);



// put your setup code here, to run once:

}

void loop() {
int tamanio = ecuacion.length();
char vector[tamanio];

for (int i=0;i<tamanio;i++){
    vector[i] = ecuacion.charAt(i);
    Serial.println(vector[i]);
    matriz.escribirCaracter(vector[i],1);
    delay(1000);
    
  }
  // put your main code here, to run repeatedly:

}
