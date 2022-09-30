from re import sub
import subprocess
import os
import matplotlib.pyplot as plt

## PERFORMANCE TEST FOR DT PRODUCT OF VECTORS
dir_path = os.path.dirname(os.path.realpath(__file__))
res      = []
n_max    = 65536
step     = 100
idx      = range(1, n_max, step)
for n in idx:
    p = subprocess.check_output([str(dir_path)+"/perf_dot_vector", str(n)])
    res.append(int(p))

print(res)
print(len(res))


plt.scatter(idx, res)

plt.xlabel("Vector length")
plt.ylabel("Execution Time (µs)")
plt.title("Execution Performance for the dot product of vectors")
plt.savefig('@DOCS@/img/perf/dot_product.png')
## 