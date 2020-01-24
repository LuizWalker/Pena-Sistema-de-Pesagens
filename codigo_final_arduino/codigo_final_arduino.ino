#include <ArduinoJson.h>
#include <LedStatus.h>
#include <HX711.h>
#include <PushButton.h>
#include <Servo.h>
#include <SoftwareSerial.h>

Servo cancela;

LedStatus inicio(9);
LedStatus fim(10);


int angulo;

#define pinDT  7
#define pinSCK  6
#define pinBotao 8


#define pesoMin 0.020
#define pesoMax 50.0

#define escala 25413.0f


HX711 scale;
PushButton botao(pinBotao);


 
const int capacidade = JSON_OBJECT_SIZE(15);
StaticJsonDocument<capacidade> doc;

 
float medida=0;
float ativar=0;

void setup() {
  Serial.begin(57600);

  scale.begin(pinDT, pinSCK); 
  scale.set_scale(escala); 

  delay(2000);
  scale.tare();
  scale.power_up();
  Serial.println("Configurações feitas!");
}

void loop() {
  
  botao.button_loop();
   
 //parte nova do código//  
 
   if(Serial.available()> 0 ){
    deserializeJson(doc,Serial);
    if(doc["SENSOR"]==1){
         ativar=1;
      }else if(doc["SENSOR"] == 0){
         ativar=0;         
        }
    }
 /////////////////////////////// 

  if(botao.pressed()|| ativar == 1){ 

     //Início da Configuração da tara balança  
    //scale.power_up(); //Sensor acionado;
    
    medida = scale.get_units(5); 
    
    if (medida <= pesoMin ){ 
      scale.tare(); 
      medida = 0;
      Serial.println("A balança está pronta pra uso");
    } else if ( medida >= pesoMax ){
      scale.tare(); 
      medida = 0;
      Serial.println("A balança está pronta para o uso!");
      // Fim da configuração da Tara da balança
    } else {
      

    inicio.acenderLed();  //Pesagem da Carga
    delay(3500);
    inicio.apagarLed();  //Fim da pesagem da Carga
    
    //Serial.println(medida,3); //Mostra o peso no Monitor serial

    ////////////Parte Importante: JSON/////////////////

    doc["PESO"] = medida;
    serializeJson(doc,Serial);
   
    //mySerial.println(medida,3);

    ////////////Fim/////////////////    
    
    fim.acenderLed();    //Liberação da Carga
    delay(4000);
    fim.apagarLed();

    delay(500);

    cancela.attach(3);
    for( angulo = 25; angulo <= 93; angulo ++){
       cancela.write(angulo);
       delay(20);
    }
    cancela.detach();
    delay(3000);
    
    cancela.attach(3);
    for( angulo = 93; angulo >= 25; angulo --){
       cancela.write(angulo);
       delay(20);
    }
    cancela.detach();
    ativar = 0;
    }

    //scale.power_down(); //Sensor Desligado
  }
  
}
