import serial

ser = serial.Serial('/dev/tty.usbmodem1421')

ser.write("stop")
print "stop"
