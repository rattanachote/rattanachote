#include <WiFi.h>
#include <TridentTD_LineNotify.h>
#include <SimpleDHT.h> 
#include <SoftwareSerial.h>
#include <HTTPClient.h>
int DHTSENSOR = 15;
byte temperature = 0;           //กำหนดตัวแปรเก็บค่าอุณหภูมิ
byte humidity = 0;              //กำหนดตัวแปรเก็บค่าความชื้นสัมสัทธ์
int va = 25;
float pi = 3.14159265359;
SimpleDHT11 dht11;
#define WIFI_STA_NAME   "guest"   // ชื่อ Wifi
#define WIFI_STA_PASS   "Guest42guest"   // รหัส Wifi
#define LINE_TOKEN  "hIyYIsgbSFmBFWpYNWzUmIATZL13ubWAAusFW5hGQJ2"   // TOKEN
unsigned int pm1 = 0;
unsigned int pm2_5 = 0;
unsigned int pm10 = 0;
unsigned int timer2 = 0;
SoftwareSerial mySerial(21,22); // RX, TX
void setup() {
  Serial.begin(115200);
  mySerial.begin(9600);
  Serial.println(LINE.getVersion());
  WiFi.mode(WIFI_STA);
  WiFi.begin(WIFI_STA_NAME,WIFI_STA_PASS);
  Serial.printf("WiFi connecting ",WIFI_STA_NAME);
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print("not connect\n");
    delay(500);
  }
  Serial.printf("\nWiFi connected\nIP : ");
  Serial.println(WiFi.localIP());
  
  LINE.setToken(LINE_TOKEN);
  // ส่งข้อความ
  LINE.notify("เริ่มการใช้งานระบบตรวจจับคุณภาพอากาศ");
  LINE.notify("Air Quality Detector");
}

void loop() {
  dht11.read(DHTSENSOR, &temperature, &humidity, NULL);
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print("% | ");
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println("C");  
  int index = 0;
  int timer=millis();
  char value;
  char previousValue;
   
  while (mySerial.available()) {
  value = mySerial.read();
  if ((index == 0 && value != 0x42) || (index == 1 && value != 0x4d)){
  Serial.println("Cannot find the data header.");
  break;
  }
   
  if (index == 4 || index == 6 || index == 8 || index == 10 || index == 12 || index == 14) {
  previousValue = value;
  }
  else if (index == 5) {
  pm1 = 256 * previousValue + value;
  Serial.print("{ ");
  Serial.print("\"pm1\": ");
  Serial.print(pm1);
  Serial.print(" ug/m3");
  Serial.print(", ");
  }
  else if (index == 7) {
  pm2_5 = 256 * previousValue + value;
  Serial.print("\"pm2_5\": ");
  Serial.print(pm2_5);
  Serial.print(" ug/m3");
  Serial.print(", ");
  }
  else if (index == 9) {
  pm10 = 256 * previousValue + value;
  Serial.print("\"pm10\": ");
  Serial.print(pm10);
  Serial.print(" ug/m3");
  } else if (index > 15) {
  break;
  }
  index++;
  }
  while(mySerial.available()) mySerial.read();
  Serial.println("{");

  // #################################################
  // LINE.notify(va);      // จำนวนเต็ม
  // LINE.notify(pi, 4);   // ทศนิยม 4 หลัก
  // ส่งเป็นชุดข้อความ
  Serial.println("Timer : "+String(timer));
  if(timer-timer2>60000)
  {
    timer2=timer;
    LINE.notify("Humidity: "+String(humidity)+" %");
    // ส่งเป็นชุดข้อความ
    LINE.notify("Temperature: "+String(temperature)+" C");
    LINE.notify("PM1: "+String(pm1)+" ug/m3");
    LINE.notify("PM2.5: "+String(pm2_5)+" ug/m3");
    LINE.notify("PM10: "+String(pm10)+" ug/m3");
    // ส่งสติกเกอร์
    if(temperature>30){
    LINE.notifySticker("อุณหภูมิสูง", 2,19); // ส่ง Line Sticker ด้วย PackageID 1 , StickerID 2
    }
  // ส่งรูปภาพ ด้วย url
  //LINE.notifyPicture("https://cq.lnwfile.com/_/cq/_raw/0w/1o/gu.jpg");
  //#################################################
  }
  delay(1000);
}