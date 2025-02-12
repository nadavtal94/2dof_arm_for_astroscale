from setuptools import find_packages
from setuptools import setup

setup(
    name='tow_dof_motion',
    version='0.0.1',
    packages=find_packages(
        include=('tow_dof_motion', 'tow_dof_motion.*')),
)
