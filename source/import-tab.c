	{ "Py_Initialize", NULL },
	{ "PyRun_SimpleString", NULL },
	{ "Py_Finalize", NULL },
	{ "Py_GetPath", NULL },
	{ "Py_SetPythonHome", NULL },
	{ "Py_SetProgramName", NULL },
	{ "PyMarshal_ReadObjectFromString", NULL },
	{ "PyObject_CallFunction", NULL },
	{ "PyString_AsStringAndSize", NULL },
	{ "PyString_AsString", NULL },
	{ "PyArg_ParseTuple", NULL },
	{ "PyErr_Format", NULL },
	{ "PyImport_ImportModule", NULL },
	{ "PyInt_FromLong", NULL },
	{ "PyInt_AsLong", NULL },
	{ "PyLong_FromVoidPtr", NULL },
#ifdef _DEBUG
	{ "Py_InitModule4TraceRefs", NULL },
#else
#  if defined (_WIN64)
	{ "Py_InitModule4_64", NULL },
#  else
	{ "Py_InitModule4", NULL },
#  endif
#endif
	{ "PyTuple_New", NULL },
	{ "PyTuple_SetItem", NULL },
	{ "Py_IsInitialized", NULL },
	{ "PyObject_SetAttrString", NULL },
	{ "PyCFunction_NewEx", NULL },
	{ "PyObject_GetAttrString", NULL },
	{ "Py_BuildValue", NULL },
	{ "PyObject_Call", NULL },
	{ "PySys_WriteStderr", NULL },
	{ "PyErr_Occurred", NULL },
	{ "PyErr_Clear", NULL },
	{ "PyObject_IsInstance", NULL },
	{ "PyInt_Type", NULL },
	{ "_Py_NoneStruct", NULL },
	{ "PyExc_ImportError", NULL },
	{ "_Py_PackageContext", NULL },
	{ "PyGILState_Ensure", NULL },
	{ "PyGILState_Release", NULL },
	{ "PySys_SetObject", NULL },
	{ "PySys_GetObject", NULL },
	{ "PyString_FromString", NULL },
	{ "Py_FdIsInteractive", NULL },
	{ "PyRun_InteractiveLoop", NULL },
	{ "PySys_SetArgv", NULL },
	{ "PyImport_AddModule", NULL },
	{ "PyModule_GetDict", NULL },
	{ "PySequence_Length", NULL },
	{ "PySequence_GetItem", NULL },
	{ "PyEval_EvalCode", NULL },
	{ "PyErr_Print", NULL },
	{ "PyBool_FromLong", NULL },
	{ "Py_VerboseFlag", NULL },
	{ "Py_NoSiteFlag", NULL },
	{ "Py_OptimizeFlag", NULL },
	{ "Py_IgnoreEnvironmentFlag", NULL },
	{ "PyObject_Str", NULL },
	{ "PyList_New", NULL },
	{ "PyList_SetItem", NULL },
	{ "PyList_Append", NULL },
