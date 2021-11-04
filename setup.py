from setuptools import setup, Extension

setup(
    name='openturns',
    version='0.0',
    description='openturns bindings',
    ext_modules=[Extension(name='_openturns', sources=['openturns.i'], swig_opts=['-c++', '-I.'])],
)

