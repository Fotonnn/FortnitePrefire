/* Generated code for Python module 'dxcam$_libs$d3d11'
 * created by Nuitka version 1.9.3
 *
 * This code is in part copyright 2023 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_dxcam$_libs$d3d11" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_dxcam$_libs$d3d11;
PyDictObject *moduledict_dxcam$_libs$d3d11;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[247];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[247];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("dxcam._libs.d3d11"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 247; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_dxcam$_libs$d3d11(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 247; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_1f4a063c96cbf43c89330d982d1f58fe;
static PyCodeObject *codeobj_d3ee9057fa5e2778a696c595075a586e;
static PyCodeObject *codeobj_33e0236c82cbfdaf890491aa5be68eae;
static PyCodeObject *codeobj_3af9c6fc6581ab123e789427d3e03d7f;
static PyCodeObject *codeobj_4e2858c1a0b8ebfc9cc9ba3806252678;
static PyCodeObject *codeobj_dfbe046340d2fcef5d33d8d0f47d6bd6;
static PyCodeObject *codeobj_fa225f92d32cb3916f71632d1ecdfef6;
static PyCodeObject *codeobj_a3bb895fe8249adb083d9c4333110402;
static PyCodeObject *codeobj_e88cca032659cfc9c84a3055b5f23df0;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[243]); CHECK_OBJECT(module_filename_obj);
    codeobj_1f4a063c96cbf43c89330d982d1f58fe = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[244], mod_consts[244], NULL, NULL, 0, 0, 0);
    codeobj_d3ee9057fa5e2778a696c595075a586e = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_NOFREE, mod_consts[52], mod_consts[52], mod_consts[245], NULL, 0, 0, 0);
    codeobj_33e0236c82cbfdaf890491aa5be68eae = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_NOFREE, mod_consts[59], mod_consts[59], mod_consts[245], NULL, 0, 0, 0);
    codeobj_3af9c6fc6581ab123e789427d3e03d7f = MAKE_CODE_OBJECT(module_filename_obj, 25, CO_NOFREE, mod_consts[39], mod_consts[39], mod_consts[245], NULL, 0, 0, 0);
    codeobj_4e2858c1a0b8ebfc9cc9ba3806252678 = MAKE_CODE_OBJECT(module_filename_obj, 215, CO_NOFREE, mod_consts[201], mod_consts[201], mod_consts[245], NULL, 0, 0, 0);
    codeobj_dfbe046340d2fcef5d33d8d0f47d6bd6 = MAKE_CODE_OBJECT(module_filename_obj, 58, CO_NOFREE, mod_consts[71], mod_consts[71], mod_consts[245], NULL, 0, 0, 0);
    codeobj_fa225f92d32cb3916f71632d1ecdfef6 = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_NOFREE, mod_consts[91], mod_consts[91], mod_consts[245], NULL, 0, 0, 0);
    codeobj_a3bb895fe8249adb083d9c4333110402 = MAKE_CODE_OBJECT(module_filename_obj, 68, CO_NOFREE, mod_consts[82], mod_consts[82], mod_consts[245], NULL, 0, 0, 0);
    codeobj_e88cca032659cfc9c84a3055b5f23df0 = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_NOFREE, mod_consts[87], mod_consts[87], mod_consts[245], NULL, 0, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


// The module function definitions.


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_dxcam$_libs$d3d11[] = {

    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_dxcam$_libs$d3d11);

    if (unlikely(offset == -1)) {
        PyThreadState *tstate = PyThreadState_GET();
#if 0
        PRINT_STRING("Looking for:");
        PRINT_ITEM(func);
        PRINT_NEW_LINE();
#endif
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);


    PyObject *result = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 3, function->m_kwdefaults ? function->m_kwdefaults : Py_None);
#else
    PyTuple_SET_ITEM0(result, 3, Py_None);
#endif
    PyTuple_SET_ITEM0(result, 4, function->m_doc != NULL ? function->m_doc : Py_None);

    if (offset == -5) {
        CHECK_OBJECT(function->m_constant_return_value);
        PyTuple_SET_ITEM0(result, 5, function->m_constant_return_value);
    } else {
        PyTuple_SET_ITEM0(result, 5, Py_None);
    }

#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 6, function->m_qualname);
#else
    PyTuple_SET_ITEM0(result, 6, Py_None);
#endif

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;

    if (!PyArg_ParseTuple(args, "OOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, NULL)) {
        return NULL;
    }

#if PYTHON_VERSION >= 0x300
    if (kw_defaults == Py_None) {
        kw_defaults = NULL;
    }
#endif

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_dxcam$_libs$d3d11,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_dxcam$_libs$d3d11,
        sizeof(function_table_dxcam$_libs$d3d11) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_dxcam$_libs$d3d11(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("dxcam$_libs$d3d11");

    // Store the module for future use.
    module_dxcam$_libs$d3d11 = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("dxcam$_libs$d3d11: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("dxcam$_libs$d3d11: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initdxcam$_libs$d3d11\n");

    moduledict_dxcam$_libs$d3d11 = MODULE_DICT(module_dxcam$_libs$d3d11);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_dxcam$_libs$d3d11,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_dxcam$_libs$d3d11,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[246]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_dxcam$_libs$d3d11,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_dxcam$_libs$d3d11,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_dxcam$_libs$d3d11,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_dxcam$_libs$d3d11);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_dxcam$_libs$d3d11);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__bases_orig = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__bases_orig = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__bases_orig = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    struct Nuitka_FrameObject *frame_1f4a063c96cbf43c89330d982d1f58fe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_dxcam$_libs$d3d11$$$class__1_DXGI_SAMPLE_DESC_25 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_3af9c6fc6581ab123e789427d3e03d7f_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *locals_dxcam$_libs$d3d11$$$class__2_D3D11_BOX_32 = NULL;
    struct Nuitka_FrameObject *frame_d3ee9057fa5e2778a696c595075a586e_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_dxcam$_libs$d3d11$$$class__3_D3D11_TEXTURE2D_DESC_43 = NULL;
    struct Nuitka_FrameObject *frame_33e0236c82cbfdaf890491aa5be68eae_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *locals_dxcam$_libs$d3d11$$$class__4_ID3D11DeviceChild_58 = NULL;
    struct Nuitka_FrameObject *frame_dfbe046340d2fcef5d33d8d0f47d6bd6_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_dxcam$_libs$d3d11$$$class__5_ID3D11Resource_68 = NULL;
    struct Nuitka_FrameObject *frame_a3bb895fe8249adb083d9c4333110402_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *locals_dxcam$_libs$d3d11$$$class__6_ID3D11Texture2D_77 = NULL;
    struct Nuitka_FrameObject *frame_e88cca032659cfc9c84a3055b5f23df0_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84 = NULL;
    struct Nuitka_FrameObject *frame_fa225f92d32cb3916f71632d1ecdfef6_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215 = NULL;
    struct Nuitka_FrameObject *frame_4e2858c1a0b8ebfc9cc9ba3806252678_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_2);
    }
    frame_1f4a063c96cbf43c89330d982d1f58fe = MAKE_MODULE_FRAME(codeobj_1f4a063c96cbf43c89330d982d1f58fe, module_dxcam$_libs$d3d11);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1f4a063c96cbf43c89330d982d1f58fe);
    assert(Py_REFCNT(frame_1f4a063c96cbf43c89330d982d1f58fe) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_CTYPES__WINTYPES();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[8];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_dxcam$_libs$d3d11;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[9];
        frame_1f4a063c96cbf43c89330d982d1f58fe->m_frame.f_lineno = 3;
        tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[16];
        UPDATE_STRING_DICT0(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[18];
        UPDATE_STRING_DICT0(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[20];
        UPDATE_STRING_DICT0(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[22];
        UPDATE_STRING_DICT0(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[24];
        UPDATE_STRING_DICT0(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[26];
        UPDATE_STRING_DICT0(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[33];
        UPDATE_STRING_DICT0(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_20);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[37]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_1;
        }
        tmp_assign_source_21 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_21, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_22 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_2 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[9];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_24 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_24;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts[38]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[38]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[39];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_1f4a063c96cbf43c89330d982d1f58fe->m_frame.f_lineno = 25;
        tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_25;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_5 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts[40]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[41];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_6 = tmp_class_creation_1__metaclass;
        tmp_name_value_2 = mod_consts[42];
        tmp_default_value_1 = mod_consts[43];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_2, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_7;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_7 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[42]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 25;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_26;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_27;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_dxcam$_libs$d3d11$$$class__1_DXGI_SAMPLE_DESC_25 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[44];
        tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__1_DXGI_SAMPLE_DESC_25, mod_consts[45], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[39];
        tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__1_DXGI_SAMPLE_DESC_25, mod_consts[46], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_3;
        }
        frame_3af9c6fc6581ab123e789427d3e03d7f_2 = MAKE_CLASS_FRAME(tstate, codeobj_3af9c6fc6581ab123e789427d3e03d7f, module_dxcam$_libs$d3d11, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_3af9c6fc6581ab123e789427d3e03d7f_2);
        assert(Py_REFCNT(frame_3af9c6fc6581ab123e789427d3e03d7f_2) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_tuple_element_4;
            tmp_tuple_element_4 = mod_consts[47];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_8;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_4);
                tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_expression_value_8 == NULL)) {
                    tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                assert(!(tmp_expression_value_8 == NULL));
                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[48]);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 27;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_list_element_1);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_dictset_value = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_tuple_element_5;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
                tmp_tuple_element_5 = mod_consts[49];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_9;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_5);
                    tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_9 == NULL)) {
                        tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                    }

                    assert(!(tmp_expression_value_9 == NULL));
                    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[48]);
                    if (tmp_tuple_element_5 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 28;
                        type_description_2 = "o";
                        goto tuple_build_exception_3;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_5);
                }
                goto tuple_build_noexception_3;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_3:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_3:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_1);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_1:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_2;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__1_DXGI_SAMPLE_DESC_25, mod_consts[50], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3af9c6fc6581ab123e789427d3e03d7f_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3af9c6fc6581ab123e789427d3e03d7f_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3af9c6fc6581ab123e789427d3e03d7f_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3af9c6fc6581ab123e789427d3e03d7f_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_3af9c6fc6581ab123e789427d3e03d7f_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__1_DXGI_SAMPLE_DESC_25, mod_consts[51], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_6 = mod_consts[39];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_6 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_dxcam$_libs$d3d11$$$class__1_DXGI_SAMPLE_DESC_25;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_1f4a063c96cbf43c89330d982d1f58fe->m_frame.f_lineno = 25;
            tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_28;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_27 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_27);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_dxcam$_libs$d3d11$$$class__1_DXGI_SAMPLE_DESC_25);
        locals_dxcam$_libs$d3d11$$$class__1_DXGI_SAMPLE_DESC_25 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_dxcam$_libs$d3d11$$$class__1_DXGI_SAMPLE_DESC_25);
        locals_dxcam$_libs$d3d11$$$class__1_DXGI_SAMPLE_DESC_25 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 25;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_27);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_expression_value_10;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        assert(!(tmp_expression_value_10 == NULL));
        tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[37]);
        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_4;
        }
        tmp_assign_source_29 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_29, 0, tmp_tuple_element_7);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_30 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_4;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_11 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[9];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_4;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_32 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_32;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_12 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_12, mod_consts[38]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_4;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_13 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[38]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_4;
        }
        tmp_tuple_element_8 = mod_consts[52];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_8 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_1f4a063c96cbf43c89330d982d1f58fe->m_frame.f_lineno = 32;
        tmp_assign_source_33 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_33;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_14 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts[40]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_4;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_name_value_3;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[41];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_15 = tmp_class_creation_2__metaclass;
        tmp_name_value_3 = mod_consts[42];
        tmp_default_value_2 = mod_consts[43];
        tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_15, tmp_name_value_3, tmp_default_value_2);
        if (tmp_tuple_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_16;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_16 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_16 == NULL));
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[42]);
            Py_DECREF(tmp_expression_value_16);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 32;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_34;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_35;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_dxcam$_libs$d3d11$$$class__2_D3D11_BOX_32 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[44];
        tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__2_D3D11_BOX_32, mod_consts[45], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[52];
        tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__2_D3D11_BOX_32, mod_consts[46], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_6;
        }
        frame_d3ee9057fa5e2778a696c595075a586e_3 = MAKE_CLASS_FRAME(tstate, codeobj_d3ee9057fa5e2778a696c595075a586e, module_dxcam$_libs$d3d11, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_d3ee9057fa5e2778a696c595075a586e_3);
        assert(Py_REFCNT(frame_d3ee9057fa5e2778a696c595075a586e_3) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_2;
            PyObject *tmp_tuple_element_10;
            tmp_tuple_element_10 = mod_consts[53];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_17;
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_10);
                tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_expression_value_17 == NULL)) {
                    tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                assert(!(tmp_expression_value_17 == NULL));
                tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[48]);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 34;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_10);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_list_element_2);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_dictset_value = MAKE_LIST_EMPTY(6);
            {
                PyObject *tmp_tuple_element_11;
                PyObject *tmp_tuple_element_12;
                PyObject *tmp_tuple_element_13;
                PyObject *tmp_tuple_element_14;
                PyObject *tmp_tuple_element_15;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_2);
                tmp_tuple_element_11 = mod_consts[54];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_18;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_11);
                    tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_18 == NULL)) {
                        tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                    }

                    assert(!(tmp_expression_value_18 == NULL));
                    tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[48]);
                    if (tmp_tuple_element_11 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 35;
                        type_description_2 = "o";
                        goto tuple_build_exception_6;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_11);
                }
                goto tuple_build_noexception_6;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_6:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_6:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_2);
                tmp_tuple_element_12 = mod_consts[55];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_19;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_12);
                    tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_19 == NULL)) {
                        tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                    }

                    assert(!(tmp_expression_value_19 == NULL));
                    tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[48]);
                    if (tmp_tuple_element_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 36;
                        type_description_2 = "o";
                        goto tuple_build_exception_7;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_12);
                }
                goto tuple_build_noexception_7;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_7:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_7:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_2);
                tmp_tuple_element_13 = mod_consts[56];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_20;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_13);
                    tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_20 == NULL)) {
                        tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                    }

                    assert(!(tmp_expression_value_20 == NULL));
                    tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[48]);
                    if (tmp_tuple_element_13 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 37;
                        type_description_2 = "o";
                        goto tuple_build_exception_8;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_13);
                }
                goto tuple_build_noexception_8;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_8:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_8:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_2);
                tmp_tuple_element_14 = mod_consts[57];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_21;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_14);
                    tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_21 == NULL)) {
                        tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                    }

                    assert(!(tmp_expression_value_21 == NULL));
                    tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[48]);
                    if (tmp_tuple_element_14 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 38;
                        type_description_2 = "o";
                        goto tuple_build_exception_9;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_14);
                }
                goto tuple_build_noexception_9;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_9:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_9:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_2);
                tmp_tuple_element_15 = mod_consts[58];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_22;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_15);
                    tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_22 == NULL)) {
                        tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                    }

                    assert(!(tmp_expression_value_22 == NULL));
                    tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[48]);
                    if (tmp_tuple_element_15 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 39;
                        type_description_2 = "o";
                        goto tuple_build_exception_10;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_15);
                }
                goto tuple_build_noexception_10;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_10:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_10:;
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_2);
            }
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_3;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__2_D3D11_BOX_32, mod_consts[50], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d3ee9057fa5e2778a696c595075a586e_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d3ee9057fa5e2778a696c595075a586e_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d3ee9057fa5e2778a696c595075a586e_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d3ee9057fa5e2778a696c595075a586e_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_d3ee9057fa5e2778a696c595075a586e_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__2_D3D11_BOX_32, mod_consts[51], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_6;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_16 = mod_consts[52];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_16 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = locals_dxcam$_libs$d3d11$$$class__2_D3D11_BOX_32;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_1f4a063c96cbf43c89330d982d1f58fe->m_frame.f_lineno = 32;
            tmp_assign_source_36 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_36;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_35 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_35);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_dxcam$_libs$d3d11$$$class__2_D3D11_BOX_32);
        locals_dxcam$_libs$d3d11$$$class__2_D3D11_BOX_32 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_dxcam$_libs$d3d11$$$class__2_D3D11_BOX_32);
        locals_dxcam$_libs$d3d11$$$class__2_D3D11_BOX_32 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 32;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_35);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_expression_value_23;
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        assert(!(tmp_expression_value_23 == NULL));
        tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[37]);
        if (tmp_tuple_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        tmp_assign_source_37 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_37, 0, tmp_tuple_element_17);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_38 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_24 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[9];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_24, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_40 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_40;
    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_expression_value_25;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_25 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_25, mod_consts[38]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        tmp_condition_result_10 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_26 = tmp_class_creation_3__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[38]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        tmp_tuple_element_18 = mod_consts[59];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_18 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_1f4a063c96cbf43c89330d982d1f58fe->m_frame.f_lineno = 43;
        tmp_assign_source_41 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_41;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_27;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_27 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_27, mod_consts[40]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_name_value_4;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[41];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_28 = tmp_class_creation_3__metaclass;
        tmp_name_value_4 = mod_consts[42];
        tmp_default_value_3 = mod_consts[43];
        tmp_tuple_element_19 = BUILTIN_GETATTR(tstate, tmp_expression_value_28, tmp_name_value_4, tmp_default_value_3);
        if (tmp_tuple_element_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_29;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_29 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_29 == NULL));
            tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[42]);
            Py_DECREF(tmp_expression_value_29);
            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 43;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_42;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_43;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_dxcam$_libs$d3d11$$$class__3_D3D11_TEXTURE2D_DESC_43 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[44];
        tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__3_D3D11_TEXTURE2D_DESC_43, mod_consts[45], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[59];
        tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__3_D3D11_TEXTURE2D_DESC_43, mod_consts[46], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_9;
        }
        frame_33e0236c82cbfdaf890491aa5be68eae_4 = MAKE_CLASS_FRAME(tstate, codeobj_33e0236c82cbfdaf890491aa5be68eae, module_dxcam$_libs$d3d11, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_33e0236c82cbfdaf890491aa5be68eae_4);
        assert(Py_REFCNT(frame_33e0236c82cbfdaf890491aa5be68eae_4) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_3;
            PyObject *tmp_tuple_element_20;
            tmp_tuple_element_20 = mod_consts[60];
            tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_30;
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_20);
                tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_expression_value_30 == NULL)) {
                    tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                assert(!(tmp_expression_value_30 == NULL));
                tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[48]);
                if (tmp_tuple_element_20 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 45;
                    type_description_2 = "o";
                    goto tuple_build_exception_12;
                }
                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_20);
            }
            goto tuple_build_noexception_12;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_12:;
            Py_DECREF(tmp_list_element_3);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_12:;
            tmp_dictset_value = MAKE_LIST_EMPTY(10);
            {
                PyObject *tmp_tuple_element_21;
                PyObject *tmp_tuple_element_22;
                PyObject *tmp_tuple_element_23;
                PyObject *tmp_tuple_element_24;
                PyObject *tmp_tuple_element_25;
                PyObject *tmp_tuple_element_26;
                PyObject *tmp_tuple_element_27;
                PyObject *tmp_tuple_element_28;
                PyObject *tmp_tuple_element_29;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_3);
                tmp_tuple_element_21 = mod_consts[61];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_31;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_21);
                    tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_31 == NULL)) {
                        tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                    }

                    assert(!(tmp_expression_value_31 == NULL));
                    tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[48]);
                    if (tmp_tuple_element_21 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 46;
                        type_description_2 = "o";
                        goto tuple_build_exception_13;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_21);
                }
                goto tuple_build_noexception_13;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_13:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_13:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_3);
                tmp_tuple_element_22 = mod_consts[62];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_32;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_22);
                    tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_32 == NULL)) {
                        tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                    }

                    assert(!(tmp_expression_value_32 == NULL));
                    tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[48]);
                    if (tmp_tuple_element_22 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 47;
                        type_description_2 = "o";
                        goto tuple_build_exception_14;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_22);
                }
                goto tuple_build_noexception_14;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_14:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_14:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_3);
                tmp_tuple_element_23 = mod_consts[63];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_33;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_23);
                    tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_33 == NULL)) {
                        tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                    }

                    assert(!(tmp_expression_value_33 == NULL));
                    tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[48]);
                    if (tmp_tuple_element_23 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 48;
                        type_description_2 = "o";
                        goto tuple_build_exception_15;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_23);
                }
                goto tuple_build_noexception_15;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_15:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_15:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_3);
                tmp_tuple_element_24 = mod_consts[64];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_34;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_24);
                    tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_34 == NULL)) {
                        tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                    }

                    assert(!(tmp_expression_value_34 == NULL));
                    tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[48]);
                    if (tmp_tuple_element_24 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 49;
                        type_description_2 = "o";
                        goto tuple_build_exception_16;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_24);
                }
                goto tuple_build_noexception_16;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_16:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_16:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_3);
                tmp_tuple_element_25 = mod_consts[65];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_25);
                tmp_tuple_element_25 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__3_D3D11_TEXTURE2D_DESC_43, mod_consts[39]);

                if (tmp_tuple_element_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[39]);

                        if (unlikely(tmp_tuple_element_25 == NULL)) {
                            tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
                        }

                        if (tmp_tuple_element_25 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 50;
                            type_description_2 = "o";
                            goto tuple_build_exception_17;
                        }
                        Py_INCREF(tmp_tuple_element_25);
                    } else {
                        goto tuple_build_exception_17;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_25);
                goto tuple_build_noexception_17;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_17:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_17:;
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_3);
                tmp_tuple_element_26 = mod_consts[66];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_35;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_26);
                    tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_35 == NULL)) {
                        tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                    }

                    assert(!(tmp_expression_value_35 == NULL));
                    tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[48]);
                    if (tmp_tuple_element_26 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 51;
                        type_description_2 = "o";
                        goto tuple_build_exception_18;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_26);
                }
                goto tuple_build_noexception_18;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_18:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_18:;
                PyList_SET_ITEM(tmp_dictset_value, 6, tmp_list_element_3);
                tmp_tuple_element_27 = mod_consts[67];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_36;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_27);
                    tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_36 == NULL)) {
                        tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                    }

                    assert(!(tmp_expression_value_36 == NULL));
                    tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[48]);
                    if (tmp_tuple_element_27 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 52;
                        type_description_2 = "o";
                        goto tuple_build_exception_19;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_27);
                }
                goto tuple_build_noexception_19;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_19:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_19:;
                PyList_SET_ITEM(tmp_dictset_value, 7, tmp_list_element_3);
                tmp_tuple_element_28 = mod_consts[68];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_37;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_28);
                    tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_37 == NULL)) {
                        tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                    }

                    assert(!(tmp_expression_value_37 == NULL));
                    tmp_tuple_element_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[48]);
                    if (tmp_tuple_element_28 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 53;
                        type_description_2 = "o";
                        goto tuple_build_exception_20;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_28);
                }
                goto tuple_build_noexception_20;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_20:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_20:;
                PyList_SET_ITEM(tmp_dictset_value, 8, tmp_list_element_3);
                tmp_tuple_element_29 = mod_consts[69];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_38;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_29);
                    tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_38 == NULL)) {
                        tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                    }

                    assert(!(tmp_expression_value_38 == NULL));
                    tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[48]);
                    if (tmp_tuple_element_29 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 54;
                        type_description_2 = "o";
                        goto tuple_build_exception_21;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_29);
                }
                goto tuple_build_noexception_21;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_21:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_21:;
                PyList_SET_ITEM(tmp_dictset_value, 9, tmp_list_element_3);
            }
            goto list_build_noexception_3;
            // Exception handling pass through code for list_build:
            list_build_exception_3:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_4;
            // Finished with no exception for list_build:
            list_build_noexception_3:;
            tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__3_D3D11_TEXTURE2D_DESC_43, mod_consts[50], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_33e0236c82cbfdaf890491aa5be68eae_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_33e0236c82cbfdaf890491aa5be68eae_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_33e0236c82cbfdaf890491aa5be68eae_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_33e0236c82cbfdaf890491aa5be68eae_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_33e0236c82cbfdaf890491aa5be68eae_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_9;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto try_except_handler_9;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__3_D3D11_TEXTURE2D_DESC_43, mod_consts[51], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_9;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_30;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_6 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_30 = mod_consts[59];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_30);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_30 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_30);
            tmp_tuple_element_30 = locals_dxcam$_libs$d3d11$$$class__3_D3D11_TEXTURE2D_DESC_43;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_30);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_1f4a063c96cbf43c89330d982d1f58fe->m_frame.f_lineno = 43;
            tmp_assign_source_44 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_44;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_43 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_43);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_dxcam$_libs$d3d11$$$class__3_D3D11_TEXTURE2D_DESC_43);
        locals_dxcam$_libs$d3d11$$$class__3_D3D11_TEXTURE2D_DESC_43 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_dxcam$_libs$d3d11$$$class__3_D3D11_TEXTURE2D_DESC_43);
        locals_dxcam$_libs$d3d11$$$class__3_D3D11_TEXTURE2D_DESC_43 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 43;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_43);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_tuple_element_31;
        PyObject *tmp_expression_value_39;
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_10;
        }
        tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[70]);
        if (tmp_tuple_element_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_10;
        }
        tmp_assign_source_45 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_45, 0, tmp_tuple_element_31);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_46 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_10;
        }
        tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_40 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[9];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_40, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_10;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_10;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_48 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_48;
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_expression_value_41;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_41 = tmp_class_creation_4__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_41, mod_consts[38]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_10;
        }
        tmp_condition_result_14 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_32;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_42 = tmp_class_creation_4__metaclass;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[38]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_10;
        }
        tmp_tuple_element_32 = mod_consts[71];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_32);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_32 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_32);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_1f4a063c96cbf43c89330d982d1f58fe->m_frame.f_lineno = 58;
        tmp_assign_source_49 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_49;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_43;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_43 = tmp_class_creation_4__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_43, mod_consts[40]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_10;
        }
        tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_15 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_33;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_name_value_5;
        PyObject *tmp_default_value_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[41];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_44 = tmp_class_creation_4__metaclass;
        tmp_name_value_5 = mod_consts[42];
        tmp_default_value_4 = mod_consts[43];
        tmp_tuple_element_33 = BUILTIN_GETATTR(tstate, tmp_expression_value_44, tmp_name_value_5, tmp_default_value_4);
        if (tmp_tuple_element_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_10;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_45;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_33);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_45 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_45 == NULL));
            tmp_tuple_element_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[42]);
            Py_DECREF(tmp_expression_value_45);
            if (tmp_tuple_element_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto tuple_build_exception_22;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_33);
        }
        goto tuple_build_noexception_22;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_22:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_22:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 58;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_50;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_51;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_dxcam$_libs$d3d11$$$class__4_ID3D11DeviceChild_58 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[44];
        tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__4_ID3D11DeviceChild_58, mod_consts[45], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[71];
        tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__4_ID3D11DeviceChild_58, mod_consts[46], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_12;
        }
        frame_dfbe046340d2fcef5d33d8d0f47d6bd6_5 = MAKE_CLASS_FRAME(tstate, codeobj_dfbe046340d2fcef5d33d8d0f47d6bd6, module_dxcam$_libs$d3d11, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_dfbe046340d2fcef5d33d8d0f47d6bd6_5);
        assert(Py_REFCNT(frame_dfbe046340d2fcef5d33d8d0f47d6bd6_5) == 2);

        // Framed code:
        {
            PyObject *tmp_called_instance_1;
            tmp_called_instance_1 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__4_ID3D11DeviceChild_58, mod_consts[8]);

            if (tmp_called_instance_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                    if (unlikely(tmp_called_instance_1 == NULL)) {
                        tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                    }

                    if (tmp_called_instance_1 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 59;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_1);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_dfbe046340d2fcef5d33d8d0f47d6bd6_5->m_frame.f_lineno = 59;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_1,
                mod_consts[72],
                PyTuple_GET_ITEM(mod_consts[73], 0)
            );

            Py_DECREF(tmp_called_instance_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__4_ID3D11DeviceChild_58, mod_consts[74], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_list_element_4;
            PyObject *tmp_called_instance_2;
            tmp_called_instance_2 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__4_ID3D11DeviceChild_58, mod_consts[8]);

            if (tmp_called_instance_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                    if (unlikely(tmp_called_instance_2 == NULL)) {
                        tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                    }

                    if (tmp_called_instance_2 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 61;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_2);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_dfbe046340d2fcef5d33d8d0f47d6bd6_5->m_frame.f_lineno = 61;
            tmp_list_element_4 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_2,
                mod_consts[75],
                &PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            Py_DECREF(tmp_called_instance_2);
            if (tmp_list_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dictset_value = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_called_value_8;
                PyObject *tmp_expression_value_46;
                PyObject *tmp_args_element_value_1;
                PyObject *tmp_expression_value_47;
                PyObject *tmp_args_element_value_2;
                PyObject *tmp_called_value_9;
                PyObject *tmp_expression_value_48;
                PyObject *tmp_args_element_value_3;
                PyObject *tmp_expression_value_49;
                PyObject *tmp_args_element_value_4;
                PyObject *tmp_called_value_10;
                PyObject *tmp_expression_value_50;
                PyObject *tmp_args_element_value_5;
                PyObject *tmp_expression_value_51;
                PyObject *tmp_args_element_value_6;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_4);
                tmp_expression_value_46 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__4_ID3D11DeviceChild_58, mod_consts[8]);

                if (tmp_expression_value_46 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_46 == NULL)) {
                            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_46 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 62;
                            type_description_2 = "o";
                            goto list_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_46);
                    } else {
                        goto list_build_exception_4;
                    }
                }

                tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[75]);
                Py_DECREF(tmp_expression_value_46);
                if (tmp_called_value_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 62;
                    type_description_2 = "o";
                    goto list_build_exception_4;
                }
                tmp_expression_value_47 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__4_ID3D11DeviceChild_58, mod_consts[8]);

                if (tmp_expression_value_47 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_47 == NULL)) {
                            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_47 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_8);

                            exception_lineno = 62;
                            type_description_2 = "o";
                            goto list_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_47);
                    } else {
                        goto list_build_exception_4;
                    }
                }

                tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[77]);
                Py_DECREF(tmp_expression_value_47);
                if (tmp_args_element_value_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_8);

                    exception_lineno = 62;
                    type_description_2 = "o";
                    goto list_build_exception_4;
                }
                tmp_args_element_value_2 = mod_consts[78];
                frame_dfbe046340d2fcef5d33d8d0f47d6bd6_5->m_frame.f_lineno = 62;
                {
                    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
                    tmp_list_element_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
                }

                Py_DECREF(tmp_called_value_8);
                Py_DECREF(tmp_args_element_value_1);
                if (tmp_list_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 62;
                    type_description_2 = "o";
                    goto list_build_exception_4;
                }
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_4);
                tmp_expression_value_48 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__4_ID3D11DeviceChild_58, mod_consts[8]);

                if (tmp_expression_value_48 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_48 == NULL)) {
                            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_48 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 63;
                            type_description_2 = "o";
                            goto list_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_48);
                    } else {
                        goto list_build_exception_4;
                    }
                }

                tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[75]);
                Py_DECREF(tmp_expression_value_48);
                if (tmp_called_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 63;
                    type_description_2 = "o";
                    goto list_build_exception_4;
                }
                tmp_expression_value_49 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__4_ID3D11DeviceChild_58, mod_consts[8]);

                if (tmp_expression_value_49 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_49 == NULL)) {
                            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_49 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_9);

                            exception_lineno = 63;
                            type_description_2 = "o";
                            goto list_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_49);
                    } else {
                        goto list_build_exception_4;
                    }
                }

                tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[77]);
                Py_DECREF(tmp_expression_value_49);
                if (tmp_args_element_value_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_9);

                    exception_lineno = 63;
                    type_description_2 = "o";
                    goto list_build_exception_4;
                }
                tmp_args_element_value_4 = mod_consts[79];
                frame_dfbe046340d2fcef5d33d8d0f47d6bd6_5->m_frame.f_lineno = 63;
                {
                    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
                    tmp_list_element_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
                }

                Py_DECREF(tmp_called_value_9);
                Py_DECREF(tmp_args_element_value_3);
                if (tmp_list_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 63;
                    type_description_2 = "o";
                    goto list_build_exception_4;
                }
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_4);
                tmp_expression_value_50 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__4_ID3D11DeviceChild_58, mod_consts[8]);

                if (tmp_expression_value_50 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_50 == NULL)) {
                            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_50 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 64;
                            type_description_2 = "o";
                            goto list_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_50);
                    } else {
                        goto list_build_exception_4;
                    }
                }

                tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[75]);
                Py_DECREF(tmp_expression_value_50);
                if (tmp_called_value_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 64;
                    type_description_2 = "o";
                    goto list_build_exception_4;
                }
                tmp_expression_value_51 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__4_ID3D11DeviceChild_58, mod_consts[8]);

                if (tmp_expression_value_51 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_51 == NULL)) {
                            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_51 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_10);

                            exception_lineno = 64;
                            type_description_2 = "o";
                            goto list_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_51);
                    } else {
                        goto list_build_exception_4;
                    }
                }

                tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[77]);
                Py_DECREF(tmp_expression_value_51);
                if (tmp_args_element_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_10);

                    exception_lineno = 64;
                    type_description_2 = "o";
                    goto list_build_exception_4;
                }
                tmp_args_element_value_6 = mod_consts[80];
                frame_dfbe046340d2fcef5d33d8d0f47d6bd6_5->m_frame.f_lineno = 64;
                {
                    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
                    tmp_list_element_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
                }

                Py_DECREF(tmp_called_value_10);
                Py_DECREF(tmp_args_element_value_5);
                if (tmp_list_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 64;
                    type_description_2 = "o";
                    goto list_build_exception_4;
                }
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_4);
            }
            goto list_build_noexception_4;
            // Exception handling pass through code for list_build:
            list_build_exception_4:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_5;
            // Finished with no exception for list_build:
            list_build_noexception_4:;
            tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__4_ID3D11DeviceChild_58, mod_consts[81], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_dfbe046340d2fcef5d33d8d0f47d6bd6_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_dfbe046340d2fcef5d33d8d0f47d6bd6_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_dfbe046340d2fcef5d33d8d0f47d6bd6_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_dfbe046340d2fcef5d33d8d0f47d6bd6_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_dfbe046340d2fcef5d33d8d0f47d6bd6_5);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_12;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto try_except_handler_12;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__4_ID3D11DeviceChild_58, mod_consts[51], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_12;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_52;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_34;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_11 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_34 = mod_consts[71];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_34);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_34 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_34);
            tmp_tuple_element_34 = locals_dxcam$_libs$d3d11$$$class__4_ID3D11DeviceChild_58;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_34);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_1f4a063c96cbf43c89330d982d1f58fe->m_frame.f_lineno = 58;
            tmp_assign_source_52 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto try_except_handler_12;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_52;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_51 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_51);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_dxcam$_libs$d3d11$$$class__4_ID3D11DeviceChild_58);
        locals_dxcam$_libs$d3d11$$$class__4_ID3D11DeviceChild_58 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_dxcam$_libs$d3d11$$$class__4_ID3D11DeviceChild_58);
        locals_dxcam$_libs$d3d11$$$class__4_ID3D11DeviceChild_58 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 58;
        goto try_except_handler_10;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_51);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_tuple_element_35;
        tmp_tuple_element_35 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_tuple_element_35 == NULL)) {
            tmp_tuple_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        if (tmp_tuple_element_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_13;
        }
        tmp_assign_source_53 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_53, 0, tmp_tuple_element_35);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_54 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_17;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_13;
        }
        tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_52 = tmp_class_creation_5__bases;
        tmp_subscript_value_5 = mod_consts[9];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_52, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_13;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_13;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_56 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_56;
    }
    {
        bool tmp_condition_result_18;
        PyObject *tmp_expression_value_53;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_53 = tmp_class_creation_5__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_53, mod_consts[38]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_13;
        }
        tmp_condition_result_18 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_36;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_54 = tmp_class_creation_5__metaclass;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[38]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_13;
        }
        tmp_tuple_element_36 = mod_consts[82];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_36);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_36 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_36);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_1f4a063c96cbf43c89330d982d1f58fe->m_frame.f_lineno = 68;
        tmp_assign_source_57 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_57;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_55;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_55 = tmp_class_creation_5__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_55, mod_consts[40]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_13;
        }
        tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_37;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_name_value_6;
        PyObject *tmp_default_value_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[41];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_56 = tmp_class_creation_5__metaclass;
        tmp_name_value_6 = mod_consts[42];
        tmp_default_value_5 = mod_consts[43];
        tmp_tuple_element_37 = BUILTIN_GETATTR(tstate, tmp_expression_value_56, tmp_name_value_6, tmp_default_value_5);
        if (tmp_tuple_element_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_13;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_57;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_37);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_57 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_57 == NULL));
            tmp_tuple_element_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[42]);
            Py_DECREF(tmp_expression_value_57);
            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto tuple_build_exception_23;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_37);
        }
        goto tuple_build_noexception_23;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_23:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_23:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 68;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_58;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_59;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_dxcam$_libs$d3d11$$$class__5_ID3D11Resource_68 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[44];
        tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__5_ID3D11Resource_68, mod_consts[45], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[82];
        tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__5_ID3D11Resource_68, mod_consts[46], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_15;
        }
        frame_a3bb895fe8249adb083d9c4333110402_6 = MAKE_CLASS_FRAME(tstate, codeobj_a3bb895fe8249adb083d9c4333110402, module_dxcam$_libs$d3d11, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_a3bb895fe8249adb083d9c4333110402_6);
        assert(Py_REFCNT(frame_a3bb895fe8249adb083d9c4333110402_6) == 2);

        // Framed code:
        {
            PyObject *tmp_called_instance_3;
            tmp_called_instance_3 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__5_ID3D11Resource_68, mod_consts[8]);

            if (tmp_called_instance_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                    if (unlikely(tmp_called_instance_3 == NULL)) {
                        tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                    }

                    if (tmp_called_instance_3 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 69;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_instance_3);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            frame_a3bb895fe8249adb083d9c4333110402_6->m_frame.f_lineno = 69;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_3,
                mod_consts[72],
                PyTuple_GET_ITEM(mod_consts[83], 0)
            );

            Py_DECREF(tmp_called_instance_3);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__5_ID3D11Resource_68, mod_consts[74], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_list_element_5;
            PyObject *tmp_called_instance_4;
            tmp_called_instance_4 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__5_ID3D11Resource_68, mod_consts[8]);

            if (tmp_called_instance_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                    if (unlikely(tmp_called_instance_4 == NULL)) {
                        tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                    }

                    if (tmp_called_instance_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 71;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_instance_4);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            frame_a3bb895fe8249adb083d9c4333110402_6->m_frame.f_lineno = 71;
            tmp_list_element_5 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_4,
                mod_consts[75],
                &PyTuple_GET_ITEM(mod_consts[84], 0)
            );

            Py_DECREF(tmp_called_instance_4);
            if (tmp_list_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_dictset_value = MAKE_LIST_EMPTY(3);
            {
                PyObject *tmp_called_instance_5;
                PyObject *tmp_called_value_13;
                PyObject *tmp_expression_value_58;
                PyObject *tmp_args_element_value_7;
                PyObject *tmp_expression_value_59;
                PyObject *tmp_args_element_value_8;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_5);
                tmp_called_instance_5 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__5_ID3D11Resource_68, mod_consts[8]);

                if (tmp_called_instance_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_5 == NULL)) {
                            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_5 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 72;
                            type_description_2 = "o";
                            goto list_build_exception_5;
                        }
                        Py_INCREF(tmp_called_instance_5);
                    } else {
                        goto list_build_exception_5;
                    }
                }

                frame_a3bb895fe8249adb083d9c4333110402_6->m_frame.f_lineno = 72;
                tmp_list_element_5 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_5,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[85], 0)
                );

                Py_DECREF(tmp_called_instance_5);
                if (tmp_list_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 72;
                    type_description_2 = "o";
                    goto list_build_exception_5;
                }
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_5);
                tmp_expression_value_58 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__5_ID3D11Resource_68, mod_consts[8]);

                if (tmp_expression_value_58 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_58 == NULL)) {
                            tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_58 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 73;
                            type_description_2 = "o";
                            goto list_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_58);
                    } else {
                        goto list_build_exception_5;
                    }
                }

                tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[75]);
                Py_DECREF(tmp_expression_value_58);
                if (tmp_called_value_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 73;
                    type_description_2 = "o";
                    goto list_build_exception_5;
                }
                tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_expression_value_59 == NULL)) {
                    tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                assert(!(tmp_expression_value_59 == NULL));
                tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[48]);
                if (tmp_args_element_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_13);

                    exception_lineno = 73;
                    type_description_2 = "o";
                    goto list_build_exception_5;
                }
                tmp_args_element_value_8 = mod_consts[86];
                frame_a3bb895fe8249adb083d9c4333110402_6->m_frame.f_lineno = 73;
                {
                    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
                    tmp_list_element_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_13, call_args);
                }

                Py_DECREF(tmp_called_value_13);
                Py_DECREF(tmp_args_element_value_7);
                if (tmp_list_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 73;
                    type_description_2 = "o";
                    goto list_build_exception_5;
                }
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_5);
            }
            goto list_build_noexception_5;
            // Exception handling pass through code for list_build:
            list_build_exception_5:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_6;
            // Finished with no exception for list_build:
            list_build_noexception_5:;
            tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__5_ID3D11Resource_68, mod_consts[81], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a3bb895fe8249adb083d9c4333110402_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a3bb895fe8249adb083d9c4333110402_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a3bb895fe8249adb083d9c4333110402_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a3bb895fe8249adb083d9c4333110402_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_a3bb895fe8249adb083d9c4333110402_6);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_15;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto try_except_handler_15;
            }
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__5_ID3D11Resource_68, mod_consts[51], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_15;
        }
        branch_no_15:;
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_38;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_14 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_38 = mod_consts[82];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_38);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_38 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_38);
            tmp_tuple_element_38 = locals_dxcam$_libs$d3d11$$$class__5_ID3D11Resource_68;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_38);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_1f4a063c96cbf43c89330d982d1f58fe->m_frame.f_lineno = 68;
            tmp_assign_source_60 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto try_except_handler_15;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_60;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_59 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_59);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_dxcam$_libs$d3d11$$$class__5_ID3D11Resource_68);
        locals_dxcam$_libs$d3d11$$$class__5_ID3D11Resource_68 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_dxcam$_libs$d3d11$$$class__5_ID3D11Resource_68);
        locals_dxcam$_libs$d3d11$$$class__5_ID3D11Resource_68 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 68;
        goto try_except_handler_13;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_59);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_5__bases_orig);
    Py_DECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_5__bases);
    Py_DECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_tuple_element_39;
        tmp_tuple_element_39 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_tuple_element_39 == NULL)) {
            tmp_tuple_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[82]);
        }

        if (tmp_tuple_element_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_16;
        }
        tmp_assign_source_61 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_61, 0, tmp_tuple_element_39);
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_62 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_metaclass_value_6;
        nuitka_bool tmp_condition_result_21;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_6;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_16;
        }
        tmp_condition_result_21 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_60 = tmp_class_creation_6__bases;
        tmp_subscript_value_6 = mod_consts[9];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_60, tmp_subscript_value_6, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_16;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_16;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_6 = tmp_class_creation_6__bases;
        tmp_assign_source_64 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_64;
    }
    {
        bool tmp_condition_result_22;
        PyObject *tmp_expression_value_61;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_61 = tmp_class_creation_6__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_61, mod_consts[38]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_16;
        }
        tmp_condition_result_22 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_22 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_40;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_62 = tmp_class_creation_6__metaclass;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[38]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_16;
        }
        tmp_tuple_element_40 = mod_consts[87];
        tmp_args_value_11 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_40);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_40 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_40);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
        frame_1f4a063c96cbf43c89330d982d1f58fe->m_frame.f_lineno = 77;
        tmp_assign_source_65 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_value_11);
        if (tmp_assign_source_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_65;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_63;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_63 = tmp_class_creation_6__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_63, mod_consts[40]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_16;
        }
        tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_23 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_tuple_element_41;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_name_value_7;
        PyObject *tmp_default_value_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[41];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_64 = tmp_class_creation_6__metaclass;
        tmp_name_value_7 = mod_consts[42];
        tmp_default_value_6 = mod_consts[43];
        tmp_tuple_element_41 = BUILTIN_GETATTR(tstate, tmp_expression_value_64, tmp_name_value_7, tmp_default_value_6);
        if (tmp_tuple_element_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_16;
        }
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_65;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_41);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_12 = tmp_class_creation_6__prepared;
            tmp_expression_value_65 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_65 == NULL));
            tmp_tuple_element_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[42]);
            Py_DECREF(tmp_expression_value_65);
            if (tmp_tuple_element_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_41);
        }
        goto tuple_build_noexception_24;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_24:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_16;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_24:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_16;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 77;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_16;
    }
    branch_no_17:;
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_66;
    }
    branch_end_16:;
    {
        PyObject *tmp_assign_source_67;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_dxcam$_libs$d3d11$$$class__6_ID3D11Texture2D_77 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[44];
        tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__6_ID3D11Texture2D_77, mod_consts[45], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[87];
        tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__6_ID3D11Texture2D_77, mod_consts[46], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_18;
        }
        frame_e88cca032659cfc9c84a3055b5f23df0_7 = MAKE_CLASS_FRAME(tstate, codeobj_e88cca032659cfc9c84a3055b5f23df0, module_dxcam$_libs$d3d11, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_e88cca032659cfc9c84a3055b5f23df0_7);
        assert(Py_REFCNT(frame_e88cca032659cfc9c84a3055b5f23df0_7) == 2);

        // Framed code:
        {
            PyObject *tmp_called_instance_6;
            tmp_called_instance_6 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__6_ID3D11Texture2D_77, mod_consts[8]);

            if (tmp_called_instance_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                    if (unlikely(tmp_called_instance_6 == NULL)) {
                        tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                    }

                    if (tmp_called_instance_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 78;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_6);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_e88cca032659cfc9c84a3055b5f23df0_7->m_frame.f_lineno = 78;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_6,
                mod_consts[72],
                PyTuple_GET_ITEM(mod_consts[88], 0)
            );

            Py_DECREF(tmp_called_instance_6);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__6_ID3D11Texture2D_77, mod_consts[74], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_list_element_6;
            PyObject *tmp_called_value_16;
            PyObject *tmp_expression_value_66;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_list_element_7;
            PyObject *tmp_called_value_17;
            PyObject *tmp_expression_value_67;
            PyObject *tmp_args_element_value_12;
            tmp_expression_value_66 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__6_ID3D11Texture2D_77, mod_consts[8]);

            if (tmp_expression_value_66 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                    if (unlikely(tmp_expression_value_66 == NULL)) {
                        tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                    }

                    if (tmp_expression_value_66 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 80;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_66);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[75]);
            Py_DECREF(tmp_expression_value_66);
            if (tmp_called_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_args_element_value_9 = Py_None;
            tmp_args_element_value_10 = mod_consts[89];
            tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_expression_value_67 == NULL)) {
                tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
            }

            assert(!(tmp_expression_value_67 == NULL));
            tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[90]);
            if (tmp_called_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);

                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_args_element_value_12 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__6_ID3D11Texture2D_77, mod_consts[59]);

            if (tmp_args_element_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_args_element_value_12 == NULL)) {
                        tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
                    }

                    if (tmp_args_element_value_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_16);
                        Py_DECREF(tmp_called_value_17);

                        exception_lineno = 80;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_args_element_value_12);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_e88cca032659cfc9c84a3055b5f23df0_7->m_frame.f_lineno = 80;
            tmp_list_element_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_12);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_list_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);

                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_args_element_value_11 = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM(tmp_args_element_value_11, 0, tmp_list_element_7);
            frame_e88cca032659cfc9c84a3055b5f23df0_7->m_frame.f_lineno = 80;
            {
                PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
                tmp_list_element_6 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_16, call_args);
            }

            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_list_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_dictset_value = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_6);
            tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__6_ID3D11Texture2D_77, mod_consts[81], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_6;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e88cca032659cfc9c84a3055b5f23df0_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_e88cca032659cfc9c84a3055b5f23df0_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e88cca032659cfc9c84a3055b5f23df0_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_e88cca032659cfc9c84a3055b5f23df0_7,
            type_description_2,
            outline_5_var___class__
        );



        assertFrameObject(frame_e88cca032659cfc9c84a3055b5f23df0_7);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_18;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_6__bases;
            CHECK_OBJECT(tmp_class_creation_6__bases_orig);
            tmp_cmp_expr_right_6 = tmp_class_creation_6__bases_orig;
            tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto try_except_handler_18;
            }
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto branch_yes_18;
            } else {
                goto branch_no_18;
            }
        }
        branch_yes_18:;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dictset_value = tmp_class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__6_ID3D11Texture2D_77, mod_consts[51], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_18;
        }
        branch_no_18:;
        {
            PyObject *tmp_assign_source_68;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_42;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_18 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_42 = mod_consts[87];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_42);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_42 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_42);
            tmp_tuple_element_42 = locals_dxcam$_libs$d3d11$$$class__6_ID3D11Texture2D_77;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_42);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_6__class_decl_dict;
            frame_1f4a063c96cbf43c89330d982d1f58fe->m_frame.f_lineno = 77;
            tmp_assign_source_68 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto try_except_handler_18;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_68;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_67 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_67);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF(locals_dxcam$_libs$d3d11$$$class__6_ID3D11Texture2D_77);
        locals_dxcam$_libs$d3d11$$$class__6_ID3D11Texture2D_77 = NULL;
        goto try_return_handler_17;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_dxcam$_libs$d3d11$$$class__6_ID3D11Texture2D_77);
        locals_dxcam$_libs$d3d11$$$class__6_ID3D11Texture2D_77 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 77;
        goto try_except_handler_16;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_67);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_class_creation_6__bases_orig);
    Py_DECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_6__bases);
    Py_DECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__metaclass);
    Py_DECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_tuple_element_43;
        tmp_tuple_element_43 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_tuple_element_43 == NULL)) {
            tmp_tuple_element_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        if (tmp_tuple_element_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_19;
        }
        tmp_assign_source_69 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_69, 0, tmp_tuple_element_43);
        assert(tmp_class_creation_7__bases_orig == NULL);
        tmp_class_creation_7__bases_orig = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_dircall_arg1_7;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dircall_arg1_7 = tmp_class_creation_7__bases_orig;
        Py_INCREF(tmp_dircall_arg1_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_70 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_70;
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_metaclass_value_7;
        nuitka_bool tmp_condition_result_25;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_bases_value_7;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_7 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_19;
        }
        tmp_condition_result_25 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_expression_value_68 = tmp_class_creation_7__bases;
        tmp_subscript_value_7 = mod_consts[9];
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_68, tmp_subscript_value_7, 0);
        if (tmp_type_arg_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_19;
        }
        tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
        Py_DECREF(tmp_type_arg_13);
        if (tmp_metaclass_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_19;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_7);
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_value_7 = tmp_class_creation_7__bases;
        tmp_assign_source_72 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
        Py_DECREF(tmp_metaclass_value_7);
        if (tmp_assign_source_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_72;
    }
    {
        bool tmp_condition_result_26;
        PyObject *tmp_expression_value_69;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_69 = tmp_class_creation_7__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_69, mod_consts[38]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_19;
        }
        tmp_condition_result_26 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_26 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_args_value_13;
        PyObject *tmp_tuple_element_44;
        PyObject *tmp_kwargs_value_13;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_70 = tmp_class_creation_7__metaclass;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[38]);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_19;
        }
        tmp_tuple_element_44 = mod_consts[91];
        tmp_args_value_13 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_44);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_44 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_44);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_value_13 = tmp_class_creation_7__class_decl_dict;
        frame_1f4a063c96cbf43c89330d982d1f58fe->m_frame.f_lineno = 84;
        tmp_assign_source_73 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_13, tmp_kwargs_value_13);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_value_13);
        if (tmp_assign_source_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_73;
    }
    {
        bool tmp_condition_result_27;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_71;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_value_71 = tmp_class_creation_7__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_71, mod_consts[40]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_19;
        }
        tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_27 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_mod_expr_left_7;
        PyObject *tmp_mod_expr_right_7;
        PyObject *tmp_tuple_element_45;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_name_value_8;
        PyObject *tmp_default_value_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_mod_expr_left_7 = mod_consts[41];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_72 = tmp_class_creation_7__metaclass;
        tmp_name_value_8 = mod_consts[42];
        tmp_default_value_7 = mod_consts[43];
        tmp_tuple_element_45 = BUILTIN_GETATTR(tstate, tmp_expression_value_72, tmp_name_value_8, tmp_default_value_7);
        if (tmp_tuple_element_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_19;
        }
        tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_73;
            PyObject *tmp_type_arg_14;
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_45);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_14 = tmp_class_creation_7__prepared;
            tmp_expression_value_73 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_expression_value_73 == NULL));
            tmp_tuple_element_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts[42]);
            Py_DECREF(tmp_expression_value_73);
            if (tmp_tuple_element_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto tuple_build_exception_25;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_45);
        }
        goto tuple_build_noexception_25;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_25:;
        Py_DECREF(tmp_mod_expr_right_7);
        goto try_except_handler_19;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_25:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        Py_DECREF(tmp_mod_expr_right_7);
        if (tmp_raise_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_19;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 84;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_19;
    }
    branch_no_20:;
    goto branch_end_19;
    branch_no_19:;
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_74;
    }
    branch_end_19:;
    {
        PyObject *tmp_assign_source_75;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[44];
        tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[45], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_21;
        }
        tmp_dictset_value = mod_consts[91];
        tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[46], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_21;
        }
        frame_fa225f92d32cb3916f71632d1ecdfef6_8 = MAKE_CLASS_FRAME(tstate, codeobj_fa225f92d32cb3916f71632d1ecdfef6, module_dxcam$_libs$d3d11, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_fa225f92d32cb3916f71632d1ecdfef6_8);
        assert(Py_REFCNT(frame_fa225f92d32cb3916f71632d1ecdfef6_8) == 2);

        // Framed code:
        {
            PyObject *tmp_called_instance_7;
            tmp_called_instance_7 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

            if (tmp_called_instance_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                    if (unlikely(tmp_called_instance_7 == NULL)) {
                        tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                    }

                    if (tmp_called_instance_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 85;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_7);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 85;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_7,
                mod_consts[72],
                PyTuple_GET_ITEM(mod_consts[92], 0)
            );

            Py_DECREF(tmp_called_instance_7);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[74], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_list_element_8;
            PyObject *tmp_called_instance_8;
            tmp_called_instance_8 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

            if (tmp_called_instance_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                    if (unlikely(tmp_called_instance_8 == NULL)) {
                        tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                    }

                    if (tmp_called_instance_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 87;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_8);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 87;
            tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_8,
                mod_consts[75],
                &PyTuple_GET_ITEM(mod_consts[93], 0)
            );

            Py_DECREF(tmp_called_instance_8);
            if (tmp_list_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_dictset_value = MAKE_LIST_EMPTY(108);
            {
                PyObject *tmp_called_instance_9;
                PyObject *tmp_called_instance_10;
                PyObject *tmp_called_instance_11;
                PyObject *tmp_called_instance_12;
                PyObject *tmp_called_instance_13;
                PyObject *tmp_called_instance_14;
                PyObject *tmp_called_value_20;
                PyObject *tmp_expression_value_74;
                PyObject *tmp_args_element_value_13;
                PyObject *tmp_expression_value_75;
                PyObject *tmp_args_element_value_14;
                PyObject *tmp_called_instance_15;
                PyObject *tmp_called_instance_16;
                PyObject *tmp_called_instance_17;
                PyObject *tmp_called_instance_18;
                PyObject *tmp_called_instance_19;
                PyObject *tmp_called_instance_20;
                PyObject *tmp_called_instance_21;
                PyObject *tmp_called_instance_22;
                PyObject *tmp_called_instance_23;
                PyObject *tmp_called_instance_24;
                PyObject *tmp_called_instance_25;
                PyObject *tmp_called_instance_26;
                PyObject *tmp_called_instance_27;
                PyObject *tmp_called_instance_28;
                PyObject *tmp_called_value_21;
                PyObject *tmp_expression_value_76;
                PyObject *tmp_args_element_value_15;
                PyObject *tmp_expression_value_77;
                PyObject *tmp_args_element_value_16;
                PyObject *tmp_called_instance_29;
                PyObject *tmp_called_instance_30;
                PyObject *tmp_called_instance_31;
                PyObject *tmp_called_instance_32;
                PyObject *tmp_called_instance_33;
                PyObject *tmp_called_instance_34;
                PyObject *tmp_called_instance_35;
                PyObject *tmp_called_instance_36;
                PyObject *tmp_called_instance_37;
                PyObject *tmp_called_instance_38;
                PyObject *tmp_called_instance_39;
                PyObject *tmp_called_instance_40;
                PyObject *tmp_called_instance_41;
                PyObject *tmp_called_instance_42;
                PyObject *tmp_called_instance_43;
                PyObject *tmp_called_instance_44;
                PyObject *tmp_called_value_22;
                PyObject *tmp_expression_value_78;
                PyObject *tmp_args_element_value_17;
                PyObject *tmp_args_element_value_18;
                PyObject *tmp_args_element_value_19;
                PyObject *tmp_list_element_9;
                PyObject *tmp_called_value_23;
                PyObject *tmp_expression_value_79;
                PyObject *tmp_args_element_value_20;
                PyObject *tmp_called_value_26;
                PyObject *tmp_expression_value_87;
                PyObject *tmp_args_element_value_23;
                PyObject *tmp_args_element_value_24;
                PyObject *tmp_args_element_value_25;
                PyObject *tmp_list_element_10;
                PyObject *tmp_called_value_27;
                PyObject *tmp_expression_value_88;
                PyObject *tmp_args_element_value_26;
                PyObject *tmp_called_instance_45;
                PyObject *tmp_called_instance_46;
                PyObject *tmp_called_instance_47;
                PyObject *tmp_called_instance_48;
                PyObject *tmp_called_instance_49;
                PyObject *tmp_called_instance_50;
                PyObject *tmp_called_instance_51;
                PyObject *tmp_called_instance_52;
                PyObject *tmp_called_value_29;
                PyObject *tmp_expression_value_90;
                PyObject *tmp_args_element_value_28;
                PyObject *tmp_expression_value_91;
                PyObject *tmp_args_element_value_29;
                PyObject *tmp_called_instance_53;
                PyObject *tmp_called_instance_54;
                PyObject *tmp_called_instance_55;
                PyObject *tmp_called_instance_56;
                PyObject *tmp_called_instance_57;
                PyObject *tmp_called_instance_58;
                PyObject *tmp_called_instance_59;
                PyObject *tmp_called_instance_60;
                PyObject *tmp_called_instance_61;
                PyObject *tmp_called_instance_62;
                PyObject *tmp_called_instance_63;
                PyObject *tmp_called_instance_64;
                PyObject *tmp_called_instance_65;
                PyObject *tmp_called_instance_66;
                PyObject *tmp_called_instance_67;
                PyObject *tmp_called_instance_68;
                PyObject *tmp_called_instance_69;
                PyObject *tmp_called_instance_70;
                PyObject *tmp_called_instance_71;
                PyObject *tmp_called_instance_72;
                PyObject *tmp_called_instance_73;
                PyObject *tmp_called_instance_74;
                PyObject *tmp_called_instance_75;
                PyObject *tmp_called_instance_76;
                PyObject *tmp_called_instance_77;
                PyObject *tmp_called_instance_78;
                PyObject *tmp_called_instance_79;
                PyObject *tmp_called_instance_80;
                PyObject *tmp_called_instance_81;
                PyObject *tmp_called_instance_82;
                PyObject *tmp_called_instance_83;
                PyObject *tmp_called_instance_84;
                PyObject *tmp_called_instance_85;
                PyObject *tmp_called_instance_86;
                PyObject *tmp_called_instance_87;
                PyObject *tmp_called_instance_88;
                PyObject *tmp_called_instance_89;
                PyObject *tmp_called_instance_90;
                PyObject *tmp_called_instance_91;
                PyObject *tmp_called_instance_92;
                PyObject *tmp_called_instance_93;
                PyObject *tmp_called_instance_94;
                PyObject *tmp_called_instance_95;
                PyObject *tmp_called_instance_96;
                PyObject *tmp_called_instance_97;
                PyObject *tmp_called_instance_98;
                PyObject *tmp_called_instance_99;
                PyObject *tmp_called_instance_100;
                PyObject *tmp_called_instance_101;
                PyObject *tmp_called_instance_102;
                PyObject *tmp_called_instance_103;
                PyObject *tmp_called_instance_104;
                PyObject *tmp_called_instance_105;
                PyObject *tmp_called_instance_106;
                PyObject *tmp_called_instance_107;
                PyObject *tmp_called_instance_108;
                PyObject *tmp_called_value_30;
                PyObject *tmp_expression_value_92;
                PyObject *tmp_args_element_value_30;
                PyObject *tmp_expression_value_93;
                PyObject *tmp_args_element_value_31;
                PyObject *tmp_called_value_31;
                PyObject *tmp_expression_value_94;
                PyObject *tmp_args_element_value_32;
                PyObject *tmp_expression_value_95;
                PyObject *tmp_args_element_value_33;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_8);
                tmp_called_instance_9 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_9 == NULL)) {
                            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_9 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 88;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_9);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 88;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_9,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[94], 0)
                );

                Py_DECREF(tmp_called_instance_9);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 88;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_8);
                tmp_called_instance_10 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_10 == NULL)) {
                            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_10 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 89;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_10);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 89;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_10,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[95], 0)
                );

                Py_DECREF(tmp_called_instance_10);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 89;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_8);
                tmp_called_instance_11 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_11 == NULL)) {
                            tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_11 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 90;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_11);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 90;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_11,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[96], 0)
                );

                Py_DECREF(tmp_called_instance_11);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 90;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_8);
                tmp_called_instance_12 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_12 == NULL)) {
                            tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_12 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 91;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_12);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 91;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_12,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[97], 0)
                );

                Py_DECREF(tmp_called_instance_12);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 91;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_8);
                tmp_called_instance_13 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_13 == NULL)) {
                            tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_13 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 92;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_13);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 92;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_13,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[98], 0)
                );

                Py_DECREF(tmp_called_instance_13);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 92;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_8);
                tmp_called_instance_14 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_14 == NULL)) {
                            tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_14 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 93;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_14);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 93;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_14,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[99], 0)
                );

                Py_DECREF(tmp_called_instance_14);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 93;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 6, tmp_list_element_8);
                tmp_expression_value_74 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_expression_value_74 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_74 == NULL)) {
                            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_74 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 94;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_74);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[75]);
                Py_DECREF(tmp_expression_value_74);
                if (tmp_called_value_20 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 94;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                tmp_expression_value_75 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_expression_value_75 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_75 == NULL)) {
                            tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_75 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_20);

                            exception_lineno = 94;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_75);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts[77]);
                Py_DECREF(tmp_expression_value_75);
                if (tmp_args_element_value_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_20);

                    exception_lineno = 94;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                tmp_args_element_value_14 = mod_consts[100];
                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 94;
                {
                    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
                    tmp_list_element_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_20, call_args);
                }

                Py_DECREF(tmp_called_value_20);
                Py_DECREF(tmp_args_element_value_13);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 94;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 7, tmp_list_element_8);
                tmp_called_instance_15 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_15 == NULL)) {
                            tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_15 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 95;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_15);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 95;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_15,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[101], 0)
                );

                Py_DECREF(tmp_called_instance_15);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 95;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 8, tmp_list_element_8);
                tmp_called_instance_16 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_16 == NULL)) {
                            tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_16 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 96;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_16);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 96;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_16,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[102], 0)
                );

                Py_DECREF(tmp_called_instance_16);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 96;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 9, tmp_list_element_8);
                tmp_called_instance_17 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_17 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_17 == NULL)) {
                            tmp_called_instance_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_17 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 97;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_17);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 97;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_17,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[103], 0)
                );

                Py_DECREF(tmp_called_instance_17);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 97;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 10, tmp_list_element_8);
                tmp_called_instance_18 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_18 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_18 == NULL)) {
                            tmp_called_instance_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_18 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 98;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_18);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 98;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_18,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[104], 0)
                );

                Py_DECREF(tmp_called_instance_18);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 98;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 11, tmp_list_element_8);
                tmp_called_instance_19 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_19 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_19 == NULL)) {
                            tmp_called_instance_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_19 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 99;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_19);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 99;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_19,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[105], 0)
                );

                Py_DECREF(tmp_called_instance_19);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 99;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 12, tmp_list_element_8);
                tmp_called_instance_20 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_20 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_20 == NULL)) {
                            tmp_called_instance_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_20 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 100;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_20);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 100;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_20,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[106], 0)
                );

                Py_DECREF(tmp_called_instance_20);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 100;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 13, tmp_list_element_8);
                tmp_called_instance_21 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_21 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_21 == NULL)) {
                            tmp_called_instance_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_21 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 101;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_21);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 101;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_21,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[107], 0)
                );

                Py_DECREF(tmp_called_instance_21);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 101;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 14, tmp_list_element_8);
                tmp_called_instance_22 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_22 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_22 == NULL)) {
                            tmp_called_instance_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_22 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 102;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_22);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 102;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_22,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[108], 0)
                );

                Py_DECREF(tmp_called_instance_22);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 102;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 15, tmp_list_element_8);
                tmp_called_instance_23 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_23 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_23 == NULL)) {
                            tmp_called_instance_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_23 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 103;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_23);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 103;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_23,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[109], 0)
                );

                Py_DECREF(tmp_called_instance_23);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 103;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 16, tmp_list_element_8);
                tmp_called_instance_24 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_24 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_24 == NULL)) {
                            tmp_called_instance_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_24 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 104;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_24);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 104;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_24,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[110], 0)
                );

                Py_DECREF(tmp_called_instance_24);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 104;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 17, tmp_list_element_8);
                tmp_called_instance_25 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_25 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_25 == NULL)) {
                            tmp_called_instance_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_25 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 105;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_25);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 105;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_25,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[111], 0)
                );

                Py_DECREF(tmp_called_instance_25);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 105;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 18, tmp_list_element_8);
                tmp_called_instance_26 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_26 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_26 == NULL)) {
                            tmp_called_instance_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_26 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 106;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_26);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 106;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_26,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[112], 0)
                );

                Py_DECREF(tmp_called_instance_26);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 106;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 19, tmp_list_element_8);
                tmp_called_instance_27 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_27 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_27 == NULL)) {
                            tmp_called_instance_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_27 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 107;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_27);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 107;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_27,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[113], 0)
                );

                Py_DECREF(tmp_called_instance_27);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 107;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 20, tmp_list_element_8);
                tmp_called_instance_28 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_28 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_28 == NULL)) {
                            tmp_called_instance_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_28 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 108;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_28);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 108;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_28,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[114], 0)
                );

                Py_DECREF(tmp_called_instance_28);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 108;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 21, tmp_list_element_8);
                tmp_expression_value_76 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_expression_value_76 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_76 == NULL)) {
                            tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_76 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 109;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_76);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts[75]);
                Py_DECREF(tmp_expression_value_76);
                if (tmp_called_value_21 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 109;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                tmp_expression_value_77 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_expression_value_77 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_77 == NULL)) {
                            tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_77 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_21);

                            exception_lineno = 109;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_77);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[77]);
                Py_DECREF(tmp_expression_value_77);
                if (tmp_args_element_value_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_21);

                    exception_lineno = 109;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                tmp_args_element_value_16 = mod_consts[115];
                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 109;
                {
                    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
                    tmp_list_element_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_21, call_args);
                }

                Py_DECREF(tmp_called_value_21);
                Py_DECREF(tmp_args_element_value_15);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 109;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 22, tmp_list_element_8);
                tmp_called_instance_29 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_29 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_29 == NULL)) {
                            tmp_called_instance_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_29 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 110;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_29);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 110;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_29,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[116], 0)
                );

                Py_DECREF(tmp_called_instance_29);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 110;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 23, tmp_list_element_8);
                tmp_called_instance_30 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_30 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_30 == NULL)) {
                            tmp_called_instance_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_30 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 111;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_30);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 111;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_30,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[117], 0)
                );

                Py_DECREF(tmp_called_instance_30);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 111;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 24, tmp_list_element_8);
                tmp_called_instance_31 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_31 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_31 == NULL)) {
                            tmp_called_instance_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_31 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 112;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_31);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 112;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_31,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[118], 0)
                );

                Py_DECREF(tmp_called_instance_31);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 112;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 25, tmp_list_element_8);
                tmp_called_instance_32 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_32 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_32 == NULL)) {
                            tmp_called_instance_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_32 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 113;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_32);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 113;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_32,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[119], 0)
                );

                Py_DECREF(tmp_called_instance_32);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 113;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 26, tmp_list_element_8);
                tmp_called_instance_33 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_33 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_33 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_33 == NULL)) {
                            tmp_called_instance_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_33 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 114;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_33);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 114;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_33,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[120], 0)
                );

                Py_DECREF(tmp_called_instance_33);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 114;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 27, tmp_list_element_8);
                tmp_called_instance_34 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_34 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_34 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_34 == NULL)) {
                            tmp_called_instance_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_34 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 115;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_34);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 115;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_34,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[121], 0)
                );

                Py_DECREF(tmp_called_instance_34);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 115;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 28, tmp_list_element_8);
                tmp_called_instance_35 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_35 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_35 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_35 == NULL)) {
                            tmp_called_instance_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_35 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 116;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_35);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 116;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_35,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[122], 0)
                );

                Py_DECREF(tmp_called_instance_35);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 116;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 29, tmp_list_element_8);
                tmp_called_instance_36 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_36 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_36 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_36 == NULL)) {
                            tmp_called_instance_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_36 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 117;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_36);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 117;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_36,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[123], 0)
                );

                Py_DECREF(tmp_called_instance_36);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 117;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 30, tmp_list_element_8);
                tmp_called_instance_37 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_37 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_37 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_37 == NULL)) {
                            tmp_called_instance_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_37 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 118;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_37);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 118;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_37,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[124], 0)
                );

                Py_DECREF(tmp_called_instance_37);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 118;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 31, tmp_list_element_8);
                tmp_called_instance_38 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_38 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_38 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_38 == NULL)) {
                            tmp_called_instance_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_38 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 119;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_38);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 119;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_38,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[125], 0)
                );

                Py_DECREF(tmp_called_instance_38);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 119;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 32, tmp_list_element_8);
                tmp_called_instance_39 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_39 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_39 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_39 == NULL)) {
                            tmp_called_instance_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_39 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 120;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_39);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 120;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_39,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[126], 0)
                );

                Py_DECREF(tmp_called_instance_39);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 120;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 33, tmp_list_element_8);
                tmp_called_instance_40 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_40 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_40 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_40 == NULL)) {
                            tmp_called_instance_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_40 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 121;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_40);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 121;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_40,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[127], 0)
                );

                Py_DECREF(tmp_called_instance_40);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 121;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 34, tmp_list_element_8);
                tmp_called_instance_41 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_41 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_41 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_41 == NULL)) {
                            tmp_called_instance_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_41 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 122;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_41);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 122;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_41,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[128], 0)
                );

                Py_DECREF(tmp_called_instance_41);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 122;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 35, tmp_list_element_8);
                tmp_called_instance_42 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_42 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_42 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_42 == NULL)) {
                            tmp_called_instance_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_42 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 123;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_42);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 123;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_42,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[129], 0)
                );

                Py_DECREF(tmp_called_instance_42);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 123;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 36, tmp_list_element_8);
                tmp_called_instance_43 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_43 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_43 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_43 == NULL)) {
                            tmp_called_instance_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_43 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 124;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_43);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 124;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_43,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[130], 0)
                );

                Py_DECREF(tmp_called_instance_43);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 124;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 37, tmp_list_element_8);
                tmp_called_instance_44 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_44 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_44 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_44 == NULL)) {
                            tmp_called_instance_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_44 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 125;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_44);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 125;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_44,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[131], 0)
                );

                Py_DECREF(tmp_called_instance_44);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 125;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 38, tmp_list_element_8);
                tmp_expression_value_78 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_expression_value_78 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_78 == NULL)) {
                            tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_78 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 126;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_78);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts[75]);
                Py_DECREF(tmp_expression_value_78);
                if (tmp_called_value_22 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 126;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                tmp_args_element_value_17 = Py_None;
                tmp_args_element_value_18 = mod_consts[132];
                tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[6]);

                if (unlikely(tmp_expression_value_79 == NULL)) {
                    tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
                }

                assert(!(tmp_expression_value_79 == NULL));
                tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts[90]);
                if (tmp_called_value_23 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_22);

                    exception_lineno = 130;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                tmp_args_element_value_20 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[82]);

                if (tmp_args_element_value_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_20 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[82]);

                        if (unlikely(tmp_args_element_value_20 == NULL)) {
                            tmp_args_element_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[82]);
                        }

                        if (tmp_args_element_value_20 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_22);
                            Py_DECREF(tmp_called_value_23);

                            exception_lineno = 130;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_args_element_value_20);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 130;
                tmp_list_element_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_20);
                Py_DECREF(tmp_called_value_23);
                Py_DECREF(tmp_args_element_value_20);
                if (tmp_list_element_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_22);

                    exception_lineno = 130;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                tmp_args_element_value_19 = MAKE_LIST_EMPTY(8);
                {
                    PyObject *tmp_expression_value_80;
                    PyObject *tmp_expression_value_81;
                    PyObject *tmp_expression_value_82;
                    PyObject *tmp_expression_value_83;
                    PyObject *tmp_called_value_24;
                    PyObject *tmp_expression_value_84;
                    PyObject *tmp_args_element_value_21;
                    PyObject *tmp_expression_value_85;
                    PyObject *tmp_called_value_25;
                    PyObject *tmp_expression_value_86;
                    PyObject *tmp_args_element_value_22;
                    PyList_SET_ITEM(tmp_args_element_value_19, 0, tmp_list_element_9);
                    tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_80 == NULL)) {
                        tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                    }

                    assert(!(tmp_expression_value_80 == NULL));
                    tmp_list_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[48]);
                    if (tmp_list_element_9 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 131;
                        type_description_2 = "o";
                        goto list_build_exception_7;
                    }
                    PyList_SET_ITEM(tmp_args_element_value_19, 1, tmp_list_element_9);
                    tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_81 == NULL)) {
                        tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                    }

                    assert(!(tmp_expression_value_81 == NULL));
                    tmp_list_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[48]);
                    if (tmp_list_element_9 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 132;
                        type_description_2 = "o";
                        goto list_build_exception_7;
                    }
                    PyList_SET_ITEM(tmp_args_element_value_19, 2, tmp_list_element_9);
                    tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_82 == NULL)) {
                        tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                    }

                    assert(!(tmp_expression_value_82 == NULL));
                    tmp_list_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts[48]);
                    if (tmp_list_element_9 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 133;
                        type_description_2 = "o";
                        goto list_build_exception_7;
                    }
                    PyList_SET_ITEM(tmp_args_element_value_19, 3, tmp_list_element_9);
                    tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_83 == NULL)) {
                        tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                    }

                    assert(!(tmp_expression_value_83 == NULL));
                    tmp_list_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts[48]);
                    if (tmp_list_element_9 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 134;
                        type_description_2 = "o";
                        goto list_build_exception_7;
                    }
                    PyList_SET_ITEM(tmp_args_element_value_19, 4, tmp_list_element_9);
                    tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_expression_value_84 == NULL)) {
                        tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
                    }

                    assert(!(tmp_expression_value_84 == NULL));
                    tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts[90]);
                    if (tmp_called_value_24 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 135;
                        type_description_2 = "o";
                        goto list_build_exception_7;
                    }
                    tmp_args_element_value_21 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[82]);

                    if (tmp_args_element_value_21 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_21 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[82]);

                            if (unlikely(tmp_args_element_value_21 == NULL)) {
                                tmp_args_element_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[82]);
                            }

                            if (tmp_args_element_value_21 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_24);

                                exception_lineno = 135;
                                type_description_2 = "o";
                                goto list_build_exception_7;
                            }
                            Py_INCREF(tmp_args_element_value_21);
                        } else {
                            goto list_build_exception_7;
                        }
                    }

                    frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 135;
                    tmp_list_element_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_21);
                    Py_DECREF(tmp_called_value_24);
                    Py_DECREF(tmp_args_element_value_21);
                    if (tmp_list_element_9 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 135;
                        type_description_2 = "o";
                        goto list_build_exception_7;
                    }
                    PyList_SET_ITEM(tmp_args_element_value_19, 5, tmp_list_element_9);
                    tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_85 == NULL)) {
                        tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                    }

                    assert(!(tmp_expression_value_85 == NULL));
                    tmp_list_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts[48]);
                    if (tmp_list_element_9 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 136;
                        type_description_2 = "o";
                        goto list_build_exception_7;
                    }
                    PyList_SET_ITEM(tmp_args_element_value_19, 6, tmp_list_element_9);
                    tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_expression_value_86 == NULL)) {
                        tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
                    }

                    assert(!(tmp_expression_value_86 == NULL));
                    tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts[90]);
                    if (tmp_called_value_25 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 137;
                        type_description_2 = "o";
                        goto list_build_exception_7;
                    }
                    tmp_args_element_value_22 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[52]);

                    if (tmp_args_element_value_22 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_22 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[52]);

                            if (unlikely(tmp_args_element_value_22 == NULL)) {
                                tmp_args_element_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
                            }

                            if (tmp_args_element_value_22 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_25);

                                exception_lineno = 137;
                                type_description_2 = "o";
                                goto list_build_exception_7;
                            }
                            Py_INCREF(tmp_args_element_value_22);
                        } else {
                            goto list_build_exception_7;
                        }
                    }

                    frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 137;
                    tmp_list_element_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_22);
                    Py_DECREF(tmp_called_value_25);
                    Py_DECREF(tmp_args_element_value_22);
                    if (tmp_list_element_9 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 137;
                        type_description_2 = "o";
                        goto list_build_exception_7;
                    }
                    PyList_SET_ITEM(tmp_args_element_value_19, 7, tmp_list_element_9);
                }
                goto list_build_noexception_6;
                // Exception handling pass through code for list_build:
                list_build_exception_7:;
                Py_DECREF(tmp_called_value_22);
                Py_DECREF(tmp_args_element_value_19);
                goto list_build_exception_6;
                // Finished with no exception for list_build:
                list_build_noexception_6:;
                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 126;
                {
                    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
                    tmp_list_element_8 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_22, call_args);
                }

                Py_DECREF(tmp_called_value_22);
                Py_DECREF(tmp_args_element_value_19);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 126;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 39, tmp_list_element_8);
                tmp_expression_value_87 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_expression_value_87 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_87 == NULL)) {
                            tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_87 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 140;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_87);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[75]);
                Py_DECREF(tmp_expression_value_87);
                if (tmp_called_value_26 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 140;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                tmp_args_element_value_23 = Py_None;
                tmp_args_element_value_24 = mod_consts[133];
                tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[6]);

                if (unlikely(tmp_expression_value_88 == NULL)) {
                    tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
                }

                assert(!(tmp_expression_value_88 == NULL));
                tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts[90]);
                if (tmp_called_value_27 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_26);

                    exception_lineno = 143;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                tmp_args_element_value_26 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[82]);

                if (tmp_args_element_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_26 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[82]);

                        if (unlikely(tmp_args_element_value_26 == NULL)) {
                            tmp_args_element_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[82]);
                        }

                        if (tmp_args_element_value_26 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_26);
                            Py_DECREF(tmp_called_value_27);

                            exception_lineno = 143;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_args_element_value_26);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 143;
                tmp_list_element_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_26);
                Py_DECREF(tmp_called_value_27);
                Py_DECREF(tmp_args_element_value_26);
                if (tmp_list_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_26);

                    exception_lineno = 143;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                tmp_args_element_value_25 = MAKE_LIST_EMPTY(2);
                {
                    PyObject *tmp_called_value_28;
                    PyObject *tmp_expression_value_89;
                    PyObject *tmp_args_element_value_27;
                    PyList_SET_ITEM(tmp_args_element_value_25, 0, tmp_list_element_10);
                    tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_expression_value_89 == NULL)) {
                        tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
                    }

                    assert(!(tmp_expression_value_89 == NULL));
                    tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts[90]);
                    if (tmp_called_value_28 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 143;
                        type_description_2 = "o";
                        goto list_build_exception_8;
                    }
                    tmp_args_element_value_27 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[82]);

                    if (tmp_args_element_value_27 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_27 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[82]);

                            if (unlikely(tmp_args_element_value_27 == NULL)) {
                                tmp_args_element_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[82]);
                            }

                            if (tmp_args_element_value_27 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_28);

                                exception_lineno = 143;
                                type_description_2 = "o";
                                goto list_build_exception_8;
                            }
                            Py_INCREF(tmp_args_element_value_27);
                        } else {
                            goto list_build_exception_8;
                        }
                    }

                    frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 143;
                    tmp_list_element_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_27);
                    Py_DECREF(tmp_called_value_28);
                    Py_DECREF(tmp_args_element_value_27);
                    if (tmp_list_element_10 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 143;
                        type_description_2 = "o";
                        goto list_build_exception_8;
                    }
                    PyList_SET_ITEM(tmp_args_element_value_25, 1, tmp_list_element_10);
                }
                goto list_build_noexception_7;
                // Exception handling pass through code for list_build:
                list_build_exception_8:;
                Py_DECREF(tmp_called_value_26);
                Py_DECREF(tmp_args_element_value_25);
                goto list_build_exception_6;
                // Finished with no exception for list_build:
                list_build_noexception_7:;
                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 140;
                {
                    PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25};
                    tmp_list_element_8 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_26, call_args);
                }

                Py_DECREF(tmp_called_value_26);
                Py_DECREF(tmp_args_element_value_25);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 140;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 40, tmp_list_element_8);
                tmp_called_instance_45 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_45 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_45 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_45 == NULL)) {
                            tmp_called_instance_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_45 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 145;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_45);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 145;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_45,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[134], 0)
                );

                Py_DECREF(tmp_called_instance_45);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 145;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 41, tmp_list_element_8);
                tmp_called_instance_46 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_46 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_46 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_46 == NULL)) {
                            tmp_called_instance_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_46 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 146;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_46);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 146;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_46,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[135], 0)
                );

                Py_DECREF(tmp_called_instance_46);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 146;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 42, tmp_list_element_8);
                tmp_called_instance_47 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_47 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_47 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_47 == NULL)) {
                            tmp_called_instance_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_47 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 147;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_47);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 147;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_47,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[136], 0)
                );

                Py_DECREF(tmp_called_instance_47);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 147;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 43, tmp_list_element_8);
                tmp_called_instance_48 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_48 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_48 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_48 == NULL)) {
                            tmp_called_instance_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_48 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 148;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_48);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 148;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_48,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[137], 0)
                );

                Py_DECREF(tmp_called_instance_48);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 148;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 44, tmp_list_element_8);
                tmp_called_instance_49 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_49 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_49 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_49 == NULL)) {
                            tmp_called_instance_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_49 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 149;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_49);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 149;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_49,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[138], 0)
                );

                Py_DECREF(tmp_called_instance_49);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 149;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 45, tmp_list_element_8);
                tmp_called_instance_50 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_50 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_50 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_50 == NULL)) {
                            tmp_called_instance_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_50 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 150;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_50);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 150;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_50,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[139], 0)
                );

                Py_DECREF(tmp_called_instance_50);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 150;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 46, tmp_list_element_8);
                tmp_called_instance_51 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_51 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_51 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_51 == NULL)) {
                            tmp_called_instance_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_51 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 151;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_51);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 151;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_51,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[140], 0)
                );

                Py_DECREF(tmp_called_instance_51);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 151;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 47, tmp_list_element_8);
                tmp_called_instance_52 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_52 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_52 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_52 == NULL)) {
                            tmp_called_instance_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_52 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 152;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_52);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 152;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_52,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[141], 0)
                );

                Py_DECREF(tmp_called_instance_52);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 152;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 48, tmp_list_element_8);
                tmp_expression_value_90 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_expression_value_90 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_90 == NULL)) {
                            tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_90 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 153;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_90);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts[75]);
                Py_DECREF(tmp_expression_value_90);
                if (tmp_called_value_29 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 153;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_expression_value_91 == NULL)) {
                    tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                assert(!(tmp_expression_value_91 == NULL));
                tmp_args_element_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts[142]);
                if (tmp_args_element_value_28 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_29);

                    exception_lineno = 153;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                tmp_args_element_value_29 = mod_consts[143];
                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 153;
                {
                    PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29};
                    tmp_list_element_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_29, call_args);
                }

                Py_DECREF(tmp_called_value_29);
                Py_DECREF(tmp_args_element_value_28);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 153;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 49, tmp_list_element_8);
                tmp_called_instance_53 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_53 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_53 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_53 == NULL)) {
                            tmp_called_instance_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_53 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 154;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_53);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 154;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_53,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[144], 0)
                );

                Py_DECREF(tmp_called_instance_53);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 154;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 50, tmp_list_element_8);
                tmp_called_instance_54 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_54 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_54 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_54 == NULL)) {
                            tmp_called_instance_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_54 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 155;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_54);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 155;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_54,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[145], 0)
                );

                Py_DECREF(tmp_called_instance_54);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 155;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 51, tmp_list_element_8);
                tmp_called_instance_55 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_55 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_55 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_55 == NULL)) {
                            tmp_called_instance_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_55 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 156;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_55);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 156;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_55,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[146], 0)
                );

                Py_DECREF(tmp_called_instance_55);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 156;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 52, tmp_list_element_8);
                tmp_called_instance_56 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_56 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_56 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_56 == NULL)) {
                            tmp_called_instance_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_56 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 157;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_56);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 157;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_56,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[147], 0)
                );

                Py_DECREF(tmp_called_instance_56);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 157;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 53, tmp_list_element_8);
                tmp_called_instance_57 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_57 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_57 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_57 == NULL)) {
                            tmp_called_instance_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_57 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 158;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_57);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 158;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_57,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[148], 0)
                );

                Py_DECREF(tmp_called_instance_57);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 158;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 54, tmp_list_element_8);
                tmp_called_instance_58 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_58 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_58 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_58 == NULL)) {
                            tmp_called_instance_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_58 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 159;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_58);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 159;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_58,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[149], 0)
                );

                Py_DECREF(tmp_called_instance_58);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 159;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 55, tmp_list_element_8);
                tmp_called_instance_59 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_59 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_59 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_59 == NULL)) {
                            tmp_called_instance_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_59 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 160;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_59);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 160;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_59,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[150], 0)
                );

                Py_DECREF(tmp_called_instance_59);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 160;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 56, tmp_list_element_8);
                tmp_called_instance_60 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_60 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_60 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_60 == NULL)) {
                            tmp_called_instance_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_60 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 161;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_60);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 161;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_60,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[151], 0)
                );

                Py_DECREF(tmp_called_instance_60);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 161;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 57, tmp_list_element_8);
                tmp_called_instance_61 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_61 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_61 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_61 == NULL)) {
                            tmp_called_instance_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_61 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 162;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_61);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 162;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_61,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[152], 0)
                );

                Py_DECREF(tmp_called_instance_61);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 162;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 58, tmp_list_element_8);
                tmp_called_instance_62 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_62 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_62 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_62 == NULL)) {
                            tmp_called_instance_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_62 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 163;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_62);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 163;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_62,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[153], 0)
                );

                Py_DECREF(tmp_called_instance_62);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 163;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 59, tmp_list_element_8);
                tmp_called_instance_63 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_63 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_63 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_63 == NULL)) {
                            tmp_called_instance_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_63 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 164;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_63);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 164;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_63,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[154], 0)
                );

                Py_DECREF(tmp_called_instance_63);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 164;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 60, tmp_list_element_8);
                tmp_called_instance_64 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_64 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_64 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_64 == NULL)) {
                            tmp_called_instance_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_64 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 165;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_64);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 165;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_64,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[155], 0)
                );

                Py_DECREF(tmp_called_instance_64);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 165;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 61, tmp_list_element_8);
                tmp_called_instance_65 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_65 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_65 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_65 == NULL)) {
                            tmp_called_instance_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_65 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 166;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_65);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 166;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_65,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[156], 0)
                );

                Py_DECREF(tmp_called_instance_65);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 166;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 62, tmp_list_element_8);
                tmp_called_instance_66 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_66 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_66 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_66 == NULL)) {
                            tmp_called_instance_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_66 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 167;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_66);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 167;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_66,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[157], 0)
                );

                Py_DECREF(tmp_called_instance_66);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 167;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 63, tmp_list_element_8);
                tmp_called_instance_67 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_67 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_67 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_67 == NULL)) {
                            tmp_called_instance_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_67 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 168;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_67);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 168;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_67,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[158], 0)
                );

                Py_DECREF(tmp_called_instance_67);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 168;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 64, tmp_list_element_8);
                tmp_called_instance_68 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_68 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_68 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_68 == NULL)) {
                            tmp_called_instance_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_68 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 169;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_68);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 169;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_68,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[159], 0)
                );

                Py_DECREF(tmp_called_instance_68);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 169;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 65, tmp_list_element_8);
                tmp_called_instance_69 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_69 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_69 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_69 == NULL)) {
                            tmp_called_instance_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_69 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 170;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_69);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 170;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_69,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[160], 0)
                );

                Py_DECREF(tmp_called_instance_69);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 170;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 66, tmp_list_element_8);
                tmp_called_instance_70 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_70 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_70 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_70 == NULL)) {
                            tmp_called_instance_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_70 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 171;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_70);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 171;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_70,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[161], 0)
                );

                Py_DECREF(tmp_called_instance_70);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 171;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 67, tmp_list_element_8);
                tmp_called_instance_71 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_71 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_71 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_71 == NULL)) {
                            tmp_called_instance_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_71 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 172;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_71);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 172;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_71,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[162], 0)
                );

                Py_DECREF(tmp_called_instance_71);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 172;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 68, tmp_list_element_8);
                tmp_called_instance_72 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_72 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_72 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_72 == NULL)) {
                            tmp_called_instance_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_72 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 173;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_72);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 173;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_72,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[163], 0)
                );

                Py_DECREF(tmp_called_instance_72);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 173;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 69, tmp_list_element_8);
                tmp_called_instance_73 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_73 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_73 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_73 == NULL)) {
                            tmp_called_instance_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_73 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 174;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_73);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 174;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_73,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[164], 0)
                );

                Py_DECREF(tmp_called_instance_73);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 174;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 70, tmp_list_element_8);
                tmp_called_instance_74 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_74 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_74 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_74 == NULL)) {
                            tmp_called_instance_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_74 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 175;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_74);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 175;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_74,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[165], 0)
                );

                Py_DECREF(tmp_called_instance_74);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 175;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 71, tmp_list_element_8);
                tmp_called_instance_75 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_75 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_75 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_75 == NULL)) {
                            tmp_called_instance_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_75 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 176;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_75);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 176;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_75,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[166], 0)
                );

                Py_DECREF(tmp_called_instance_75);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 176;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 72, tmp_list_element_8);
                tmp_called_instance_76 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_76 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_76 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_76 == NULL)) {
                            tmp_called_instance_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_76 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 177;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_76);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 177;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_76,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[167], 0)
                );

                Py_DECREF(tmp_called_instance_76);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 177;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 73, tmp_list_element_8);
                tmp_called_instance_77 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_77 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_77 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_77 == NULL)) {
                            tmp_called_instance_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_77 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 178;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_77);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 178;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_77,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[168], 0)
                );

                Py_DECREF(tmp_called_instance_77);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 178;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 74, tmp_list_element_8);
                tmp_called_instance_78 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_78 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_78 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_78 == NULL)) {
                            tmp_called_instance_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_78 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 179;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_78);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 179;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_78,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[169], 0)
                );

                Py_DECREF(tmp_called_instance_78);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 179;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 75, tmp_list_element_8);
                tmp_called_instance_79 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_79 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_79 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_79 == NULL)) {
                            tmp_called_instance_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_79 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 180;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_79);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 180;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_79,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[170], 0)
                );

                Py_DECREF(tmp_called_instance_79);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 180;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 76, tmp_list_element_8);
                tmp_called_instance_80 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_80 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_80 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_80 == NULL)) {
                            tmp_called_instance_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_80 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 181;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_80);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 181;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_80,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[171], 0)
                );

                Py_DECREF(tmp_called_instance_80);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 181;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 77, tmp_list_element_8);
                tmp_called_instance_81 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_81 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_81 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_81 == NULL)) {
                            tmp_called_instance_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_81 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 182;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_81);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 182;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_81,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[172], 0)
                );

                Py_DECREF(tmp_called_instance_81);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 182;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 78, tmp_list_element_8);
                tmp_called_instance_82 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_82 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_82 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_82 == NULL)) {
                            tmp_called_instance_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_82 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 183;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_82);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 183;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_82,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[173], 0)
                );

                Py_DECREF(tmp_called_instance_82);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 183;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 79, tmp_list_element_8);
                tmp_called_instance_83 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_83 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_83 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_83 == NULL)) {
                            tmp_called_instance_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_83 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 184;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_83);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 184;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_83,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[174], 0)
                );

                Py_DECREF(tmp_called_instance_83);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 184;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 80, tmp_list_element_8);
                tmp_called_instance_84 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_84 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_84 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_84 == NULL)) {
                            tmp_called_instance_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_84 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 185;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_84);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 185;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_84,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[175], 0)
                );

                Py_DECREF(tmp_called_instance_84);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 185;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 81, tmp_list_element_8);
                tmp_called_instance_85 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_85 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_85 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_85 == NULL)) {
                            tmp_called_instance_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_85 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 186;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_85);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 186;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_85,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[176], 0)
                );

                Py_DECREF(tmp_called_instance_85);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 186;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 82, tmp_list_element_8);
                tmp_called_instance_86 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_86 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_86 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_86 == NULL)) {
                            tmp_called_instance_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_86 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 187;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_86);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 187;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_86,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[177], 0)
                );

                Py_DECREF(tmp_called_instance_86);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 187;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 83, tmp_list_element_8);
                tmp_called_instance_87 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_87 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_87 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_87 == NULL)) {
                            tmp_called_instance_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_87 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 188;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_87);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 188;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_87,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[178], 0)
                );

                Py_DECREF(tmp_called_instance_87);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 188;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 84, tmp_list_element_8);
                tmp_called_instance_88 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_88 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_88 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_88 == NULL)) {
                            tmp_called_instance_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_88 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 189;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_88);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 189;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_88,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[179], 0)
                );

                Py_DECREF(tmp_called_instance_88);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 189;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 85, tmp_list_element_8);
                tmp_called_instance_89 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_89 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_89 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_89 == NULL)) {
                            tmp_called_instance_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_89 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 190;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_89);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 190;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_89,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[180], 0)
                );

                Py_DECREF(tmp_called_instance_89);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 190;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 86, tmp_list_element_8);
                tmp_called_instance_90 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_90 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_90 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_90 == NULL)) {
                            tmp_called_instance_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_90 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 191;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_90);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 191;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_90,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[181], 0)
                );

                Py_DECREF(tmp_called_instance_90);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 191;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 87, tmp_list_element_8);
                tmp_called_instance_91 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_91 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_91 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_91 == NULL)) {
                            tmp_called_instance_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_91 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 192;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_91);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 192;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_91,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[182], 0)
                );

                Py_DECREF(tmp_called_instance_91);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 192;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 88, tmp_list_element_8);
                tmp_called_instance_92 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_92 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_92 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_92 == NULL)) {
                            tmp_called_instance_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_92 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 193;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_92);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 193;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_92,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[183], 0)
                );

                Py_DECREF(tmp_called_instance_92);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 193;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 89, tmp_list_element_8);
                tmp_called_instance_93 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_93 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_93 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_93 == NULL)) {
                            tmp_called_instance_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_93 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 194;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_93);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 194;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_93,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[184], 0)
                );

                Py_DECREF(tmp_called_instance_93);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 194;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 90, tmp_list_element_8);
                tmp_called_instance_94 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_94 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_94 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_94 == NULL)) {
                            tmp_called_instance_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_94 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 195;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_94);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 195;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_94,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[185], 0)
                );

                Py_DECREF(tmp_called_instance_94);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 195;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 91, tmp_list_element_8);
                tmp_called_instance_95 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_95 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_95 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_95 == NULL)) {
                            tmp_called_instance_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_95 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 196;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_95);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 196;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_95,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[186], 0)
                );

                Py_DECREF(tmp_called_instance_95);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 196;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 92, tmp_list_element_8);
                tmp_called_instance_96 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_96 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_96 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_96 == NULL)) {
                            tmp_called_instance_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_96 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 197;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_96);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 197;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_96,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[187], 0)
                );

                Py_DECREF(tmp_called_instance_96);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 197;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 93, tmp_list_element_8);
                tmp_called_instance_97 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_97 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_97 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_97 == NULL)) {
                            tmp_called_instance_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_97 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 198;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_97);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 198;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_97,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[188], 0)
                );

                Py_DECREF(tmp_called_instance_97);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 198;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 94, tmp_list_element_8);
                tmp_called_instance_98 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_98 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_98 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_98 == NULL)) {
                            tmp_called_instance_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_98 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 199;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_98);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 199;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_98,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[189], 0)
                );

                Py_DECREF(tmp_called_instance_98);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 199;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 95, tmp_list_element_8);
                tmp_called_instance_99 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_99 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_99 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_99 == NULL)) {
                            tmp_called_instance_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_99 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 200;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_99);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 200;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_99,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[190], 0)
                );

                Py_DECREF(tmp_called_instance_99);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 200;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 96, tmp_list_element_8);
                tmp_called_instance_100 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_100 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_100 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_100 == NULL)) {
                            tmp_called_instance_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_100 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 201;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_100);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 201;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_100,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[191], 0)
                );

                Py_DECREF(tmp_called_instance_100);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 201;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 97, tmp_list_element_8);
                tmp_called_instance_101 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_101 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_101 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_101 == NULL)) {
                            tmp_called_instance_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_101 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 202;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_101);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 202;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_101,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[192], 0)
                );

                Py_DECREF(tmp_called_instance_101);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 202;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 98, tmp_list_element_8);
                tmp_called_instance_102 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_102 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_102 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_102 == NULL)) {
                            tmp_called_instance_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_102 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 203;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_102);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 203;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_102,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[193], 0)
                );

                Py_DECREF(tmp_called_instance_102);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 203;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 99, tmp_list_element_8);
                tmp_called_instance_103 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_103 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_103 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_103 == NULL)) {
                            tmp_called_instance_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_103 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 204;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_103);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 204;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_103,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[194], 0)
                );

                Py_DECREF(tmp_called_instance_103);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 204;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 100, tmp_list_element_8);
                tmp_called_instance_104 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_104 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_104 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_104 == NULL)) {
                            tmp_called_instance_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_104 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 205;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_104);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 205;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_104,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[195], 0)
                );

                Py_DECREF(tmp_called_instance_104);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 205;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 101, tmp_list_element_8);
                tmp_called_instance_105 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_105 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_105 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_105 == NULL)) {
                            tmp_called_instance_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_105 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 206;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_105);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 206;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_105,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[196], 0)
                );

                Py_DECREF(tmp_called_instance_105);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 206;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 102, tmp_list_element_8);
                tmp_called_instance_106 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_106 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_106 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_106 == NULL)) {
                            tmp_called_instance_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_106 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 207;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_106);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 207;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_106,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[197], 0)
                );

                Py_DECREF(tmp_called_instance_106);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 207;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 103, tmp_list_element_8);
                tmp_called_instance_107 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_107 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_107 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_107 == NULL)) {
                            tmp_called_instance_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_107 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 208;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_107);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 208;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_107,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[198], 0)
                );

                Py_DECREF(tmp_called_instance_107);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 208;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 104, tmp_list_element_8);
                tmp_called_instance_108 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_called_instance_108 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_108 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_called_instance_108 == NULL)) {
                            tmp_called_instance_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_called_instance_108 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 209;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_instance_108);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 209;
                tmp_list_element_8 = CALL_METHOD_WITH_ARGS2(
                    tstate,
                    tmp_called_instance_108,
                    mod_consts[75],
                    &PyTuple_GET_ITEM(mod_consts[84], 0)
                );

                Py_DECREF(tmp_called_instance_108);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 209;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 105, tmp_list_element_8);
                tmp_expression_value_92 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_expression_value_92 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_92 == NULL)) {
                            tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_92 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 210;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_92);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts[75]);
                Py_DECREF(tmp_expression_value_92);
                if (tmp_called_value_30 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 210;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_expression_value_93 == NULL)) {
                    tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                assert(!(tmp_expression_value_93 == NULL));
                tmp_args_element_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[48]);
                if (tmp_args_element_value_30 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_30);

                    exception_lineno = 210;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                tmp_args_element_value_31 = mod_consts[199];
                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 210;
                {
                    PyObject *call_args[] = {tmp_args_element_value_30, tmp_args_element_value_31};
                    tmp_list_element_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_30, call_args);
                }

                Py_DECREF(tmp_called_value_30);
                Py_DECREF(tmp_args_element_value_30);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 210;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 106, tmp_list_element_8);
                tmp_expression_value_94 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_expression_value_94 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_94 == NULL)) {
                            tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_94 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 211;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_94);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts[75]);
                Py_DECREF(tmp_expression_value_94);
                if (tmp_called_value_31 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 211;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                tmp_expression_value_95 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[8]);

                if (tmp_expression_value_95 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_95 == NULL)) {
                            tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_95 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_31);

                            exception_lineno = 211;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_95);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                tmp_args_element_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts[77]);
                Py_DECREF(tmp_expression_value_95);
                if (tmp_args_element_value_32 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_31);

                    exception_lineno = 211;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                tmp_args_element_value_33 = mod_consts[200];
                frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame.f_lineno = 211;
                {
                    PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33};
                    tmp_list_element_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_31, call_args);
                }

                Py_DECREF(tmp_called_value_31);
                Py_DECREF(tmp_args_element_value_32);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 211;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 107, tmp_list_element_8);
            }
            goto list_build_noexception_8;
            // Exception handling pass through code for list_build:
            list_build_exception_6:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_8;
            // Finished with no exception for list_build:
            list_build_noexception_8:;
            tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[81], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_7;
        frame_exception_exit_8:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_fa225f92d32cb3916f71632d1ecdfef6_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_fa225f92d32cb3916f71632d1ecdfef6_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_fa225f92d32cb3916f71632d1ecdfef6_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_fa225f92d32cb3916f71632d1ecdfef6_8,
            type_description_2,
            outline_6_var___class__
        );



        assertFrameObject(frame_fa225f92d32cb3916f71632d1ecdfef6_8);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_7;
        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_21;
        skip_nested_handling_7:;
        {
            nuitka_bool tmp_condition_result_28;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_cmp_expr_left_7 = tmp_class_creation_7__bases;
            CHECK_OBJECT(tmp_class_creation_7__bases_orig);
            tmp_cmp_expr_right_7 = tmp_class_creation_7__bases_orig;
            tmp_condition_result_28 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto try_except_handler_21;
            }
            if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
                goto branch_yes_21;
            } else {
                goto branch_no_21;
            }
        }
        branch_yes_21:;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dictset_value = tmp_class_creation_7__bases_orig;
        tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84, mod_consts[51], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_21;
        }
        branch_no_21:;
        {
            PyObject *tmp_assign_source_76;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_46;
            PyObject *tmp_kwargs_value_14;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_value_32 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_46 = mod_consts[91];
            tmp_args_value_14 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_46);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_46 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_46);
            tmp_tuple_element_46 = locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84;
            PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_46);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_14 = tmp_class_creation_7__class_decl_dict;
            frame_1f4a063c96cbf43c89330d982d1f58fe->m_frame.f_lineno = 84;
            tmp_assign_source_76 = CALL_FUNCTION(tstate, tmp_called_value_32, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_args_value_14);
            if (tmp_assign_source_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto try_except_handler_21;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_76;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_75 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_75);
        goto try_return_handler_21;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        Py_DECREF(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84);
        locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84 = NULL;
        goto try_return_handler_20;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84);
        locals_dxcam$_libs$d3d11$$$class__7_ID3D11DeviceContext_84 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto try_except_handler_20;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 84;
        goto try_except_handler_19;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_75);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_class_creation_7__bases_orig);
    Py_DECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_7__bases);
    Py_DECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    Py_DECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__metaclass);
    Py_DECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_tuple_element_47;
        PyObject *tmp_expression_value_96;
        tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_96 == NULL)) {
            tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto try_except_handler_22;
        }
        tmp_tuple_element_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts[70]);
        if (tmp_tuple_element_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto try_except_handler_22;
        }
        tmp_assign_source_77 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_77, 0, tmp_tuple_element_47);
        assert(tmp_class_creation_8__bases_orig == NULL);
        tmp_class_creation_8__bases_orig = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_dircall_arg1_8;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dircall_arg1_8 = tmp_class_creation_8__bases_orig;
        Py_INCREF(tmp_dircall_arg1_8);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
            tmp_assign_source_78 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_78;
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_79;
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_metaclass_value_8;
        nuitka_bool tmp_condition_result_29;
        int tmp_truth_name_8;
        PyObject *tmp_type_arg_15;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_bases_value_8;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_creation_8__bases);
        if (tmp_truth_name_8 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto try_except_handler_22;
        }
        tmp_condition_result_29 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_expression_value_97 = tmp_class_creation_8__bases;
        tmp_subscript_value_8 = mod_consts[9];
        tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_97, tmp_subscript_value_8, 0);
        if (tmp_type_arg_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto try_except_handler_22;
        }
        tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
        Py_DECREF(tmp_type_arg_15);
        if (tmp_metaclass_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto try_except_handler_22;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_8);
        condexpr_end_8:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_bases_value_8 = tmp_class_creation_8__bases;
        tmp_assign_source_80 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
        Py_DECREF(tmp_metaclass_value_8);
        if (tmp_assign_source_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_80;
    }
    {
        bool tmp_condition_result_30;
        PyObject *tmp_expression_value_98;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_98 = tmp_class_creation_8__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_98, mod_consts[38]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto try_except_handler_22;
        }
        tmp_condition_result_30 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_30 != false) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_args_value_15;
        PyObject *tmp_tuple_element_48;
        PyObject *tmp_kwargs_value_15;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_99 = tmp_class_creation_8__metaclass;
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts[38]);
        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto try_except_handler_22;
        }
        tmp_tuple_element_48 = mod_consts[201];
        tmp_args_value_15 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_48);
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_tuple_element_48 = tmp_class_creation_8__bases;
        PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_48);
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_value_15 = tmp_class_creation_8__class_decl_dict;
        frame_1f4a063c96cbf43c89330d982d1f58fe->m_frame.f_lineno = 215;
        tmp_assign_source_81 = CALL_FUNCTION(tstate, tmp_called_value_33, tmp_args_value_15, tmp_kwargs_value_15);
        Py_DECREF(tmp_called_value_33);
        Py_DECREF(tmp_args_value_15);
        if (tmp_assign_source_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_81;
    }
    {
        bool tmp_condition_result_31;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_expression_value_100;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_value_100 = tmp_class_creation_8__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_100, mod_consts[40]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto try_except_handler_22;
        }
        tmp_operand_value_8 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        assert(!(tmp_res == -1));
        tmp_condition_result_31 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_raise_value_8;
        PyObject *tmp_mod_expr_left_8;
        PyObject *tmp_mod_expr_right_8;
        PyObject *tmp_tuple_element_49;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_name_value_9;
        PyObject *tmp_default_value_8;
        tmp_raise_type_8 = PyExc_TypeError;
        tmp_mod_expr_left_8 = mod_consts[41];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_101 = tmp_class_creation_8__metaclass;
        tmp_name_value_9 = mod_consts[42];
        tmp_default_value_8 = mod_consts[43];
        tmp_tuple_element_49 = BUILTIN_GETATTR(tstate, tmp_expression_value_101, tmp_name_value_9, tmp_default_value_8);
        if (tmp_tuple_element_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto try_except_handler_22;
        }
        tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_102;
            PyObject *tmp_type_arg_16;
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_49);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_16 = tmp_class_creation_8__prepared;
            tmp_expression_value_102 = BUILTIN_TYPE1(tmp_type_arg_16);
            assert(!(tmp_expression_value_102 == NULL));
            tmp_tuple_element_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts[42]);
            Py_DECREF(tmp_expression_value_102);
            if (tmp_tuple_element_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;

                goto tuple_build_exception_26;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_49);
        }
        goto tuple_build_noexception_26;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_26:;
        Py_DECREF(tmp_mod_expr_right_8);
        goto try_except_handler_22;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_26:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
        Py_DECREF(tmp_mod_expr_right_8);
        if (tmp_raise_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto try_except_handler_22;
        }
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_value = tmp_raise_value_8;
        exception_lineno = 215;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_22;
    }
    branch_no_23:;
    goto branch_end_22;
    branch_no_22:;
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_82;
    }
    branch_end_22:;
    {
        PyObject *tmp_assign_source_83;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[44];
        tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[45], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto try_except_handler_24;
        }
        tmp_dictset_value = mod_consts[201];
        tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[46], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto try_except_handler_24;
        }
        frame_4e2858c1a0b8ebfc9cc9ba3806252678_9 = MAKE_CLASS_FRAME(tstate, codeobj_4e2858c1a0b8ebfc9cc9ba3806252678, module_dxcam$_libs$d3d11, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_4e2858c1a0b8ebfc9cc9ba3806252678_9);
        assert(Py_REFCNT(frame_4e2858c1a0b8ebfc9cc9ba3806252678_9) == 2);

        // Framed code:
        {
            PyObject *tmp_called_instance_109;
            tmp_called_instance_109 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

            if (tmp_called_instance_109 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_109 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                    if (unlikely(tmp_called_instance_109 == NULL)) {
                        tmp_called_instance_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                    }

                    if (tmp_called_instance_109 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 216;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_instance_109);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 216;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_109,
                mod_consts[72],
                PyTuple_GET_ITEM(mod_consts[202], 0)
            );

            Py_DECREF(tmp_called_instance_109);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[74], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_list_element_11;
            PyObject *tmp_called_value_34;
            PyObject *tmp_expression_value_103;
            PyObject *tmp_args_element_value_34;
            PyObject *tmp_expression_value_104;
            PyObject *tmp_args_element_value_35;
            tmp_expression_value_103 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

            if (tmp_expression_value_103 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                    if (unlikely(tmp_expression_value_103 == NULL)) {
                        tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                    }

                    if (tmp_expression_value_103 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 218;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_expression_value_103);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            tmp_called_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, mod_consts[75]);
            Py_DECREF(tmp_expression_value_103);
            if (tmp_called_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_expression_value_104 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

            if (tmp_expression_value_104 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                    if (unlikely(tmp_expression_value_104 == NULL)) {
                        tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                    }

                    if (tmp_expression_value_104 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_34);

                        exception_lineno = 218;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_expression_value_104);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            tmp_args_element_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_104, mod_consts[77]);
            Py_DECREF(tmp_expression_value_104);
            if (tmp_args_element_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_34);

                exception_lineno = 218;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_args_element_value_35 = mod_consts[203];
            frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 218;
            {
                PyObject *call_args[] = {tmp_args_element_value_34, tmp_args_element_value_35};
                tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_34, call_args);
            }

            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_args_element_value_34);
            if (tmp_list_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_dictset_value = MAKE_LIST_EMPTY(40);
            {
                PyObject *tmp_called_value_35;
                PyObject *tmp_expression_value_105;
                PyObject *tmp_args_element_value_36;
                PyObject *tmp_expression_value_106;
                PyObject *tmp_args_element_value_37;
                PyObject *tmp_called_value_36;
                PyObject *tmp_expression_value_107;
                PyObject *tmp_args_element_value_38;
                PyObject *tmp_expression_value_108;
                PyObject *tmp_args_element_value_39;
                PyObject *tmp_args_element_value_40;
                PyObject *tmp_list_element_12;
                PyObject *tmp_called_value_37;
                PyObject *tmp_expression_value_109;
                PyObject *tmp_args_element_value_41;
                PyObject *tmp_called_value_40;
                PyObject *tmp_expression_value_112;
                PyObject *tmp_args_element_value_44;
                PyObject *tmp_expression_value_113;
                PyObject *tmp_args_element_value_45;
                PyObject *tmp_called_value_41;
                PyObject *tmp_expression_value_114;
                PyObject *tmp_args_element_value_46;
                PyObject *tmp_expression_value_115;
                PyObject *tmp_args_element_value_47;
                PyObject *tmp_called_value_42;
                PyObject *tmp_expression_value_116;
                PyObject *tmp_args_element_value_48;
                PyObject *tmp_expression_value_117;
                PyObject *tmp_args_element_value_49;
                PyObject *tmp_called_value_43;
                PyObject *tmp_expression_value_118;
                PyObject *tmp_args_element_value_50;
                PyObject *tmp_expression_value_119;
                PyObject *tmp_args_element_value_51;
                PyObject *tmp_called_value_44;
                PyObject *tmp_expression_value_120;
                PyObject *tmp_args_element_value_52;
                PyObject *tmp_expression_value_121;
                PyObject *tmp_args_element_value_53;
                PyObject *tmp_called_value_45;
                PyObject *tmp_expression_value_122;
                PyObject *tmp_args_element_value_54;
                PyObject *tmp_expression_value_123;
                PyObject *tmp_args_element_value_55;
                PyObject *tmp_called_value_46;
                PyObject *tmp_expression_value_124;
                PyObject *tmp_args_element_value_56;
                PyObject *tmp_expression_value_125;
                PyObject *tmp_args_element_value_57;
                PyObject *tmp_called_value_47;
                PyObject *tmp_expression_value_126;
                PyObject *tmp_args_element_value_58;
                PyObject *tmp_expression_value_127;
                PyObject *tmp_args_element_value_59;
                PyObject *tmp_called_value_48;
                PyObject *tmp_expression_value_128;
                PyObject *tmp_args_element_value_60;
                PyObject *tmp_expression_value_129;
                PyObject *tmp_args_element_value_61;
                PyObject *tmp_called_value_49;
                PyObject *tmp_expression_value_130;
                PyObject *tmp_args_element_value_62;
                PyObject *tmp_expression_value_131;
                PyObject *tmp_args_element_value_63;
                PyObject *tmp_called_value_50;
                PyObject *tmp_expression_value_132;
                PyObject *tmp_args_element_value_64;
                PyObject *tmp_expression_value_133;
                PyObject *tmp_args_element_value_65;
                PyObject *tmp_called_value_51;
                PyObject *tmp_expression_value_134;
                PyObject *tmp_args_element_value_66;
                PyObject *tmp_expression_value_135;
                PyObject *tmp_args_element_value_67;
                PyObject *tmp_called_value_52;
                PyObject *tmp_expression_value_136;
                PyObject *tmp_args_element_value_68;
                PyObject *tmp_expression_value_137;
                PyObject *tmp_args_element_value_69;
                PyObject *tmp_called_value_53;
                PyObject *tmp_expression_value_138;
                PyObject *tmp_args_element_value_70;
                PyObject *tmp_expression_value_139;
                PyObject *tmp_args_element_value_71;
                PyObject *tmp_called_value_54;
                PyObject *tmp_expression_value_140;
                PyObject *tmp_args_element_value_72;
                PyObject *tmp_expression_value_141;
                PyObject *tmp_args_element_value_73;
                PyObject *tmp_called_value_55;
                PyObject *tmp_expression_value_142;
                PyObject *tmp_args_element_value_74;
                PyObject *tmp_expression_value_143;
                PyObject *tmp_args_element_value_75;
                PyObject *tmp_called_value_56;
                PyObject *tmp_expression_value_144;
                PyObject *tmp_args_element_value_76;
                PyObject *tmp_expression_value_145;
                PyObject *tmp_args_element_value_77;
                PyObject *tmp_called_value_57;
                PyObject *tmp_expression_value_146;
                PyObject *tmp_args_element_value_78;
                PyObject *tmp_expression_value_147;
                PyObject *tmp_args_element_value_79;
                PyObject *tmp_called_value_58;
                PyObject *tmp_expression_value_148;
                PyObject *tmp_args_element_value_80;
                PyObject *tmp_expression_value_149;
                PyObject *tmp_args_element_value_81;
                PyObject *tmp_called_value_59;
                PyObject *tmp_expression_value_150;
                PyObject *tmp_args_element_value_82;
                PyObject *tmp_expression_value_151;
                PyObject *tmp_args_element_value_83;
                PyObject *tmp_called_value_60;
                PyObject *tmp_expression_value_152;
                PyObject *tmp_args_element_value_84;
                PyObject *tmp_expression_value_153;
                PyObject *tmp_args_element_value_85;
                PyObject *tmp_called_value_61;
                PyObject *tmp_expression_value_154;
                PyObject *tmp_args_element_value_86;
                PyObject *tmp_expression_value_155;
                PyObject *tmp_args_element_value_87;
                PyObject *tmp_called_value_62;
                PyObject *tmp_expression_value_156;
                PyObject *tmp_args_element_value_88;
                PyObject *tmp_expression_value_157;
                PyObject *tmp_args_element_value_89;
                PyObject *tmp_called_value_63;
                PyObject *tmp_expression_value_158;
                PyObject *tmp_args_element_value_90;
                PyObject *tmp_expression_value_159;
                PyObject *tmp_args_element_value_91;
                PyObject *tmp_called_value_64;
                PyObject *tmp_expression_value_160;
                PyObject *tmp_args_element_value_92;
                PyObject *tmp_expression_value_161;
                PyObject *tmp_args_element_value_93;
                PyObject *tmp_called_value_65;
                PyObject *tmp_expression_value_162;
                PyObject *tmp_args_element_value_94;
                PyObject *tmp_expression_value_163;
                PyObject *tmp_args_element_value_95;
                PyObject *tmp_called_value_66;
                PyObject *tmp_expression_value_164;
                PyObject *tmp_args_element_value_96;
                PyObject *tmp_expression_value_165;
                PyObject *tmp_args_element_value_97;
                PyObject *tmp_called_value_67;
                PyObject *tmp_expression_value_166;
                PyObject *tmp_args_element_value_98;
                PyObject *tmp_expression_value_167;
                PyObject *tmp_args_element_value_99;
                PyObject *tmp_called_value_68;
                PyObject *tmp_expression_value_168;
                PyObject *tmp_args_element_value_100;
                PyObject *tmp_expression_value_169;
                PyObject *tmp_args_element_value_101;
                PyObject *tmp_called_value_69;
                PyObject *tmp_expression_value_170;
                PyObject *tmp_args_element_value_102;
                PyObject *tmp_expression_value_171;
                PyObject *tmp_args_element_value_103;
                PyObject *tmp_called_value_70;
                PyObject *tmp_expression_value_172;
                PyObject *tmp_args_element_value_104;
                PyObject *tmp_expression_value_173;
                PyObject *tmp_args_element_value_105;
                PyObject *tmp_called_value_71;
                PyObject *tmp_expression_value_174;
                PyObject *tmp_args_element_value_106;
                PyObject *tmp_expression_value_175;
                PyObject *tmp_args_element_value_107;
                PyObject *tmp_called_value_72;
                PyObject *tmp_expression_value_176;
                PyObject *tmp_args_element_value_108;
                PyObject *tmp_expression_value_177;
                PyObject *tmp_args_element_value_109;
                PyObject *tmp_called_value_73;
                PyObject *tmp_expression_value_178;
                PyObject *tmp_args_element_value_110;
                PyObject *tmp_expression_value_179;
                PyObject *tmp_args_element_value_111;
                PyObject *tmp_called_value_74;
                PyObject *tmp_expression_value_180;
                PyObject *tmp_args_element_value_112;
                PyObject *tmp_args_element_value_113;
                PyObject *tmp_args_element_value_114;
                PyObject *tmp_list_element_13;
                PyObject *tmp_called_value_75;
                PyObject *tmp_expression_value_181;
                PyObject *tmp_args_element_value_115;
                PyObject *tmp_called_value_76;
                PyObject *tmp_expression_value_182;
                PyObject *tmp_args_element_value_116;
                PyObject *tmp_called_value_77;
                PyObject *tmp_expression_value_183;
                PyObject *tmp_args_element_value_117;
                PyObject *tmp_expression_value_184;
                PyObject *tmp_args_element_value_118;
                PyObject *tmp_called_value_78;
                PyObject *tmp_expression_value_185;
                PyObject *tmp_args_element_value_119;
                PyObject *tmp_expression_value_186;
                PyObject *tmp_args_element_value_120;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_11);
                tmp_expression_value_105 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_105 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_105 == NULL)) {
                            tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_105 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 219;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_105);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts[75]);
                Py_DECREF(tmp_expression_value_105);
                if (tmp_called_value_35 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 219;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_106 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_106 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_106 == NULL)) {
                            tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_106 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_35);

                            exception_lineno = 219;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_106);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_106, mod_consts[77]);
                Py_DECREF(tmp_expression_value_106);
                if (tmp_args_element_value_36 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_35);

                    exception_lineno = 219;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_37 = mod_consts[204];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 219;
                {
                    PyObject *call_args[] = {tmp_args_element_value_36, tmp_args_element_value_37};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_35, call_args);
                }

                Py_DECREF(tmp_called_value_35);
                Py_DECREF(tmp_args_element_value_36);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 219;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_11);
                tmp_expression_value_107 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_107 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_107 == NULL)) {
                            tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_107 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 220;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_107);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_107, mod_consts[75]);
                Py_DECREF(tmp_expression_value_107);
                if (tmp_called_value_36 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 220;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_108 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_108 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_108 == NULL)) {
                            tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_108 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_36);

                            exception_lineno = 221;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_108);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, mod_consts[77]);
                Py_DECREF(tmp_expression_value_108);
                if (tmp_args_element_value_38 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_36);

                    exception_lineno = 221;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_39 = mod_consts[205];
                tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[6]);

                if (unlikely(tmp_expression_value_109 == NULL)) {
                    tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
                }

                assert(!(tmp_expression_value_109 == NULL));
                tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_109, mod_consts[90]);
                if (tmp_called_value_37 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_36);
                    Py_DECREF(tmp_args_element_value_38);

                    exception_lineno = 224;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_41 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[59]);

                if (tmp_args_element_value_41 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_41 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[59]);

                        if (unlikely(tmp_args_element_value_41 == NULL)) {
                            tmp_args_element_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
                        }

                        if (tmp_args_element_value_41 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_36);
                            Py_DECREF(tmp_args_element_value_38);
                            Py_DECREF(tmp_called_value_37);

                            exception_lineno = 224;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_args_element_value_41);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 224;
                tmp_list_element_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_41);
                Py_DECREF(tmp_called_value_37);
                Py_DECREF(tmp_args_element_value_41);
                if (tmp_list_element_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_36);
                    Py_DECREF(tmp_args_element_value_38);

                    exception_lineno = 224;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_40 = MAKE_LIST_EMPTY(3);
                {
                    PyObject *tmp_called_instance_110;
                    PyObject *tmp_called_value_38;
                    PyObject *tmp_expression_value_110;
                    PyObject *tmp_args_element_value_42;
                    PyObject *tmp_called_value_39;
                    PyObject *tmp_expression_value_111;
                    PyObject *tmp_args_element_value_43;
                    PyList_SET_ITEM(tmp_args_element_value_40, 0, tmp_list_element_12);
                    tmp_called_instance_110 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_110 == NULL)) {
                        tmp_called_instance_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
                    }

                    assert(!(tmp_called_instance_110 == NULL));
                    frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 225;
                    tmp_list_element_12 = CALL_METHOD_WITH_SINGLE_ARG(
                        tstate,
                        tmp_called_instance_110,
                        mod_consts[90],
                        PyTuple_GET_ITEM(mod_consts[206], 0)
                    );

                    if (tmp_list_element_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 225;
                        type_description_2 = "o";
                        goto list_build_exception_10;
                    }
                    PyList_SET_ITEM(tmp_args_element_value_40, 1, tmp_list_element_12);
                    tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_expression_value_110 == NULL)) {
                        tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
                    }

                    assert(!(tmp_expression_value_110 == NULL));
                    tmp_called_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_110, mod_consts[90]);
                    if (tmp_called_value_38 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 226;
                        type_description_2 = "o";
                        goto list_build_exception_10;
                    }
                    tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_expression_value_111 == NULL)) {
                        tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
                    }

                    assert(!(tmp_expression_value_111 == NULL));
                    tmp_called_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, mod_consts[90]);
                    if (tmp_called_value_39 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_38);

                        exception_lineno = 226;
                        type_description_2 = "o";
                        goto list_build_exception_10;
                    }
                    tmp_args_element_value_43 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[87]);

                    if (tmp_args_element_value_43 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_43 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[87]);

                            if (unlikely(tmp_args_element_value_43 == NULL)) {
                                tmp_args_element_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
                            }

                            if (tmp_args_element_value_43 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_38);
                                Py_DECREF(tmp_called_value_39);

                                exception_lineno = 226;
                                type_description_2 = "o";
                                goto list_build_exception_10;
                            }
                            Py_INCREF(tmp_args_element_value_43);
                        } else {
                            goto list_build_exception_10;
                        }
                    }

                    frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 226;
                    tmp_args_element_value_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_39, tmp_args_element_value_43);
                    Py_DECREF(tmp_called_value_39);
                    Py_DECREF(tmp_args_element_value_43);
                    if (tmp_args_element_value_42 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_38);

                        exception_lineno = 226;
                        type_description_2 = "o";
                        goto list_build_exception_10;
                    }
                    frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 226;
                    tmp_list_element_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_38, tmp_args_element_value_42);
                    Py_DECREF(tmp_called_value_38);
                    Py_DECREF(tmp_args_element_value_42);
                    if (tmp_list_element_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 226;
                        type_description_2 = "o";
                        goto list_build_exception_10;
                    }
                    PyList_SET_ITEM(tmp_args_element_value_40, 2, tmp_list_element_12);
                }
                goto list_build_noexception_9;
                // Exception handling pass through code for list_build:
                list_build_exception_10:;
                Py_DECREF(tmp_called_value_36);
                Py_DECREF(tmp_args_element_value_38);
                Py_DECREF(tmp_args_element_value_40);
                goto list_build_exception_9;
                // Finished with no exception for list_build:
                list_build_noexception_9:;
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 220;
                {
                    PyObject *call_args[] = {tmp_args_element_value_38, tmp_args_element_value_39, tmp_args_element_value_40};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_36, call_args);
                }

                Py_DECREF(tmp_called_value_36);
                Py_DECREF(tmp_args_element_value_38);
                Py_DECREF(tmp_args_element_value_40);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 220;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_11);
                tmp_expression_value_112 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_112 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_112 == NULL)) {
                            tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_112 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 229;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_112);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_112, mod_consts[75]);
                Py_DECREF(tmp_expression_value_112);
                if (tmp_called_value_40 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 229;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_113 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_113 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_113 == NULL)) {
                            tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_113 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_40);

                            exception_lineno = 229;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_113);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_113, mod_consts[77]);
                Py_DECREF(tmp_expression_value_113);
                if (tmp_args_element_value_44 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_40);

                    exception_lineno = 229;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_45 = mod_consts[207];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 229;
                {
                    PyObject *call_args[] = {tmp_args_element_value_44, tmp_args_element_value_45};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_40, call_args);
                }

                Py_DECREF(tmp_called_value_40);
                Py_DECREF(tmp_args_element_value_44);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 229;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_11);
                tmp_expression_value_114 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_114 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_114 == NULL)) {
                            tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_114 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 230;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_114);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_114, mod_consts[75]);
                Py_DECREF(tmp_expression_value_114);
                if (tmp_called_value_41 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 230;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_115 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_115 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_115 == NULL)) {
                            tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_115 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_41);

                            exception_lineno = 230;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_115);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_115, mod_consts[77]);
                Py_DECREF(tmp_expression_value_115);
                if (tmp_args_element_value_46 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_41);

                    exception_lineno = 230;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_47 = mod_consts[208];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 230;
                {
                    PyObject *call_args[] = {tmp_args_element_value_46, tmp_args_element_value_47};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_41, call_args);
                }

                Py_DECREF(tmp_called_value_41);
                Py_DECREF(tmp_args_element_value_46);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 230;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_11);
                tmp_expression_value_116 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_116 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_116 == NULL)) {
                            tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_116 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 231;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_116);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_116, mod_consts[75]);
                Py_DECREF(tmp_expression_value_116);
                if (tmp_called_value_42 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 231;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_117 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_117 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_117 == NULL)) {
                            tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_117 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_42);

                            exception_lineno = 231;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_117);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, mod_consts[77]);
                Py_DECREF(tmp_expression_value_117);
                if (tmp_args_element_value_48 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_42);

                    exception_lineno = 231;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_49 = mod_consts[209];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 231;
                {
                    PyObject *call_args[] = {tmp_args_element_value_48, tmp_args_element_value_49};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_42, call_args);
                }

                Py_DECREF(tmp_called_value_42);
                Py_DECREF(tmp_args_element_value_48);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 231;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_11);
                tmp_expression_value_118 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_118 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_118 == NULL)) {
                            tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_118 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 232;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_118);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_118, mod_consts[75]);
                Py_DECREF(tmp_expression_value_118);
                if (tmp_called_value_43 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 232;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_119 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_119 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_119 == NULL)) {
                            tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_119 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_43);

                            exception_lineno = 232;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_119);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_119, mod_consts[77]);
                Py_DECREF(tmp_expression_value_119);
                if (tmp_args_element_value_50 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_43);

                    exception_lineno = 232;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_51 = mod_consts[210];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 232;
                {
                    PyObject *call_args[] = {tmp_args_element_value_50, tmp_args_element_value_51};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_43, call_args);
                }

                Py_DECREF(tmp_called_value_43);
                Py_DECREF(tmp_args_element_value_50);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 232;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 6, tmp_list_element_11);
                tmp_expression_value_120 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_120 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_120 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_120 == NULL)) {
                            tmp_expression_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_120 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 233;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_120);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_120, mod_consts[75]);
                Py_DECREF(tmp_expression_value_120);
                if (tmp_called_value_44 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 233;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_121 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_121 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_121 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_121 == NULL)) {
                            tmp_expression_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_121 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_44);

                            exception_lineno = 233;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_121);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_121, mod_consts[77]);
                Py_DECREF(tmp_expression_value_121);
                if (tmp_args_element_value_52 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_44);

                    exception_lineno = 233;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_53 = mod_consts[211];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 233;
                {
                    PyObject *call_args[] = {tmp_args_element_value_52, tmp_args_element_value_53};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_44, call_args);
                }

                Py_DECREF(tmp_called_value_44);
                Py_DECREF(tmp_args_element_value_52);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 233;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 7, tmp_list_element_11);
                tmp_expression_value_122 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_122 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_122 == NULL)) {
                            tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_122 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 234;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_122);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_122, mod_consts[75]);
                Py_DECREF(tmp_expression_value_122);
                if (tmp_called_value_45 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 234;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_123 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_123 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_123 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_123 == NULL)) {
                            tmp_expression_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_123 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_45);

                            exception_lineno = 234;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_123);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_123, mod_consts[77]);
                Py_DECREF(tmp_expression_value_123);
                if (tmp_args_element_value_54 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_45);

                    exception_lineno = 234;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_55 = mod_consts[212];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 234;
                {
                    PyObject *call_args[] = {tmp_args_element_value_54, tmp_args_element_value_55};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_45, call_args);
                }

                Py_DECREF(tmp_called_value_45);
                Py_DECREF(tmp_args_element_value_54);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 234;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 8, tmp_list_element_11);
                tmp_expression_value_124 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_124 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_124 == NULL)) {
                            tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_124 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 235;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_124);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_124, mod_consts[75]);
                Py_DECREF(tmp_expression_value_124);
                if (tmp_called_value_46 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 235;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_125 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_125 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_125 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_125 == NULL)) {
                            tmp_expression_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_125 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_46);

                            exception_lineno = 235;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_125);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_125, mod_consts[77]);
                Py_DECREF(tmp_expression_value_125);
                if (tmp_args_element_value_56 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_46);

                    exception_lineno = 235;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_57 = mod_consts[213];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 235;
                {
                    PyObject *call_args[] = {tmp_args_element_value_56, tmp_args_element_value_57};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_46, call_args);
                }

                Py_DECREF(tmp_called_value_46);
                Py_DECREF(tmp_args_element_value_56);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 235;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 9, tmp_list_element_11);
                tmp_expression_value_126 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_126 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_126 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_126 == NULL)) {
                            tmp_expression_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_126 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 236;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_126);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_126, mod_consts[75]);
                Py_DECREF(tmp_expression_value_126);
                if (tmp_called_value_47 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 236;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_127 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_127 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_127 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_127 == NULL)) {
                            tmp_expression_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_127 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_47);

                            exception_lineno = 236;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_127);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_127, mod_consts[77]);
                Py_DECREF(tmp_expression_value_127);
                if (tmp_args_element_value_58 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_47);

                    exception_lineno = 236;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_59 = mod_consts[214];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 236;
                {
                    PyObject *call_args[] = {tmp_args_element_value_58, tmp_args_element_value_59};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_47, call_args);
                }

                Py_DECREF(tmp_called_value_47);
                Py_DECREF(tmp_args_element_value_58);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 236;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 10, tmp_list_element_11);
                tmp_expression_value_128 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_128 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_128 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_128 == NULL)) {
                            tmp_expression_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_128 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 237;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_128);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_128, mod_consts[75]);
                Py_DECREF(tmp_expression_value_128);
                if (tmp_called_value_48 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 237;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_129 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_129 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_129 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_129 == NULL)) {
                            tmp_expression_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_129 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_48);

                            exception_lineno = 237;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_129);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_129, mod_consts[77]);
                Py_DECREF(tmp_expression_value_129);
                if (tmp_args_element_value_60 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_48);

                    exception_lineno = 237;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_61 = mod_consts[215];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 237;
                {
                    PyObject *call_args[] = {tmp_args_element_value_60, tmp_args_element_value_61};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_48, call_args);
                }

                Py_DECREF(tmp_called_value_48);
                Py_DECREF(tmp_args_element_value_60);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 237;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 11, tmp_list_element_11);
                tmp_expression_value_130 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_130 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_130 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_130 == NULL)) {
                            tmp_expression_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_130 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 238;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_130);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_130, mod_consts[75]);
                Py_DECREF(tmp_expression_value_130);
                if (tmp_called_value_49 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 238;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_131 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_131 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_131 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_131 == NULL)) {
                            tmp_expression_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_131 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_49);

                            exception_lineno = 238;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_131);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_131, mod_consts[77]);
                Py_DECREF(tmp_expression_value_131);
                if (tmp_args_element_value_62 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_49);

                    exception_lineno = 238;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_63 = mod_consts[216];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 238;
                {
                    PyObject *call_args[] = {tmp_args_element_value_62, tmp_args_element_value_63};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_49, call_args);
                }

                Py_DECREF(tmp_called_value_49);
                Py_DECREF(tmp_args_element_value_62);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 238;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 12, tmp_list_element_11);
                tmp_expression_value_132 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_132 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_132 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_132 == NULL)) {
                            tmp_expression_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_132 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 239;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_132);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_132, mod_consts[75]);
                Py_DECREF(tmp_expression_value_132);
                if (tmp_called_value_50 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 239;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_133 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_133 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_133 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_133 == NULL)) {
                            tmp_expression_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_133 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_50);

                            exception_lineno = 239;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_133);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_133, mod_consts[77]);
                Py_DECREF(tmp_expression_value_133);
                if (tmp_args_element_value_64 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_50);

                    exception_lineno = 239;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_65 = mod_consts[217];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 239;
                {
                    PyObject *call_args[] = {tmp_args_element_value_64, tmp_args_element_value_65};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_50, call_args);
                }

                Py_DECREF(tmp_called_value_50);
                Py_DECREF(tmp_args_element_value_64);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 239;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 13, tmp_list_element_11);
                tmp_expression_value_134 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_134 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_134 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_134 == NULL)) {
                            tmp_expression_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_134 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 240;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_134);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_134, mod_consts[75]);
                Py_DECREF(tmp_expression_value_134);
                if (tmp_called_value_51 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 240;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_135 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_135 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_135 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_135 == NULL)) {
                            tmp_expression_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_135 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_51);

                            exception_lineno = 240;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_135);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_135, mod_consts[77]);
                Py_DECREF(tmp_expression_value_135);
                if (tmp_args_element_value_66 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_51);

                    exception_lineno = 240;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_67 = mod_consts[218];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 240;
                {
                    PyObject *call_args[] = {tmp_args_element_value_66, tmp_args_element_value_67};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_51, call_args);
                }

                Py_DECREF(tmp_called_value_51);
                Py_DECREF(tmp_args_element_value_66);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 240;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 14, tmp_list_element_11);
                tmp_expression_value_136 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_136 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_136 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_136 == NULL)) {
                            tmp_expression_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_136 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 241;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_136);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_136, mod_consts[75]);
                Py_DECREF(tmp_expression_value_136);
                if (tmp_called_value_52 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 241;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_137 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_137 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_137 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_137 == NULL)) {
                            tmp_expression_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_137 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_52);

                            exception_lineno = 241;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_137);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_137, mod_consts[77]);
                Py_DECREF(tmp_expression_value_137);
                if (tmp_args_element_value_68 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_52);

                    exception_lineno = 241;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_69 = mod_consts[219];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 241;
                {
                    PyObject *call_args[] = {tmp_args_element_value_68, tmp_args_element_value_69};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_52, call_args);
                }

                Py_DECREF(tmp_called_value_52);
                Py_DECREF(tmp_args_element_value_68);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 241;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 15, tmp_list_element_11);
                tmp_expression_value_138 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_138 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_138 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_138 == NULL)) {
                            tmp_expression_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_138 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 242;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_138);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_138, mod_consts[75]);
                Py_DECREF(tmp_expression_value_138);
                if (tmp_called_value_53 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 242;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_139 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_139 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_139 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_139 == NULL)) {
                            tmp_expression_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_139 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_53);

                            exception_lineno = 242;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_139);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_139, mod_consts[77]);
                Py_DECREF(tmp_expression_value_139);
                if (tmp_args_element_value_70 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_53);

                    exception_lineno = 242;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_71 = mod_consts[220];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 242;
                {
                    PyObject *call_args[] = {tmp_args_element_value_70, tmp_args_element_value_71};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_53, call_args);
                }

                Py_DECREF(tmp_called_value_53);
                Py_DECREF(tmp_args_element_value_70);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 242;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 16, tmp_list_element_11);
                tmp_expression_value_140 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_140 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_140 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_140 == NULL)) {
                            tmp_expression_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_140 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 243;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_140);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_140, mod_consts[75]);
                Py_DECREF(tmp_expression_value_140);
                if (tmp_called_value_54 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 243;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_141 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_141 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_141 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_141 == NULL)) {
                            tmp_expression_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_141 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_54);

                            exception_lineno = 243;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_141);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_141, mod_consts[77]);
                Py_DECREF(tmp_expression_value_141);
                if (tmp_args_element_value_72 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_54);

                    exception_lineno = 243;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_73 = mod_consts[221];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 243;
                {
                    PyObject *call_args[] = {tmp_args_element_value_72, tmp_args_element_value_73};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_54, call_args);
                }

                Py_DECREF(tmp_called_value_54);
                Py_DECREF(tmp_args_element_value_72);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 243;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 17, tmp_list_element_11);
                tmp_expression_value_142 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_142 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_142 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_142 == NULL)) {
                            tmp_expression_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_142 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 244;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_142);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_142, mod_consts[75]);
                Py_DECREF(tmp_expression_value_142);
                if (tmp_called_value_55 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 244;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_143 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_143 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_143 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_143 == NULL)) {
                            tmp_expression_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_143 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_55);

                            exception_lineno = 244;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_143);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_143, mod_consts[77]);
                Py_DECREF(tmp_expression_value_143);
                if (tmp_args_element_value_74 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_55);

                    exception_lineno = 244;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_75 = mod_consts[222];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 244;
                {
                    PyObject *call_args[] = {tmp_args_element_value_74, tmp_args_element_value_75};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_55, call_args);
                }

                Py_DECREF(tmp_called_value_55);
                Py_DECREF(tmp_args_element_value_74);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 244;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 18, tmp_list_element_11);
                tmp_expression_value_144 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_144 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_144 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_144 == NULL)) {
                            tmp_expression_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_144 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 245;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_144);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_144, mod_consts[75]);
                Py_DECREF(tmp_expression_value_144);
                if (tmp_called_value_56 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 245;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_145 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_145 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_145 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_145 == NULL)) {
                            tmp_expression_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_145 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_56);

                            exception_lineno = 245;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_145);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_76 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_145, mod_consts[77]);
                Py_DECREF(tmp_expression_value_145);
                if (tmp_args_element_value_76 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_56);

                    exception_lineno = 245;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_77 = mod_consts[223];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 245;
                {
                    PyObject *call_args[] = {tmp_args_element_value_76, tmp_args_element_value_77};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_56, call_args);
                }

                Py_DECREF(tmp_called_value_56);
                Py_DECREF(tmp_args_element_value_76);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 245;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 19, tmp_list_element_11);
                tmp_expression_value_146 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_146 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_146 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_146 == NULL)) {
                            tmp_expression_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_146 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 246;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_146);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_146, mod_consts[75]);
                Py_DECREF(tmp_expression_value_146);
                if (tmp_called_value_57 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 246;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_147 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_147 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_147 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_147 == NULL)) {
                            tmp_expression_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_147 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_57);

                            exception_lineno = 246;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_147);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_147, mod_consts[77]);
                Py_DECREF(tmp_expression_value_147);
                if (tmp_args_element_value_78 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_57);

                    exception_lineno = 246;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_79 = mod_consts[224];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 246;
                {
                    PyObject *call_args[] = {tmp_args_element_value_78, tmp_args_element_value_79};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_57, call_args);
                }

                Py_DECREF(tmp_called_value_57);
                Py_DECREF(tmp_args_element_value_78);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 246;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 20, tmp_list_element_11);
                tmp_expression_value_148 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_148 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_148 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_148 == NULL)) {
                            tmp_expression_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_148 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 247;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_148);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_148, mod_consts[75]);
                Py_DECREF(tmp_expression_value_148);
                if (tmp_called_value_58 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 247;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_149 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_149 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_149 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_149 == NULL)) {
                            tmp_expression_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_149 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_58);

                            exception_lineno = 247;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_149);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_80 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_149, mod_consts[77]);
                Py_DECREF(tmp_expression_value_149);
                if (tmp_args_element_value_80 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_58);

                    exception_lineno = 247;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_81 = mod_consts[225];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 247;
                {
                    PyObject *call_args[] = {tmp_args_element_value_80, tmp_args_element_value_81};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_58, call_args);
                }

                Py_DECREF(tmp_called_value_58);
                Py_DECREF(tmp_args_element_value_80);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 247;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 21, tmp_list_element_11);
                tmp_expression_value_150 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_150 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_150 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_150 == NULL)) {
                            tmp_expression_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_150 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 248;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_150);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_150, mod_consts[75]);
                Py_DECREF(tmp_expression_value_150);
                if (tmp_called_value_59 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 248;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_151 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_151 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_151 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_151 == NULL)) {
                            tmp_expression_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_151 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_59);

                            exception_lineno = 248;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_151);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_151, mod_consts[77]);
                Py_DECREF(tmp_expression_value_151);
                if (tmp_args_element_value_82 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_59);

                    exception_lineno = 248;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_83 = mod_consts[226];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 248;
                {
                    PyObject *call_args[] = {tmp_args_element_value_82, tmp_args_element_value_83};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_59, call_args);
                }

                Py_DECREF(tmp_called_value_59);
                Py_DECREF(tmp_args_element_value_82);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 248;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 22, tmp_list_element_11);
                tmp_expression_value_152 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_152 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_152 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_152 == NULL)) {
                            tmp_expression_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_152 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 249;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_152);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_152, mod_consts[75]);
                Py_DECREF(tmp_expression_value_152);
                if (tmp_called_value_60 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 249;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_153 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_153 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_153 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_153 == NULL)) {
                            tmp_expression_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_153 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_60);

                            exception_lineno = 249;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_153);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_84 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_153, mod_consts[77]);
                Py_DECREF(tmp_expression_value_153);
                if (tmp_args_element_value_84 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_60);

                    exception_lineno = 249;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_85 = mod_consts[227];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 249;
                {
                    PyObject *call_args[] = {tmp_args_element_value_84, tmp_args_element_value_85};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_60, call_args);
                }

                Py_DECREF(tmp_called_value_60);
                Py_DECREF(tmp_args_element_value_84);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 249;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 23, tmp_list_element_11);
                tmp_expression_value_154 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_154 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_154 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_154 == NULL)) {
                            tmp_expression_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_154 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 250;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_154);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_154, mod_consts[75]);
                Py_DECREF(tmp_expression_value_154);
                if (tmp_called_value_61 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 250;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_155 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_155 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_155 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_155 == NULL)) {
                            tmp_expression_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_155 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_61);

                            exception_lineno = 250;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_155);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_86 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_155, mod_consts[77]);
                Py_DECREF(tmp_expression_value_155);
                if (tmp_args_element_value_86 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_61);

                    exception_lineno = 250;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_87 = mod_consts[228];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 250;
                {
                    PyObject *call_args[] = {tmp_args_element_value_86, tmp_args_element_value_87};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_61, call_args);
                }

                Py_DECREF(tmp_called_value_61);
                Py_DECREF(tmp_args_element_value_86);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 250;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 24, tmp_list_element_11);
                tmp_expression_value_156 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_156 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_156 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_156 == NULL)) {
                            tmp_expression_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_156 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 251;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_156);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_156, mod_consts[75]);
                Py_DECREF(tmp_expression_value_156);
                if (tmp_called_value_62 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 251;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_157 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_157 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_157 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_157 == NULL)) {
                            tmp_expression_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_157 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_62);

                            exception_lineno = 251;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_157);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_88 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_157, mod_consts[77]);
                Py_DECREF(tmp_expression_value_157);
                if (tmp_args_element_value_88 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_62);

                    exception_lineno = 251;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_89 = mod_consts[229];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 251;
                {
                    PyObject *call_args[] = {tmp_args_element_value_88, tmp_args_element_value_89};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_62, call_args);
                }

                Py_DECREF(tmp_called_value_62);
                Py_DECREF(tmp_args_element_value_88);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 251;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 25, tmp_list_element_11);
                tmp_expression_value_158 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_158 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_158 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_158 == NULL)) {
                            tmp_expression_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_158 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 252;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_158);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_158, mod_consts[75]);
                Py_DECREF(tmp_expression_value_158);
                if (tmp_called_value_63 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 252;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_159 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_159 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_159 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_159 == NULL)) {
                            tmp_expression_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_159 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_63);

                            exception_lineno = 252;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_159);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_90 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_159, mod_consts[77]);
                Py_DECREF(tmp_expression_value_159);
                if (tmp_args_element_value_90 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_63);

                    exception_lineno = 252;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_91 = mod_consts[230];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 252;
                {
                    PyObject *call_args[] = {tmp_args_element_value_90, tmp_args_element_value_91};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_63, call_args);
                }

                Py_DECREF(tmp_called_value_63);
                Py_DECREF(tmp_args_element_value_90);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 252;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 26, tmp_list_element_11);
                tmp_expression_value_160 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_160 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_160 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_160 == NULL)) {
                            tmp_expression_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_160 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 253;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_160);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_160, mod_consts[75]);
                Py_DECREF(tmp_expression_value_160);
                if (tmp_called_value_64 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 253;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_161 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_161 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_161 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_161 == NULL)) {
                            tmp_expression_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_161 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_64);

                            exception_lineno = 253;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_161);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_92 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_161, mod_consts[77]);
                Py_DECREF(tmp_expression_value_161);
                if (tmp_args_element_value_92 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_64);

                    exception_lineno = 253;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_93 = mod_consts[231];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 253;
                {
                    PyObject *call_args[] = {tmp_args_element_value_92, tmp_args_element_value_93};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_64, call_args);
                }

                Py_DECREF(tmp_called_value_64);
                Py_DECREF(tmp_args_element_value_92);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 253;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 27, tmp_list_element_11);
                tmp_expression_value_162 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_162 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_162 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_162 == NULL)) {
                            tmp_expression_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_162 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 254;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_162);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_162, mod_consts[75]);
                Py_DECREF(tmp_expression_value_162);
                if (tmp_called_value_65 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 254;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_163 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_163 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_163 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_163 == NULL)) {
                            tmp_expression_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_163 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_65);

                            exception_lineno = 254;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_163);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_94 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_163, mod_consts[77]);
                Py_DECREF(tmp_expression_value_163);
                if (tmp_args_element_value_94 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_65);

                    exception_lineno = 254;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_95 = mod_consts[232];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 254;
                {
                    PyObject *call_args[] = {tmp_args_element_value_94, tmp_args_element_value_95};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_65, call_args);
                }

                Py_DECREF(tmp_called_value_65);
                Py_DECREF(tmp_args_element_value_94);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 254;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 28, tmp_list_element_11);
                tmp_expression_value_164 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_164 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_164 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_164 == NULL)) {
                            tmp_expression_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_164 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 255;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_164);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_164, mod_consts[75]);
                Py_DECREF(tmp_expression_value_164);
                if (tmp_called_value_66 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 255;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_165 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_165 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_165 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_165 == NULL)) {
                            tmp_expression_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_165 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_66);

                            exception_lineno = 255;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_165);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_96 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_165, mod_consts[77]);
                Py_DECREF(tmp_expression_value_165);
                if (tmp_args_element_value_96 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_66);

                    exception_lineno = 255;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_97 = mod_consts[233];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 255;
                {
                    PyObject *call_args[] = {tmp_args_element_value_96, tmp_args_element_value_97};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_66, call_args);
                }

                Py_DECREF(tmp_called_value_66);
                Py_DECREF(tmp_args_element_value_96);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 255;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 29, tmp_list_element_11);
                tmp_expression_value_166 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_166 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_166 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_166 == NULL)) {
                            tmp_expression_value_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_166 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 256;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_166);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_166, mod_consts[75]);
                Py_DECREF(tmp_expression_value_166);
                if (tmp_called_value_67 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 256;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_167 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_167 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_167 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_167 == NULL)) {
                            tmp_expression_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_167 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_67);

                            exception_lineno = 256;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_167);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_98 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_167, mod_consts[77]);
                Py_DECREF(tmp_expression_value_167);
                if (tmp_args_element_value_98 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_67);

                    exception_lineno = 256;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_99 = mod_consts[234];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 256;
                {
                    PyObject *call_args[] = {tmp_args_element_value_98, tmp_args_element_value_99};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_67, call_args);
                }

                Py_DECREF(tmp_called_value_67);
                Py_DECREF(tmp_args_element_value_98);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 256;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 30, tmp_list_element_11);
                tmp_expression_value_168 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_168 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_168 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_168 == NULL)) {
                            tmp_expression_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_168 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 257;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_168);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_168, mod_consts[75]);
                Py_DECREF(tmp_expression_value_168);
                if (tmp_called_value_68 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 257;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_169 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_169 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_169 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_169 == NULL)) {
                            tmp_expression_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_169 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_68);

                            exception_lineno = 257;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_169);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_100 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_169, mod_consts[77]);
                Py_DECREF(tmp_expression_value_169);
                if (tmp_args_element_value_100 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_68);

                    exception_lineno = 257;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_101 = mod_consts[78];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 257;
                {
                    PyObject *call_args[] = {tmp_args_element_value_100, tmp_args_element_value_101};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_68, call_args);
                }

                Py_DECREF(tmp_called_value_68);
                Py_DECREF(tmp_args_element_value_100);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 257;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 31, tmp_list_element_11);
                tmp_expression_value_170 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_170 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_170 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_170 == NULL)) {
                            tmp_expression_value_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_170 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 258;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_170);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_69 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_170, mod_consts[75]);
                Py_DECREF(tmp_expression_value_170);
                if (tmp_called_value_69 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 258;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_171 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_171 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_171 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_171 == NULL)) {
                            tmp_expression_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_171 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_69);

                            exception_lineno = 258;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_171);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_102 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_171, mod_consts[77]);
                Py_DECREF(tmp_expression_value_171);
                if (tmp_args_element_value_102 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_69);

                    exception_lineno = 258;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_103 = mod_consts[79];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 258;
                {
                    PyObject *call_args[] = {tmp_args_element_value_102, tmp_args_element_value_103};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_69, call_args);
                }

                Py_DECREF(tmp_called_value_69);
                Py_DECREF(tmp_args_element_value_102);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 258;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 32, tmp_list_element_11);
                tmp_expression_value_172 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_172 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_172 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_172 == NULL)) {
                            tmp_expression_value_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_172 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 259;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_172);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_172, mod_consts[75]);
                Py_DECREF(tmp_expression_value_172);
                if (tmp_called_value_70 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 259;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_173 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_173 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_173 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_173 == NULL)) {
                            tmp_expression_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_173 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_70);

                            exception_lineno = 259;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_173);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_104 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_173, mod_consts[77]);
                Py_DECREF(tmp_expression_value_173);
                if (tmp_args_element_value_104 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_70);

                    exception_lineno = 259;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_105 = mod_consts[80];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 259;
                {
                    PyObject *call_args[] = {tmp_args_element_value_104, tmp_args_element_value_105};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_70, call_args);
                }

                Py_DECREF(tmp_called_value_70);
                Py_DECREF(tmp_args_element_value_104);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 259;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 33, tmp_list_element_11);
                tmp_expression_value_174 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_174 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_174 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_174 == NULL)) {
                            tmp_expression_value_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_174 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 260;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_174);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_71 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_174, mod_consts[75]);
                Py_DECREF(tmp_expression_value_174);
                if (tmp_called_value_71 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 260;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_175 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[6]);

                if (unlikely(tmp_expression_value_175 == NULL)) {
                    tmp_expression_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
                }

                assert(!(tmp_expression_value_175 == NULL));
                tmp_args_element_value_106 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_175, mod_consts[235]);
                if (tmp_args_element_value_106 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_71);

                    exception_lineno = 260;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_107 = mod_consts[236];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 260;
                {
                    PyObject *call_args[] = {tmp_args_element_value_106, tmp_args_element_value_107};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_71, call_args);
                }

                Py_DECREF(tmp_called_value_71);
                Py_DECREF(tmp_args_element_value_106);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 260;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 34, tmp_list_element_11);
                tmp_expression_value_176 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_176 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_176 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_176 == NULL)) {
                            tmp_expression_value_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_176 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 261;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_176);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_176, mod_consts[75]);
                Py_DECREF(tmp_expression_value_176);
                if (tmp_called_value_72 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 261;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_177 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[6]);

                if (unlikely(tmp_expression_value_177 == NULL)) {
                    tmp_expression_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
                }

                assert(!(tmp_expression_value_177 == NULL));
                tmp_args_element_value_108 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_177, mod_consts[237]);
                if (tmp_args_element_value_108 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_72);

                    exception_lineno = 261;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_109 = mod_consts[238];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 261;
                {
                    PyObject *call_args[] = {tmp_args_element_value_108, tmp_args_element_value_109};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_72, call_args);
                }

                Py_DECREF(tmp_called_value_72);
                Py_DECREF(tmp_args_element_value_108);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 261;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 35, tmp_list_element_11);
                tmp_expression_value_178 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_178 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_178 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_178 == NULL)) {
                            tmp_expression_value_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_178 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 262;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_178);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_73 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_178, mod_consts[75]);
                Py_DECREF(tmp_expression_value_178);
                if (tmp_called_value_73 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 262;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_179 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_179 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_179 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_179 == NULL)) {
                            tmp_expression_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_179 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_73);

                            exception_lineno = 262;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_179);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_110 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_179, mod_consts[77]);
                Py_DECREF(tmp_expression_value_179);
                if (tmp_args_element_value_110 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_73);

                    exception_lineno = 262;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_111 = mod_consts[239];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 262;
                {
                    PyObject *call_args[] = {tmp_args_element_value_110, tmp_args_element_value_111};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_73, call_args);
                }

                Py_DECREF(tmp_called_value_73);
                Py_DECREF(tmp_args_element_value_110);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 262;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 36, tmp_list_element_11);
                tmp_expression_value_180 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_180 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_180 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_180 == NULL)) {
                            tmp_expression_value_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_180 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 263;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_180);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_180, mod_consts[75]);
                Py_DECREF(tmp_expression_value_180);
                if (tmp_called_value_74 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 263;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_112 = Py_None;
                tmp_args_element_value_113 = mod_consts[240];
                tmp_expression_value_181 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[6]);

                if (unlikely(tmp_expression_value_181 == NULL)) {
                    tmp_expression_value_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
                }

                assert(!(tmp_expression_value_181 == NULL));
                tmp_called_value_75 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_181, mod_consts[90]);
                if (tmp_called_value_75 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_74);

                    exception_lineno = 266;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_182 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[6]);

                if (unlikely(tmp_expression_value_182 == NULL)) {
                    tmp_expression_value_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
                }

                assert(!(tmp_expression_value_182 == NULL));
                tmp_called_value_76 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_182, mod_consts[90]);
                if (tmp_called_value_76 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_74);
                    Py_DECREF(tmp_called_value_75);

                    exception_lineno = 266;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_116 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[91]);

                if (tmp_args_element_value_116 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_116 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[91]);

                        if (unlikely(tmp_args_element_value_116 == NULL)) {
                            tmp_args_element_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
                        }

                        if (tmp_args_element_value_116 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_74);
                            Py_DECREF(tmp_called_value_75);
                            Py_DECREF(tmp_called_value_76);

                            exception_lineno = 266;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_args_element_value_116);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 266;
                tmp_args_element_value_115 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_76, tmp_args_element_value_116);
                Py_DECREF(tmp_called_value_76);
                Py_DECREF(tmp_args_element_value_116);
                if (tmp_args_element_value_115 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_74);
                    Py_DECREF(tmp_called_value_75);

                    exception_lineno = 266;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 266;
                tmp_list_element_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_75, tmp_args_element_value_115);
                Py_DECREF(tmp_called_value_75);
                Py_DECREF(tmp_args_element_value_115);
                if (tmp_list_element_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_74);

                    exception_lineno = 266;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_114 = MAKE_LIST_EMPTY(1);
                PyList_SET_ITEM(tmp_args_element_value_114, 0, tmp_list_element_13);
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 263;
                {
                    PyObject *call_args[] = {tmp_args_element_value_112, tmp_args_element_value_113, tmp_args_element_value_114};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_74, call_args);
                }

                Py_DECREF(tmp_called_value_74);
                Py_DECREF(tmp_args_element_value_114);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 263;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 37, tmp_list_element_11);
                tmp_expression_value_183 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_183 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_183 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_183 == NULL)) {
                            tmp_expression_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_183 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 268;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_183);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_77 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_183, mod_consts[75]);
                Py_DECREF(tmp_expression_value_183);
                if (tmp_called_value_77 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 268;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_184 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_184 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_184 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_184 == NULL)) {
                            tmp_expression_value_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_184 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_77);

                            exception_lineno = 268;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_184);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_117 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_184, mod_consts[77]);
                Py_DECREF(tmp_expression_value_184);
                if (tmp_args_element_value_117 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_77);

                    exception_lineno = 268;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_118 = mod_consts[241];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 268;
                {
                    PyObject *call_args[] = {tmp_args_element_value_117, tmp_args_element_value_118};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_77, call_args);
                }

                Py_DECREF(tmp_called_value_77);
                Py_DECREF(tmp_args_element_value_117);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 268;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 38, tmp_list_element_11);
                tmp_expression_value_185 = PyObject_GetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[8]);

                if (tmp_expression_value_185 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_185 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_value_185 == NULL)) {
                            tmp_expression_value_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                        }

                        if (tmp_expression_value_185 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 269;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_185);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_185, mod_consts[75]);
                Py_DECREF(tmp_expression_value_185);
                if (tmp_called_value_78 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 269;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_186 = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[6]);

                if (unlikely(tmp_expression_value_186 == NULL)) {
                    tmp_expression_value_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
                }

                assert(!(tmp_expression_value_186 == NULL));
                tmp_args_element_value_119 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_186, mod_consts[237]);
                if (tmp_args_element_value_119 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_78);

                    exception_lineno = 269;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_120 = mod_consts[242];
                frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame.f_lineno = 269;
                {
                    PyObject *call_args[] = {tmp_args_element_value_119, tmp_args_element_value_120};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_78, call_args);
                }

                Py_DECREF(tmp_called_value_78);
                Py_DECREF(tmp_args_element_value_119);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 269;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 39, tmp_list_element_11);
            }
            goto list_build_noexception_10;
            // Exception handling pass through code for list_build:
            list_build_exception_9:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_9;
            // Finished with no exception for list_build:
            list_build_noexception_10:;
            tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[81], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_8;
        frame_exception_exit_9:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4e2858c1a0b8ebfc9cc9ba3806252678_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4e2858c1a0b8ebfc9cc9ba3806252678_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4e2858c1a0b8ebfc9cc9ba3806252678_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4e2858c1a0b8ebfc9cc9ba3806252678_9,
            type_description_2,
            outline_7_var___class__
        );



        assertFrameObject(frame_4e2858c1a0b8ebfc9cc9ba3806252678_9);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_8;
        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_24;
        skip_nested_handling_8:;
        {
            nuitka_bool tmp_condition_result_32;
            PyObject *tmp_cmp_expr_left_8;
            PyObject *tmp_cmp_expr_right_8;
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_cmp_expr_left_8 = tmp_class_creation_8__bases;
            CHECK_OBJECT(tmp_class_creation_8__bases_orig);
            tmp_cmp_expr_right_8 = tmp_class_creation_8__bases_orig;
            tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
            if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;

                goto try_except_handler_24;
            }
            if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
                goto branch_yes_24;
            } else {
                goto branch_no_24;
            }
        }
        branch_yes_24:;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dictset_value = tmp_class_creation_8__bases_orig;
        tmp_res = PyObject_SetItem(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215, mod_consts[51], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto try_except_handler_24;
        }
        branch_no_24:;
        {
            PyObject *tmp_assign_source_84;
            PyObject *tmp_called_value_79;
            PyObject *tmp_args_value_16;
            PyObject *tmp_tuple_element_50;
            PyObject *tmp_kwargs_value_16;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_value_79 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_50 = mod_consts[201];
            tmp_args_value_16 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_50);
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_tuple_element_50 = tmp_class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_50);
            tmp_tuple_element_50 = locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215;
            PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_50);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_16 = tmp_class_creation_8__class_decl_dict;
            frame_1f4a063c96cbf43c89330d982d1f58fe->m_frame.f_lineno = 215;
            tmp_assign_source_84 = CALL_FUNCTION(tstate, tmp_called_value_79, tmp_args_value_16, tmp_kwargs_value_16);
            Py_DECREF(tmp_args_value_16);
            if (tmp_assign_source_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;

                goto try_except_handler_24;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_84;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_assign_source_83 = outline_7_var___class__;
        Py_INCREF(tmp_assign_source_83);
        goto try_return_handler_24;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        Py_DECREF(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215);
        locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215 = NULL;
        goto try_return_handler_23;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215);
        locals_dxcam$_libs$d3d11$$$class__8_ID3D11Device_215 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto try_except_handler_23;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_23 = exception_type;
        exception_keeper_value_23 = exception_value;
        exception_keeper_tb_23 = exception_tb;
        exception_keeper_lineno_23 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 215;
        goto try_except_handler_22;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_83);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    Py_XDECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_9;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1f4a063c96cbf43c89330d982d1f58fe, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1f4a063c96cbf43c89330d982d1f58fe->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1f4a063c96cbf43c89330d982d1f58fe, exception_lineno);
    }



    assertFrameObject(frame_1f4a063c96cbf43c89330d982d1f58fe);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_9:;
    CHECK_OBJECT(tmp_class_creation_8__bases_orig);
    Py_DECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_8__bases);
    Py_DECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    Py_DECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__metaclass);
    Py_DECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("dxcam$_libs$d3d11", false);

    Py_INCREF(module_dxcam$_libs$d3d11);
    return module_dxcam$_libs$d3d11;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dxcam$_libs$d3d11, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("dxcam$_libs$d3d11", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
