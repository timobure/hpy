#ifndef HPY_HANDLES_H
#define HPY_HANDLES_H

#include <Python.h>

#define CONSTANT_H_NULL                0
#define CONSTANT_H_NONE                1
#define CONSTANT_H_TRUE                2
#define CONSTANT_H_FALSE               3
#define CONSTANT_H_VALUEERROR          4
#define CONSTANT_H_TYPEERROR           5
#define CONSTANT_H_BASEOBJECTTYPE      6
#define CONSTANT_H_TYPETYPE            7
#define CONSTANT_H_LONGTYPE            8
#define CONSTANT_H_UNICODETYPE         9
#define CONSTANT_H_TUPLETYPE          10
#define CONSTANT_H_LISTTYPE           11
#define CONSTANT_H__TOTAL             12

HPy _py2h(PyObject *);
PyObject *_h2py(HPy);
void _hclose(HPy);

#endif /* HPY_HANDLES_H */
