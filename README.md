# Linear Algebra ToolBox

[![language-cpp](https://img.shields.io/badge/language-C%2B%2B-blue)](https://github.com/tschmoderer/cpp-linear-algebra-toolbox/search?l=c%2B%2B&type=code)  [![build](https://github.com/tschmoderer/cpp-linear-algebra-toolbox/actions/workflows/cmake.yml/badge.svg?branch=main)](https://github.com/tschmoderer/cpp-linear-algebra-toolbox/actions/workflows/cmake.yml) [![docs](https://github.com/tschmoderer/cpp-linear-algebra-toolbox/actions/workflows/doxygen.yml/badge.svg?branch=main)](https://tschmoderer.github.io/cpp-linear-algebra-toolbox/html/index.html) [![License](https://img.shields.io/badge/License-GPL%20v3-blue.svg)](https://github.com/tschmoderer/cpp-linear-algebra-toolbox/blob/master/LICENSE) [![GitHub tag (latest by date)](https://img.shields.io/github/v/tag/tschmoderer/cpp-linear-algebra-toolbox?label=Version)](https://github.com/tschmoderer/cpp-linear-algebra-toolbox/releases)

A standlone C++ library for linear algebra.

## Building sources

### Windows

To Be Completed

### Unix systems

**Require**: cmake ; g++ ; (opt) valgrind

```bash
mkdir build
cd build
cmake ..
make
make test
(Opt) make memcheck
```

### MacOs

To Be Completed

## Documentation

The project documentation is automatically generated by github and served at this [page](https://tschmoderer.github.io/cpp-linear-algebra-toolbox/html/index.html). 

Nevertheless, you can generate (UNIX only) the documentation using the target 

```bash
(Require) sudo apt install -y doxygen graphviz plantuml
make docs
```

which will compile the documentation and open your browser to display the main page.

## Credits

Portions of this software are copyright of their respective authors :

- Documentation theme is made by [jothepro](https://github.com/jothepro/doxygen-awesome-css) - MIT License
