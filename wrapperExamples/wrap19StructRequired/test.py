import structWrapperClass

x = structWrapperClass.xdcr_array()
x.center[1] = 2
print(x.center[1])
compNum = 1 + 2j
print(compNum)
print(type(compNum))

x.extraComplex = compNum


print(x)


