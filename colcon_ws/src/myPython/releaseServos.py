from pymycobot.mycobot import MyCobot
from pymycobot.genre import Angle

# Connect to MyCobot
mc = MyCobot('/dev/ttyACM0')

# Release the servos
mc.release_all_servos()
mc.release_servo(1)
mc.release_servo(2)
mc.release_servo(3)
mc.release_servo(4)
mc.release_servo(5)
mc.release_servo(6)

# set robot position vertical
# mc.send_angles([0, 0, 0, 0, 0, 0], 80)

