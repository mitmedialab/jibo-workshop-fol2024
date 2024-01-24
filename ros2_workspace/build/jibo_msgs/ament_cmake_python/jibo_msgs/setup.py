from setuptools import find_packages
from setuptools import setup

setup(
    name='jibo_msgs',
    version='3.0.0',
    packages=find_packages(
        include=('jibo_msgs', 'jibo_msgs.*')),
)
