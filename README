REMOTE CONTROL OF NAO USING GUMSTIX

David Lavy and Alan Belyea

Instructions on how to run it

For the Gumstix:
- Ensure that the LCD and bluetooth are attached to the appropriate ports on the Gumstix board.

- Compile the bluetooth client and Qt executable as have been done in previous labs.
 
- Log into Gumstix using the following credentials:
username: root
password:gumstix

- Copy the client executable, <name_of_Qt_executable> and run_this.sh files in the GUmstix as instructed in labs as well.
Enter the home directory and ensure that the following files exist:

<name_of_Qt_executable>
client
run_this.sh

Make sure you are in the root home directory and run the following commands:

./run_this.sh:

This will enable the touchscreen calibration. Complete the touchscreen calibration by following the instructions on the touchscreen

Return to the home directory and run the following bash command:

./<name_of_Qt_executable> -qws

The interface should show up on the touchscreen.

Wait to run the client executable until the bluetooth server is running on the PC (read below)

For the PC: 
- Open up two terminals. One for the bluetooth server and another one for the robot server
- In the first terminal execute: 
	$ python BTserver.py
  This will start searching for a bluetooth connection and once it found it, it'll start listening to sent data and write it in a file. Make sure you run this before the client on the Gumstix, otherwise the client will not be able to find the server. (You can now run the client on the Gumstix)
- Make sure NAO is in the same network as your PC. Press the chest button of NAO and copy it's IP address on the naoqiServer.py file in line 5. Save the file.
- In the second terminal execute: 
	$ python naoqiServer.py
  This will start the connection over WiFi with NAO and at the same time start reading the file where data is being stored, extract it one by one, and send the action to the robot.

* NOW YOU CAN START SENDING COMMANDS FROM THE LCD TOUCHSCREEN TO THE ROBOT*
ENJOY!

Potential errors and how to handle them:
No dev file:
If the system returns from running ./run_this.sh with an error saying /dev/input does not exist power off the gumstix, check the touchscreen connection and restart the system, and re run all of the above instructions.

Cannot find fonts directory:
If the system returns “cannot find /media/card/lib/fonts” after running ./GumstixNAO -qws

Disconnect the Gumstix, remove the SD card and reinsert it. Reboot the system and re run all of the steps 
