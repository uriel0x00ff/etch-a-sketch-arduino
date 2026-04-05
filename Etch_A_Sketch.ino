/*
  ==========================================================
  ETCH-A-SKETCH DIGITAL CON POTENCIÓMETROS 
  Autor: Uriel Engine
  Fecha: 04/Abril/2026
  ==========================================================
  - 2 potenciómetros → control X e Y
  - OLED 128x64 → canvas
  - MPU6050 → borrar al agitar
  ==========================================================
*/

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <MPU6050.h>

// ================= OLED =================
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

// ================= MPU =================
MPU6050 mpu;
#define SHAKE_THRESHOLD 28000 // Modificar el valor para ajustar la sencibilidad del borrado al agitar el circuito

// ================= POTENCIÓMETROS =================
#define POT_X A0
#define POT_Y A1

int  x = SCREEN_WIDTH / 2;
int  y = SCREEN_HEIGHT / 2;

// ================= SETUP =================
void setup() {
  Serial.begin(9600);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    while (true);
  }

  display.clearDisplay();
  display.display();

  Wire.begin();
  mpu.initialize();

}

// ================= LOOP =================
void loop() {

  // Leer potenciómetros (0–1023)
  int rawX = analogRead(POT_X);
  int rawY = analogRead(POT_Y);

  // Mapear a pantalla
  int newX = map(rawX, 0, 1023, 0, SCREEN_WIDTH - 1);
  int newY = map(rawY, 0, 1023, 0, SCREEN_HEIGHT - 1);

  // Dibujar solo si cambia
  if (newX != x || newY != y) {
    x = newX;
    y = newY;

    display.drawPixel(x, y, WHITE);
    display.display();
  }

  detectarSacudida();
}

// ================= SACUDIDA =================
void detectarSacudida() {
  int16_t ax, ay, az;
  mpu.getAcceleration(&ax, &ay, &az);

  long fuerza = abs(ax) + abs(ay) + abs(az);

  if (fuerza > SHAKE_THRESHOLD) {
    borrarPantalla();
  }
}

// ================= BORRAR =================
void borrarPantalla() {
  display.clearDisplay();

  x = SCREEN_WIDTH / 2;
  y = SCREEN_HEIGHT / 2;

  display.display();
  delay(300);
}
