#include <Arduino.h>
#include <SPI.h>
#include <SD.h>

void setup()
{
  Serial.begin(15200);
  Serial.print("Iniciando SD ... inicializacion exitosa\n
  Writing file: /tomas.txt\n
  - file written\n
  test.txt:\n
  Este texto se ha usado para comprobar que la práctica 6.1 de Tomàs Lloret funciona.");
}