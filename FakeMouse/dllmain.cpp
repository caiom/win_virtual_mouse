// dllmain.cpp : Defines the entry point for the DLL application.
#include <pybind11/pybind11.h>
#include "mouse.h"

namespace py = pybind11;

PYBIND11_MODULE(FakeMouse, m) {
    py::class_<Mouse>(m, "Mouse")
        .def(py::init())
        .def("moveCursor", py::overload_cast<LONG, LONG>(&Mouse::moveCursor))
        .def("initialize", &Mouse::initialize);
}

