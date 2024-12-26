#This is a program to interconvert between Celsius, fahrenheit and Kelvin temperature scales.
#The program taKes a temperature value and a temperature scale as input and converts it to the other two scales.   
temperature = float(input("Enter temperature: "))
scale = input("Enter temperature scale (C/F/K): ")

if scale == 'C':
    C = temperature
    F = (9/5)*C + 32
    K = C + 273.15
    print(F, K)

elif scale == 'F':
    F = temperature
    C = (F - 32)*5/9
    K = C + 273.15
    print(C, K)                                           

elif scale == 'K':
    K = temperature
    C = K - 273.15
    F = (9/5)*C + 32
    print(C, F)
else:
    print("Invalid")