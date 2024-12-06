# Sistema-de-Detección-de-Dedos
El Sistema de Detección de Dedos es un programa desarrollado en Python que utiliza visión por computadora para detectar cuántos dedos se están mostrando con una mano. Esta información se transmite a una tarjeta Arduino, que enciende el LED correspondiente al número de dedos detectados.

Requisitos del Sistema
  Python 3.7 o superior.
  Una cámara web.
  IDE de Arduino.
  Tarjeta Arduino (por ejemplo, Arduino Uno) y LEDs.
  Bibliotecas de Python:
    numpy
    opencv-python
    pyserial
    time

Instrucciones de Uso
  Configura el programa de Arduino:
    Carga el código en la tarjeta utilizando el IDE de Arduino.
    Verifica que los LEDs estén conectados a los pines especificados en el código de Arduino.
  Configura el programa de Python:
    Abre el archivo Python y actualiza el número de puerto serial (COMX, donde X es el número del puerto) que corresponde a la conexión de tu tarjeta Arduino.
  Ejecuta el programa:
    Primero, ejecuta el programa en la tarjeta Arduino desde el IDE.
    Luego, ejecuta el programa Python.
    Muestra tu mano frente a la cámara para que el sistema detecte los dedos y encienda los LEDs correspondientes.
