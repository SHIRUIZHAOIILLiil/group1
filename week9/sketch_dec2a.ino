#include <LSM303AGR_ACC_Sensor.h>
#include <LSM303AGR_MAG_Sensor.h>
#include <Adafruit_Microbit.h>
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

#if defined(ARDUINO_SAM_DUE)
#define DEV_I2C Wire1  //Define which I2C bus is used. Wire1 for the Arduino Due
#define SerialPort Serial
#else
#define DEV_I2C Wire1  //Or Wire
#define SerialPort Serial
#endif

LSM303AGR_ACC_Sensor Acc(&DEV_I2C);
Adafruit_Microbit_Matrix microbit;
int step = 0, count = 0;
float x,y,z;
float o,p,q;
unsigned long start_time=0;
int32_t accelerometer[3];

void setup() {
  // put your setup code here, to run once:
  // Led.
  pinMode(13, OUTPUT);

  // Initialize serial for output.
  SerialPort.begin(9600);
  pinMode(PIN_BUTTON_A, INPUT);
  pinMode(PIN_BUTTON_B, INPUT);
  // Initialize I2C bus.
  DEV_I2C.begin();

  // Initlialize components.
  Acc.begin();
  Acc.Enable();
  Acc.EnableTemperatureSensor();

  microbit.begin();
  microbit.print("start");
  start_time = millis();

}

void acc_average(float *x, float *y, float *z){
  float ax=0,ay=0,az=0;
  short i=0;
  
  for(i;i<10;i++){
    Acc.GetAxes(accelerometer);
    ax += abs(accelerometer[0]);
    ay += abs(accelerometer[1]);
    az += abs(accelerometer[2]);
  }
  *x=ax/10;
  *y=ay/10;
  *z=az/10;
}

void loop() {
  // put your main code here, to run repeatedly:
    if(millis() - start_time >= 1*60*1000){
    
    while(1){
      if(! digitalRead(PIN_BUTTON_B)){
        start_time = millis();
        break;
      }
      microbit.print("time is up");
      microbit.print(step);
      delay(1000);
    }
  }
  
  acc_average(&o, &p, &q);
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(200);

  Acc.GetAxes(accelerometer);
  x = abs(accelerometer[0]);
  y = abs(accelerometer[1]);
  z = abs(accelerometer[2]);

  if((z+y+x)-(o+p+q)>=150&&(z+y+x)-(o+p+q)<=500){
    step++;
    SerialPort.print(step);
    SerialPort.print(("\n"));
  }

  if (! digitalRead(PIN_BUTTON_A)) {
    microbit.print(step);
  }
  if (! digitalRead(PIN_BUTTON_B)) {
    start_time = millis();
    microbit.print("time reset");
  }
  // microbit.print(step);
  // SerialPort.print("| Acc[mg]: ");
  // SerialPort.print(x);
  // SerialPort.print(" ");
  // SerialPort.print(y);
  // SerialPort.print(" ");
  // SerialPort.print(z);
  // SerialPort.print(" ");
  // SerialPort.print((x+y+z));
  // SerialPort.print("\n");
  // SerialPort.print("| Acc[mg]: ");
  // SerialPort.print(o);
  // SerialPort.print(" ");
  // SerialPort.print(p);
  // SerialPort.print(" ");
  // SerialPort.print(q);
  // SerialPort.print(" ");
  // SerialPort.print((o+p+q));
  // SerialPort.print(("\n"));
  // SerialPort.print("----------------------------");
  
  
}

