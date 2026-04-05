# 🎛️ Etch-A-Sketch Digital con Arduino

Simulación digital del clásico juguete **Etch-A-Sketch**, utilizando un Arduino, una pantalla OLED y sensores físicos para recrear la experiencia de dibujo en tiempo real.

---

## 📌 Descripción

Este proyecto permite dibujar en una pantalla OLED de **128x64 píxeles** utilizando dos potenciómetros como controles de posición (ejes X e Y). Además, incorpora un sensor de movimiento (MPU6050) que permite borrar el dibujo al agitar el dispositivo, replicando el comportamiento del juguete original.

---

## 🚀 Características

- ✏️ Dibujo en tiempo real sobre pantalla OLED
- 🎛️ Control preciso mediante potenciómetros
- 🤲 Borrado al agitar el dispositivo (acelerómetro)

---

## 🧰 Hardware utilizado

- Arduino Uno (o compatible)
- Pantalla OLED SSD1306 (128x64, I2C)
- 2 Potenciómetros (10kΩ recomendados)
- Módulo GY-521 (MPU6050)
- Protoboard y cables

---

## 🔌 Conexiones

### 🎛️ Potenciómetros

| Potenciómetro | Pin Arduino |
|--------------|------------|
| Eje X        | A0         |
| Eje Y        | A1         |

Cada potenciómetro:
- Pin 1 → 5V  
- Pin 2 → GND  
- Pin central → A0 / A1  

---

### 📺 OLED SSD1306 (I2C)

| OLED | Arduino |
|------|--------|
| VCC  | 5V     |
| GND  | GND    |
| SDA  | A4     |
| SCL  | A5     |

---

### 📡 MPU6050 (GY-521)

| MPU6050 | Arduino |
|--------|--------|
| VCC    | 5V     |
| GND    | GND    |
| SDA    | A4     |
| SCL    | A5     |

---

## 📦 Librerías necesarias

Instalar desde el Administrador de Librerías de Arduino IDE:

- Adafruit GFX
- Adafruit SSD1306
- MPU6050
- Wire (incluida por defecto)

---

## ⚙️ Funcionamiento

1. Los potenciómetros generan valores analógicos (0–1023)
2. Estos valores se mapean a la resolución de la pantalla (128x64)
3. Se dibuja un píxel en la posición correspondiente
4. El acelerómetro detecta sacudidas:
   - Si la fuerza supera un umbral → se borra la pantalla

---

## 🎯 Ajustes y personalización

### 🔹 Sensibilidad del borrado

#define SHAKE_THRESHOLD 28000

- 🔺 Aumentar → necesitas sacudir más fuerte  
- 🔻 Disminuir → más sensible  

---

## 👨‍💻 Autor

**Uriel Engine**  
📅 Abril 2026  

---

## 📄 Licencia

Este proyecto es de uso libre para fines educativos y personales.

---

## ⭐ Apoya el proyecto

Si este proyecto te fue útil:

- Dale ⭐ al repositorio
- Compártelo

