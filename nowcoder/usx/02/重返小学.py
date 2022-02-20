import re
import math
frac = ""
def frac(mo):
    return str(math.factorial(int(str(mo.group(1)))))
def poww(mo):
    return str(pow(int(mo.group(1)), int(mo.group(2))) % 65536)
for i in range(int(input())):
    try:
        string = input().replace("/","//")
        while '!' in string:
            string = re.sub("([0-9]+)!",frac, string)   # 计算阶乘结果
        while '^' in string:
            string = re.sub("([0-9]+)\^([0-9]+)", poww, string)
        print(eval(string))
    except ZeroDivisionError:
        print("ArithmeticException")