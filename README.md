# Welcome to SQL in C++

[![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](https://www.gnu.org/licenses/gpl-3.0)
[![GitHub Workflow Status](https://img.shields.io/github/actions/workflow/status/BillWhite/sql-in-cpp/ci.yml?branch=main)](https://github.com/BillWhite/sql-in-cpp/actions/workflows/ci.yml)
[![Documentation Status](https://readthedocs.org/projects/sql-in-cpp/badge/)](https://sql-in-cpp.readthedocs.io/)



# Prerequisites

Building SQL in C++ requires the following software installed:

* A C++11-compliant compiler
* CMake `>= 3.9`
* Doxygen (optional, documentation building is skipped if missing)

# Building SQL in C++

The following sequence of commands builds SQL in C++.
It assumes that your current working directory is the top-level directory
of the freshly cloned repository:

```
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Release ..
cmake --build .
```

The build process can be customized with the following CMake variables,
which can be set by adding `-D<var>={ON, OFF}` to the `cmake` call:

* `BUILD_TESTING`: Enable building of the test suite (default: `ON`)
* `BUILD_DOCS`: Enable building the documentation (default: `ON`)



# Testing SQL in C++

When built according to the above explanation (with `-DBUILD_TESTING=ON`),
the C++ test suite of `SQL in C++` can be run using
`ctest` from the build directory:

```
cd build
ctest
```


# Documentation

SQL in C++ provides a Sphinx-based documentation, that can
be browsed [online at readthedocs.org](https://sql-in-cpp.readthedocs.io).
To build it locally, first ensure the requirements are installed by running this command from the top-level source directory:

```
pip install -r doc/requirements.txt
```

Then build the sphinx documentation from the top-level build directory:

```
cmake --build . --target sphinx-doc
```

The web documentation can then be browsed by opening `doc/sphinx/index.html` in your browser.
