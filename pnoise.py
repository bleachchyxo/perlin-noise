import random
import decimal

#height
h = 10
#base
b = 5

#axis that storage the all the axis_y
axis_x = []

#appending axis to the axis x based on size
for x in range(h):
	  axis_y = []
	  for x in range(b):
        axis_y.append(decimal.Decimal(random.randrange(0,101))/100)
	  axis_x.append(axis_y)

for axis_y in axis_x:
	  print(*axis_y)
