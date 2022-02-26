from setuptools import setup, find_packages
import codecs
import os

VERSION = '0.0.0'
DESCRIPTION = 'Agl is a multi purpose library'
LONG_DESCRIPTION = 'Its a multi purpose and useful library'

# Setting up
setup(
    name="agl",
    version=VERSION,
    author="Aadesh Lokhande",
    author_email="aadeshlokhande11@gmail.com",
    description=DESCRIPTION,
    long_description_content_type="text/markdown",
    long_description=LONG_DESCRIPTION,
    packages=find_packages(),
    install_requires=["textblob"],
    keywords=["aadesh", "aadesh lokhande", 'bigLeters', 'bitcoin', 'calculate', 'covid', 'date', 'emoji', 'googleSearch', 'info', 'instagram', 'mean', 'month', 'n2w', 'netspeed', 'table', 'time', 'translate', 'urlshort', 'wiki', 'youtube'],
    classifiers=[
        "Development Status :: 1 - Planning",
        "Intended Audience :: Developers",
        "Programming Language :: Python :: 3",
        "Operating System :: Unix",
        "Operating System :: MacOS :: MacOS X",
        "Operating System :: Microsoft :: Windows",
    ]
)