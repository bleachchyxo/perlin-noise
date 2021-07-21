import matplotlib.pyplot as plt
import numpy as np

height = 10
base = 5
noise = np.random.random(size=height * base).reshape(height, base)

plt.matshow(noise, cmap='Greys')
plt.colorbar()
plt.axis('off')
plt.show()
