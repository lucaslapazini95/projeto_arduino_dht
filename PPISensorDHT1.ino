#include "DHT.h"
#include <SD.h>
#include <SPI.h>

#define DHTPIN 7
#define DHTTYPE DHT11
File dataFile;

DHT dht(DHTPIN, DHTTYPE);

const int chipSelect = 4;

void setup() {
  //inicializa serial
  Serial.begin(9600);
  Serial.println("Inicializando o cartão SD");

  //inicia a comunicação com o SD
  if (!SD.begin(chipSelect)){
    Serial.println ("Falha ao conectar com o cartão!");
    return;
  }
  Serial.println("cartão conectado!\n");

  dht.begin();
}

void loop() {
  delay(300000);

  float h = dht.readHumidity();
  float t = dht.readTemperature();

  // Checa se alguma das leituras falhou
  if (isnan(h) || isnan(t)) {
    Serial.println(F("Falha na leitura do sensor DHT!"));
    return;
  }


  //Abre o arquivo datalog.csv
  dataFile = SD.open("datalog.csv", FILE_WRITE);
  
  //Grava as info no arquivo
  if (dataFile){
    dataFile.print(h);
    Serial.print(h);
    dataFile.print(",");
    Serial.print(",");
    dataFile.print(t);
    Serial.print(t);
    dataFile.print("\n");
    Serial.print("\n");

    //fecha o arquivo
    dataFile.close();
  }
  else {
    Serial.println("Erro ao abrir o arquivo datalog.csv");
  }
}
