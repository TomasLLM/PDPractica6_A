#include <Arduino.h>
#include <SPI.h>
#include <SD.h>

File myFile;

//funcion para escribir archivo
void writeFile(fs: :FS &fs, const char * path, const char *)
{
  Serial.printf("Writing file: %s \n", path);
  File file = fs.open(path, FILE_WRITE);
  if(!file){
    Serial.println("- failed to open file for writing");
    return;
  }
  else if(file.print(message)){
    Serial.println("- file written");
  }
  else(){
    Serial.println("- the writing of the file failed");
  }
  file.close();
}

void setup()
{
  Serial.begin(115200);
  Serial.print("Iniciando SD ...");
  SPI.begin(36, 37, 35);
  if (!SD.begin(5)) {
    Serial.println("No se pudo inicializar");
    return;
  }
  Serial.println("inicializacion exitosa");

  WriteFile(SD, "/hello.txt", "Texto a escribir, PD 2024")//escribimos el archivo

  myFile = SD.open("archivo.txt");//abrimos el archivo 
  if (myFile) {
    Serial.println("archivo.txt:");
    while (myFile.available()) {
    	Serial.write(myFile.read());
    }
    myFile.close(); //cerramos el archivo
  } else {
    Serial.println("Error al abrir el archivo");
  }
}

void loop()
{
  
}
