from naoqi import ALProxy
import math

# Enter Robot IP
ip = "192.168.43.43"
motion = ALProxy("ALMotion", ip, 9559)
tts    = ALProxy("ALTextToSpeech", ip, 9559)
posture = ALProxy("ALRobotPosture", ip, 9559)

# Loop to execute the commands continously 
while True:
    # Open up the file
    f = open('commands', 'r')
    commandTotal = f.readline()
    if commandTotal == '':
        f.close()
        continue
    else:
        lines = f.readlines()
        f.close()
        f = open('commands', 'w')
        for line in lines:
            if line != commandTotal:
                f.write(line + '\n')
        f.close()
        #print commandTotal
        # Parse the data into separate strings
        c = [x.strip() for x in commandTotal.split(',')]
        command = c[0]
        print command
        # Check what command has been sent
        if command == 'walk':
            tts.say('Lets go for a walk')
            xDist = float(c[1])
            yDist = float(c[2])
            theta = float(c[3]) * math.pi / 180
            print xDist, yDist, theta
            motion.wakeUp()
            posture.goToPosture('StandInit', 1)
            motion.moveTo(xDist, yDist, theta)
        elif command == 'speak':
            tts.say('Hello, professor Coskun, I am your future overlord! I will conquer with cuteness')
        elif command == 'sit':
            tts.say('Alright, time to rest')
            posture.goToPosture('Sit', 1)
            motion.rest()
        elif command == 'stand':
            tts.say('Time to wake up!')
            motion.wakeUp()
            posture.goToPosture('StandInit', 1)
