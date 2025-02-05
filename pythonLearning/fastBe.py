print("no need to import this file")
print("and there is no need to end with ;,just to turn the need row into a new line")
#变量直接复制就是了

n = 9
if n==9:
    print("n is 9")
else:
    print("n is not 9")

#分行用反斜杠
print("i love you but\
       i know is impossible to")

print("will is a impressive memory for")

'''多行注释
就是三个单引号
'''
#每个变量都需要赋值,但不必申明

a = "hello"
b = 123456789
c = False
d = 1.1234569786454213
f = 'hello'#单引号和双引号都可以
g = list([1,2,3,4,5,6])
h = str("Hello")
j = tuple((1,2,3))#元组是什么

#打印数据类型
print(type(a) == type(b))#false 不是一样的
print(type(c))
print(type(d))
print(type((1.2,3)))
print(type([1,2,'s']))

#x = input("please input")#返回输入的字符串
#print(x)

#换行?
print("this",end="\n")
print(" is ",end='\n')
print(a)


#格式化符号
#和c++一样
print("i will say %s and %s" % (a,"i love you"))

#重定向确实不会啊

#赋值语句
s1, s2 = 5, 12
print(s1 + s2) # 17

#变量交换
s1, s2 = s2, s1

#分支语句

n = 9

if n == 8:#有个冒号
    print("n == 8")
    print("n != 9")
elif n == 0:
    print("n == 9")
else :
    print("n == 9")


#循环语句
cnt = 0
while cnt < 5 :
    print("n < 5")
    print("cnt = ", cnt)
    cnt = cnt + 1
else :
    print(cnt, " == 5")


sites = ["Baidu", "Google", "IBM", "Taobao"]
for site in sites:
    if site == "IBM":
        print("site is ", site)
        break
    print("site: " + site)#连接字符串
else:#for循环的,如果没有break就会触发,否则break后就会进入else
    print("No break")
print("Done!")


for i in range(5):#0-4
    print(i)

for i in  range(6,9):
    print(i)

for i in range(9,19,3):#打印9到19 ,步长为3
    print(i)

han = ["123", "1245","785"]
for i in range(len(han)):
    print(i,han[i])


for c in "Taobao":
    if c == 'o':
        continue
    print(c)
else:
    print("No break")

# while True:
#     pass #空语句,占位用的


#函数

def Max(x,y):
    if x > y :
        return x
    else :
        return y
    
print(Max(5,6))


#整数类型
y = int(10134543135435)
x = int()
u = 0b10101010101010101010101
print(type(u))
print(x)

#/浮点数除法, // 整数除法,截断, **幂运算

print(9**2)
print(5/9)
print(5//9)


#布尔类型
'''
true 就等于1
false = 0
逻辑运算符 and or not
空的 str,tuple, list,dict都是false


'''

a = True
print(a + 1)

if not "Hello":
    print("hello")

if not ():
    print("nothing")

#浮点数
import sys
def equal_float(a,b):
    return abs(a-b) <= sys.float_info.epsilon


import math
x =  12.5
print(math.ceil(x))#向上取整
print(math.floor(x))#向下取整
print(math.trunc(x))#截断
print(math.modf(x))#返回整数部分和小数部分
print(math.fabs(x))#绝对值
print(math.sqrt(x))#开方
print(math.pow(x,2))#幂
print(math.log(x,2))#对数
print(math.exp(x))#e的x次方
print(math.sin(x))#sin
print(math.cos(x))#cos
print(math.tan(x))#tan
print(12.5.is_integer())#判断是否是整数
s = str(x)
print(s)


#高精度浮点数 ???


#字符串
#字符串三双引号可以包含特殊符号
para_str = '''this is a long string that is made up of
several lines and non-printable characters such as
TAB ( \t ) and they will show up that way when displayed.
NEWLINEs within the string, whether explicitly given like
this within the brackets [ \n ], or just a NEWLINE within
the variable assignment will also show up.
'''
print(para_str)

v = "abcdefg"
print("1)" + v[0])
print("2)" + v[1:3])#1-2
print("3)" + v[2:])#2到最后
print("4)" + v * 2)#重复两次
print("5)" + v[-3:-1])#倒数第一个到倒数第三个





#字典
#键值对
di = {"name":"will","age":18}
de = {
    "ject" : "python",
    "veal" : "java",
    "will" : "c",
    "sarah" : "rust"
}

for val in sorted(de.values()):
    print(val)


age = int(input("how old are you : "))
print(age + 12)







def prinmer(num):
    for i in range(2,num):
        if num % i == 0:
            return False
    return True
    

print(prinmer(9))



def build_name(first, last, middle = ""):
    if middle:
        return {"first":first, "middle":middle, "last":last}
    else:
        return {"first":first, "last":last}
    

person = build_name("well","jeke")
print(person)



def many(name, age, *args):
    f


many("will", 18, 1,2,3,4,5,6,7,8,9,0)



#类
class Car():
    def __init__(self, make, model, year):
        self.make = make
        self.model = model
        self.year = year
        self.odometer_reading = 0

    def get_descriptive_name(self):
        """返回整洁的描述性信息"""
        long_name = str(self.year) + ' ' + self.make + ' ' + self.model
        return long_name.title()
    


#继承
class ElectricCar(Car):
    def __init__(self, make, model, year):
        """初始化父类的属性"""
        super().__init__(make, model, year)
        self.battery_size = 70

    def describe_battery(self):
        """打印一条描述电瓶容量的消息"""
        print("This car has a " + str(self.battery_size) + "-kWh battery.")




with open('keys.txt') as file:
    lines = file.readlines()

pi = ''
for line in lines:
    #print(line.rstrip())
    pi += line.strip()

print(lines)
print(pi)


with open('keys.txt', 'a') as files:
    files.write("\nthis is a new line")

with open('keys.txt') as file:
    lines = file.readlines()
    for line in lines:
        print(line.strip())




#异常
try:
    print(5/0)
except ZeroDivisionError:
    print("you can't divide by zero")
else:
    print("no error")





#json
import json
username = input("what is your name : ")

filename = 'username.json'

with open(filename, 'w') as file:
    json.dump(username, file)


try:
    with open(filename) as file:
        username = json.load(file)
except FileNotFoundError:
    username = input("what is your name : ")
    with open(filename, 'w') as file:
        json.dump(username, file)
else:
    print("welcome back " + username)