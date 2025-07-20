import pyautogui
import time

# Get height of the pyramid from user
height = int(input("Enter the height of the pyramid: "))

# Pause time between mouse actions (optional)
pyautogui.PAUSE = 0.01

# Let user open Paint or drawing area
print("Move your mouse where you want to start drawing. You have 5 seconds...")
time.sleep(5)

# Get starting mouse position
start_x, start_y = pyautogui.position()

# Size of one block in the pyramid
block_size = 20

# Draw the pyramid
for row in range(height):
    blocks_in_row = 2 * row + 1
    row_start_x = start_x - (blocks_in_row // 2) * block_size
    y = start_y + row * block_size

    for col in range(blocks_in_row):
        x = row_start_x + col * block_size
        pyautogui.moveTo(x, y)
        pyautogui.click()
