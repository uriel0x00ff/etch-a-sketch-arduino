# 🎛️ Etch-A-Sketch Digital con Arduino

Proyecto educativo que recrea el clásico **Etch-A-Sketch** utilizando un Arduino Uno, una pantalla OLED y sensores físicos para dibujar en tiempo real.

---

## 📸 Vista del proyecto

![Diagrama de conexiones](https://github.com/uriel0x00ff/etch-a-sketch-arduino/blob/main/Diagrama%20de%20conexiones.png)

---

## 📌 Descripción

Este proyecto permite dibujar en una pantalla OLED de **128x64 píxeles** utilizando dos potenciómetros como controles de posición en los ejes X e Y.

Además, incorpora un sensor de movimiento (MPU6050) que permite borrar el dibujo al agitar el dispositivo, simulando el comportamiento del juguete original.

---

## 🚀 Características

* ✏️ Dibujo en tiempo real sobre pantalla OLED
* 🎛️ Control preciso mediante potenciómetros
* 🤲 Borrado al agitar el dispositivo
* ⚡ Respuesta rápida y fluida
* 🧠 Código limpio, comentado y fácil de modificar

---

## 🧰 Hardware utilizado

* Arduino Uno (o compatible)
* Pantalla OLED SSD1306 (128x64, I2C)
* 2 Potenciómetros (10kΩ recomendados)
* Módulo GY-521 (MPU6050)
* Protoboard y cables

---

## 🔌 Conexiones

### 🎛️ Potenciómetros

| Potenciómetro | Pin Arduino |
| ------------- | ----------- |
| Eje X         | A0          |
| Eje Y         | A1          |

Cada potenciómetro:

* Pin 1 → 5V
* Pin 2 → GND
* Pin central → A0 / A1

---

### 📺 OLED SSD1306 (I2C)

| OLED | Arduino |
| ---- | ------- |
| VCC  | 5V      |
| GND  | GND     |
| SDA  | A4      |
| SCL  | A5      |

---

### 📡 MPU6050 (GY-521)

| MPU6050 | Arduino |
| ------- | ------- |
| VCC     | 5V      |
| GND     | GND     |
| SDA     | A4      |
| SCL     | A5      |

---

## ⚙️ Instalación

1. Instala Arduino IDE

2. Instala las siguientes librerías desde el gestor de librerías:

   * Adafruit GFX
   * Adafruit SSD1306
   * MPU6050
   * Wire (incluida por defecto)

3. Abre el archivo `etch_a_sketch.ino`

4. Selecciona la placa **Arduino Uno**

5. Sube el código al dispositivo

---

## ▶️ Cómo usar el proyecto

1. Conecta el circuito según el diagrama
2. Gira los potenciómetros:

   * Controlan la posición del cursor (X y Y)
3. El sistema dibuja automáticamente al moverse
4. Agita el dispositivo para borrar la pantalla

---

## 🎯 Ajustes y personalización

### 🔹 Sensibilidad del borrado

```cpp
#define SHAKE_THRESHOLD 28000
```

* 🔺 Aumentar → requiere mayor fuerza para borrar
* 🔻 Disminuir → más sensible

---

## 👨‍💻 Autor

**Uriel Engine**
📅 Abril 2026

---

## 📄 Licencia

Este proyecto es de uso libre con fines educativos y personales.
Puedes modificarlo y adaptarlo según tus necesidades.

---

## ⭐ Apoya el proyecto

Si este proyecto te fue útil:

* Dale ⭐ al repositorio
* Compártelo


