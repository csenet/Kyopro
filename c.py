import math
from decimal import Decimal
input = input().split()
a = input[0]
b = input[1]
print(str(Decimal(a)*Decimal(b)).split('.')[0])
