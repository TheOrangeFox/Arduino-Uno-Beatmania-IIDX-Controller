import processing.serial.*;
import java.awt.AWTException;
import java.awt.Robot;
import java.awt.event.KeyEvent;

Serial myPort;  // Create object from Serial class
String val;     // Data received from the serial port
Robot robot;

void setup()
{
  try { 
    robot = new Robot();
  } catch (Exception e) {
    e.printStackTrace();
    exit();
  }
  
  String portName = Serial.list()[0]; //change the 0 to a 1 or 2 etc. to match your port
  myPort = new Serial(this, portName, 9600);
}

void draw() {
  if (myPort.available() > 0) {
    String inBuffer = myPort.readStringUntil('\n');
    if (inBuffer != null) {                
        String val = new String(inBuffer).trim();
        if (val.equals("1P")) robot.keyPress(KeyEvent.VK_Z);
        if (val.equals("1R")) robot.keyRelease(KeyEvent.VK_Z);
        if (val.equals("2P")) robot.keyPress(KeyEvent.VK_X);
        if (val.equals("2R")) robot.keyRelease(KeyEvent.VK_X);
        if (val.equals("3P")) robot.keyPress(KeyEvent.VK_C);
        if (val.equals("3R")) robot.keyRelease(KeyEvent.VK_C);
        if (val.equals("4P")) robot.keyPress(KeyEvent.VK_V);
        if (val.equals("4R")) robot.keyRelease(KeyEvent.VK_V);
        if (val.equals("5P")) robot.keyPress(KeyEvent.VK_B);
        if (val.equals("5R")) robot.keyRelease(KeyEvent.VK_B);
        if (val.equals("6P")) robot.keyPress(KeyEvent.VK_N);
        if (val.equals("6R")) robot.keyRelease(KeyEvent.VK_N);
        if (val.equals("7P")) robot.keyPress(KeyEvent.VK_M);
        if (val.equals("7R")) robot.keyRelease(KeyEvent.VK_M);
    }
  } 
}