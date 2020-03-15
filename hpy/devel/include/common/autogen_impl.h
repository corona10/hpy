
/*
   DO NOT EDIT THIS FILE!

   This file is automatically generated by tools/autogen.py from tools/public_api.h.
   Run this to regenerate:
       make autogen

*/

HPyAPI_STORAGE HPy _HPy_IMPL_NAME(Long_FromLong)(HPyContext ctx, long value)
{
    return _py2h(PyLong_FromLong(value));
}

HPyAPI_STORAGE HPy _HPy_IMPL_NAME(Long_FromLongLong)(HPyContext ctx, long long v)
{
    return _py2h(PyLong_FromLongLong(v));
}

HPyAPI_STORAGE HPy _HPy_IMPL_NAME(Long_FromUnsignedLongLong)(HPyContext ctx, unsigned long long v)
{
    return _py2h(PyLong_FromUnsignedLongLong(v));
}

HPyAPI_STORAGE long _HPy_IMPL_NAME(Long_AsLong)(HPyContext ctx, HPy h)
{
    return PyLong_AsLong(_h2py(h));
}

HPyAPI_STORAGE HPy _HPy_IMPL_NAME(Float_FromDouble)(HPyContext ctx, double v)
{
    return _py2h(PyFloat_FromDouble(v));
}

HPyAPI_STORAGE HPy _HPy_IMPL_NAME(Number_Add)(HPyContext ctx, HPy h1, HPy h2)
{
    return _py2h(PyNumber_Add(_h2py(h1), _h2py(h2)));
}

HPyAPI_STORAGE HPy _HPy_IMPL_NAME(Number_Subtract)(HPyContext ctx, HPy h1, HPy h2)
{
    return _py2h(PyNumber_Subtract(_h2py(h1), _h2py(h2)));
}

HPyAPI_STORAGE HPy _HPy_IMPL_NAME(Number_Multiply)(HPyContext ctx, HPy h1, HPy h2)
{
    return _py2h(PyNumber_Multiply(_h2py(h1), _h2py(h2)));
}

HPyAPI_STORAGE HPy _HPy_IMPL_NAME(Number_MatrixMultiply)(HPyContext ctx, HPy h1, HPy h2)
{
    return _py2h(PyNumber_MatrixMultiply(_h2py(h1), _h2py(h2)));
}

HPyAPI_STORAGE HPy _HPy_IMPL_NAME(Number_FloorDivide)(HPyContext ctx, HPy h1, HPy h2)
{
    return _py2h(PyNumber_FloorDivide(_h2py(h1), _h2py(h2)));
}

HPyAPI_STORAGE HPy _HPy_IMPL_NAME(Number_TrueDivide)(HPyContext ctx, HPy h1, HPy h2)
{
    return _py2h(PyNumber_TrueDivide(_h2py(h1), _h2py(h2)));
}

HPyAPI_STORAGE HPy _HPy_IMPL_NAME(Number_Remainder)(HPyContext ctx, HPy h1, HPy h2)
{
    return _py2h(PyNumber_Remainder(_h2py(h1), _h2py(h2)));
}

HPyAPI_STORAGE HPy _HPy_IMPL_NAME(Number_Divmod)(HPyContext ctx, HPy h1, HPy h2)
{
    return _py2h(PyNumber_Divmod(_h2py(h1), _h2py(h2)));
}

HPyAPI_STORAGE HPy _HPy_IMPL_NAME(Number_Power)(HPyContext ctx, HPy h1, HPy h2, HPy h3)
{
    return _py2h(PyNumber_Power(_h2py(h1), _h2py(h2), _h2py(h3)));
}

HPyAPI_STORAGE HPy _HPy_IMPL_NAME(Number_Negative)(HPyContext ctx, HPy h1)
{
    return _py2h(PyNumber_Negative(_h2py(h1)));
}

HPyAPI_STORAGE HPy _HPy_IMPL_NAME(Number_Positive)(HPyContext ctx, HPy h1)
{
    return _py2h(PyNumber_Positive(_h2py(h1)));
}

HPyAPI_STORAGE HPy _HPy_IMPL_NAME(Number_Absolute)(HPyContext ctx, HPy h1)
{
    return _py2h(PyNumber_Absolute(_h2py(h1)));
}

HPyAPI_STORAGE HPy _HPy_IMPL_NAME(Number_Invert)(HPyContext ctx, HPy h1)
{
    return _py2h(PyNumber_Invert(_h2py(h1)));
}

HPyAPI_STORAGE HPy _HPy_IMPL_NAME(Number_Lshift)(HPyContext ctx, HPy h1, HPy h2)
{
    return _py2h(PyNumber_Lshift(_h2py(h1), _h2py(h2)));
}

HPyAPI_STORAGE HPy _HPy_IMPL_NAME(Number_Rshift)(HPyContext ctx, HPy h1, HPy h2)
{
    return _py2h(PyNumber_Rshift(_h2py(h1), _h2py(h2)));
}

HPyAPI_STORAGE HPy _HPy_IMPL_NAME(Number_And)(HPyContext ctx, HPy h1, HPy h2)
{
    return _py2h(PyNumber_And(_h2py(h1), _h2py(h2)));
}

HPyAPI_STORAGE HPy _HPy_IMPL_NAME(Number_Xor)(HPyContext ctx, HPy h1, HPy h2)
{
    return _py2h(PyNumber_Xor(_h2py(h1), _h2py(h2)));
}

HPyAPI_STORAGE HPy _HPy_IMPL_NAME(Number_Or)(HPyContext ctx, HPy h1, HPy h2)
{
    return _py2h(PyNumber_Or(_h2py(h1), _h2py(h2)));
}

HPyAPI_STORAGE HPy _HPy_IMPL_NAME(Number_Index)(HPyContext ctx, HPy h1)
{
    return _py2h(PyNumber_Index(_h2py(h1)));
}

HPyAPI_STORAGE HPy _HPy_IMPL_NAME(Number_Long)(HPyContext ctx, HPy h1)
{
    return _py2h(PyNumber_Long(_h2py(h1)));
}

HPyAPI_STORAGE HPy _HPy_IMPL_NAME(Number_Float)(HPyContext ctx, HPy h1)
{
    return _py2h(PyNumber_Float(_h2py(h1)));
}

HPyAPI_STORAGE void _HPy_IMPL_NAME(Err_SetString)(HPyContext ctx, HPy h_type, const char *message)
{
    return PyErr_SetString(_h2py(h_type), message);
}

HPyAPI_STORAGE int _HPy_IMPL_NAME(Object_IsTrue)(HPyContext ctx, HPy h)
{
    return PyObject_IsTrue(_h2py(h));
}

HPyAPI_STORAGE HPy _HPy_IMPL_NAME_NOPREFIX(GetAttr)(HPyContext ctx, HPy obj, HPy name)
{
    return _py2h(PyObject_GetAttr(_h2py(obj), _h2py(name)));
}

HPyAPI_STORAGE HPy _HPy_IMPL_NAME_NOPREFIX(GetAttr_s)(HPyContext ctx, HPy obj, const char *name)
{
    return _py2h(PyObject_GetAttrString(_h2py(obj), name));
}

HPyAPI_STORAGE int _HPy_IMPL_NAME_NOPREFIX(HasAttr)(HPyContext ctx, HPy obj, HPy name)
{
    return PyObject_HasAttr(_h2py(obj), _h2py(name));
}

HPyAPI_STORAGE int _HPy_IMPL_NAME_NOPREFIX(HasAttr_s)(HPyContext ctx, HPy obj, const char *name)
{
    return PyObject_HasAttrString(_h2py(obj), name);
}

HPyAPI_STORAGE int _HPy_IMPL_NAME_NOPREFIX(SetAttr)(HPyContext ctx, HPy obj, HPy name, HPy value)
{
    return PyObject_SetAttr(_h2py(obj), _h2py(name), _h2py(value));
}

HPyAPI_STORAGE int _HPy_IMPL_NAME_NOPREFIX(SetAttr_s)(HPyContext ctx, HPy obj, const char *name, HPy value)
{
    return PyObject_SetAttrString(_h2py(obj), name, _h2py(value));
}

HPyAPI_STORAGE HPy _HPy_IMPL_NAME_NOPREFIX(GetItem)(HPyContext ctx, HPy obj, HPy key)
{
    return _py2h(PyObject_GetItem(_h2py(obj), _h2py(key)));
}

HPyAPI_STORAGE int _HPy_IMPL_NAME_NOPREFIX(SetItem)(HPyContext ctx, HPy obj, HPy key, HPy value)
{
    return PyObject_SetItem(_h2py(obj), _h2py(key), _h2py(value));
}

HPyAPI_STORAGE int _HPy_IMPL_NAME(Bytes_Check)(HPyContext ctx, HPy h)
{
    return PyBytes_Check(_h2py(h));
}

HPyAPI_STORAGE HPy_ssize_t _HPy_IMPL_NAME(Bytes_Size)(HPyContext ctx, HPy h)
{
    return PyBytes_Size(_h2py(h));
}

HPyAPI_STORAGE HPy_ssize_t _HPy_IMPL_NAME(Bytes_GET_SIZE)(HPyContext ctx, HPy h)
{
    return PyBytes_GET_SIZE(_h2py(h));
}

HPyAPI_STORAGE char *_HPy_IMPL_NAME(Bytes_AsString)(HPyContext ctx, HPy h)
{
    return PyBytes_AsString(_h2py(h));
}

HPyAPI_STORAGE char *_HPy_IMPL_NAME(Bytes_AS_STRING)(HPyContext ctx, HPy h)
{
    return PyBytes_AS_STRING(_h2py(h));
}

HPyAPI_STORAGE HPy _HPy_IMPL_NAME(Unicode_FromString)(HPyContext ctx, const char *utf8)
{
    return _py2h(PyUnicode_FromString(utf8));
}

HPyAPI_STORAGE int _HPy_IMPL_NAME(Unicode_Check)(HPyContext ctx, HPy h)
{
    return PyUnicode_Check(_h2py(h));
}

HPyAPI_STORAGE HPy _HPy_IMPL_NAME(Unicode_AsUTF8String)(HPyContext ctx, HPy h)
{
    return _py2h(PyUnicode_AsUTF8String(_h2py(h)));
}

HPyAPI_STORAGE HPy _HPy_IMPL_NAME(Unicode_FromWideChar)(HPyContext ctx, const wchar_t *w, HPy_ssize_t size)
{
    return _py2h(PyUnicode_FromWideChar(w, size));
}

HPyAPI_STORAGE HPy _HPy_IMPL_NAME(List_New)(HPyContext ctx, HPy_ssize_t len)
{
    return _py2h(PyList_New(len));
}

HPyAPI_STORAGE int _HPy_IMPL_NAME(List_Append)(HPyContext ctx, HPy h_list, HPy h_item)
{
    return PyList_Append(_h2py(h_list), _h2py(h_item));
}

HPyAPI_STORAGE HPy _HPy_IMPL_NAME(Dict_New)(HPyContext ctx)
{
    return _py2h(PyDict_New());
}

HPyAPI_STORAGE int _HPy_IMPL_NAME(Dict_SetItem)(HPyContext ctx, HPy h_dict, HPy h_key, HPy h_val)
{
    return PyDict_SetItem(_h2py(h_dict), _h2py(h_key), _h2py(h_val));
}

HPyAPI_STORAGE HPy _HPy_IMPL_NAME(Dict_GetItem)(HPyContext ctx, HPy h_dict, HPy h_key)
{
    return _py2h(PyDict_GetItem(_h2py(h_dict), _h2py(h_key)));
}

