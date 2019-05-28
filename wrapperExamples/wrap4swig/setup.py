from disutils.core import setup, Extension

module = Extension("example", sources = ["example_wrap.c"])

setup(name="packageName",
	version = "1.0",
	description= "This is a package for example",
	ext_module = [module])
