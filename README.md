# Adrian_myController
1 Rotary encoder, with pushbutton switch (Adafruit 24 step)

1 Motorised fader, linear 10K from Sparkfun

1 Ardumoto controller (3.3V logic) from Sparkfun 
OR 
1 L298N HBridge (or similar) with 3.3V logic 
1 Joystick (4 switches) and 9 other switches / buttons

1 x 1 USB Midi interface (see pjrc.com/

A Teensy 3.x!

3 different modes, chosen on startup by button press. Also, chosen in the .ino: the mode select buttons (3,6,4 are default), hysteresis (fader deadspot), touch sensitivity (fader touch sensitivity), and HBridge mode.

MODE1.MidiController/USB Midi interface. 
MODE2.Faderport clone. 
MODE3.MAME controller. 

Because MAME uses keystrokes, a custom usb type of keyboard/midi is needed. To make a custom usb type, replace your current usb_desc.h file with the one in the repository. Usb_desc.h is found in: 

Arduino/hardware/teensy/avr/cores/teensy3/

Then, use the MIDI type in the Arduino IDE dropdown USB Type menu for compiling.

Also, Arduino MIDI 4.2 library is required, if using the Midi interface.

See notes in the example .ino.

See below for wiring and implementation nfo…

Wiring	    Teesny      MODE1       MODE2		    MODE3
__________________________________________________________________
Fader1	    3.3V
Fader3      AGND
Fader2	    A14                     Pitchbend   Fader
FaderT	    19

FaderMotor hooked up as per HBridge or Ardumoto instructions. 
NOTE: you will need at least 9V, and more amperage than a battery can supply

HBrdgEN
HBrdgI1
HBrdgI2
OR
Amoto
Amoto      

JstickD	    2,GND 			            TrkDn		    KEY_DOWN
JstickU	    14,GND			            TrkUp		    KEY_UP 
JstickL	    7,GND 			            TrkL		    KEY_LEFT
JstickR	    8,GND				            TrkR		    KEY_RIGHT 
SWTCH3	    15,GND			                6       KEY_A
SWTCH2	    22,GND			                1       KEY_B 
SWTCH5	    23,GND 			                5       KEY_C
SWTCH1	    18,GND			                3		    KEY_D		 
SWTCH4	    11,GND                      4		    KEY_E
RtrySWTCH	  5,GND				                7		    KEY_ENTER
SWTCHslct3	4,GND 			                10		  KEY_M
SWTCHslct1	3,GND				                9		    KEY_F1
SWTCHslct2	6,GND				                8		    KEY_F5
RtryL                               PanL
RtryR                               PanR

______________________________________________________

Fader

MODE1     10 bit messages MSB CC 00 (3bits) LSB CC 32 (7bits)
MODE2     10 bit messages MSB CC 00 (3bits) LSB CC 32 (7bits)
MODE3     N/A






