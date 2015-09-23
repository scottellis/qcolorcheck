## qcolorcheck 

A Qt app for checking colors on a display. 

Used for testing new touchscreen drivers to make sure I got
the color mapping correct. 

### Build natively

Assuming Qt dev libraries and headers are already installed.

    $ qmake && make

### Operation

The UI runs fullscreen and shows some bands of Red, Green and Blue
for 15 seconds before automatically shutting down. 

### Running without X using Qt5

    $ ./qcolorcheck -platform linuxfb

