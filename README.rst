swig setup example
==================


Usage
-----

Install::

    git clone https://github.com/jschueller/swig-setup-example.git
    cd swig-setup-example
    python setup.py install --user
    jupyter notebook

Then run::

    import openturns as ot
    for i in range(1000):
        ot.Log_Warn(str(i)+'-'*100)

