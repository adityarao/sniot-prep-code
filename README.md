# sniot-prep-code
Initial repo for testing IOT assembly

/*
 *  phase1.ino - @aditya_rao
 *  Test if esp8266 is all ok after fixing to the breadboard 
 *  This program blinks the onboard LED and prints on the serial log a 'value'
 */
 
 
 /*
 *  phase2.ino @aditya_rao
 *
 *  Test program to validate WiFi, connect to Thinger.io and blink RESTfully for the device
 * 
 *  This program also will post the device_id and mac address into a ServiceNow instance table
 *  the table must contain 2 columns - address and device_id, 
 *
 *  Please review all the TODO sections below
 * 
 *  You can also verify from thinger.io if the device is connected and run the toggle API as a verification step
 */


/*
 *  phase3.ino @aditya_rao
 *
 *  This program essentially is a breadboard connections validator
 *  You must flash this program after you have assembled your breadboard
 *  It will test if all the devices are connected ok
 *  
 *  TEST Sequence: Flashs all LEDs in a sequence, beeps the buzzer, Steps the Servo
 *  push button reverses the flash sequence and potentiometer increases / decreases
 *  flashes on the LEDs in the right sequence 
 *  Check the Serial Monitor for the readings
 */

/*
 *  servo.ino - @aditya_rao
 *  Servo testing module, if you have trouble with your Servos you can use this program
 *  This program is also to reset the servos back to ANGLE 0 before you screw in the arms
 */
