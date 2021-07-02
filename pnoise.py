import random
import decimal

#size
height = 10
base = 5

axis_y = []

#appending axis to the axis x based on size
for y in range(height):
	axis_x = []
	for x in range(base):
            axis_x.append(decimal.Decimal(random.randrange(0,101))/100)
	axis_y.append(axis_x)

for axis_x in axis_y:
    print(*axis_x)
