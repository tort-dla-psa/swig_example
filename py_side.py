import numpy as np 
from build import cpp_side

a = np.arange(12)
print(a);

lst = cpp_side.do_things(a.tolist())
print(lst)

a = a.reshape((4,-1))
print(a)

shape = np.asarray(a.shape)
print(a.tolist())
lst = cpp_side.do_things_to_every_second_line(a.flatten().tolist(), shape.tolist())
print(lst)