import gfg

class swigArray:
	def __init__(self, swigArr, size = 1):
		self.arr = swigArr
		self.size = size

	def __getitem__(self, key):
		return gfg.getArrayPos(self.arr, key)

	def __setitem__(self, key, value):
		gfg.setArrayPos(self.arr, key, value)

	def __str__(self):
		strRet = ""
		for i in range(self.size):
			strRet += str(self[i])+', '
		strRet.strip(" ")
		strRet.strip(",")
		strRet = "["+strRet+"]"
		return strRet
class xdcr_array:





	def __init__(self):
		self.xdcr_ref = gfg.xdcr_array()
		self.xdcr_ref.shape = "rect"

		self.shape = self.xdcr_ref.shape
		self.width = self.xdcr_ref.height
		self.height = self.xdcr_ref.height
		self.amplitude = self.xdcr_ref.amplitude
		self.phase = self.xdcr_ref.phase
		self.time_delay = self.xdcr_ref.time_delay
		self.center = swigArray(self.xdcr_ref.center,2)
		self.euler = swigArray(self.xdcr_ref.euler,3)

		self.extraComplex = self.xdcr_ref.extraComplex
		self.extraComplexArray = swigArray(self.xdcr_ref.extraComplexArray,5)

	def __str__(self):

		x = "\n	shape: {} \n\
			 width: {} \n\
			 height: {} \n\
			 amplitude: {}\n\
			 phase: {} \n\
			 time_delay: {}\n\
			 center: {} \n\
			 euler: {}\n\
			 extraComplex: {}\n\
			 ".format(self.shape,self.width, self.height,\
			  self.amplitude, self.phase, self.time_delay,\
			  self.center, self.euler, self	.extraComplex)

		return x
