# This file was automatically generated by SWIG (http://www.swig.org).
# Version 3.0.8
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.





from sys import version_info
if version_info >= (2, 6, 0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_gfg', [dirname(__file__)])
        except ImportError:
            import _gfg
            return _gfg
        if fp is not None:
            try:
                _mod = imp.load_module('_gfg', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _gfg = swig_import_helper()
    del swig_import_helper
else:
    import _gfg
del version_info
try:
    _swig_property = property
except NameError:
    pass  # Python < 2.2 doesn't have 'property'.


def _swig_setattr_nondynamic(self, class_type, name, value, static=1):
    if (name == "thisown"):
        return self.this.own(value)
    if (name == "this"):
        if type(value).__name__ == 'SwigPyObject':
            self.__dict__[name] = value
            return
    method = class_type.__swig_setmethods__.get(name, None)
    if method:
        return method(self, value)
    if (not static):
        if _newclass:
            object.__setattr__(self, name, value)
        else:
            self.__dict__[name] = value
    else:
        raise AttributeError("You cannot add attributes to %s" % self)


def _swig_setattr(self, class_type, name, value):
    return _swig_setattr_nondynamic(self, class_type, name, value, 0)


def _swig_getattr_nondynamic(self, class_type, name, static=1):
    if (name == "thisown"):
        return self.this.own()
    method = class_type.__swig_getmethods__.get(name, None)
    if method:
        return method(self)
    if (not static):
        return object.__getattr__(self, name)
    else:
        raise AttributeError(name)

def _swig_getattr(self, class_type, name):
    return _swig_getattr_nondynamic(self, class_type, name, 0)


def _swig_repr(self):
    try:
        strthis = "proxy of " + self.this.__repr__()
    except Exception:
        strthis = ""
    return "<%s.%s; %s >" % (self.__class__.__module__, self.__class__.__name__, strthis,)

try:
    _object = object
    _newclass = 1
except AttributeError:
    class _object:
        pass
    _newclass = 0



def populate_a():
    return _gfg.populate_a()
populate_a = _gfg.populate_a

def fact(n):
    return _gfg.fact(n)
fact = _gfg.fact

def my_mod(n, m):
    return _gfg.my_mod(n, m)
my_mod = _gfg.my_mod

def a_set(i, val):
    return _gfg.a_set(i, val)
a_set = _gfg.a_set

def a_get(i):
    return _gfg.a_get(i)
a_get = _gfg.a_get

def get_str():
    return _gfg.get_str()
get_str = _gfg.get_str
class bar(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, bar, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, bar, name)
    __repr__ = _swig_repr
    __swig_setmethods__["a"] = _gfg.bar_a_set
    __swig_getmethods__["a"] = _gfg.bar_a_get
    if _newclass:
        a = _swig_property(_gfg.bar_a_get, _gfg.bar_a_set)
    __swig_setmethods__["x"] = _gfg.bar_x_set
    __swig_getmethods__["x"] = _gfg.bar_x_get
    if _newclass:
        x = _swig_property(_gfg.bar_x_get, _gfg.bar_x_set)

    def __init__(self):
        this = _gfg.new_bar()
        try:
            self.this.append(this)
        except Exception:
            self.this = this
    __swig_destroy__ = _gfg.delete_bar
    __del__ = lambda self: None
bar_swigregister = _gfg.bar_swigregister
bar_swigregister(bar)


def sturctVarPopulate(val):
    return _gfg.sturctVarPopulate(val)
sturctVarPopulate = _gfg.sturctVarPopulate

def getStructVar(val, i):
    return _gfg.getStructVar(val, i)
getStructVar = _gfg.getStructVar

def setStructVar(val, i, value):
    return _gfg.setStructVar(val, i, value)
setStructVar = _gfg.setStructVar

def int_array(size):
    return _gfg.int_array(size)
int_array = _gfg.int_array
# This file is compatible with both classic and new-style classes.


