import time
import winsound

# Get the current time
current_time = time.time()

# Set the sleep time to 30 minutes
sleep_time = 2 * 60

# While the current time is less than the sleep time, check if the laptop is asleep
while current_time < sleep_time:

    # Get the laptop's power state
    power_state = winsound.PowerState()

    # If the laptop is asleep, ring the alarm
    if power_state == winsound.PowerState.Asleep:
        winsound.Beep(1000, 1000)

    # Wait for 1 second
    time.sleep(1)

    # Update the current time
    current_time = time.time()
