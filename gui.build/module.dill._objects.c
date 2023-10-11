/* Generated code for Python module 'dill._objects'
 * created by Nuitka version 1.8.4
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

/* The "module_dill$_objects" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_dill$_objects;
PyDictObject *moduledict_dill$_objects;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[590];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[590];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("dill._objects"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 590; i++) {
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
void checkModuleConstants_dill$_objects(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 590; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_077d08c16c84adbeccc077df76aa29b3;
static PyCodeObject *codeobj_573cf272831cd28f93e145f8f943693c;
static PyCodeObject *codeobj_1c664af2f59e20d3a5b4e0994504da3e;
static PyCodeObject *codeobj_055af561147bc398dec138c5e48a8193;
static PyCodeObject *codeobj_e6ba311f3a3a3eb3fdd2c87e1312ef26;
static PyCodeObject *codeobj_1638f747bcbc4edabf696321c44b52b3;
static PyCodeObject *codeobj_a55d9e6b3a31706d6eca51ce22f64cd8;
static PyCodeObject *codeobj_4d86ac7c4dc33f1266112c2f4d78968d;
static PyCodeObject *codeobj_3feaf74af9e648622e29a194516c557e;
static PyCodeObject *codeobj_97f97a4f5dbefefdb09fca3803ce7003;
static PyCodeObject *codeobj_907bdd1e7de950c01dbee5489d37ad5e;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[583]); CHECK_OBJECT(module_filename_obj);
    codeobj_077d08c16c84adbeccc077df76aa29b3 = MAKE_CODE_OBJECT(module_filename_obj, 483, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[5], mod_consts[5], NULL, NULL, 0, 0, 0);
    codeobj_573cf272831cd28f93e145f8f943693c = MAKE_CODE_OBJECT(module_filename_obj, 241, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[5], mod_consts[5], mod_consts[584], NULL, 1, 0, 0);
    codeobj_1c664af2f59e20d3a5b4e0994504da3e = MAKE_CODE_OBJECT(module_filename_obj, 241, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[5], mod_consts[5], mod_consts[585], mod_consts[584], 1, 0, 0);
    codeobj_055af561147bc398dec138c5e48a8193 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[586], mod_consts[586], NULL, NULL, 0, 0, 0);
    codeobj_e6ba311f3a3a3eb3fdd2c87e1312ef26 = MAKE_CODE_OBJECT(module_filename_obj, 87, 0, mod_consts[80], mod_consts[80], mod_consts[587], NULL, 1, 0, 0);
    codeobj_1638f747bcbc4edabf696321c44b52b3 = MAKE_CODE_OBJECT(module_filename_obj, 101, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[584], NULL, 1, 0, 0);
    codeobj_a55d9e6b3a31706d6eca51ce22f64cd8 = MAKE_CODE_OBJECT(module_filename_obj, 102, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[95], mod_consts[95], mod_consts[588], NULL, 0, 0, 0);
    codeobj_4d86ac7c4dc33f1266112c2f4d78968d = MAKE_CODE_OBJECT(module_filename_obj, 78, 0, mod_consts[76], mod_consts[76], mod_consts[587], NULL, 1, 0, 0);
    codeobj_3feaf74af9e648622e29a194516c557e = MAKE_CODE_OBJECT(module_filename_obj, 91, 0, mod_consts[76], mod_consts[76], mod_consts[587], NULL, 1, 0, 0);
    codeobj_97f97a4f5dbefefdb09fca3803ce7003 = MAKE_CODE_OBJECT(module_filename_obj, 90, 0, mod_consts[85], mod_consts[85], mod_consts[589], NULL, 0, 0, 0);
    codeobj_907bdd1e7de950c01dbee5489d37ad5e = MAKE_CODE_OBJECT(module_filename_obj, 99, 0, mod_consts[92], mod_consts[92], mod_consts[589], NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_dill$_objects$$$function__4__function$$$genobj__1__function(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_dill$_objects$$$function__1__method();


static PyObject *MAKE_FUNCTION_dill$_objects$$$function__2___call__();


static PyObject *MAKE_FUNCTION_dill$_objects$$$function__3__method();


static PyObject *MAKE_FUNCTION_dill$_objects$$$function__4__function();


static PyObject *MAKE_FUNCTION_dill$_objects$$$function__5__function2();


static PyObject *MAKE_FUNCTION_dill$_objects$$$function__6_lambda();


static PyObject *MAKE_FUNCTION_dill$_objects$$$function__6_lambda$$$function__1_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_dill$_objects$$$function__7_lambda();


// The module function definitions.
static PyObject *impl_dill$_objects$$$function__4__function(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_x = Nuitka_Cell_New1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_x;
        Py_INCREF(tmp_closure_1[0]);

        tmp_return_value = MAKE_GENERATOR_dill$_objects$$$function__4__function$$$genobj__1__function(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct dill$_objects$$$function__4__function$$$genobj__1__function_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
};
#endif

static PyObject *dill$_objects$$$function__4__function$$$genobj__1__function_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct dill$_objects$$$function__4__function$$$genobj__1__function_locals *generator_heap = (struct dill$_objects$$$function__4__function$$$genobj__1__function_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_1638f747bcbc4edabf696321c44b52b3, module_dill$_objects, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(tstate, generator);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[0]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 101;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        Py_INCREF(tmp_expression_value_1);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 101;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(tstate, generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            generator->m_closure[0]
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_dill$_objects$$$function__4__function$$$genobj__1__function(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        dill$_objects$$$function__4__function$$$genobj__1__function_context,
        module_dill$_objects,
        mod_consts[1],
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        codeobj_1638f747bcbc4edabf696321c44b52b3,
        closure,
        1,
#if 1
        sizeof(struct dill$_objects$$$function__4__function$$$genobj__1__function_locals)
#else
        0
#endif
    );
}


static PyObject *impl_dill$_objects$$$function__5__function2(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_exc_info = NULL;
    PyObject *var_e = NULL;
    PyObject *var_er = NULL;
    PyObject *var_tb = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_a55d9e6b3a31706d6eca51ce22f64cd8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_a55d9e6b3a31706d6eca51ce22f64cd8 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a55d9e6b3a31706d6eca51ce22f64cd8)) {
        Py_XDECREF(cache_frame_a55d9e6b3a31706d6eca51ce22f64cd8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a55d9e6b3a31706d6eca51ce22f64cd8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a55d9e6b3a31706d6eca51ce22f64cd8 = MAKE_FUNCTION_FRAME(tstate, codeobj_a55d9e6b3a31706d6eca51ce22f64cd8, module_dill$_objects, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a55d9e6b3a31706d6eca51ce22f64cd8->m_type_description == NULL);
    frame_a55d9e6b3a31706d6eca51ce22f64cd8 = cache_frame_a55d9e6b3a31706d6eca51ce22f64cd8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a55d9e6b3a31706d6eca51ce22f64cd8);
    assert(Py_REFCNT(frame_a55d9e6b3a31706d6eca51ce22f64cd8) == 2);

    // Framed code:
    // Tried code:
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 103;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a55d9e6b3a31706d6eca51ce22f64cd8->m_frame) frame_a55d9e6b3a31706d6eca51ce22f64cd8->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_2;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_a55d9e6b3a31706d6eca51ce22f64cd8, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_a55d9e6b3a31706d6eca51ce22f64cd8, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        tmp_import_name_from_1 = IMPORT_HARD_SYS();
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_dill$_objects,
                mod_consts[2],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[2]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        assert(var_exc_info == NULL);
        var_exc_info = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        CHECK_OBJECT(var_exc_info);
        tmp_called_value_1 = var_exc_info;
        frame_a55d9e6b3a31706d6eca51ce22f64cd8->m_frame.f_lineno = 106;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 3);
        if (tmp_assign_source_3 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooo";
            exception_lineno = 106;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 3);
        if (tmp_assign_source_4 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooo";
            exception_lineno = 106;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tstate, tmp_unpack_3, 2, 3);
        if (tmp_assign_source_5 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooo";
            exception_lineno = 106;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooo";
                    exception_lineno = 106;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[4];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooo";
            exception_lineno = 106;
            goto try_except_handler_5;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_e = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        assert(var_er == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_er = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
        assert(var_tb == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_tb = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_er);
        tmp_tuple_element_1 = var_er;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_tb);
        tmp_tuple_element_1 = var_tb;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto try_return_handler_3;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 103;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a55d9e6b3a31706d6eca51ce22f64cd8->m_frame) frame_a55d9e6b3a31706d6eca51ce22f64cd8->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a55d9e6b3a31706d6eca51ce22f64cd8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a55d9e6b3a31706d6eca51ce22f64cd8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a55d9e6b3a31706d6eca51ce22f64cd8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a55d9e6b3a31706d6eca51ce22f64cd8,
        type_description_1,
        var_exc_info,
        var_e,
        var_er,
        var_tb
    );


    // Release cached frame if used for exception.
    if (frame_a55d9e6b3a31706d6eca51ce22f64cd8 == cache_frame_a55d9e6b3a31706d6eca51ce22f64cd8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a55d9e6b3a31706d6eca51ce22f64cd8);
        cache_frame_a55d9e6b3a31706d6eca51ce22f64cd8 = NULL;
    }

    assertFrameObject(frame_a55d9e6b3a31706d6eca51ce22f64cd8);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_exc_info);
    Py_DECREF(var_exc_info);
    var_exc_info = NULL;
    CHECK_OBJECT(var_e);
    Py_DECREF(var_e);
    var_e = NULL;
    CHECK_OBJECT(var_er);
    Py_DECREF(var_er);
    var_er = NULL;
    CHECK_OBJECT(var_tb);
    Py_DECREF(var_tb);
    var_tb = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_exc_info);
    var_exc_info = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_dill$_objects$$$function__6_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_x = Nuitka_Cell_New1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_x;
        Py_INCREF(tmp_closure_1[0]);

        tmp_return_value = MAKE_FUNCTION_dill$_objects$$$function__6_lambda$$$function__1_lambda(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_dill$_objects$$$function__6_lambda$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_y = python_pars[0];
    struct Nuitka_FrameObject *frame_1c664af2f59e20d3a5b4e0994504da3e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1c664af2f59e20d3a5b4e0994504da3e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1c664af2f59e20d3a5b4e0994504da3e)) {
        Py_XDECREF(cache_frame_1c664af2f59e20d3a5b4e0994504da3e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1c664af2f59e20d3a5b4e0994504da3e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1c664af2f59e20d3a5b4e0994504da3e = MAKE_FUNCTION_FRAME(tstate, codeobj_1c664af2f59e20d3a5b4e0994504da3e, module_dill$_objects, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1c664af2f59e20d3a5b4e0994504da3e->m_type_description == NULL);
    frame_1c664af2f59e20d3a5b4e0994504da3e = cache_frame_1c664af2f59e20d3a5b4e0994504da3e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1c664af2f59e20d3a5b4e0994504da3e);
    assert(Py_REFCNT(frame_1c664af2f59e20d3a5b4e0994504da3e) == 2);

    // Framed code:
    if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

        FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 241;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }

    tmp_return_value = Nuitka_Cell_GET(self->m_closure[0]);
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1c664af2f59e20d3a5b4e0994504da3e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1c664af2f59e20d3a5b4e0994504da3e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1c664af2f59e20d3a5b4e0994504da3e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1c664af2f59e20d3a5b4e0994504da3e,
        type_description_1,
        par_y,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_1c664af2f59e20d3a5b4e0994504da3e == cache_frame_1c664af2f59e20d3a5b4e0994504da3e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1c664af2f59e20d3a5b4e0994504da3e);
        cache_frame_1c664af2f59e20d3a5b4e0994504da3e = NULL;
    }

    assertFrameObject(frame_1c664af2f59e20d3a5b4e0994504da3e);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_dill$_objects$$$function__1__method() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        mod_consts[77],
#endif
        codeobj_4d86ac7c4dc33f1266112c2f4d78968d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_dill$_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dill$_objects$$$function__2___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[80],
#if PYTHON_VERSION >= 0x300
        mod_consts[81],
#endif
        codeobj_e6ba311f3a3a3eb3fdd2c87e1312ef26,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_dill$_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dill$_objects$$$function__3__method() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        mod_consts[90],
#endif
        codeobj_3feaf74af9e648622e29a194516c557e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_dill$_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dill$_objects$$$function__4__function() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dill$_objects$$$function__4__function,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1638f747bcbc4edabf696321c44b52b3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_dill$_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dill$_objects$$$function__5__function2() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dill$_objects$$$function__5__function2,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a55d9e6b3a31706d6eca51ce22f64cd8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_dill$_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dill$_objects$$$function__6_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dill$_objects$$$function__6_lambda,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_573cf272831cd28f93e145f8f943693c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_dill$_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dill$_objects$$$function__6_lambda$$$function__1_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dill$_objects$$$function__6_lambda$$$function__1_lambda,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[6],
#endif
        codeobj_1c664af2f59e20d3a5b4e0994504da3e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_dill$_objects,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dill$_objects$$$function__7_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_077d08c16c84adbeccc077df76aa29b3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_dill$_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


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

function_impl_code functable_dill$_objects[] = {
    impl_dill$_objects$$$function__6_lambda$$$function__1_lambda,
    NULL,
    NULL,
    NULL,
    impl_dill$_objects$$$function__4__function,
    impl_dill$_objects$$$function__5__function2,
    impl_dill$_objects$$$function__6_lambda,
    NULL,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_dill$_objects;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        PyThreadState *tstate = PyThreadState_GET();

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

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && HAS_ERROR_OCCURRED(tstate)) {
        return NULL;
    }

    if (offset > sizeof(functable_dill$_objects) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!HAS_ERROR_OCCURRED(tstate));
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        function_name, // TODO: function_qualname
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_dill$_objects[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_dill$_objects,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_dill$_objects(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("dill._objects");

    // Store the module for future use.
    module_dill$_objects = module;

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
        PRINT_STRING("dill._objects: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("dill._objects: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initdill$_objects\n");

    moduledict_dill$_objects = MODULE_DICT(module_dill$_objects);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_dill$_objects,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_dill$_objects,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[267]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_dill$_objects,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_dill$_objects,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_dill$_objects,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_dill$_objects);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_dill$_objects);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *tmp_assign_unpack_11__assign_source = NULL;
    PyObject *tmp_assign_unpack_12__assign_source = NULL;
    PyObject *tmp_assign_unpack_13__assign_source = NULL;
    PyObject *tmp_assign_unpack_14__assign_source = NULL;
    PyObject *tmp_assign_unpack_15__assign_source = NULL;
    PyObject *tmp_assign_unpack_16__assign_source = NULL;
    PyObject *tmp_assign_unpack_17__assign_source = NULL;
    PyObject *tmp_assign_unpack_18__assign_source = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_assign_unpack_20__assign_source = NULL;
    PyObject *tmp_assign_unpack_21__assign_source = NULL;
    PyObject *tmp_assign_unpack_22__assign_source = NULL;
    PyObject *tmp_assign_unpack_23__assign_source = NULL;
    PyObject *tmp_assign_unpack_24__assign_source = NULL;
    PyObject *tmp_assign_unpack_25__assign_source = NULL;
    PyObject *tmp_assign_unpack_26__assign_source = NULL;
    PyObject *tmp_assign_unpack_28__assign_source = NULL;
    PyObject *tmp_assign_unpack_29__assign_source = NULL;
    PyObject *tmp_assign_unpack_2__assign_source = NULL;
    PyObject *tmp_assign_unpack_30__assign_source = NULL;
    PyObject *tmp_assign_unpack_31__assign_source = NULL;
    PyObject *tmp_assign_unpack_32__assign_source = NULL;
    PyObject *tmp_assign_unpack_3__assign_source = NULL;
    PyObject *tmp_assign_unpack_4__assign_source = NULL;
    PyObject *tmp_assign_unpack_5__assign_source = NULL;
    PyObject *tmp_assign_unpack_6__assign_source = NULL;
    PyObject *tmp_assign_unpack_8__assign_source = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_055af561147bc398dec138c5e48a8193;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *locals_dill$_objects$$$class__1__class_77 = NULL;
    PyObject *tmp_dictset_value;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *locals_dill$_objects$$$class__2__class2_86 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *locals_dill$_objects$$$class__3__newclass_90 = NULL;
    struct Nuitka_FrameObject *frame_97f97a4f5dbefefdb09fca3803ce7003_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *locals_dill$_objects$$$class__4__newclass2_99 = NULL;
    struct Nuitka_FrameObject *frame_907bdd1e7de950c01dbee5489d37ad5e_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *locals_dill$_objects$$$class__5__Struct_109 = NULL;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
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
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    struct Nuitka_ExceptionStackItem exception_preserved_4;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    struct Nuitka_ExceptionStackItem exception_preserved_5;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    struct Nuitka_ExceptionStackItem exception_preserved_6;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    struct Nuitka_ExceptionStackItem exception_preserved_7;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
    PyObject *exception_keeper_type_48;
    PyObject *exception_keeper_value_48;
    PyTracebackObject *exception_keeper_tb_48;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
    PyObject *exception_keeper_type_49;
    PyObject *exception_keeper_value_49;
    PyTracebackObject *exception_keeper_tb_49;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
    PyObject *exception_keeper_type_50;
    PyObject *exception_keeper_value_50;
    PyTracebackObject *exception_keeper_tb_50;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
    PyObject *exception_keeper_type_51;
    PyObject *exception_keeper_value_51;
    PyTracebackObject *exception_keeper_tb_51;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
    PyObject *exception_keeper_type_52;
    PyObject *exception_keeper_value_52;
    PyTracebackObject *exception_keeper_tb_52;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
    PyObject *exception_keeper_type_53;
    PyObject *exception_keeper_value_53;
    PyTracebackObject *exception_keeper_tb_53;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_2);
    }
    frame_055af561147bc398dec138c5e48a8193 = MAKE_MODULE_FRAME(codeobj_055af561147bc398dec138c5e48a8193, module_dill$_objects);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_055af561147bc398dec138c5e48a8193);
    assert(Py_REFCNT(frame_055af561147bc398dec138c5e48a8193) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[11], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[12], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_LIST3(mod_consts[14],mod_consts[15],mod_consts[16]);
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[18];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 16;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_5);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            tmp_kw_call_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 16;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_1, mod_consts[21], kw_values, mod_consts[22]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[24];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 18;
        tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[26];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 19;
        tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        {
            PyObject *hard_module = IMPORT_HARD_IO();
            tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[28]);
        }
        assert(!(tmp_assign_source_9 == NULL));
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[30];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 21;
        tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[31];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = Py_None;
        tmp_level_value_5 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 22;
        tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        assert(!(tmp_assign_source_11 == NULL));
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[32];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = Py_None;
        tmp_level_value_6 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 23;
        tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[33];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = Py_None;
        tmp_level_value_7 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 24;
        tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        assert(!(tmp_assign_source_13 == NULL));
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[34];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = Py_None;
        tmp_level_value_8 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 25;
        tmp_assign_source_14 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[35];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = Py_None;
        tmp_level_value_9 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 26;
        tmp_assign_source_15 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[36];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = Py_None;
        tmp_level_value_10 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 27;
        tmp_assign_source_16 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[37];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = Py_None;
        tmp_level_value_11 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 28;
        tmp_assign_source_17 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[38];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = Py_None;
        tmp_level_value_12 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 29;
        tmp_assign_source_18 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[39];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = Py_None;
        tmp_level_value_13 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 30;
        tmp_assign_source_19 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[40];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = Py_None;
        tmp_level_value_14 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 31;
        tmp_assign_source_20 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_name_value_15;
        PyObject *tmp_globals_arg_value_15;
        PyObject *tmp_locals_arg_value_15;
        PyObject *tmp_fromlist_value_15;
        PyObject *tmp_level_value_15;
        tmp_name_value_15 = mod_consts[41];
        tmp_globals_arg_value_15 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_15 = Py_None;
        tmp_fromlist_value_15 = Py_None;
        tmp_level_value_15 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 32;
        tmp_assign_source_21 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = IMPORT_HARD_FUNCTOOLS();
        assert(!(tmp_assign_source_22 == NULL));
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_name_value_16;
        PyObject *tmp_globals_arg_value_16;
        PyObject *tmp_locals_arg_value_16;
        PyObject *tmp_fromlist_value_16;
        PyObject *tmp_level_value_16;
        tmp_name_value_16 = mod_consts[43];
        tmp_globals_arg_value_16 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_16 = Py_None;
        tmp_fromlist_value_16 = Py_None;
        tmp_level_value_16 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 34;
        tmp_assign_source_23 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
        assert(!(tmp_assign_source_23 == NULL));
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_name_value_17;
        PyObject *tmp_globals_arg_value_17;
        PyObject *tmp_locals_arg_value_17;
        PyObject *tmp_fromlist_value_17;
        PyObject *tmp_level_value_17;
        tmp_name_value_17 = mod_consts[44];
        tmp_globals_arg_value_17 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_17 = Py_None;
        tmp_fromlist_value_17 = Py_None;
        tmp_level_value_17 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 35;
        tmp_assign_source_24 = IMPORT_MODULE5(tstate, tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_name_value_18;
        PyObject *tmp_globals_arg_value_18;
        PyObject *tmp_locals_arg_value_18;
        PyObject *tmp_fromlist_value_18;
        PyObject *tmp_level_value_18;
        tmp_name_value_18 = mod_consts[45];
        tmp_globals_arg_value_18 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_18 = Py_None;
        tmp_fromlist_value_18 = Py_None;
        tmp_level_value_18 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 36;
        tmp_assign_source_25 = IMPORT_MODULE5(tstate, tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_name_value_19;
        PyObject *tmp_globals_arg_value_19;
        PyObject *tmp_locals_arg_value_19;
        PyObject *tmp_fromlist_value_19;
        PyObject *tmp_level_value_19;
        tmp_name_value_19 = mod_consts[46];
        tmp_globals_arg_value_19 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_19 = Py_None;
        tmp_fromlist_value_19 = Py_None;
        tmp_level_value_19 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 37;
        tmp_assign_source_26 = IMPORT_MODULE5(tstate, tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_name_value_20;
        PyObject *tmp_globals_arg_value_20;
        PyObject *tmp_locals_arg_value_20;
        PyObject *tmp_fromlist_value_20;
        PyObject *tmp_level_value_20;
        tmp_name_value_20 = mod_consts[47];
        tmp_globals_arg_value_20 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_20 = Py_None;
        tmp_fromlist_value_20 = Py_None;
        tmp_level_value_20 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 38;
        tmp_assign_source_27 = IMPORT_MODULE5(tstate, tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
        assert(!(tmp_assign_source_27 == NULL));
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_name_value_21;
        PyObject *tmp_globals_arg_value_21;
        PyObject *tmp_locals_arg_value_21;
        PyObject *tmp_fromlist_value_21;
        PyObject *tmp_level_value_21;
        tmp_name_value_21 = mod_consts[48];
        tmp_globals_arg_value_21 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_21 = Py_None;
        tmp_fromlist_value_21 = Py_None;
        tmp_level_value_21 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 39;
        tmp_assign_source_28 = IMPORT_MODULE5(tstate, tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_name_value_22;
        PyObject *tmp_globals_arg_value_22;
        PyObject *tmp_locals_arg_value_22;
        PyObject *tmp_fromlist_value_22;
        PyObject *tmp_level_value_22;
        tmp_name_value_22 = mod_consts[49];
        tmp_globals_arg_value_22 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_22 = Py_None;
        tmp_fromlist_value_22 = Py_None;
        tmp_level_value_22 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 40;
        tmp_assign_source_29 = IMPORT_MODULE5(tstate, tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_name_value_23;
        PyObject *tmp_globals_arg_value_23;
        PyObject *tmp_locals_arg_value_23;
        PyObject *tmp_fromlist_value_23;
        PyObject *tmp_level_value_23;
        tmp_name_value_23 = mod_consts[50];
        tmp_globals_arg_value_23 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_23 = Py_None;
        tmp_fromlist_value_23 = Py_None;
        tmp_level_value_23 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 41;
        tmp_assign_source_30 = IMPORT_MODULE5(tstate, tmp_name_value_23, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_name_value_24;
        PyObject *tmp_globals_arg_value_24;
        PyObject *tmp_locals_arg_value_24;
        PyObject *tmp_fromlist_value_24;
        PyObject *tmp_level_value_24;
        tmp_name_value_24 = mod_consts[51];
        tmp_globals_arg_value_24 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_24 = Py_None;
        tmp_fromlist_value_24 = Py_None;
        tmp_level_value_24 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 42;
        tmp_assign_source_31 = IMPORT_MODULE5(tstate, tmp_name_value_24, tmp_globals_arg_value_24, tmp_locals_arg_value_24, tmp_fromlist_value_24, tmp_level_value_24);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_name_value_25;
        PyObject *tmp_globals_arg_value_25;
        PyObject *tmp_locals_arg_value_25;
        PyObject *tmp_fromlist_value_25;
        PyObject *tmp_level_value_25;
        tmp_name_value_25 = mod_consts[52];
        tmp_globals_arg_value_25 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_25 = Py_None;
        tmp_fromlist_value_25 = Py_None;
        tmp_level_value_25 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 43;
        tmp_assign_source_32 = IMPORT_MODULE5(tstate, tmp_name_value_25, tmp_globals_arg_value_25, tmp_locals_arg_value_25, tmp_fromlist_value_25, tmp_level_value_25);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_name_value_26;
        PyObject *tmp_globals_arg_value_26;
        PyObject *tmp_locals_arg_value_26;
        PyObject *tmp_fromlist_value_26;
        PyObject *tmp_level_value_26;
        tmp_name_value_26 = mod_consts[53];
        tmp_globals_arg_value_26 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_26 = Py_None;
        tmp_fromlist_value_26 = Py_None;
        tmp_level_value_26 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 44;
        tmp_assign_source_33 = IMPORT_MODULE5(tstate, tmp_name_value_26, tmp_globals_arg_value_26, tmp_locals_arg_value_26, tmp_fromlist_value_26, tmp_level_value_26);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_name_value_27;
        PyObject *tmp_globals_arg_value_27;
        PyObject *tmp_locals_arg_value_27;
        PyObject *tmp_fromlist_value_27;
        PyObject *tmp_level_value_27;
        tmp_name_value_27 = mod_consts[54];
        tmp_globals_arg_value_27 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_27 = Py_None;
        tmp_fromlist_value_27 = Py_None;
        tmp_level_value_27 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 45;
        tmp_assign_source_34 = IMPORT_MODULE5(tstate, tmp_name_value_27, tmp_globals_arg_value_27, tmp_locals_arg_value_27, tmp_fromlist_value_27, tmp_level_value_27);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_35 == NULL));
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_name_value_28;
        PyObject *tmp_globals_arg_value_28;
        PyObject *tmp_locals_arg_value_28;
        PyObject *tmp_fromlist_value_28;
        PyObject *tmp_level_value_28;
        tmp_name_value_28 = mod_consts[56];
        tmp_globals_arg_value_28 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_28 = Py_None;
        tmp_fromlist_value_28 = Py_None;
        tmp_level_value_28 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 47;
        tmp_assign_source_36 = IMPORT_MODULE5(tstate, tmp_name_value_28, tmp_globals_arg_value_28, tmp_locals_arg_value_28, tmp_fromlist_value_28, tmp_level_value_28);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_name_value_29;
        PyObject *tmp_globals_arg_value_29;
        PyObject *tmp_locals_arg_value_29;
        PyObject *tmp_fromlist_value_29;
        PyObject *tmp_level_value_29;
        tmp_name_value_29 = mod_consts[57];
        tmp_globals_arg_value_29 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_29 = Py_None;
        tmp_fromlist_value_29 = Py_None;
        tmp_level_value_29 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 48;
        tmp_assign_source_37 = IMPORT_MODULE5(tstate, tmp_name_value_29, tmp_globals_arg_value_29, tmp_locals_arg_value_29, tmp_fromlist_value_29, tmp_level_value_29);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_name_value_30;
        PyObject *tmp_globals_arg_value_30;
        PyObject *tmp_locals_arg_value_30;
        PyObject *tmp_fromlist_value_30;
        PyObject *tmp_level_value_30;
        tmp_name_value_30 = mod_consts[58];
        tmp_globals_arg_value_30 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_30 = Py_None;
        tmp_fromlist_value_30 = Py_None;
        tmp_level_value_30 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 49;
        tmp_assign_source_38 = IMPORT_MODULE5(tstate, tmp_name_value_30, tmp_globals_arg_value_30, tmp_locals_arg_value_30, tmp_fromlist_value_30, tmp_level_value_30);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_name_value_31;
        PyObject *tmp_globals_arg_value_31;
        PyObject *tmp_locals_arg_value_31;
        PyObject *tmp_fromlist_value_31;
        PyObject *tmp_level_value_31;
        tmp_name_value_31 = mod_consts[59];
        tmp_globals_arg_value_31 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_31 = Py_None;
        tmp_fromlist_value_31 = Py_None;
        tmp_level_value_31 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 51;
        tmp_assign_source_39 = IMPORT_MODULE5(tstate, tmp_name_value_31, tmp_globals_arg_value_31, tmp_locals_arg_value_31, tmp_fromlist_value_31, tmp_level_value_31);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_name_value_32;
        PyObject *tmp_globals_arg_value_32;
        PyObject *tmp_locals_arg_value_32;
        PyObject *tmp_fromlist_value_32;
        PyObject *tmp_level_value_32;
        tmp_name_value_32 = mod_consts[60];
        tmp_globals_arg_value_32 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_32 = Py_None;
        tmp_fromlist_value_32 = Py_None;
        tmp_level_value_32 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 52;
        tmp_assign_source_40 = IMPORT_MODULE5(tstate, tmp_name_value_32, tmp_globals_arg_value_32, tmp_locals_arg_value_32, tmp_fromlist_value_32, tmp_level_value_32);
        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_name_value_33;
        PyObject *tmp_globals_arg_value_33;
        PyObject *tmp_locals_arg_value_33;
        PyObject *tmp_fromlist_value_33;
        PyObject *tmp_level_value_33;
        tmp_name_value_33 = mod_consts[61];
        tmp_globals_arg_value_33 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_33 = Py_None;
        tmp_fromlist_value_33 = Py_None;
        tmp_level_value_33 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 53;
        tmp_assign_source_41 = IMPORT_MODULE5(tstate, tmp_name_value_33, tmp_globals_arg_value_33, tmp_locals_arg_value_33, tmp_fromlist_value_33, tmp_level_value_33);
        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_41);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_name_value_34;
        PyObject *tmp_globals_arg_value_34;
        PyObject *tmp_locals_arg_value_34;
        PyObject *tmp_fromlist_value_34;
        PyObject *tmp_level_value_34;
        tmp_name_value_34 = mod_consts[62];
        tmp_globals_arg_value_34 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_34 = Py_None;
        tmp_fromlist_value_34 = Py_None;
        tmp_level_value_34 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 55;
        tmp_assign_source_42 = IMPORT_MODULE5(tstate, tmp_name_value_34, tmp_globals_arg_value_34, tmp_locals_arg_value_34, tmp_fromlist_value_34, tmp_level_value_34);
        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_name_value_35;
        PyObject *tmp_globals_arg_value_35;
        PyObject *tmp_locals_arg_value_35;
        PyObject *tmp_fromlist_value_35;
        PyObject *tmp_level_value_35;
        tmp_name_value_35 = mod_consts[63];
        tmp_globals_arg_value_35 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_35 = Py_None;
        tmp_fromlist_value_35 = Py_None;
        tmp_level_value_35 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 56;
        tmp_assign_source_43 = IMPORT_MODULE5(tstate, tmp_name_value_35, tmp_globals_arg_value_35, tmp_locals_arg_value_35, tmp_fromlist_value_35, tmp_level_value_35);
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_36;
        PyObject *tmp_globals_arg_value_36;
        PyObject *tmp_locals_arg_value_36;
        PyObject *tmp_fromlist_value_36;
        PyObject *tmp_level_value_36;
        tmp_name_value_36 = mod_consts[64];
        tmp_globals_arg_value_36 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_36 = Py_None;
        tmp_fromlist_value_36 = Py_None;
        tmp_level_value_36 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 57;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_36, tmp_globals_arg_value_36, tmp_locals_arg_value_36, tmp_fromlist_value_36, tmp_level_value_36);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_dill$_objects,
                mod_consts[65],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[65]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = Py_True;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_45);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = Py_False;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_46);
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 54;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_055af561147bc398dec138c5e48a8193->m_frame) frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_2;
    branch_end_1:;
    goto try_end_2;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = Py_True;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_48 == NULL));
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = Py_True;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_49);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts[70]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto try_except_handler_3;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_assign_source_50 = (tmp_res == 0) ? Py_True : Py_False;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_50);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 3.
    exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = Py_False;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = Py_False;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_52);
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 67;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_055af561147bc398dec138c5e48a8193->m_frame) frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_4;
    branch_end_2:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_54;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_55;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_dill$_objects$$$class__1__class_77 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyDict_SetItem(locals_dill$_objects$$$class__1__class_77, mod_consts[73], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[74];
        tmp_res = PyDict_SetItem(locals_dill$_objects$$$class__1__class_77, mod_consts[75], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_dill$_objects$$$function__1__method();

        tmp_res = PyDict_SetItem(locals_dill$_objects$$$class__1__class_77, mod_consts[76], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_56;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_2 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[74];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[78];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_dill$_objects$$$class__1__class_77;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 77;
            tmp_assign_source_56 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto try_except_handler_7;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_56;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_55 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_55);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_dill$_objects$$$class__1__class_77);
        locals_dill$_objects$$$class__1__class_77 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_dill$_objects$$$class__1__class_77);
        locals_dill$_objects$$$class__1__class_77 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 77;
        goto try_except_handler_5;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_55);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_58;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_59;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_dill$_objects$$$class__2__class2_86 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyDict_SetItem(locals_dill$_objects$$$class__2__class2_86, mod_consts[73], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[79];
        tmp_res = PyDict_SetItem(locals_dill$_objects$$$class__2__class2_86, mod_consts[75], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_dill$_objects$$$function__2___call__();

        tmp_res = PyDict_SetItem(locals_dill$_objects$$$class__2__class2_86, mod_consts[80], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kwargs_value_2;
            tmp_called_value_3 = (PyObject *)&PyType_Type;
            tmp_tuple_element_2 = mod_consts[79];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[78];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = locals_dill$_objects$$$class__2__class2_86;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
            frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 86;
            tmp_assign_source_60 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;

                goto try_except_handler_10;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_60;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_59 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_59);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_dill$_objects$$$class__2__class2_86);
        locals_dill$_objects$$$class__2__class2_86 = NULL;
        goto try_return_handler_9;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_dill$_objects$$$class__2__class2_86);
        locals_dill$_objects$$$class__2__class2_86 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 86;
        goto try_except_handler_8;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_59);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[79]);
        }

        assert(!(tmp_called_value_4 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 89;
        tmp_assign_source_61 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
        if (tmp_assign_source_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_61);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[83];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_62 = impl___main__$$$function__4__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_11;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_3 = tmp_class_creation_3__bases;
        tmp_subscript_value_1 = mod_consts[3];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_11;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_11;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_1 = tmp_class_creation_3__bases;
        tmp_assign_source_64 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_64;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_4 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts[84]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_11;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_5 = tmp_class_creation_3__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[84]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_11;
        }
        tmp_tuple_element_3 = mod_consts[85];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_3 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_3__class_decl_dict;
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 90;
        tmp_assign_source_65 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_65;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_6 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, mod_consts[86]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_11;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_name_value_37;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[87];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_7 = tmp_class_creation_3__metaclass;
        tmp_name_value_37 = mod_consts[88];
        tmp_default_value_1 = mod_consts[89];
        tmp_tuple_element_4 = BUILTIN_GETATTR(tstate, tmp_expression_value_7, tmp_name_value_37, tmp_default_value_1);
        if (tmp_tuple_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_11;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_8;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_2 = tmp_class_creation_3__prepared;
            tmp_expression_value_8 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_8 == NULL));
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[88]);
            Py_DECREF(tmp_expression_value_8);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_11;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_11;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 90;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_11;
    }
    branch_no_4:;
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_66;
    }
    branch_end_3:;
    {
        PyObject *tmp_assign_source_67;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_dill$_objects$$$class__3__newclass_90 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_dill$_objects$$$class__3__newclass_90, mod_consts[73], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[85];
        tmp_res = PyObject_SetItem(locals_dill$_objects$$$class__3__newclass_90, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_13;
        }
        frame_97f97a4f5dbefefdb09fca3803ce7003_2 = MAKE_CLASS_FRAME(tstate, codeobj_97f97a4f5dbefefdb09fca3803ce7003, module_dill$_objects, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_97f97a4f5dbefefdb09fca3803ce7003_2);
        assert(Py_REFCNT(frame_97f97a4f5dbefefdb09fca3803ce7003_2) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_dill$_objects$$$function__3__method();

        tmp_res = PyObject_SetItem(locals_dill$_objects$$$class__3__newclass_90, mod_consts[76], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_97f97a4f5dbefefdb09fca3803ce7003_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_97f97a4f5dbefefdb09fca3803ce7003_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_97f97a4f5dbefefdb09fca3803ce7003_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_97f97a4f5dbefefdb09fca3803ce7003_2,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_97f97a4f5dbefefdb09fca3803ce7003_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_13;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            tmp_cmp_expr_right_3 = mod_consts[83];
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto try_except_handler_13;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
        }
        branch_yes_5:;
        tmp_dictset_value = mod_consts[83];
        tmp_res = PyObject_SetItem(locals_dill$_objects$$$class__3__newclass_90, mod_consts[91], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_13;
        }
        branch_no_5:;
        {
            PyObject *tmp_assign_source_68;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_6 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_5 = mod_consts[85];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_5 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_dill$_objects$$$class__3__newclass_90;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_3__class_decl_dict;
            frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 90;
            tmp_assign_source_68 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto try_except_handler_13;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_68;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_67 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_67);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_dill$_objects$$$class__3__newclass_90);
        locals_dill$_objects$$$class__3__newclass_90 = NULL;
        goto try_return_handler_12;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_dill$_objects$$$class__3__newclass_90);
        locals_dill$_objects$$$class__3__newclass_90 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 90;
        goto try_except_handler_11;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_67);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
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
        PyObject *tmp_assign_source_69;
        PyObject *tmp_dircall_arg1_2;
        tmp_dircall_arg1_2 = mod_consts[83];
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_69 = impl___main__$$$function__4__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_70;
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_14;
        }
        tmp_condition_result_7 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_9 = tmp_class_creation_4__bases;
        tmp_subscript_value_2 = mod_consts[3];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_14;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_14;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_2 = tmp_class_creation_4__bases;
        tmp_assign_source_71 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_71;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_10 = tmp_class_creation_4__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts[84]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_14;
        }
        tmp_condition_result_8 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_11 = tmp_class_creation_4__metaclass;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[84]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_14;
        }
        tmp_tuple_element_6 = mod_consts[92];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_6 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_4__class_decl_dict;
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 99;
        tmp_assign_source_72 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_72;
    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_12 = tmp_class_creation_4__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_12, mod_consts[86]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_14;
        }
        tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_name_value_38;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[87];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_13 = tmp_class_creation_4__metaclass;
        tmp_name_value_38 = mod_consts[88];
        tmp_default_value_2 = mod_consts[89];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_13, tmp_name_value_38, tmp_default_value_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_14;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_14;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_4 = tmp_class_creation_4__prepared;
            tmp_expression_value_14 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_14 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[88]);
            Py_DECREF(tmp_expression_value_14);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_14;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_14;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 99;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_14;
    }
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_73;
    }
    branch_end_6:;
    {
        PyObject *tmp_assign_source_74;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_dill$_objects$$$class__4__newclass2_99 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_dill$_objects$$$class__4__newclass2_99, mod_consts[73], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_16;
        }
        tmp_dictset_value = mod_consts[92];
        tmp_res = PyObject_SetItem(locals_dill$_objects$$$class__4__newclass2_99, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_16;
        }
        frame_907bdd1e7de950c01dbee5489d37ad5e_3 = MAKE_CLASS_FRAME(tstate, codeobj_907bdd1e7de950c01dbee5489d37ad5e, module_dill$_objects, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_907bdd1e7de950c01dbee5489d37ad5e_3);
        assert(Py_REFCNT(frame_907bdd1e7de950c01dbee5489d37ad5e_3) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST1(mod_consts[93]);
        tmp_res = PyObject_SetItem(locals_dill$_objects$$$class__4__newclass2_99, mod_consts[94], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_907bdd1e7de950c01dbee5489d37ad5e_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_907bdd1e7de950c01dbee5489d37ad5e_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_907bdd1e7de950c01dbee5489d37ad5e_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_907bdd1e7de950c01dbee5489d37ad5e_3,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_907bdd1e7de950c01dbee5489d37ad5e_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_16;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
            tmp_cmp_expr_right_4 = mod_consts[83];
            tmp_condition_result_10 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto try_except_handler_16;
            }
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
        }
        branch_yes_8:;
        tmp_dictset_value = mod_consts[83];
        tmp_res = PyObject_SetItem(locals_dill$_objects$$$class__4__newclass2_99, mod_consts[91], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_16;
        }
        branch_no_8:;
        {
            PyObject *tmp_assign_source_75;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_8 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_8 = mod_consts[92];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_8 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_dill$_objects$$$class__4__newclass2_99;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_4__class_decl_dict;
            frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 99;
            tmp_assign_source_75 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_75 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto try_except_handler_16;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_75;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_74 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_74);
        goto try_return_handler_16;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        Py_DECREF(locals_dill$_objects$$$class__4__newclass2_99);
        locals_dill$_objects$$$class__4__newclass2_99 = NULL;
        goto try_return_handler_15;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_dill$_objects$$$class__4__newclass2_99);
        locals_dill$_objects$$$class__4__newclass2_99 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto try_except_handler_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 99;
        goto try_except_handler_14;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_74);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
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
    {
        PyObject *tmp_assign_source_76;


        tmp_assign_source_76 = MAKE_FUNCTION_dill$_objects$$$function__4__function();

        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;


        tmp_assign_source_77 = MAKE_FUNCTION_dill$_objects$$$function__5__function2();

        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_77);
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
        }

        if (tmp_mvar_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_mvar_value_1);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    // Tried code:
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_expression_value_15;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_expression_value_15 == NULL));
        tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[96]);
        if (tmp_tuple_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_17;
        }
        tmp_assign_source_78 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_78, 0, tmp_tuple_element_9);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_78;
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_79 = impl___main__$$$function__4__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_79;
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_80;
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_12;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_17;
        }
        tmp_condition_result_12 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_16 = tmp_class_creation_5__bases;
        tmp_subscript_value_3 = mod_consts[3];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_17;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_17;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_3 = tmp_class_creation_5__bases;
        tmp_assign_source_81 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_81;
    }
    {
        bool tmp_condition_result_13;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_17 = tmp_class_creation_5__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_17, mod_consts[84]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_17;
        }
        tmp_condition_result_13 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_18 = tmp_class_creation_5__metaclass;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[84]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_17;
        }
        tmp_tuple_element_10 = mod_consts[97];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_10 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_5__class_decl_dict;
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 109;
        tmp_assign_source_82 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_82;
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_19 = tmp_class_creation_5__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_19, mod_consts[86]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_17;
        }
        tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_14 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_name_value_39;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[87];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_20 = tmp_class_creation_5__metaclass;
        tmp_name_value_39 = mod_consts[88];
        tmp_default_value_3 = mod_consts[89];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tstate, tmp_expression_value_20, tmp_name_value_39, tmp_default_value_3);
        if (tmp_tuple_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_17;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_21;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_6 = tmp_class_creation_5__prepared;
            tmp_expression_value_21 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_21 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[88]);
            Py_DECREF(tmp_expression_value_21);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_17;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_17;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 109;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_17;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_83;
        tmp_assign_source_83 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_83;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_84;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_dill$_objects$$$class__5__Struct_109 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_dill$_objects$$$class__5__Struct_109, mod_consts[73], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_19;
        }
        tmp_dictset_value = mod_consts[97];
        tmp_res = PyObject_SetItem(locals_dill$_objects$$$class__5__Struct_109, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_19;
        }
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_15 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto try_except_handler_19;
            }
            if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_dill$_objects$$$class__5__Struct_109, mod_consts[91], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_19;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_85;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_10 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_12 = mod_consts[97];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_12 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_dill$_objects$$$class__5__Struct_109;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_5__class_decl_dict;
            frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 109;
            tmp_assign_source_85 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto try_except_handler_19;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_85;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_84 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_84);
        goto try_return_handler_19;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        Py_DECREF(locals_dill$_objects$$$class__5__Struct_109);
        locals_dill$_objects$$$class__5__Struct_109 = NULL;
        goto try_return_handler_18;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_dill$_objects$$$class__5__Struct_109);
        locals_dill$_objects$$$class__5__Struct_109 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto try_except_handler_18;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 109;
        goto try_except_handler_17;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_84);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
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
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
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
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_assattr_target_3;
        tmp_tuple_element_13 = mod_consts[98];
        tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_22;
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_13);
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
            }

            assert(!(tmp_expression_value_22 == NULL));
            tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[99]);
            if (tmp_tuple_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_list_element_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_assattr_value_3 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_tuple_element_14;
            PyList_SET_ITEM(tmp_assattr_value_3, 0, tmp_list_element_1);
            tmp_tuple_element_14 = mod_consts[100];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_11;
                PyObject *tmp_expression_value_23;
                PyObject *tmp_args_element_value_1;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_14);
                tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

                if (unlikely(tmp_expression_value_23 == NULL)) {
                    tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
                }

                assert(!(tmp_expression_value_23 == NULL));
                tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[101]);
                if (tmp_called_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 111;

                    goto tuple_build_exception_5;
                }
                tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[97]);

                if (unlikely(tmp_args_element_value_1 == NULL)) {
                    tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
                }

                if (tmp_args_element_value_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_11);

                    exception_lineno = 111;

                    goto tuple_build_exception_5;
                }
                frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 111;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_1);
                Py_DECREF(tmp_called_value_11);
                if (tmp_tuple_element_14 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 111;

                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_14);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            PyList_SET_ITEM(tmp_assattr_value_3, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assattr_value_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
        }

        if (tmp_assattr_target_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_3);

            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[102], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
    }
    branch_no_9:;
    // Tried code:
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto try_except_handler_20;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 112;
        tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[103],
            PyTuple_GET_ITEM(mod_consts[104], 0)
        );

        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto try_except_handler_20;
        }
        tmp_assign_source_86 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto try_except_handler_20;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_86;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_87 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_87 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 112;
            goto try_except_handler_21;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_87;
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_88 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_88 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 112;
            goto try_except_handler_21;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_88;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 112;
                    goto try_except_handler_21;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[105];
            Py_INCREF(exception_value);
            exception_tb = NULL;


            exception_lineno = 112;
            goto try_except_handler_21;
        }
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto try_except_handler_20;
    // End of try:
    try_end_10:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_89;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_89 = tmp_tuple_unpack_1__element_1;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_89);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_90;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_90 = tmp_tuple_unpack_1__element_2;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_90);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 113;
        tmp_assign_source_91 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[108],
            PyTuple_GET_ITEM(mod_consts[109], 0)
        );

        if (tmp_assign_source_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = MAKE_DICT_EMPTY();
        assert(tmp_assign_unpack_1__assign_source == NULL);
        tmp_assign_unpack_1__assign_source = tmp_assign_source_92;
    }
    {
        PyObject *tmp_assign_source_93;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_93 = tmp_assign_unpack_1__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_94 = tmp_assign_unpack_1__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_94);
    }
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = MAKE_DICT_EMPTY();
        assert(tmp_assign_unpack_2__assign_source == NULL);
        tmp_assign_unpack_2__assign_source = tmp_assign_source_95;
    }
    {
        PyObject *tmp_assign_source_96;
        CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
        tmp_assign_source_96 = tmp_assign_unpack_2__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
        tmp_assign_source_97 = tmp_assign_unpack_2__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_97);
    }
    CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
    Py_DECREF(tmp_assign_unpack_2__assign_source);
    tmp_assign_unpack_2__assign_source = NULL;
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = MAKE_DICT_EMPTY();
        assert(tmp_assign_unpack_3__assign_source == NULL);
        tmp_assign_unpack_3__assign_source = tmp_assign_source_98;
    }
    {
        PyObject *tmp_assign_source_99;
        CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
        tmp_assign_source_99 = tmp_assign_unpack_3__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
        tmp_assign_source_100 = tmp_assign_unpack_3__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_100);
    }
    CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
    Py_DECREF(tmp_assign_unpack_3__assign_source);
    tmp_assign_unpack_3__assign_source = NULL;
    tmp_dictset_value = Py_True;
    tmp_dictset_dict = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

    if (unlikely(tmp_dictset_dict == NULL)) {
        tmp_dictset_dict = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
    }

    assert(!(tmp_dictset_dict == NULL));
    tmp_dictset_key = mod_consts[113];
    assert(PyDict_CheckExact(tmp_dictset_dict));
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

    assert(!(tmp_res != 0));
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = LOOKUP_BUILTIN(mod_consts[114]);
        assert(tmp_ass_subvalue_1 != NULL);
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[115];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = mod_consts[115];
        tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_4);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_2 == NULL)) {
            tmp_ass_subscribed_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = mod_consts[116];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_subscript_value_5;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto try_except_handler_22;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 126;
        tmp_expression_value_25 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_3,
            mod_consts[117],
            PyTuple_GET_ITEM(mod_consts[118], 0)
        );

        if (tmp_expression_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto try_except_handler_22;
        }
        tmp_subscript_value_5 = mod_consts[3];
        tmp_assign_source_101 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_25, tmp_subscript_value_5, 0);
        Py_DECREF(tmp_expression_value_25);
        if (tmp_assign_source_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto try_except_handler_22;
        }
        assert(tmp_assign_unpack_4__assign_source == NULL);
        tmp_assign_unpack_4__assign_source = tmp_assign_source_101;
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(tmp_assign_unpack_4__assign_source);
        tmp_ass_subvalue_3 = tmp_assign_unpack_4__assign_source;
        tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_3 == NULL)) {
            tmp_ass_subscribed_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto try_except_handler_22;
        }
        tmp_ass_subscript_3 = mod_consts[119];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto try_except_handler_22;
        }
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_4__assign_source);
    tmp_assign_unpack_4__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    {
        PyObject *tmp_assign_source_102;
        CHECK_OBJECT(tmp_assign_unpack_4__assign_source);
        tmp_assign_source_102 = tmp_assign_unpack_4__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_102);
    }
    CHECK_OBJECT(tmp_assign_unpack_4__assign_source);
    Py_DECREF(tmp_assign_unpack_4__assign_source);
    tmp_assign_unpack_4__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        tmp_ass_subvalue_4 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_ass_subvalue_4 == NULL)) {
            tmp_ass_subvalue_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
        }

        if (tmp_ass_subvalue_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_4 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_4 == NULL)) {
            tmp_ass_subscribed_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_4 = mod_consts[121];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_real_arg_1;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        tmp_real_arg_1 = mod_consts[122];
        tmp_ass_subvalue_5 = BUILTIN_COMPLEX1(tstate, tmp_real_arg_1);
        if (tmp_ass_subvalue_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_5 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_5 == NULL)) {
            tmp_ass_subscribed_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_5);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_5 = mod_consts[123];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        Py_DECREF(tmp_ass_subvalue_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = MAKE_DICT_EMPTY();
        assert(tmp_assign_unpack_5__assign_source == NULL);
        tmp_assign_unpack_5__assign_source = tmp_assign_source_103;
    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        CHECK_OBJECT(tmp_assign_unpack_5__assign_source);
        tmp_ass_subvalue_6 = tmp_assign_unpack_5__assign_source;
        tmp_ass_subscribed_6 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_6 == NULL)) {
            tmp_ass_subscribed_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_23;
        }
        tmp_ass_subscript_6 = mod_consts[124];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_23;
        }
    }
    goto try_end_13;
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

    CHECK_OBJECT(tmp_assign_unpack_5__assign_source);
    Py_DECREF(tmp_assign_unpack_5__assign_source);
    tmp_assign_unpack_5__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    {
        PyObject *tmp_assign_source_104;
        CHECK_OBJECT(tmp_assign_unpack_5__assign_source);
        tmp_assign_source_104 = tmp_assign_unpack_5__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_104);
    }
    CHECK_OBJECT(tmp_assign_unpack_5__assign_source);
    Py_DECREF(tmp_assign_unpack_5__assign_source);
    tmp_assign_unpack_5__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_7;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_ass_subscript_7;
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_6 = mod_consts[124];
        tmp_ass_subvalue_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_6);
        if (tmp_ass_subvalue_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_7 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_7 == NULL)) {
            tmp_ass_subscribed_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_7);

            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_7 = mod_consts[126];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
        Py_DECREF(tmp_ass_subvalue_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_8;
        PyObject *tmp_ass_subscribed_8;
        PyObject *tmp_ass_subscript_8;
        tmp_ass_subvalue_8 = mod_consts[127];
        tmp_ass_subscribed_8 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_8 == NULL)) {
            tmp_ass_subscribed_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_8 = mod_consts[128];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_9;
        PyObject *tmp_ass_subscribed_9;
        PyObject *tmp_ass_subscript_9;
        tmp_ass_subvalue_9 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_ass_subvalue_9 == NULL)) {
            tmp_ass_subvalue_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_ass_subvalue_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_9 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_9 == NULL)) {
            tmp_ass_subscribed_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_9 = mod_consts[129];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_called_value_12;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto try_except_handler_24;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 133;
        tmp_assign_source_105 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_12);
        if (tmp_assign_source_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto try_except_handler_24;
        }
        assert(tmp_assign_unpack_6__assign_source == NULL);
        tmp_assign_unpack_6__assign_source = tmp_assign_source_105;
    }
    {
        PyObject *tmp_ass_subvalue_10;
        PyObject *tmp_ass_subscribed_10;
        PyObject *tmp_ass_subscript_10;
        CHECK_OBJECT(tmp_assign_unpack_6__assign_source);
        tmp_ass_subvalue_10 = tmp_assign_unpack_6__assign_source;
        tmp_ass_subscribed_10 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_10 == NULL)) {
            tmp_ass_subscribed_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto try_except_handler_24;
        }
        tmp_ass_subscript_10 = mod_consts[130];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto try_except_handler_24;
        }
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_6__assign_source);
    tmp_assign_unpack_6__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    {
        PyObject *tmp_assign_source_106;
        CHECK_OBJECT(tmp_assign_unpack_6__assign_source);
        tmp_assign_source_106 = tmp_assign_unpack_6__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_106);
    }
    CHECK_OBJECT(tmp_assign_unpack_6__assign_source);
    Py_DECREF(tmp_assign_unpack_6__assign_source);
    tmp_assign_unpack_6__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_11;
        PyObject *tmp_ass_subscribed_11;
        PyObject *tmp_ass_subscript_11;
        tmp_ass_subvalue_11 = mod_consts[122];
        tmp_ass_subscribed_11 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_11 == NULL)) {
            tmp_ass_subscribed_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_11 = mod_consts[132];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_107;
        tmp_assign_source_107 = mod_consts[122];
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        tmp_assign_source_108 = MAKE_LIST_EMPTY(0);
        assert(tmp_assign_unpack_8__assign_source == NULL);
        tmp_assign_unpack_8__assign_source = tmp_assign_source_108;
    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_12;
        PyObject *tmp_ass_subscribed_12;
        PyObject *tmp_ass_subscript_12;
        CHECK_OBJECT(tmp_assign_unpack_8__assign_source);
        tmp_ass_subvalue_12 = tmp_assign_unpack_8__assign_source;
        tmp_ass_subscribed_12 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_12 == NULL)) {
            tmp_ass_subscribed_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_25;
        }
        tmp_ass_subscript_12 = mod_consts[134];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_25;
        }
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_assign_unpack_8__assign_source);
    Py_DECREF(tmp_assign_unpack_8__assign_source);
    tmp_assign_unpack_8__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    {
        PyObject *tmp_assign_source_109;
        CHECK_OBJECT(tmp_assign_unpack_8__assign_source);
        tmp_assign_source_109 = tmp_assign_unpack_8__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_109);
    }
    CHECK_OBJECT(tmp_assign_unpack_8__assign_source);
    Py_DECREF(tmp_assign_unpack_8__assign_source);
    tmp_assign_unpack_8__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_13;
        PyObject *tmp_ass_subscribed_13;
        PyObject *tmp_ass_subscript_13;
        tmp_ass_subvalue_13 = Py_None;
        tmp_ass_subscribed_13 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_13 == NULL)) {
            tmp_ass_subscribed_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_13 = mod_consts[136];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_14;
        PyObject *tmp_called_value_13;
        PyObject *tmp_ass_subscribed_14;
        PyObject *tmp_ass_subscript_14;
        tmp_called_value_13 = (PyObject *)&PyBaseObject_Type;
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 137;
        tmp_ass_subvalue_14 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_13);
        if (tmp_ass_subvalue_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_14 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_14 == NULL)) {
            tmp_ass_subscribed_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_14);

            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_14 = mod_consts[137];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
        Py_DECREF(tmp_ass_subvalue_14);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_15;
        PyObject *tmp_ass_subscribed_15;
        PyObject *tmp_ass_subscript_15;
        tmp_ass_subvalue_15 = mod_consts[138];
        tmp_ass_subscribed_15 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_15 == NULL)) {
            tmp_ass_subscribed_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_15 = mod_consts[139];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_110;
        tmp_assign_source_110 = mod_consts[138];
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_110);
    }
    {
        PyObject *tmp_ass_subvalue_16;
        PyObject *tmp_ass_subscribed_16;
        PyObject *tmp_ass_subscript_16;
        tmp_ass_subvalue_16 = mod_consts[78];
        tmp_ass_subscribed_16 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_16 == NULL)) {
            tmp_ass_subscribed_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_16 = mod_consts[141];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_111;
        tmp_assign_source_111 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_111);
    }
    {
        PyObject *tmp_ass_subvalue_17;
        PyObject *tmp_ass_subscribed_17;
        PyObject *tmp_ass_subscript_17;
        tmp_ass_subvalue_17 = (PyObject *)&PyType_Type;
        tmp_ass_subscribed_17 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_17 == NULL)) {
            tmp_ass_subscribed_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_17 = mod_consts[143];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_18;
        PyObject *tmp_ass_subscribed_18;
        PyObject *tmp_ass_subscript_18;
        tmp_ass_subvalue_18 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_ass_subvalue_18 == NULL)) {
            tmp_ass_subvalue_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[133]);
        }

        if (tmp_ass_subvalue_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_18 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_18 == NULL)) {
            tmp_ass_subscribed_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_18 = mod_consts[144];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_18, tmp_ass_subscript_18, tmp_ass_subvalue_18);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_19;
        PyObject *tmp_ass_subscribed_19;
        PyObject *tmp_ass_subscript_19;
        tmp_ass_subvalue_19 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[140]);

        if (unlikely(tmp_ass_subvalue_19 == NULL)) {
            tmp_ass_subvalue_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[140]);
        }

        if (tmp_ass_subvalue_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_19 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_19 == NULL)) {
            tmp_ass_subscribed_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_19 = mod_consts[145];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_19, tmp_ass_subscript_19, tmp_ass_subvalue_19);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_20;
        PyObject *tmp_ass_subscribed_20;
        PyObject *tmp_ass_subscript_20;
        tmp_ass_subvalue_20 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_ass_subvalue_20 == NULL)) {
            tmp_ass_subvalue_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[146]);
        }

        if (tmp_ass_subvalue_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_20 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_20 == NULL)) {
            tmp_ass_subscribed_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_20 = mod_consts[147];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_20, tmp_ass_subscript_20, tmp_ass_subvalue_20);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_21;
        PyObject *tmp_ass_subscribed_21;
        PyObject *tmp_ass_subscript_21;
        tmp_ass_subvalue_21 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_ass_subvalue_21 == NULL)) {
            tmp_ass_subvalue_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
        }

        if (tmp_ass_subvalue_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_21 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_21 == NULL)) {
            tmp_ass_subscribed_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_21 = mod_consts[148];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_21, tmp_ass_subscript_21, tmp_ass_subvalue_21);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_22;
        PyObject *tmp_called_value_14;
        PyObject *tmp_ass_subscribed_22;
        PyObject *tmp_ass_subscript_22;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 147;
        tmp_ass_subvalue_22 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_14);
        if (tmp_ass_subvalue_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_22 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_22 == NULL)) {
            tmp_ass_subscribed_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_22);

            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_22 = mod_consts[149];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_22, tmp_ass_subscript_22, tmp_ass_subvalue_22);
        Py_DECREF(tmp_ass_subvalue_22);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = PySet_New(NULL);
        assert(tmp_assign_unpack_11__assign_source == NULL);
        tmp_assign_unpack_11__assign_source = tmp_assign_source_112;
    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_23;
        PyObject *tmp_ass_subscribed_23;
        PyObject *tmp_ass_subscript_23;
        CHECK_OBJECT(tmp_assign_unpack_11__assign_source);
        tmp_ass_subvalue_23 = tmp_assign_unpack_11__assign_source;
        tmp_ass_subscribed_23 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_23 == NULL)) {
            tmp_ass_subscribed_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_26;
        }
        tmp_ass_subscript_23 = mod_consts[150];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_23, tmp_ass_subscript_23, tmp_ass_subvalue_23);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_26;
        }
    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_assign_unpack_11__assign_source);
    Py_DECREF(tmp_assign_unpack_11__assign_source);
    tmp_assign_unpack_11__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    {
        PyObject *tmp_assign_source_113;
        CHECK_OBJECT(tmp_assign_unpack_11__assign_source);
        tmp_assign_source_113 = tmp_assign_unpack_11__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_113);
    }
    CHECK_OBJECT(tmp_assign_unpack_11__assign_source);
    Py_DECREF(tmp_assign_unpack_11__assign_source);
    tmp_assign_unpack_11__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_24;
        PyObject *tmp_ass_subscribed_24;
        PyObject *tmp_ass_subscript_24;
        tmp_ass_subvalue_24 = mod_consts[152];
        tmp_ass_subscribed_24 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_24 == NULL)) {
            tmp_ass_subscribed_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_24 = mod_consts[153];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_24, tmp_ass_subscript_24, tmp_ass_subvalue_24);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_called_value_15;
        PyObject *tmp_subscript_value_7;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_27;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 151;
        tmp_expression_value_27 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_15);
        if (tmp_expression_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_27;
        }
        tmp_subscript_value_7 = mod_consts[3];
        tmp_assign_source_114 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_27, tmp_subscript_value_7, 0);
        Py_DECREF(tmp_expression_value_27);
        if (tmp_assign_source_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_27;
        }
        assert(tmp_assign_unpack_12__assign_source == NULL);
        tmp_assign_unpack_12__assign_source = tmp_assign_source_114;
    }
    {
        PyObject *tmp_ass_subvalue_25;
        PyObject *tmp_ass_subscribed_25;
        PyObject *tmp_ass_subscript_25;
        CHECK_OBJECT(tmp_assign_unpack_12__assign_source);
        tmp_ass_subvalue_25 = tmp_assign_unpack_12__assign_source;
        tmp_ass_subscribed_25 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_25 == NULL)) {
            tmp_ass_subscribed_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_27;
        }
        tmp_ass_subscript_25 = mod_consts[154];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_25, tmp_ass_subscript_25, tmp_ass_subvalue_25);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_27;
        }
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_12__assign_source);
    tmp_assign_unpack_12__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    {
        PyObject *tmp_assign_source_115;
        CHECK_OBJECT(tmp_assign_unpack_12__assign_source);
        tmp_assign_source_115 = tmp_assign_unpack_12__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_115);
    }
    CHECK_OBJECT(tmp_assign_unpack_12__assign_source);
    Py_DECREF(tmp_assign_unpack_12__assign_source);
    tmp_assign_unpack_12__assign_source = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_called_instance_4;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_28;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 153;
        tmp_assign_source_116 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_4,
            mod_consts[156],
            PyTuple_GET_ITEM(mod_consts[157], 0)
        );

        if (tmp_assign_source_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_28;
        }
        assert(tmp_assign_unpack_13__assign_source == NULL);
        tmp_assign_unpack_13__assign_source = tmp_assign_source_116;
    }
    {
        PyObject *tmp_ass_subvalue_26;
        PyObject *tmp_ass_subscribed_26;
        PyObject *tmp_ass_subscript_26;
        CHECK_OBJECT(tmp_assign_unpack_13__assign_source);
        tmp_ass_subvalue_26 = tmp_assign_unpack_13__assign_source;
        tmp_ass_subscribed_26 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_26 == NULL)) {
            tmp_ass_subscribed_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_28;
        }
        tmp_ass_subscript_26 = mod_consts[158];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_26, tmp_ass_subscript_26, tmp_ass_subvalue_26);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_28;
        }
    }
    goto try_end_18;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_13__assign_source);
    tmp_assign_unpack_13__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    {
        PyObject *tmp_assign_source_117;
        CHECK_OBJECT(tmp_assign_unpack_13__assign_source);
        tmp_assign_source_117 = tmp_assign_unpack_13__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_117);
    }
    CHECK_OBJECT(tmp_assign_unpack_13__assign_source);
    Py_DECREF(tmp_assign_unpack_13__assign_source);
    tmp_assign_unpack_13__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_27;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_ass_subscribed_27;
        PyObject *tmp_ass_subscript_27;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 155;
        tmp_ass_subvalue_27 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_5,
            mod_consts[31],
            PyTuple_GET_ITEM(mod_consts[160], 0)
        );

        if (tmp_ass_subvalue_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_27 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_27 == NULL)) {
            tmp_ass_subscribed_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_27);

            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_27 = mod_consts[161];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_27, tmp_ass_subscript_27, tmp_ass_subvalue_27);
        Py_DECREF(tmp_ass_subvalue_27);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_28;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_ass_subscribed_28;
        PyObject *tmp_ass_subscript_28;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = MAKE_LIST1(mod_consts[3]);
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 156;
        tmp_ass_subvalue_28 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts[162], tmp_call_arg_element_1);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_ass_subvalue_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_28 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_28 == NULL)) {
            tmp_ass_subscribed_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_28);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_28 = mod_consts[163];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_28, tmp_ass_subscript_28, tmp_ass_subvalue_28);
        Py_DECREF(tmp_ass_subvalue_28);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_29;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_ass_subscribed_29;
        PyObject *tmp_ass_subscript_29;
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[164]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 157;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_ass_subvalue_29 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_16, call_args);
        }

        Py_DECREF(tmp_called_value_16);
        if (tmp_ass_subvalue_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_29 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_29 == NULL)) {
            tmp_ass_subscribed_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_29);

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_29 = mod_consts[165];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_29, tmp_ass_subscript_29, tmp_ass_subvalue_29);
        Py_DECREF(tmp_ass_subvalue_29);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_30;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_ass_subscribed_30;
        PyObject *tmp_ass_subscript_30;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 158;
        tmp_ass_subvalue_30 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts[166]);
        if (tmp_ass_subvalue_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_30 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_30 == NULL)) {
            tmp_ass_subscribed_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_30);

            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_30 = mod_consts[167];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_30, tmp_ass_subscript_30, tmp_ass_subvalue_30);
        Py_DECREF(tmp_ass_subvalue_30);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_31;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_ass_subscribed_31;
        PyObject *tmp_ass_subscript_31;
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[36]);
        if (tmp_called_instance_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 159;
        tmp_ass_subvalue_31 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_8, mod_consts[168]);
        Py_DECREF(tmp_called_instance_8);
        if (tmp_ass_subvalue_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_31 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_31 == NULL)) {
            tmp_ass_subscribed_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_31);

            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_31 = mod_consts[169];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_31, tmp_ass_subscript_31, tmp_ass_subvalue_31);
        Py_DECREF(tmp_ass_subvalue_31);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_32;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_ass_subscribed_32;
        PyObject *tmp_ass_subscript_32;
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 160;
        tmp_ass_subvalue_32 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_9, mod_consts[170]);
        if (tmp_ass_subvalue_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_32 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_32 == NULL)) {
            tmp_ass_subscribed_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_32);

            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_32 = mod_consts[171];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_32, tmp_ass_subscript_32, tmp_ass_subvalue_32);
        Py_DECREF(tmp_ass_subvalue_32);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_33;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_ass_subscribed_33;
        PyObject *tmp_ass_subscript_33;
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 162;
        tmp_ass_subvalue_33 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_10,
            mod_consts[172],
            PyTuple_GET_ITEM(mod_consts[173], 0)
        );

        if (tmp_ass_subvalue_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_33 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_33 == NULL)) {
            tmp_ass_subscribed_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_33);

            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_33 = mod_consts[174];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_33, tmp_ass_subscript_33, tmp_ass_subvalue_33);
        Py_DECREF(tmp_ass_subvalue_33);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_34;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_ass_subscribed_34;
        PyObject *tmp_ass_subscript_34;
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[175]);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 163;
        tmp_ass_subvalue_34 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_17, mod_consts[176]);

        Py_DECREF(tmp_called_value_17);
        if (tmp_ass_subvalue_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_34 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_34 == NULL)) {
            tmp_ass_subscribed_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_34);

            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_34 = mod_consts[177];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_34, tmp_ass_subscript_34, tmp_ass_subvalue_34);
        Py_DECREF(tmp_ass_subvalue_34);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_35;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_ass_subscribed_35;
        PyObject *tmp_ass_subscript_35;
        tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_instance_11 == NULL)) {
            tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
        }

        if (tmp_called_instance_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 165;
        tmp_ass_subvalue_35 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_11, mod_consts[178]);
        if (tmp_ass_subvalue_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_35 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_35 == NULL)) {
            tmp_ass_subscribed_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_35);

            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_35 = mod_consts[179];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_35, tmp_ass_subscript_35, tmp_ass_subvalue_35);
        Py_DECREF(tmp_ass_subvalue_35);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_called_instance_12;
        tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_instance_12 == NULL)) {
            tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_called_instance_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto try_except_handler_29;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 167;
        tmp_assign_source_118 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_12, mod_consts[180]);
        if (tmp_assign_source_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto try_except_handler_29;
        }
        assert(tmp_assign_unpack_14__assign_source == NULL);
        tmp_assign_unpack_14__assign_source = tmp_assign_source_118;
    }
    {
        PyObject *tmp_ass_subvalue_36;
        PyObject *tmp_ass_subscribed_36;
        PyObject *tmp_ass_subscript_36;
        CHECK_OBJECT(tmp_assign_unpack_14__assign_source);
        tmp_ass_subvalue_36 = tmp_assign_unpack_14__assign_source;
        tmp_ass_subscribed_36 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_36 == NULL)) {
            tmp_ass_subscribed_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto try_except_handler_29;
        }
        tmp_ass_subscript_36 = mod_consts[181];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_36, tmp_ass_subscript_36, tmp_ass_subvalue_36);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto try_except_handler_29;
        }
    }
    goto try_end_19;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_14__assign_source);
    tmp_assign_unpack_14__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    {
        PyObject *tmp_assign_source_119;
        CHECK_OBJECT(tmp_assign_unpack_14__assign_source);
        tmp_assign_source_119 = tmp_assign_unpack_14__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_119);
    }
    CHECK_OBJECT(tmp_assign_unpack_14__assign_source);
    Py_DECREF(tmp_assign_unpack_14__assign_source);
    tmp_assign_unpack_14__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_37;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_ass_subscribed_37;
        PyObject *tmp_ass_subscript_37;
        tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_instance_13 == NULL)) {
            tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_called_instance_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 168;
        tmp_ass_subvalue_37 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_13, mod_consts[183]);
        if (tmp_ass_subvalue_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_37 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_37 == NULL)) {
            tmp_ass_subscribed_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_37);

            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_37 = mod_consts[184];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_37, tmp_ass_subscript_37, tmp_ass_subvalue_37);
        Py_DECREF(tmp_ass_subvalue_37);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_38;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_ass_subscribed_38;
        PyObject *tmp_ass_subscript_38;
        tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_instance_14 == NULL)) {
            tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_called_instance_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 169;
        tmp_ass_subvalue_38 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_14, mod_consts[185]);
        if (tmp_ass_subvalue_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_38 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_38 == NULL)) {
            tmp_ass_subscribed_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_38);

            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_38 = mod_consts[186];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_38, tmp_ass_subscript_38, tmp_ass_subvalue_38);
        Py_DECREF(tmp_ass_subvalue_38);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_39;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_ass_subscribed_39;
        PyObject *tmp_ass_subscript_39;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[187]);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 170;
        tmp_ass_subvalue_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_18);
        if (tmp_ass_subvalue_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_39 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_39 == NULL)) {
            tmp_ass_subscribed_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_39);

            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_39 = mod_consts[188];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_39, tmp_ass_subscript_39, tmp_ass_subvalue_39);
        Py_DECREF(tmp_ass_subvalue_39);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_called_instance_15;
        tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_called_instance_15 == NULL)) {
            tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_called_instance_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_30;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 171;
        tmp_assign_source_120 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_15, mod_consts[189]);
        if (tmp_assign_source_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_30;
        }
        assert(tmp_assign_unpack_15__assign_source == NULL);
        tmp_assign_unpack_15__assign_source = tmp_assign_source_120;
    }
    {
        PyObject *tmp_ass_subvalue_40;
        PyObject *tmp_ass_subscribed_40;
        PyObject *tmp_ass_subscript_40;
        CHECK_OBJECT(tmp_assign_unpack_15__assign_source);
        tmp_ass_subvalue_40 = tmp_assign_unpack_15__assign_source;
        tmp_ass_subscribed_40 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_40 == NULL)) {
            tmp_ass_subscribed_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_30;
        }
        tmp_ass_subscript_40 = mod_consts[190];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_40, tmp_ass_subscript_40, tmp_ass_subvalue_40);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_30;
        }
    }
    goto try_end_20;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_15__assign_source);
    tmp_assign_unpack_15__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_30;
    exception_value = exception_keeper_value_30;
    exception_tb = exception_keeper_tb_30;
    exception_lineno = exception_keeper_lineno_30;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    {
        PyObject *tmp_assign_source_121;
        CHECK_OBJECT(tmp_assign_unpack_15__assign_source);
        tmp_assign_source_121 = tmp_assign_unpack_15__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_121);
    }
    CHECK_OBJECT(tmp_assign_unpack_15__assign_source);
    Py_DECREF(tmp_assign_unpack_15__assign_source);
    tmp_assign_unpack_15__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_41;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_ass_subscribed_41;
        PyObject *tmp_ass_subscript_41;
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[192]);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[191]);

        if (unlikely(tmp_args_element_value_5 == NULL)) {
            tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[191]);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = mod_consts[193];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 172;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_ass_subvalue_41 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_19, call_args);
        }

        Py_DECREF(tmp_called_value_19);
        if (tmp_ass_subvalue_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_41 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_41 == NULL)) {
            tmp_ass_subscribed_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_41);

            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_41 = mod_consts[194];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_41, tmp_ass_subscript_41, tmp_ass_subvalue_41);
        Py_DECREF(tmp_ass_subvalue_41);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_42;
        PyObject *tmp_called_instance_16;
        PyObject *tmp_ass_subscribed_42;
        PyObject *tmp_ass_subscript_42;
        tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_called_instance_16 == NULL)) {
            tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_called_instance_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 173;
        tmp_ass_subvalue_42 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_16,
            mod_consts[195],
            PyTuple_GET_ITEM(mod_consts[196], 0)
        );

        if (tmp_ass_subvalue_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_42 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_42 == NULL)) {
            tmp_ass_subscribed_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_42);

            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_42 = mod_consts[197];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_42, tmp_ass_subscript_42, tmp_ass_subvalue_42);
        Py_DECREF(tmp_ass_subvalue_42);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_mvar_value_2;
        int tmp_truth_name_5;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
        }

        if (tmp_mvar_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_mvar_value_2);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_16 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_122;
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_mvar_value_3;
        int tmp_truth_name_6;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        if (tmp_mvar_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_mvar_value_3);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_17 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        tmp_assign_source_122 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_assign_source_122 == NULL)) {
            tmp_assign_source_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_assign_source_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_assign_source_122 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_assign_source_122 == NULL)) {
            tmp_assign_source_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_assign_source_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        condexpr_end_4:;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_122);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_called_instance_17;
        tmp_called_instance_17 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_17 == NULL)) {
            tmp_called_instance_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_called_instance_17 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 176;
        tmp_assign_source_123 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_17, mod_consts[199]);
        if (tmp_assign_source_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_31;
        }
        assert(tmp_assign_unpack_16__assign_source == NULL);
        tmp_assign_unpack_16__assign_source = tmp_assign_source_123;
    }
    {
        PyObject *tmp_ass_subvalue_43;
        PyObject *tmp_ass_subscribed_43;
        PyObject *tmp_ass_subscript_43;
        CHECK_OBJECT(tmp_assign_unpack_16__assign_source);
        tmp_ass_subvalue_43 = tmp_assign_unpack_16__assign_source;
        tmp_ass_subscribed_43 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_ass_subscribed_43 == NULL)) {
            tmp_ass_subscribed_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_ass_subscribed_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_31;
        }
        tmp_ass_subscript_43 = mod_consts[200];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_43, tmp_ass_subscript_43, tmp_ass_subvalue_43);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_31;
        }
    }
    goto try_end_21;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_16__assign_source);
    tmp_assign_unpack_16__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_31;
    exception_value = exception_keeper_value_31;
    exception_tb = exception_keeper_tb_31;
    exception_lineno = exception_keeper_lineno_31;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    {
        PyObject *tmp_assign_source_124;
        CHECK_OBJECT(tmp_assign_unpack_16__assign_source);
        tmp_assign_source_124 = tmp_assign_unpack_16__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_124);
    }
    CHECK_OBJECT(tmp_assign_unpack_16__assign_source);
    Py_DECREF(tmp_assign_unpack_16__assign_source);
    tmp_assign_unpack_16__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_44;
        PyObject *tmp_called_instance_18;
        PyObject *tmp_ass_subscribed_44;
        PyObject *tmp_ass_subscript_44;
        tmp_called_instance_18 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_18 == NULL)) {
            tmp_called_instance_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_called_instance_18 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 177;
        tmp_ass_subvalue_44 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_18, mod_consts[202]);
        if (tmp_ass_subvalue_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_44 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_ass_subscribed_44 == NULL)) {
            tmp_ass_subscribed_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_ass_subscribed_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_44);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_44 = mod_consts[203];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_44, tmp_ass_subscript_44, tmp_ass_subvalue_44);
        Py_DECREF(tmp_ass_subvalue_44);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_45;
        PyObject *tmp_called_instance_19;
        PyObject *tmp_ass_subscribed_45;
        PyObject *tmp_ass_subscript_45;
        tmp_called_instance_19 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_19 == NULL)) {
            tmp_called_instance_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_called_instance_19 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 178;
        tmp_ass_subvalue_45 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_19, mod_consts[204]);
        if (tmp_ass_subvalue_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_45 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_ass_subscribed_45 == NULL)) {
            tmp_ass_subscribed_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_ass_subscribed_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_45);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_45 = mod_consts[205];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_45, tmp_ass_subscript_45, tmp_ass_subvalue_45);
        Py_DECREF(tmp_ass_subvalue_45);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_46;
        PyObject *tmp_called_instance_20;
        PyObject *tmp_ass_subscribed_46;
        PyObject *tmp_ass_subscript_46;
        tmp_called_instance_20 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_20 == NULL)) {
            tmp_called_instance_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_called_instance_20 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 179;
        tmp_ass_subvalue_46 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_20, mod_consts[206]);
        if (tmp_ass_subvalue_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_46 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_ass_subscribed_46 == NULL)) {
            tmp_ass_subscribed_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_ass_subscribed_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_46);

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_46 = mod_consts[207];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_46, tmp_ass_subscript_46, tmp_ass_subvalue_46);
        Py_DECREF(tmp_ass_subvalue_46);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_47;
        PyObject *tmp_called_instance_21;
        PyObject *tmp_ass_subscribed_47;
        PyObject *tmp_ass_subscript_47;
        tmp_called_instance_21 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_21 == NULL)) {
            tmp_called_instance_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_called_instance_21 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 180;
        tmp_ass_subvalue_47 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_21, mod_consts[208]);
        if (tmp_ass_subvalue_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_47 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_ass_subscribed_47 == NULL)) {
            tmp_ass_subscribed_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_ass_subscribed_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_47);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_47 = mod_consts[209];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_47, tmp_ass_subscript_47, tmp_ass_subvalue_47);
        Py_DECREF(tmp_ass_subvalue_47);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_48;
        PyObject *tmp_called_instance_22;
        PyObject *tmp_ass_subscribed_48;
        PyObject *tmp_ass_subscript_48;
        tmp_called_instance_22 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_22 == NULL)) {
            tmp_called_instance_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_called_instance_22 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 181;
        tmp_ass_subvalue_48 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_22, mod_consts[210]);
        if (tmp_ass_subvalue_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_48 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_ass_subscribed_48 == NULL)) {
            tmp_ass_subscribed_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_ass_subscribed_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_48);

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_48 = mod_consts[211];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_48, tmp_ass_subscript_48, tmp_ass_subvalue_48);
        Py_DECREF(tmp_ass_subvalue_48);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_49;
        PyObject *tmp_called_instance_23;
        PyObject *tmp_ass_subscribed_49;
        PyObject *tmp_ass_subscript_49;
        tmp_called_instance_23 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_23 == NULL)) {
            tmp_called_instance_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_called_instance_23 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 182;
        tmp_ass_subvalue_49 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_23, mod_consts[99]);
        if (tmp_ass_subvalue_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_49 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_ass_subscribed_49 == NULL)) {
            tmp_ass_subscribed_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_ass_subscribed_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_49);

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_49 = mod_consts[212];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_49, tmp_ass_subscript_49, tmp_ass_subvalue_49);
        Py_DECREF(tmp_ass_subvalue_49);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_50;
        PyObject *tmp_called_instance_24;
        PyObject *tmp_ass_subscribed_50;
        PyObject *tmp_ass_subscript_50;
        tmp_called_instance_24 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_24 == NULL)) {
            tmp_called_instance_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_called_instance_24 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 183;
        tmp_ass_subvalue_50 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_24, mod_consts[213]);
        if (tmp_ass_subvalue_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_50 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_ass_subscribed_50 == NULL)) {
            tmp_ass_subscribed_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_ass_subscribed_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_50);

            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_50 = mod_consts[214];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_50, tmp_ass_subscript_50, tmp_ass_subvalue_50);
        Py_DECREF(tmp_ass_subvalue_50);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_51;
        PyObject *tmp_called_instance_25;
        PyObject *tmp_ass_subscribed_51;
        PyObject *tmp_ass_subscript_51;
        tmp_called_instance_25 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_25 == NULL)) {
            tmp_called_instance_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_called_instance_25 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 184;
        tmp_ass_subvalue_51 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_25, mod_consts[215]);
        if (tmp_ass_subvalue_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_51 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_ass_subscribed_51 == NULL)) {
            tmp_ass_subscribed_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_ass_subscribed_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_51);

            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_51 = mod_consts[216];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_51, tmp_ass_subscript_51, tmp_ass_subvalue_51);
        Py_DECREF(tmp_ass_subvalue_51);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_52;
        PyObject *tmp_called_instance_26;
        PyObject *tmp_ass_subscribed_52;
        PyObject *tmp_ass_subscript_52;
        tmp_called_instance_26 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_26 == NULL)) {
            tmp_called_instance_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_called_instance_26 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 185;
        tmp_ass_subvalue_52 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_26, mod_consts[217]);
        if (tmp_ass_subvalue_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_52 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_ass_subscribed_52 == NULL)) {
            tmp_ass_subscribed_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_ass_subscribed_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_52);

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_52 = mod_consts[218];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_52, tmp_ass_subscript_52, tmp_ass_subvalue_52);
        Py_DECREF(tmp_ass_subvalue_52);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_53;
        PyObject *tmp_called_instance_27;
        PyObject *tmp_ass_subscribed_53;
        PyObject *tmp_ass_subscript_53;
        tmp_called_instance_27 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_27 == NULL)) {
            tmp_called_instance_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_called_instance_27 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 186;
        tmp_ass_subvalue_53 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_27, mod_consts[219]);
        if (tmp_ass_subvalue_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_53 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_ass_subscribed_53 == NULL)) {
            tmp_ass_subscribed_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_ass_subscribed_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_53);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_53 = mod_consts[220];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_53, tmp_ass_subscript_53, tmp_ass_subvalue_53);
        Py_DECREF(tmp_ass_subvalue_53);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_54;
        PyObject *tmp_called_instance_28;
        PyObject *tmp_ass_subscribed_54;
        PyObject *tmp_ass_subscript_54;
        tmp_called_instance_28 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_28 == NULL)) {
            tmp_called_instance_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_called_instance_28 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 187;
        tmp_ass_subvalue_54 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_28, mod_consts[221]);
        if (tmp_ass_subvalue_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_54 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_ass_subscribed_54 == NULL)) {
            tmp_ass_subscribed_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_ass_subscribed_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_54);

            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_54 = mod_consts[222];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_54, tmp_ass_subscript_54, tmp_ass_subvalue_54);
        Py_DECREF(tmp_ass_subvalue_54);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_55;
        PyObject *tmp_called_instance_29;
        PyObject *tmp_ass_subscribed_55;
        PyObject *tmp_ass_subscript_55;
        tmp_called_instance_29 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_29 == NULL)) {
            tmp_called_instance_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_called_instance_29 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 188;
        tmp_ass_subvalue_55 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_29, mod_consts[223]);
        if (tmp_ass_subvalue_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_55 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_ass_subscribed_55 == NULL)) {
            tmp_ass_subscribed_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_ass_subscribed_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_55);

            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_55 = mod_consts[224];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_55, tmp_ass_subscript_55, tmp_ass_subvalue_55);
        Py_DECREF(tmp_ass_subvalue_55);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_56;
        PyObject *tmp_called_instance_30;
        PyObject *tmp_ass_subscribed_56;
        PyObject *tmp_ass_subscript_56;
        tmp_called_instance_30 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_30 == NULL)) {
            tmp_called_instance_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_called_instance_30 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 189;
        tmp_ass_subvalue_56 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_30, mod_consts[225]);
        if (tmp_ass_subvalue_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_56 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_ass_subscribed_56 == NULL)) {
            tmp_ass_subscribed_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_ass_subscribed_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_56);

            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_56 = mod_consts[226];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_56, tmp_ass_subscript_56, tmp_ass_subvalue_56);
        Py_DECREF(tmp_ass_subvalue_56);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_57;
        PyObject *tmp_called_instance_31;
        PyObject *tmp_ass_subscribed_57;
        PyObject *tmp_ass_subscript_57;
        tmp_called_instance_31 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_31 == NULL)) {
            tmp_called_instance_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_called_instance_31 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 190;
        tmp_ass_subvalue_57 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_31, mod_consts[227]);
        if (tmp_ass_subvalue_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_57 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_ass_subscribed_57 == NULL)) {
            tmp_ass_subscribed_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_ass_subscribed_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_57);

            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_57 = mod_consts[228];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_57, tmp_ass_subscript_57, tmp_ass_subvalue_57);
        Py_DECREF(tmp_ass_subvalue_57);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
    }
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_dill$_objects, mod_consts[198]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[198]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 191;

        goto frame_exception_exit_1;
    }

    {
        PyObject *tmp_ass_subvalue_58;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_ass_subscribed_58;
        PyObject *tmp_ass_subscript_58;
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_expression_value_33 == NULL));
        tmp_ass_subvalue_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[229]);
        if (tmp_ass_subvalue_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_58 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_58 == NULL)) {
            tmp_ass_subscribed_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_58);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_58 = mod_consts[230];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_58, tmp_ass_subscript_58, tmp_ass_subvalue_58);
        Py_DECREF(tmp_ass_subvalue_58);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_59;
        PyObject *tmp_ass_subscribed_59;
        PyObject *tmp_ass_subscript_59;
        tmp_ass_subvalue_59 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_ass_subvalue_59 == NULL)) {
            tmp_ass_subvalue_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
        }

        if (tmp_ass_subvalue_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_59 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_59 == NULL)) {
            tmp_ass_subscribed_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_59 = mod_consts[231];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_59, tmp_ass_subscript_59, tmp_ass_subvalue_59);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
    }
    branch_no_13:;
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_name_value_40;
        PyObject *tmp_globals_arg_value_37;
        PyObject *tmp_locals_arg_value_37;
        PyObject *tmp_fromlist_value_37;
        PyObject *tmp_level_value_37;
        tmp_name_value_40 = mod_consts[232];
        tmp_globals_arg_value_37 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_37 = Py_None;
        tmp_fromlist_value_37 = Py_None;
        tmp_level_value_37 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 201;
        tmp_assign_source_125 = IMPORT_MODULE5(tstate, tmp_name_value_40, tmp_globals_arg_value_37, tmp_locals_arg_value_37, tmp_fromlist_value_37, tmp_level_value_37);
        if (tmp_assign_source_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        tmp_assign_source_126 = IMPORT_HARD_IO();
        assert(!(tmp_assign_source_126 == NULL));
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[233], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        {
            PyObject *hard_module = IMPORT_HARD_IO();
            tmp_assign_source_127 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[29]);
        }
        assert(!(tmp_assign_source_127 == NULL));
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[234], tmp_assign_source_127);
    }
    {
        PyObject *tmp_ass_subvalue_60;
        PyObject *tmp_ass_subscribed_60;
        PyObject *tmp_ass_subscript_60;
        tmp_ass_subvalue_60 = BYTEARRAY_COPY(tstate, mod_consts[235]);
        tmp_ass_subscribed_60 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_60 == NULL)) {
            tmp_ass_subscribed_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_60);

            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_60 = mod_consts[236];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_60, tmp_ass_subscript_60, tmp_ass_subvalue_60);
        Py_DECREF(tmp_ass_subvalue_60);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_61;
        PyObject *tmp_called_instance_32;
        PyObject *tmp_ass_subscribed_61;
        PyObject *tmp_ass_subscript_61;
        tmp_called_instance_32 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[232]);

        if (unlikely(tmp_called_instance_32 == NULL)) {
            tmp_called_instance_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[232]);
        }

        if (tmp_called_instance_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 207;
        tmp_ass_subvalue_61 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_32, mod_consts[237]);
        if (tmp_ass_subvalue_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_61 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_61 == NULL)) {
            tmp_ass_subscribed_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_61);

            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_61 = mod_consts[238];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_61, tmp_ass_subscript_61, tmp_ass_subvalue_61);
        Py_DECREF(tmp_ass_subvalue_61);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_62;
        PyObject *tmp_called_instance_33;
        PyObject *tmp_ass_subscribed_62;
        PyObject *tmp_ass_subscript_62;
        tmp_called_instance_33 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_called_instance_33 == NULL)) {
            tmp_called_instance_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
        }

        if (tmp_called_instance_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 208;
        tmp_ass_subvalue_62 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_33, mod_consts[239]);
        if (tmp_ass_subvalue_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_62 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_62 == NULL)) {
            tmp_ass_subscribed_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_62);

            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_62 = mod_consts[240];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_62, tmp_ass_subscript_62, tmp_ass_subvalue_62);
        Py_DECREF(tmp_ass_subvalue_62);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_63;
        PyObject *tmp_called_instance_34;
        PyObject *tmp_ass_subscribed_63;
        PyObject *tmp_ass_subscript_63;
        tmp_called_instance_34 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_called_instance_34 == NULL)) {
            tmp_called_instance_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[233]);
        }

        assert(!(tmp_called_instance_34 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 210;
        tmp_ass_subvalue_63 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_34, mod_consts[241]);
        if (tmp_ass_subvalue_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_63 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_63 == NULL)) {
            tmp_ass_subscribed_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_63);

            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_63 = mod_consts[242];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_63, tmp_ass_subscript_63, tmp_ass_subvalue_63);
        Py_DECREF(tmp_ass_subvalue_63);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_64;
        PyObject *tmp_called_instance_35;
        PyObject *tmp_ass_subscribed_64;
        PyObject *tmp_ass_subscript_64;
        tmp_called_instance_35 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_called_instance_35 == NULL)) {
            tmp_called_instance_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[233]);
        }

        assert(!(tmp_called_instance_35 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 211;
        tmp_ass_subvalue_64 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_35, mod_consts[243]);
        if (tmp_ass_subvalue_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_64 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_64 == NULL)) {
            tmp_ass_subscribed_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_64);

            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_64 = mod_consts[244];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_64, tmp_ass_subscript_64, tmp_ass_subvalue_64);
        Py_DECREF(tmp_ass_subvalue_64);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_65;
        PyObject *tmp_called_instance_36;
        PyObject *tmp_ass_subscribed_65;
        PyObject *tmp_ass_subscript_65;
        tmp_called_instance_36 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_called_instance_36 == NULL)) {
            tmp_called_instance_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[233]);
        }

        assert(!(tmp_called_instance_36 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 212;
        tmp_ass_subvalue_65 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_36, mod_consts[245]);
        if (tmp_ass_subvalue_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_65 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_65 == NULL)) {
            tmp_ass_subscribed_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_65);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_65 = mod_consts[246];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_65, tmp_ass_subscript_65, tmp_ass_subvalue_65);
        Py_DECREF(tmp_ass_subvalue_65);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_66;
        PyObject *tmp_called_instance_37;
        PyObject *tmp_ass_subscribed_66;
        PyObject *tmp_ass_subscript_66;
        tmp_called_instance_37 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_called_instance_37 == NULL)) {
            tmp_called_instance_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[233]);
        }

        assert(!(tmp_called_instance_37 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 213;
        tmp_ass_subvalue_66 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_37, mod_consts[247]);
        if (tmp_ass_subvalue_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_66 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_66 == NULL)) {
            tmp_ass_subscribed_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_66);

            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_66 = mod_consts[248];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_66, tmp_ass_subscript_66, tmp_ass_subvalue_66);
        Py_DECREF(tmp_ass_subvalue_66);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_67;
        PyObject *tmp_called_value_20;
        PyObject *tmp_ass_subscribed_67;
        PyObject *tmp_ass_subscript_67;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[234]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[234]);
        }

        assert(!(tmp_called_value_20 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 214;
        tmp_ass_subvalue_67 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_20);
        if (tmp_ass_subvalue_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_67 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_67 == NULL)) {
            tmp_ass_subscribed_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_67);

            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_67 = mod_consts[249];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_67, tmp_ass_subscript_67, tmp_ass_subvalue_67);
        Py_DECREF(tmp_ass_subvalue_67);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_68;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_ass_subscribed_68;
        PyObject *tmp_ass_subscript_68;
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[250]);
        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[182]);

        if (unlikely(tmp_args_element_value_7 == NULL)) {
            tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[182]);
        }

        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_args_element_value_8 == NULL)) {
            tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 215;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_ass_subvalue_68 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_21, call_args);
        }

        Py_DECREF(tmp_called_value_21);
        if (tmp_ass_subvalue_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_68 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_68 == NULL)) {
            tmp_ass_subscribed_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_68);

            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_68 = mod_consts[251];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_68, tmp_ass_subscript_68, tmp_ass_subvalue_68);
        Py_DECREF(tmp_ass_subvalue_68);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_mvar_value_4;
        int tmp_truth_name_7;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
        }

        if (tmp_mvar_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_mvar_value_4);
        if (tmp_truth_name_7 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_18 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_128;
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_mvar_value_5;
        int tmp_truth_name_8;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        if (tmp_mvar_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_mvar_value_5);
        if (tmp_truth_name_8 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_19 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        tmp_assign_source_128 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_assign_source_128 == NULL)) {
            tmp_assign_source_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_assign_source_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_assign_source_128 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_assign_source_128 == NULL)) {
            tmp_assign_source_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_assign_source_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        condexpr_end_5:;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_128);
    }
    {
        PyObject *tmp_ass_subvalue_69;
        PyObject *tmp_called_instance_38;
        PyObject *tmp_ass_subscribed_69;
        PyObject *tmp_ass_subscript_69;
        tmp_called_instance_38 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_38 == NULL)) {
            tmp_called_instance_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_called_instance_38 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 218;
        tmp_ass_subvalue_69 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_38,
            mod_consts[252],
            PyTuple_GET_ITEM(mod_consts[173], 0)
        );

        if (tmp_ass_subvalue_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_69 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_ass_subscribed_69 == NULL)) {
            tmp_ass_subscribed_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_ass_subscribed_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_69);

            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_69 = mod_consts[253];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_69, tmp_ass_subscript_69, tmp_ass_subvalue_69);
        Py_DECREF(tmp_ass_subvalue_69);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_70;
        PyObject *tmp_called_instance_39;
        PyObject *tmp_ass_subscribed_70;
        PyObject *tmp_ass_subscript_70;
        tmp_called_instance_39 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_39 == NULL)) {
            tmp_called_instance_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_called_instance_39 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 219;
        tmp_ass_subvalue_70 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_39, mod_consts[254]);
        if (tmp_ass_subvalue_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_70 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_ass_subscribed_70 == NULL)) {
            tmp_ass_subscribed_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_ass_subscribed_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_70);

            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_70 = mod_consts[255];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_70, tmp_ass_subscript_70, tmp_ass_subvalue_70);
        Py_DECREF(tmp_ass_subvalue_70);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
    }
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_dill$_objects, mod_consts[198]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[198]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 220;

        goto frame_exception_exit_1;
    }

    branch_no_14:;
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_name_value_41;
        PyObject *tmp_globals_arg_value_38;
        PyObject *tmp_locals_arg_value_38;
        PyObject *tmp_fromlist_value_38;
        PyObject *tmp_level_value_38;
        tmp_name_value_41 = mod_consts[256];
        tmp_globals_arg_value_38 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_38 = Py_None;
        tmp_fromlist_value_38 = Py_None;
        tmp_level_value_38 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 221;
        tmp_assign_source_129 = IMPORT_MODULE5(tstate, tmp_name_value_41, tmp_globals_arg_value_38, tmp_locals_arg_value_38, tmp_fromlist_value_38, tmp_level_value_38);
        if (tmp_assign_source_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[256], tmp_assign_source_129);
    }
    {
        PyObject *tmp_ass_subvalue_71;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_ass_subscribed_71;
        PyObject *tmp_ass_subscript_71;
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[257]);
        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_args_element_value_9 == NULL)) {
            tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 223;
        tmp_ass_subvalue_71 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_22);
        if (tmp_ass_subvalue_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_71 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_71 == NULL)) {
            tmp_ass_subscribed_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_71);

            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_71 = mod_consts[258];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_71, tmp_ass_subscript_71, tmp_ass_subvalue_71);
        Py_DECREF(tmp_ass_subvalue_71);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_72;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_ass_subscribed_72;
        PyObject *tmp_ass_subscript_72;
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[259]);
        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_args_element_value_10 == NULL)) {
            tmp_args_element_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 224;
        tmp_ass_subvalue_72 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_23);
        if (tmp_ass_subvalue_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_72 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_72 == NULL)) {
            tmp_ass_subscribed_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_72);

            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_72 = mod_consts[260];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_72, tmp_ass_subscript_72, tmp_ass_subvalue_72);
        Py_DECREF(tmp_ass_subvalue_72);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_mvar_value_6;
        int tmp_truth_name_9;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
        }

        if (tmp_mvar_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_mvar_value_6);
        if (tmp_truth_name_9 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_20 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_130;
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_mvar_value_7;
        int tmp_truth_name_10;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        if (tmp_mvar_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_10 = CHECK_IF_TRUE(tmp_mvar_value_7);
        if (tmp_truth_name_10 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_21 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        tmp_assign_source_130 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_assign_source_130 == NULL)) {
            tmp_assign_source_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_assign_source_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_assign_source_130 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_assign_source_130 == NULL)) {
            tmp_assign_source_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_assign_source_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        condexpr_end_6:;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_130);
    }
    {
        PyObject *tmp_ass_subvalue_73;
        PyObject *tmp_called_instance_40;
        PyObject *tmp_ass_subscribed_73;
        PyObject *tmp_ass_subscript_73;
        tmp_called_instance_40 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_40 == NULL)) {
            tmp_called_instance_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_called_instance_40 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 227;
        tmp_ass_subvalue_73 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_40, mod_consts[261]);
        if (tmp_ass_subvalue_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_73 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_ass_subscribed_73 == NULL)) {
            tmp_ass_subscribed_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_ass_subscribed_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_73);

            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_73 = mod_consts[262];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_73, tmp_ass_subscript_73, tmp_ass_subvalue_73);
        Py_DECREF(tmp_ass_subvalue_73);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
    }
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_dill$_objects, mod_consts[198]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[198]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 228;

        goto frame_exception_exit_1;
    }

    branch_no_15:;
    {
        PyObject *tmp_ass_subvalue_74;
        PyObject *tmp_called_instance_41;
        PyObject *tmp_ass_subscribed_74;
        PyObject *tmp_ass_subscript_74;
        tmp_called_instance_41 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_instance_41 == NULL)) {
            tmp_called_instance_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_called_instance_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 230;
        tmp_ass_subvalue_74 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_41, mod_consts[263]);
        if (tmp_ass_subvalue_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_74 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_74 == NULL)) {
            tmp_ass_subscribed_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_74);

            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_74 = mod_consts[264];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_74, tmp_ass_subscript_74, tmp_ass_subvalue_74);
        Py_DECREF(tmp_ass_subvalue_74);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_75;
        PyObject *tmp_called_instance_42;
        PyObject *tmp_ass_subscribed_75;
        PyObject *tmp_ass_subscript_75;
        tmp_called_instance_42 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[256]);

        if (unlikely(tmp_called_instance_42 == NULL)) {
            tmp_called_instance_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[256]);
        }

        if (tmp_called_instance_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 231;
        tmp_ass_subvalue_75 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_42, mod_consts[265]);
        if (tmp_ass_subvalue_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_75 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_75 == NULL)) {
            tmp_ass_subscribed_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_75);

            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_75 = mod_consts[266];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_75, tmp_ass_subscript_75, tmp_ass_subvalue_75);
        Py_DECREF(tmp_ass_subvalue_75);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_76;
        PyObject *tmp_compile_source_1;
        PyObject *tmp_compile_filename_1;
        PyObject *tmp_compile_mode_1;
        PyObject *tmp_ass_subscribed_76;
        PyObject *tmp_ass_subscript_76;
        tmp_compile_source_1 = mod_consts[267];
        tmp_compile_filename_1 = mod_consts[267];
        tmp_compile_mode_1 = mod_consts[268];
        tmp_ass_subvalue_76 = COMPILE_CODE(tstate, tmp_compile_source_1, tmp_compile_filename_1, tmp_compile_mode_1, NULL, NULL, NULL);
        if (tmp_ass_subvalue_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_76 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_76 == NULL)) {
            tmp_ass_subscribed_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_76);

            exception_lineno = 235;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_76 = mod_consts[269];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_76, tmp_ass_subscript_76, tmp_ass_subvalue_76);
        Py_DECREF(tmp_ass_subvalue_76);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_77;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_ass_subscribed_77;
        PyObject *tmp_ass_subscript_77;
        tmp_expression_value_37 = (PyObject *)&PyType_Type;
        tmp_ass_subvalue_77 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_37);
        assert(!(tmp_ass_subvalue_77 == NULL));
        tmp_ass_subscribed_77 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_77 == NULL)) {
            tmp_ass_subscribed_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_77);

            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_77 = mod_consts[270];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_77, tmp_ass_subscript_77, tmp_ass_subvalue_77);
        Py_DECREF(tmp_ass_subvalue_77);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_78;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_ass_subscribed_78;
        PyObject *tmp_ass_subscript_78;
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_78 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_38);
        if (tmp_ass_subvalue_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_78 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_78 == NULL)) {
            tmp_ass_subscribed_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_78);

            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_78 = mod_consts[271];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_78, tmp_ass_subscript_78, tmp_ass_subvalue_78);
        Py_DECREF(tmp_ass_subvalue_78);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_79;
        PyObject *tmp_ass_subscribed_79;
        PyObject *tmp_ass_subscript_79;
        tmp_ass_subvalue_79 = LOOKUP_BUILTIN(mod_consts[272]);
        assert(tmp_ass_subvalue_79 != NULL);
        tmp_ass_subscribed_79 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_79 == NULL)) {
            tmp_ass_subscribed_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_79 = mod_consts[273];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_79, tmp_ass_subscript_79, tmp_ass_subvalue_79);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_80;
        PyObject *tmp_called_instance_43;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_open_mode_1;
        PyObject *tmp_open_buffering_1;
        PyObject *tmp_ass_subscribed_80;
        PyObject *tmp_ass_subscript_80;
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        assert(!(tmp_expression_value_39 == NULL));
        tmp_open_filename_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[274]);
        if (tmp_open_filename_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_open_mode_1 = mod_consts[275];
        tmp_open_buffering_1 = mod_consts[3];
        tmp_called_instance_43 = BUILTIN_OPEN(tstate, tmp_open_filename_1, tmp_open_mode_1, tmp_open_buffering_1, NULL, NULL, NULL, NULL, NULL);
        Py_DECREF(tmp_open_filename_1);
        if (tmp_called_instance_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 239;
        tmp_ass_subvalue_80 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_43, mod_consts[276]);
        Py_DECREF(tmp_called_instance_43);
        if (tmp_ass_subvalue_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_80 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_80 == NULL)) {
            tmp_ass_subscribed_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_80);

            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_80 = mod_consts[277];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_80, tmp_ass_subscript_80, tmp_ass_subvalue_80);
        Py_DECREF(tmp_ass_subvalue_80);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_81;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_ass_subscribed_81;
        PyObject *tmp_ass_subscript_81;
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[31]);
        if (tmp_expression_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_81 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[278]);
        Py_DECREF(tmp_expression_value_40);
        if (tmp_ass_subvalue_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_81 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_81 == NULL)) {
            tmp_ass_subscribed_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_81);

            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_81 = mod_consts[279];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_81, tmp_ass_subscript_81, tmp_ass_subvalue_81);
        Py_DECREF(tmp_ass_subvalue_81);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_131;


        tmp_assign_source_131 = MAKE_FUNCTION_dill$_objects$$$function__6_lambda();

        assert(tmp_assign_unpack_17__assign_source == NULL);
        tmp_assign_unpack_17__assign_source = tmp_assign_source_131;
    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_82;
        PyObject *tmp_ass_subscribed_82;
        PyObject *tmp_ass_subscript_82;
        CHECK_OBJECT(tmp_assign_unpack_17__assign_source);
        tmp_ass_subvalue_82 = tmp_assign_unpack_17__assign_source;
        tmp_ass_subscribed_82 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_82 == NULL)) {
            tmp_ass_subscribed_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_32;
        }
        tmp_ass_subscript_82 = mod_consts[280];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_82, tmp_ass_subscript_82, tmp_ass_subvalue_82);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_32;
        }
    }
    goto try_end_22;
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_assign_unpack_17__assign_source);
    Py_DECREF(tmp_assign_unpack_17__assign_source);
    tmp_assign_unpack_17__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_32;
    exception_value = exception_keeper_value_32;
    exception_tb = exception_keeper_tb_32;
    exception_lineno = exception_keeper_lineno_32;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;
    {
        PyObject *tmp_assign_source_132;
        CHECK_OBJECT(tmp_assign_unpack_17__assign_source);
        tmp_assign_source_132 = tmp_assign_unpack_17__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[281], tmp_assign_source_132);
    }
    CHECK_OBJECT(tmp_assign_unpack_17__assign_source);
    Py_DECREF(tmp_assign_unpack_17__assign_source);
    tmp_assign_unpack_17__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_83;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_ass_subscribed_83;
        PyObject *tmp_ass_subscript_83;
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[92]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_83 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[93]);
        if (tmp_ass_subvalue_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_83 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_83 == NULL)) {
            tmp_ass_subscribed_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_83);

            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_83 = mod_consts[282];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_83, tmp_ass_subscript_83, tmp_ass_subvalue_83);
        Py_DECREF(tmp_ass_subvalue_83);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_22;
        PyObject *tmp_operand_value_5;
        tmp_operand_value_5 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_operand_value_5 == NULL)) {
            tmp_operand_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        if (tmp_operand_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_22 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_22 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_ass_subvalue_84;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_ass_subscribed_84;
        PyObject *tmp_ass_subscript_84;
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[283]);
        if (tmp_expression_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_84 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[284]);
        Py_DECREF(tmp_expression_value_43);
        if (tmp_ass_subvalue_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_84 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_84 == NULL)) {
            tmp_ass_subscribed_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_84);

            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_84 = mod_consts[285];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_84, tmp_ass_subscript_84, tmp_ass_subvalue_84);
        Py_DECREF(tmp_ass_subvalue_84);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
    }
    branch_no_16:;
    // Tried code:
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_called_value_24;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_33;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 245;
        tmp_expression_value_45 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_24);
        if (tmp_expression_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_33;
        }
        tmp_assign_source_133 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[76]);
        Py_DECREF(tmp_expression_value_45);
        if (tmp_assign_source_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_33;
        }
        assert(tmp_assign_unpack_18__assign_source == NULL);
        tmp_assign_unpack_18__assign_source = tmp_assign_source_133;
    }
    {
        PyObject *tmp_ass_subvalue_85;
        PyObject *tmp_ass_subscribed_85;
        PyObject *tmp_ass_subscript_85;
        CHECK_OBJECT(tmp_assign_unpack_18__assign_source);
        tmp_ass_subvalue_85 = tmp_assign_unpack_18__assign_source;
        tmp_ass_subscribed_85 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_85 == NULL)) {
            tmp_ass_subscribed_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_33;
        }
        tmp_ass_subscript_85 = mod_consts[286];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_85, tmp_ass_subscript_85, tmp_ass_subvalue_85);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_33;
        }
    }
    goto try_end_23;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_18__assign_source);
    tmp_assign_unpack_18__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto frame_exception_exit_1;
    // End of try:
    try_end_23:;
    {
        PyObject *tmp_assign_source_134;
        CHECK_OBJECT(tmp_assign_unpack_18__assign_source);
        tmp_assign_source_134 = tmp_assign_unpack_18__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_134);
    }
    CHECK_OBJECT(tmp_assign_unpack_18__assign_source);
    Py_DECREF(tmp_assign_unpack_18__assign_source);
    tmp_assign_unpack_18__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_86;
        PyObject *tmp_ass_subscribed_86;
        PyObject *tmp_ass_subscript_86;
        tmp_ass_subvalue_86 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_ass_subvalue_86 == NULL)) {
            tmp_ass_subvalue_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_ass_subvalue_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_86 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_86 == NULL)) {
            tmp_ass_subscribed_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_86 = mod_consts[287];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_86, tmp_ass_subscript_86, tmp_ass_subvalue_86);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_87;
        PyObject *tmp_ass_subscribed_87;
        PyObject *tmp_ass_subscript_87;
        tmp_ass_subvalue_87 = Py_NotImplemented;
        tmp_ass_subscribed_87 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_87 == NULL)) {
            tmp_ass_subscribed_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_87 = mod_consts[288];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_87, tmp_ass_subscript_87, tmp_ass_subvalue_87);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_88;
        PyObject *tmp_ass_subscribed_88;
        PyObject *tmp_ass_subscript_88;
        tmp_ass_subvalue_88 = mod_consts[289];
        tmp_ass_subscribed_88 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_88 == NULL)) {
            tmp_ass_subscribed_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_88 = mod_consts[290];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_88, tmp_ass_subscript_88, tmp_ass_subvalue_88);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_89;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_ass_subscribed_89;
        PyObject *tmp_ass_subscript_89;
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_89 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[76]);
        if (tmp_ass_subvalue_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_89 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_89 == NULL)) {
            tmp_ass_subscribed_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_89);

            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_89 = mod_consts[291];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_89, tmp_ass_subscript_89, tmp_ass_subvalue_89);
        Py_DECREF(tmp_ass_subvalue_89);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_90;
        PyObject *tmp_open_filename_2;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_open_mode_2;
        PyObject *tmp_ass_subscribed_90;
        PyObject *tmp_ass_subscript_90;
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        assert(!(tmp_expression_value_47 == NULL));
        tmp_open_filename_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[274]);
        if (tmp_open_filename_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        tmp_open_mode_2 = mod_consts[292];
        tmp_ass_subvalue_90 = BUILTIN_OPEN(tstate, tmp_open_filename_2, tmp_open_mode_2, NULL, NULL, NULL, NULL, NULL, NULL);
        Py_DECREF(tmp_open_filename_2);
        if (tmp_ass_subvalue_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_90 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_ass_subscribed_90 == NULL)) {
            tmp_ass_subscribed_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_ass_subscribed_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_90);

            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_90 = mod_consts[293];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_90, tmp_ass_subscript_90, tmp_ass_subvalue_90);
        Py_DECREF(tmp_ass_subvalue_90);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_91;
        PyObject *tmp_open_filename_3;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_open_mode_3;
        PyObject *tmp_ass_subscribed_91;
        PyObject *tmp_ass_subscript_91;
        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_value_48 == NULL)) {
            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        assert(!(tmp_expression_value_48 == NULL));
        tmp_open_filename_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[274]);
        if (tmp_open_filename_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_open_mode_3 = mod_consts[294];
        tmp_ass_subvalue_91 = BUILTIN_OPEN(tstate, tmp_open_filename_3, tmp_open_mode_3, NULL, NULL, NULL, NULL, NULL, NULL);
        Py_DECREF(tmp_open_filename_3);
        if (tmp_ass_subvalue_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_91 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_ass_subscribed_91 == NULL)) {
            tmp_ass_subscribed_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_ass_subscribed_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_91);

            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_91 = mod_consts[295];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_91, tmp_ass_subscript_91, tmp_ass_subvalue_91);
        Py_DECREF(tmp_ass_subvalue_91);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_92;
        PyObject *tmp_open_filename_4;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_open_mode_4;
        PyObject *tmp_ass_subscribed_92;
        PyObject *tmp_ass_subscript_92;
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        assert(!(tmp_expression_value_49 == NULL));
        tmp_open_filename_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[274]);
        if (tmp_open_filename_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        tmp_open_mode_4 = mod_consts[296];
        tmp_ass_subvalue_92 = BUILTIN_OPEN(tstate, tmp_open_filename_4, tmp_open_mode_4, NULL, NULL, NULL, NULL, NULL, NULL);
        Py_DECREF(tmp_open_filename_4);
        if (tmp_ass_subvalue_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_92 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_ass_subscribed_92 == NULL)) {
            tmp_ass_subscribed_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_ass_subscribed_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_92);

            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_92 = mod_consts[297];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_92, tmp_ass_subscript_92, tmp_ass_subvalue_92);
        Py_DECREF(tmp_ass_subvalue_92);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_93;
        PyObject *tmp_open_filename_5;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_open_mode_5;
        PyObject *tmp_ass_subscribed_93;
        PyObject *tmp_ass_subscript_93;
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        assert(!(tmp_expression_value_50 == NULL));
        tmp_open_filename_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[274]);
        if (tmp_open_filename_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto frame_exception_exit_1;
        }
        tmp_open_mode_5 = mod_consts[275];
        tmp_ass_subvalue_93 = BUILTIN_OPEN(tstate, tmp_open_filename_5, tmp_open_mode_5, NULL, NULL, NULL, NULL, NULL, NULL);
        Py_DECREF(tmp_open_filename_5);
        if (tmp_ass_subvalue_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_93 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_ass_subscribed_93 == NULL)) {
            tmp_ass_subscribed_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_ass_subscribed_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_93);

            exception_lineno = 253;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_93 = mod_consts[298];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_93, tmp_ass_subscript_93, tmp_ass_subvalue_93);
        Py_DECREF(tmp_ass_subvalue_93);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_42;
        PyObject *tmp_globals_arg_value_39;
        PyObject *tmp_locals_arg_value_39;
        PyObject *tmp_fromlist_value_39;
        PyObject *tmp_level_value_39;
        tmp_name_value_42 = mod_consts[299];
        tmp_globals_arg_value_39 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_39 = Py_None;
        tmp_fromlist_value_39 = mod_consts[300];
        tmp_level_value_39 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 255;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_42, tmp_globals_arg_value_39, tmp_locals_arg_value_39, tmp_fromlist_value_39, tmp_level_value_39);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto try_except_handler_34;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_135 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_dill$_objects,
                mod_consts[301],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_135 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[301]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto try_except_handler_34;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[302], tmp_assign_source_135);
    }
    {
        PyObject *tmp_ass_subvalue_94;
        PyObject *tmp_called_value_25;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_kwargs_value_9;
        PyObject *tmp_ass_subscribed_94;
        PyObject *tmp_ass_subscript_94;
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[302]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[302]);
        }

        assert(!(tmp_called_value_25 == NULL));
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        assert(!(tmp_expression_value_51 == NULL));
        tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[274]);
        if (tmp_tuple_element_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_34;
        }
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_args_value_9, 0, tmp_tuple_element_15);
        tmp_tuple_element_15 = mod_consts[292];
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_15);
        tmp_kwargs_value_9 = DICT_COPY(mod_consts[303]);
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 256;
        tmp_ass_subvalue_94 = CALL_FUNCTION(tstate, tmp_called_value_25, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_args_value_9);
        Py_DECREF(tmp_kwargs_value_9);
        if (tmp_ass_subvalue_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_34;
        }
        tmp_ass_subscribed_94 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_ass_subscribed_94 == NULL)) {
            tmp_ass_subscribed_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_ass_subscribed_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_94);

            exception_lineno = 256;

            goto try_except_handler_34;
        }
        tmp_ass_subscript_94 = mod_consts[304];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_94, tmp_ass_subscript_94, tmp_ass_subvalue_94);
        Py_DECREF(tmp_ass_subvalue_94);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_34;
        }
    }
    {
        PyObject *tmp_ass_subvalue_95;
        PyObject *tmp_called_value_26;
        PyObject *tmp_args_value_10;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_kwargs_value_10;
        PyObject *tmp_ass_subscribed_95;
        PyObject *tmp_ass_subscript_95;
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[302]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[302]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_34;
        }
        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_value_52 == NULL)) {
            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        assert(!(tmp_expression_value_52 == NULL));
        tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[274]);
        if (tmp_tuple_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_34;
        }
        tmp_args_value_10 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_args_value_10, 0, tmp_tuple_element_16);
        tmp_tuple_element_16 = mod_consts[294];
        PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_16);
        tmp_kwargs_value_10 = DICT_COPY(mod_consts[303]);
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 257;
        tmp_ass_subvalue_95 = CALL_FUNCTION(tstate, tmp_called_value_26, tmp_args_value_10, tmp_kwargs_value_10);
        Py_DECREF(tmp_args_value_10);
        Py_DECREF(tmp_kwargs_value_10);
        if (tmp_ass_subvalue_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_34;
        }
        tmp_ass_subscribed_95 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_ass_subscribed_95 == NULL)) {
            tmp_ass_subscribed_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_ass_subscribed_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_95);

            exception_lineno = 257;

            goto try_except_handler_34;
        }
        tmp_ass_subscript_95 = mod_consts[305];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_95, tmp_ass_subscript_95, tmp_ass_subvalue_95);
        Py_DECREF(tmp_ass_subvalue_95);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_34;
        }
    }
    {
        PyObject *tmp_ass_subvalue_96;
        PyObject *tmp_called_value_27;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_kwargs_value_11;
        PyObject *tmp_ass_subscribed_96;
        PyObject *tmp_ass_subscript_96;
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[302]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[302]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto try_except_handler_34;
        }
        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_value_53 == NULL)) {
            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        assert(!(tmp_expression_value_53 == NULL));
        tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[274]);
        if (tmp_tuple_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto try_except_handler_34;
        }
        tmp_args_value_11 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_args_value_11, 0, tmp_tuple_element_17);
        tmp_tuple_element_17 = mod_consts[296];
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_17);
        tmp_kwargs_value_11 = DICT_COPY(mod_consts[303]);
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 258;
        tmp_ass_subvalue_96 = CALL_FUNCTION(tstate, tmp_called_value_27, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_args_value_11);
        Py_DECREF(tmp_kwargs_value_11);
        if (tmp_ass_subvalue_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto try_except_handler_34;
        }
        tmp_ass_subscribed_96 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_ass_subscribed_96 == NULL)) {
            tmp_ass_subscribed_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_ass_subscribed_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_96);

            exception_lineno = 258;

            goto try_except_handler_34;
        }
        tmp_ass_subscript_96 = mod_consts[306];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_96, tmp_ass_subscript_96, tmp_ass_subvalue_96);
        Py_DECREF(tmp_ass_subvalue_96);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto try_except_handler_34;
        }
    }
    {
        PyObject *tmp_ass_subvalue_97;
        PyObject *tmp_called_value_28;
        PyObject *tmp_args_value_12;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_kwargs_value_12;
        PyObject *tmp_ass_subscribed_97;
        PyObject *tmp_ass_subscript_97;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[302]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[302]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto try_except_handler_34;
        }
        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_value_54 == NULL)) {
            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        assert(!(tmp_expression_value_54 == NULL));
        tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[274]);
        if (tmp_tuple_element_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto try_except_handler_34;
        }
        tmp_args_value_12 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_args_value_12, 0, tmp_tuple_element_18);
        tmp_tuple_element_18 = mod_consts[275];
        PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_18);
        tmp_kwargs_value_12 = DICT_COPY(mod_consts[303]);
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 259;
        tmp_ass_subvalue_97 = CALL_FUNCTION(tstate, tmp_called_value_28, tmp_args_value_12, tmp_kwargs_value_12);
        Py_DECREF(tmp_args_value_12);
        Py_DECREF(tmp_kwargs_value_12);
        if (tmp_ass_subvalue_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto try_except_handler_34;
        }
        tmp_ass_subscribed_97 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_ass_subscribed_97 == NULL)) {
            tmp_ass_subscribed_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_ass_subscribed_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_97);

            exception_lineno = 259;

            goto try_except_handler_34;
        }
        tmp_ass_subscript_97 = mod_consts[307];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_97, tmp_ass_subscript_97, tmp_ass_subvalue_97);
        Py_DECREF(tmp_ass_subvalue_97);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto try_except_handler_34;
        }
    }
    goto try_end_24;
    // Exception handler code:
    try_except_handler_34:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_keeper_lineno_34 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 4.
    exception_preserved_4 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_34 == NULL) {
        exception_keeper_tb_34 = MAKE_TRACEBACK(frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_34);
    } else if (exception_keeper_lineno_34 != 0) {
        exception_keeper_tb_34 = ADD_TRACEBACK(exception_keeper_tb_34, frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_34);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_34, &exception_keeper_value_34, &exception_keeper_tb_34);
    // Tried code:
    {
        bool tmp_condition_result_23;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        tmp_cmp_expr_left_6 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_6 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_23 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 254;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_055af561147bc398dec138c5e48a8193->m_frame) frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_35;
    branch_no_17:;
    goto try_end_25;
    // Exception handler code:
    try_except_handler_35:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_4);

    // Re-raise.
    exception_type = exception_keeper_type_35;
    exception_value = exception_keeper_value_35;
    exception_tb = exception_keeper_tb_35;
    exception_lineno = exception_keeper_lineno_35;

    goto frame_exception_exit_1;
    // End of try:
    try_end_25:;
    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_4);

    goto try_end_24;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_24:;
    {
        PyObject *tmp_assign_source_136;
        tmp_assign_source_136 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_assign_source_136 == NULL)) {
            tmp_assign_source_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_assign_source_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_136);
    }
    {
        PyObject *tmp_ass_subvalue_98;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_called_value_29;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_ass_subscribed_98;
        PyObject *tmp_ass_subscript_98;
        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[281]);

        if (unlikely(tmp_called_value_29 == NULL)) {
            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[281]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 264;
        tmp_expression_value_56 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_29, mod_consts[176]);

        if (tmp_expression_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[308]);
        Py_DECREF(tmp_expression_value_56);
        if (tmp_expression_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_8 = mod_consts[3];
        tmp_ass_subvalue_98 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_55, tmp_subscript_value_8, 0);
        Py_DECREF(tmp_expression_value_55);
        if (tmp_ass_subvalue_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_98 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_ass_subscribed_98 == NULL)) {
            tmp_ass_subscribed_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_ass_subscribed_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_98);

            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_98 = mod_consts[309];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_98, tmp_ass_subscript_98, tmp_ass_subvalue_98);
        Py_DECREF(tmp_ass_subvalue_98);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
    }
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_dill$_objects, mod_consts[198]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[198]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 265;

        goto frame_exception_exit_1;
    }

    {
        PyObject *tmp_ass_subvalue_99;
        PyObject *tmp_ass_subscribed_99;
        PyObject *tmp_ass_subscript_99;
        tmp_ass_subvalue_99 = mod_consts[310];
        tmp_ass_subscribed_99 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_99 == NULL)) {
            tmp_ass_subscribed_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_99 = mod_consts[311];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_99, tmp_ass_subscript_99, tmp_ass_subvalue_99);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_137;
        tmp_assign_source_137 = mod_consts[310];
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[312], tmp_assign_source_137);
    }
    {
        PyObject *tmp_ass_subvalue_100;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_ass_subscribed_100;
        PyObject *tmp_ass_subscript_100;
        tmp_expression_value_58 = (PyObject *)&PyType_Type;
        tmp_expression_value_57 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_58);
        assert(!(tmp_expression_value_57 == NULL));
        tmp_subscript_value_9 = mod_consts[313];
        tmp_ass_subvalue_100 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_57, tmp_subscript_value_9);
        Py_DECREF(tmp_expression_value_57);
        if (tmp_ass_subvalue_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_100 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_100 == NULL)) {
            tmp_ass_subscribed_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_100);

            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_100 = mod_consts[314];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_100, tmp_ass_subscript_100, tmp_ass_subvalue_100);
        Py_DECREF(tmp_ass_subvalue_100);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_101;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_ass_subscribed_101;
        PyObject *tmp_ass_subscript_101;
        tmp_expression_value_59 = (PyObject *)&PyType_Type;
        tmp_ass_subvalue_101 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[315]);
        assert(!(tmp_ass_subvalue_101 == NULL));
        tmp_ass_subscribed_101 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_101 == NULL)) {
            tmp_ass_subscribed_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_101);

            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_101 = mod_consts[316];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_101, tmp_ass_subscript_101, tmp_ass_subvalue_101);
        Py_DECREF(tmp_ass_subvalue_101);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_102;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_ass_subscribed_102;
        PyObject *tmp_ass_subscript_102;
        tmp_expression_value_61 = (PyObject *)&PyType_Type;
        tmp_expression_value_60 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_61);
        assert(!(tmp_expression_value_60 == NULL));
        tmp_subscript_value_10 = mod_consts[84];
        tmp_ass_subvalue_102 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_60, tmp_subscript_value_10);
        Py_DECREF(tmp_expression_value_60);
        if (tmp_ass_subvalue_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_102 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_102 == NULL)) {
            tmp_ass_subscribed_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_102);

            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_102 = mod_consts[317];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_102, tmp_ass_subscript_102, tmp_ass_subvalue_102);
        Py_DECREF(tmp_ass_subvalue_102);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_expression_value_62;
        tmp_expression_value_62 = mod_consts[122];
        tmp_assign_source_138 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[318]);
        assert(!(tmp_assign_source_138 == NULL));
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[319], tmp_assign_source_138);
    }
    {
        PyObject *tmp_ass_subvalue_103;
        PyObject *tmp_ass_subscribed_103;
        PyObject *tmp_ass_subscript_103;
        tmp_ass_subvalue_103 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[319]);

        if (unlikely(tmp_ass_subvalue_103 == NULL)) {
            tmp_ass_subvalue_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[319]);
        }

        assert(!(tmp_ass_subvalue_103 == NULL));
        tmp_ass_subscribed_103 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_103 == NULL)) {
            tmp_ass_subscribed_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_103 = mod_consts[320];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_103, tmp_ass_subscript_103, tmp_ass_subvalue_103);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_104;
        PyObject *tmp_staticmethod_arg_1;
        PyObject *tmp_ass_subscribed_104;
        PyObject *tmp_ass_subscript_104;
        tmp_staticmethod_arg_1 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_staticmethod_arg_1 == NULL)) {
            tmp_staticmethod_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
        }

        if (tmp_staticmethod_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_104 = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_1);
        if (tmp_ass_subvalue_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_104 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_104 == NULL)) {
            tmp_ass_subscribed_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_104);

            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_104 = mod_consts[321];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_104, tmp_ass_subscript_104, tmp_ass_subvalue_104);
        Py_DECREF(tmp_ass_subvalue_104);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_105;
        PyObject *tmp_classmethod_arg_1;
        PyObject *tmp_ass_subscribed_105;
        PyObject *tmp_ass_subscript_105;
        tmp_classmethod_arg_1 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_classmethod_arg_1 == NULL)) {
            tmp_classmethod_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
        }

        if (tmp_classmethod_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_105 = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_1);
        if (tmp_ass_subvalue_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_105 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_105 == NULL)) {
            tmp_ass_subscribed_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_105);

            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_105 = mod_consts[322];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_105, tmp_ass_subscript_105, tmp_ass_subvalue_105);
        Py_DECREF(tmp_ass_subvalue_105);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_106;
        PyObject *tmp_called_value_30;
        PyObject *tmp_ass_subscribed_106;
        PyObject *tmp_ass_subscript_106;
        tmp_called_value_30 = (PyObject *)&PyProperty_Type;
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 276;
        tmp_ass_subvalue_106 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_30);
        if (tmp_ass_subvalue_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_106 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_106 == NULL)) {
            tmp_ass_subscribed_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_106);

            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_106 = mod_consts[323];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_106, tmp_ass_subscript_106, tmp_ass_subvalue_106);
        Py_DECREF(tmp_ass_subvalue_106);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_107;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_ass_subscribed_107;
        PyObject *tmp_ass_subscript_107;
        tmp_type_arg_value_1 = PyExc_Exception;
        tmp_object_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_object_arg_value_1 == NULL)) {
            tmp_object_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[155]);
        }

        if (tmp_object_arg_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_107 = BUILTIN_SUPER2(tstate, moduledict_dill$_objects, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_ass_subvalue_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_107 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_ass_subscribed_107 == NULL)) {
            tmp_ass_subscribed_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_ass_subscribed_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_107);

            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_107 = mod_consts[324];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_107, tmp_ass_subscript_107, tmp_ass_subvalue_107);
        Py_DECREF(tmp_ass_subvalue_107);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_139;
        tmp_assign_source_139 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_assign_source_139 == NULL)) {
            tmp_assign_source_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
        }

        if (tmp_assign_source_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[325], tmp_assign_source_139);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_called_value_31;
        PyObject *tmp_args_element_value_11;
        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_31 == NULL)) {
            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        assert(!(tmp_called_value_31 == NULL));
        tmp_args_element_value_11 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[325]);

        if (unlikely(tmp_args_element_value_11 == NULL)) {
            tmp_args_element_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[325]);
        }

        assert(!(tmp_args_element_value_11 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 280;
        tmp_assign_source_140 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_11);
        if (tmp_assign_source_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_36;
        }
        assert(tmp_assign_unpack_20__assign_source == NULL);
        tmp_assign_unpack_20__assign_source = tmp_assign_source_140;
    }
    {
        PyObject *tmp_ass_subvalue_108;
        PyObject *tmp_ass_subscribed_108;
        PyObject *tmp_ass_subscript_108;
        CHECK_OBJECT(tmp_assign_unpack_20__assign_source);
        tmp_ass_subvalue_108 = tmp_assign_unpack_20__assign_source;
        tmp_ass_subscribed_108 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_108 == NULL)) {
            tmp_ass_subscribed_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_36;
        }
        tmp_ass_subscript_108 = mod_consts[326];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_108, tmp_ass_subscript_108, tmp_ass_subvalue_108);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_36;
        }
    }
    goto try_end_26;
    // Exception handler code:
    try_except_handler_36:;
    exception_keeper_type_36 = exception_type;
    exception_keeper_value_36 = exception_value;
    exception_keeper_tb_36 = exception_tb;
    exception_keeper_lineno_36 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_20__assign_source);
    tmp_assign_unpack_20__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_36;
    exception_value = exception_keeper_value_36;
    exception_tb = exception_keeper_tb_36;
    exception_lineno = exception_keeper_lineno_36;

    goto frame_exception_exit_1;
    // End of try:
    try_end_26:;
    {
        PyObject *tmp_assign_source_141;
        CHECK_OBJECT(tmp_assign_unpack_20__assign_source);
        tmp_assign_source_141 = tmp_assign_unpack_20__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[327], tmp_assign_source_141);
    }
    CHECK_OBJECT(tmp_assign_unpack_20__assign_source);
    Py_DECREF(tmp_assign_unpack_20__assign_source);
    tmp_assign_unpack_20__assign_source = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_called_value_32;
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        assert(!(tmp_called_value_32 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 281;
        tmp_assign_source_142 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_32);
        if (tmp_assign_source_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_37;
        }
        assert(tmp_assign_unpack_21__assign_source == NULL);
        tmp_assign_unpack_21__assign_source = tmp_assign_source_142;
    }
    {
        PyObject *tmp_ass_subvalue_109;
        PyObject *tmp_ass_subscribed_109;
        PyObject *tmp_ass_subscript_109;
        CHECK_OBJECT(tmp_assign_unpack_21__assign_source);
        tmp_ass_subvalue_109 = tmp_assign_unpack_21__assign_source;
        tmp_ass_subscribed_109 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_109 == NULL)) {
            tmp_ass_subscribed_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_37;
        }
        tmp_ass_subscript_109 = mod_consts[328];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_109, tmp_ass_subscript_109, tmp_ass_subvalue_109);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_37;
        }
    }
    goto try_end_27;
    // Exception handler code:
    try_except_handler_37:;
    exception_keeper_type_37 = exception_type;
    exception_keeper_value_37 = exception_value;
    exception_keeper_tb_37 = exception_tb;
    exception_keeper_lineno_37 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_21__assign_source);
    tmp_assign_unpack_21__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_37;
    exception_value = exception_keeper_value_37;
    exception_tb = exception_keeper_tb_37;
    exception_lineno = exception_keeper_lineno_37;

    goto frame_exception_exit_1;
    // End of try:
    try_end_27:;
    {
        PyObject *tmp_assign_source_143;
        CHECK_OBJECT(tmp_assign_unpack_21__assign_source);
        tmp_assign_source_143 = tmp_assign_unpack_21__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[329], tmp_assign_source_143);
    }
    CHECK_OBJECT(tmp_assign_unpack_21__assign_source);
    Py_DECREF(tmp_assign_unpack_21__assign_source);
    tmp_assign_unpack_21__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_110;
        PyObject *tmp_called_instance_44;
        PyObject *tmp_ass_subscribed_110;
        PyObject *tmp_ass_subscript_110;
        tmp_called_instance_44 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_44 == NULL)) {
            tmp_called_instance_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_called_instance_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 283;
        tmp_ass_subvalue_110 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_44, mod_consts[330]);
        if (tmp_ass_subvalue_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_110 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_110 == NULL)) {
            tmp_ass_subscribed_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_110);

            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_110 = mod_consts[331];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_110, tmp_ass_subscript_110, tmp_ass_subvalue_110);
        Py_DECREF(tmp_ass_subvalue_110);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_111;
        PyObject *tmp_called_instance_45;
        PyObject *tmp_ass_subscribed_111;
        PyObject *tmp_ass_subscript_111;
        tmp_called_instance_45 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_45 == NULL)) {
            tmp_called_instance_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_called_instance_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 284;
        tmp_ass_subvalue_111 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_45, mod_consts[332]);
        if (tmp_ass_subvalue_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_111 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_111 == NULL)) {
            tmp_ass_subscribed_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_111);

            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_111 = mod_consts[333];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_111, tmp_ass_subscript_111, tmp_ass_subvalue_111);
        Py_DECREF(tmp_ass_subvalue_111);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_112;
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_ass_subscribed_112;
        PyObject *tmp_ass_subscript_112;
        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_63 == NULL)) {
            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[334]);
        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_args_element_value_12 == NULL)) {
            tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[131]);
        }

        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);

            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 285;
        tmp_ass_subvalue_112 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_33);
        if (tmp_ass_subvalue_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_112 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_112 == NULL)) {
            tmp_ass_subscribed_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_112);

            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_112 = mod_consts[335];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_112, tmp_ass_subscript_112, tmp_ass_subvalue_112);
        Py_DECREF(tmp_ass_subvalue_112);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_113;
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_called_value_35;
        PyObject *tmp_ass_subscribed_113;
        PyObject *tmp_ass_subscript_113;
        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_64 == NULL)) {
            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[334]);
        if (tmp_called_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 286;
        tmp_args_element_value_13 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_35);
        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 286;
        tmp_ass_subvalue_113 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_ass_subvalue_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_113 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_113 == NULL)) {
            tmp_ass_subscribed_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_113);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_113 = mod_consts[336];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_113, tmp_ass_subscript_113, tmp_ass_subvalue_113);
        Py_DECREF(tmp_ass_subvalue_113);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_114;
        PyObject *tmp_called_value_36;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_ass_subscribed_114;
        PyObject *tmp_ass_subscript_114;
        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_65 == NULL)) {
            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        tmp_called_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[337]);
        if (tmp_called_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_14 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_args_element_value_14 == NULL)) {
            tmp_args_element_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[131]);
        }

        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 287;
        tmp_ass_subvalue_114 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_36);
        if (tmp_ass_subvalue_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_114 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_114 == NULL)) {
            tmp_ass_subscribed_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_114);

            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_114 = mod_consts[338];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_114, tmp_ass_subscript_114, tmp_ass_subvalue_114);
        Py_DECREF(tmp_ass_subvalue_114);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_115;
        PyObject *tmp_called_value_37;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_called_value_38;
        PyObject *tmp_ass_subscribed_115;
        PyObject *tmp_ass_subscript_115;
        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_66 == NULL)) {
            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;

            goto frame_exception_exit_1;
        }
        tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[337]);
        if (tmp_called_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;

            goto frame_exception_exit_1;
        }
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 288;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 288;
        tmp_args_element_value_15 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_38);
        if (tmp_args_element_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 288;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 288;
        tmp_ass_subvalue_115 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_37);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_ass_subvalue_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_115 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_115 == NULL)) {
            tmp_ass_subscribed_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_115);

            exception_lineno = 288;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_115 = mod_consts[339];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_115, tmp_ass_subscript_115, tmp_ass_subvalue_115);
        Py_DECREF(tmp_ass_subvalue_115);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_116;
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_ass_subscribed_116;
        PyObject *tmp_ass_subscript_116;
        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_67 == NULL)) {
            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto frame_exception_exit_1;
        }
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[337]);
        if (tmp_called_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_args_element_value_16 == NULL)) {
            tmp_args_element_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[82]);
        }

        if (tmp_args_element_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 289;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 289;
        tmp_ass_subvalue_116 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_39, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_39);
        if (tmp_ass_subvalue_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_116 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_116 == NULL)) {
            tmp_ass_subscribed_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_116);

            exception_lineno = 289;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_116 = mod_consts[340];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_116, tmp_ass_subscript_116, tmp_ass_subvalue_116);
        Py_DECREF(tmp_ass_subvalue_116);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_117;
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_called_value_41;
        PyObject *tmp_ass_subscribed_117;
        PyObject *tmp_ass_subscript_117;
        tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_68 == NULL)) {
            tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto frame_exception_exit_1;
        }
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[337]);
        if (tmp_called_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto frame_exception_exit_1;
        }
        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_called_value_41 == NULL)) {
            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[79]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 290;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 290;
        tmp_args_element_value_17 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_41);
        if (tmp_args_element_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 290;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 290;
        tmp_ass_subvalue_117 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_40, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_40);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_ass_subvalue_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_117 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_117 == NULL)) {
            tmp_ass_subscribed_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_117);

            exception_lineno = 290;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_117 = mod_consts[341];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_117, tmp_ass_subscript_117, tmp_ass_subvalue_117);
        Py_DECREF(tmp_ass_subvalue_117);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_118;
        PyObject *tmp_called_instance_46;
        PyObject *tmp_ass_subscribed_118;
        PyObject *tmp_ass_subscript_118;
        tmp_called_instance_46 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_instance_46 == NULL)) {
            tmp_called_instance_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_called_instance_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 291;
        tmp_ass_subvalue_118 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_46, mod_consts[25]);
        if (tmp_ass_subvalue_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_118 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_118 == NULL)) {
            tmp_ass_subscribed_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_118);

            exception_lineno = 291;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_118 = mod_consts[342];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_118, tmp_ass_subscript_118, tmp_ass_subvalue_118);
        Py_DECREF(tmp_ass_subvalue_118);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_119;
        PyObject *tmp_called_value_42;
        PyObject *tmp_ass_subscribed_119;
        PyObject *tmp_ass_subscript_119;
        {
            PyObject *hard_module = IMPORT_HARD_FUNCTOOLS();
            tmp_called_value_42 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[343]);
        }
        assert(!(tmp_called_value_42 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 293;
        tmp_ass_subvalue_119 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_42, &PyTuple_GET_ITEM(mod_consts[344], 0), mod_consts[345]);
        Py_DECREF(tmp_called_value_42);
        if (tmp_ass_subvalue_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_119 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_ass_subscribed_119 == NULL)) {
            tmp_ass_subscribed_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_ass_subscribed_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_119);

            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_119 = mod_consts[346];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_119, tmp_ass_subscript_119, tmp_ass_subvalue_119);
        Py_DECREF(tmp_ass_subvalue_119);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_120;
        PyObject *tmp_called_value_43;
        PyObject *tmp_ass_subscribed_120;
        PyObject *tmp_ass_subscript_120;
        tmp_called_value_43 = (PyObject *)&PyZip_Type;
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 294;
        tmp_ass_subvalue_120 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_43, mod_consts[347]);

        if (tmp_ass_subvalue_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_120 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_120 == NULL)) {
            tmp_ass_subscribed_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_120);

            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_120 = mod_consts[348];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_120, tmp_ass_subscript_120, tmp_ass_subvalue_120);
        Py_DECREF(tmp_ass_subvalue_120);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_121;
        PyObject *tmp_called_instance_47;
        PyObject *tmp_ass_subscribed_121;
        PyObject *tmp_ass_subscript_121;
        tmp_called_instance_47 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_instance_47 == NULL)) {
            tmp_called_instance_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_instance_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 295;
        tmp_ass_subvalue_121 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_47,
            mod_consts[349],
            &PyTuple_GET_ITEM(mod_consts[347], 0)
        );

        if (tmp_ass_subvalue_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_121 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_121 == NULL)) {
            tmp_ass_subscribed_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_121);

            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_121 = mod_consts[350];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_121, tmp_ass_subscript_121, tmp_ass_subvalue_121);
        Py_DECREF(tmp_ass_subvalue_121);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_122;
        PyObject *tmp_called_instance_48;
        PyObject *tmp_ass_subscribed_122;
        PyObject *tmp_ass_subscript_122;
        tmp_called_instance_48 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_instance_48 == NULL)) {
            tmp_called_instance_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        if (tmp_called_instance_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 296;
        tmp_ass_subvalue_122 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_48,
            mod_consts[351],
            PyTuple_GET_ITEM(mod_consts[176], 0)
        );

        if (tmp_ass_subvalue_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_122 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_ass_subscribed_122 == NULL)) {
            tmp_ass_subscribed_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_ass_subscribed_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_122);

            exception_lineno = 296;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_122 = mod_consts[352];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_122, tmp_ass_subscript_122, tmp_ass_subvalue_122);
        Py_DECREF(tmp_ass_subvalue_122);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_123;
        PyObject *tmp_called_instance_49;
        PyObject *tmp_ass_subscribed_123;
        PyObject *tmp_ass_subscript_123;
        tmp_called_instance_49 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_instance_49 == NULL)) {
            tmp_called_instance_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        if (tmp_called_instance_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 297;
        tmp_ass_subvalue_123 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_49,
            mod_consts[353],
            PyTuple_GET_ITEM(mod_consts[354], 0)
        );

        if (tmp_ass_subvalue_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_123 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_ass_subscribed_123 == NULL)) {
            tmp_ass_subscribed_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_ass_subscribed_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_123);

            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_123 = mod_consts[355];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_123, tmp_ass_subscript_123, tmp_ass_subvalue_123);
        Py_DECREF(tmp_ass_subvalue_123);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_144;
        tmp_assign_source_144 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[329]);

        if (unlikely(tmp_assign_source_144 == NULL)) {
            tmp_assign_source_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[329]);
        }

        if (tmp_assign_source_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[356], tmp_assign_source_144);
    }
    {
        nuitka_bool tmp_condition_result_24;
        PyObject *tmp_mvar_value_8;
        int tmp_truth_name_11;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
        }

        if (tmp_mvar_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_11 = CHECK_IF_TRUE(tmp_mvar_value_8);
        if (tmp_truth_name_11 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_24 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    // Tried code:
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_called_instance_50;
        tmp_called_instance_50 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_called_instance_50 == NULL)) {
            tmp_called_instance_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
        }

        if (tmp_called_instance_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto try_except_handler_38;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 302;
        tmp_assign_source_145 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_50,
            mod_consts[357],
            PyTuple_GET_ITEM(mod_consts[358], 0)
        );

        if (tmp_assign_source_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto try_except_handler_38;
        }
        assert(tmp_assign_unpack_22__assign_source == NULL);
        tmp_assign_unpack_22__assign_source = tmp_assign_source_145;
    }
    {
        PyObject *tmp_ass_subvalue_124;
        PyObject *tmp_ass_subscribed_124;
        PyObject *tmp_ass_subscript_124;
        CHECK_OBJECT(tmp_assign_unpack_22__assign_source);
        tmp_ass_subvalue_124 = tmp_assign_unpack_22__assign_source;
        tmp_ass_subscribed_124 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_124 == NULL)) {
            tmp_ass_subscribed_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto try_except_handler_38;
        }
        tmp_ass_subscript_124 = mod_consts[359];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_124, tmp_ass_subscript_124, tmp_ass_subvalue_124);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto try_except_handler_38;
        }
    }
    goto try_end_28;
    // Exception handler code:
    try_except_handler_38:;
    exception_keeper_type_38 = exception_type;
    exception_keeper_value_38 = exception_value;
    exception_keeper_tb_38 = exception_tb;
    exception_keeper_lineno_38 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_22__assign_source);
    tmp_assign_unpack_22__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_38;
    exception_value = exception_keeper_value_38;
    exception_tb = exception_keeper_tb_38;
    exception_lineno = exception_keeper_lineno_38;

    goto frame_exception_exit_1;
    // End of try:
    try_end_28:;
    {
        PyObject *tmp_assign_source_146;
        CHECK_OBJECT(tmp_assign_unpack_22__assign_source);
        tmp_assign_source_146 = tmp_assign_unpack_22__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[360], tmp_assign_source_146);
    }
    CHECK_OBJECT(tmp_assign_unpack_22__assign_source);
    Py_DECREF(tmp_assign_unpack_22__assign_source);
    tmp_assign_unpack_22__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_125;
        PyObject *tmp_called_instance_51;
        PyObject *tmp_ass_subscribed_125;
        PyObject *tmp_ass_subscript_125;
        tmp_called_instance_51 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[360]);

        if (unlikely(tmp_called_instance_51 == NULL)) {
            tmp_called_instance_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[360]);
        }

        if (tmp_called_instance_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 303;
        tmp_ass_subvalue_125 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_51, mod_consts[361]);
        if (tmp_ass_subvalue_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_125 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_125 == NULL)) {
            tmp_ass_subscribed_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_125);

            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_125 = mod_consts[362];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_125, tmp_ass_subscript_125, tmp_ass_subvalue_125);
        Py_DECREF(tmp_ass_subvalue_125);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
    }
    branch_no_18:;
    {
        PyObject *tmp_ass_subvalue_126;
        PyObject *tmp_called_instance_52;
        PyObject *tmp_call_arg_element_2;
        PyObject *tmp_ass_subscribed_126;
        PyObject *tmp_ass_subscript_126;
        tmp_called_instance_52 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_instance_52 == NULL)) {
            tmp_called_instance_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_called_instance_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_2 = MAKE_DICT_EMPTY();
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 304;
        tmp_ass_subvalue_126 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_52, mod_consts[363], tmp_call_arg_element_2);
        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_ass_subvalue_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_126 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_126 == NULL)) {
            tmp_ass_subscribed_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_126);

            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_126 = mod_consts[364];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_126, tmp_ass_subscript_126, tmp_ass_subvalue_126);
        Py_DECREF(tmp_ass_subvalue_126);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_25;
        PyObject *tmp_mvar_value_9;
        int tmp_truth_name_12;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
        }

        if (tmp_mvar_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_12 = CHECK_IF_TRUE(tmp_mvar_value_9);
        if (tmp_truth_name_12 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_25 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_ass_subvalue_127;
        PyObject *tmp_called_value_44;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_ass_subscribed_127;
        PyObject *tmp_ass_subscript_127;
        tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_expression_value_69 == NULL)) {
            tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_expression_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_called_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[365]);
        if (tmp_called_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_value_70 == NULL)) {
            tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        assert(!(tmp_expression_value_70 == NULL));
        tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[274]);
        if (tmp_args_element_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 307;
        tmp_ass_subvalue_127 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_44, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_44);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_ass_subvalue_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_127 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_127 == NULL)) {
            tmp_ass_subscribed_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_127);

            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_127 = mod_consts[366];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_127, tmp_ass_subscript_127, tmp_ass_subvalue_127);
        Py_DECREF(tmp_ass_subvalue_127);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_128;
        PyObject *tmp_called_instance_53;
        PyObject *tmp_ass_subscribed_128;
        PyObject *tmp_ass_subscript_128;
        tmp_called_instance_53 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_called_instance_53 == NULL)) {
            tmp_called_instance_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_called_instance_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 308;
        tmp_ass_subvalue_128 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_53, mod_consts[367]);
        if (tmp_ass_subvalue_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_128 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_128 == NULL)) {
            tmp_ass_subscribed_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_128);

            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_128 = mod_consts[368];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_128, tmp_ass_subscript_128, tmp_ass_subvalue_128);
        Py_DECREF(tmp_ass_subvalue_128);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_129;
        PyObject *tmp_called_instance_54;
        PyObject *tmp_ass_subscribed_129;
        PyObject *tmp_ass_subscript_129;
        tmp_called_instance_54 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_called_instance_54 == NULL)) {
            tmp_called_instance_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_called_instance_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 309;
        tmp_ass_subvalue_129 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_54, mod_consts[369]);
        if (tmp_ass_subvalue_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_129 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_129 == NULL)) {
            tmp_ass_subscribed_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_129);

            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_129 = mod_consts[370];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_129, tmp_ass_subscript_129, tmp_ass_subvalue_129);
        Py_DECREF(tmp_ass_subvalue_129);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
    }
    branch_no_19:;
    {
        PyObject *tmp_ass_subvalue_130;
        PyObject *tmp_called_value_45;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_ass_subscribed_130;
        PyObject *tmp_ass_subscript_130;
        tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_expression_value_71 == NULL)) {
            tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
        }

        if (tmp_expression_value_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        tmp_called_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[301]);
        if (tmp_called_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_kw_call_value_0_2 == NULL)) {
            tmp_kw_call_value_0_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_kw_call_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);

            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = mod_consts[371];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 313;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_1};

            tmp_ass_subvalue_130 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_45, kw_values, mod_consts[372]);
        }

        Py_DECREF(tmp_called_value_45);
        if (tmp_ass_subvalue_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_130 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_130 == NULL)) {
            tmp_ass_subscribed_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_130);

            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_130 = mod_consts[373];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_130, tmp_ass_subscript_130, tmp_ass_subvalue_130);
        Py_DECREF(tmp_ass_subvalue_130);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_131;
        PyObject *tmp_called_instance_55;
        PyObject *tmp_ass_subscribed_131;
        PyObject *tmp_ass_subscript_131;
        tmp_called_instance_55 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_called_instance_55 == NULL)) {
            tmp_called_instance_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_called_instance_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 315;
        tmp_ass_subvalue_131 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_55,
            mod_consts[374],
            PyTuple_GET_ITEM(mod_consts[375], 0)
        );

        if (tmp_ass_subvalue_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_131 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_131 == NULL)) {
            tmp_ass_subscribed_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_131);

            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_131 = mod_consts[376];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_131, tmp_ass_subscript_131, tmp_ass_subvalue_131);
        Py_DECREF(tmp_ass_subvalue_131);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_132;
        PyObject *tmp_called_instance_56;
        PyObject *tmp_ass_subscribed_132;
        PyObject *tmp_ass_subscript_132;
        tmp_called_instance_56 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_instance_56 == NULL)) {
            tmp_called_instance_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_called_instance_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 316;
        tmp_ass_subvalue_132 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_56, mod_consts[377]);
        if (tmp_ass_subvalue_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_132 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_132 == NULL)) {
            tmp_ass_subscribed_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_132);

            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_132 = mod_consts[378];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_132, tmp_ass_subscript_132, tmp_ass_subvalue_132);
        Py_DECREF(tmp_ass_subvalue_132);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_133;
        PyObject *tmp_called_instance_57;
        PyObject *tmp_ass_subscribed_133;
        PyObject *tmp_ass_subscript_133;
        tmp_called_instance_57 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_instance_57 == NULL)) {
            tmp_called_instance_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_called_instance_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 318;
        tmp_ass_subvalue_133 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_57, mod_consts[379]);
        if (tmp_ass_subvalue_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_133 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_133 == NULL)) {
            tmp_ass_subscribed_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_133);

            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_133 = mod_consts[380];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_133, tmp_ass_subscript_133, tmp_ass_subvalue_133);
        Py_DECREF(tmp_ass_subvalue_133);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_134;
        PyObject *tmp_called_instance_58;
        PyObject *tmp_ass_subscribed_134;
        PyObject *tmp_ass_subscript_134;
        tmp_called_instance_58 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_instance_58 == NULL)) {
            tmp_called_instance_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_called_instance_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 319;
        tmp_ass_subvalue_134 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_58, mod_consts[381]);
        if (tmp_ass_subvalue_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_134 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_134 == NULL)) {
            tmp_ass_subscribed_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_134);

            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_134 = mod_consts[382];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_134, tmp_ass_subscript_134, tmp_ass_subvalue_134);
        Py_DECREF(tmp_ass_subvalue_134);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_called_instance_59;
        tmp_called_instance_59 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_instance_59 == NULL)) {
            tmp_called_instance_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_called_instance_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_39;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 321;
        tmp_assign_source_147 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_59,
            mod_consts[180],
            PyTuple_GET_ITEM(mod_consts[383], 0)
        );

        if (tmp_assign_source_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_39;
        }
        assert(tmp_assign_unpack_23__assign_source == NULL);
        tmp_assign_unpack_23__assign_source = tmp_assign_source_147;
    }
    {
        PyObject *tmp_ass_subvalue_135;
        PyObject *tmp_ass_subscribed_135;
        PyObject *tmp_ass_subscript_135;
        CHECK_OBJECT(tmp_assign_unpack_23__assign_source);
        tmp_ass_subvalue_135 = tmp_assign_unpack_23__assign_source;
        tmp_ass_subscribed_135 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_135 == NULL)) {
            tmp_ass_subscribed_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_39;
        }
        tmp_ass_subscript_135 = mod_consts[384];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_135, tmp_ass_subscript_135, tmp_ass_subvalue_135);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_39;
        }
    }
    goto try_end_29;
    // Exception handler code:
    try_except_handler_39:;
    exception_keeper_type_39 = exception_type;
    exception_keeper_value_39 = exception_value;
    exception_keeper_tb_39 = exception_tb;
    exception_keeper_lineno_39 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_23__assign_source);
    tmp_assign_unpack_23__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_39;
    exception_value = exception_keeper_value_39;
    exception_tb = exception_keeper_tb_39;
    exception_lineno = exception_keeper_lineno_39;

    goto frame_exception_exit_1;
    // End of try:
    try_end_29:;
    {
        PyObject *tmp_assign_source_148;
        CHECK_OBJECT(tmp_assign_unpack_23__assign_source);
        tmp_assign_source_148 = tmp_assign_unpack_23__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_148);
    }
    CHECK_OBJECT(tmp_assign_unpack_23__assign_source);
    Py_DECREF(tmp_assign_unpack_23__assign_source);
    tmp_assign_unpack_23__assign_source = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_called_instance_60;
        tmp_called_instance_60 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_called_instance_60 == NULL)) {
            tmp_called_instance_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
        }

        if (tmp_called_instance_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto try_except_handler_40;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 324;
        tmp_assign_source_149 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_60, mod_consts[60]);
        if (tmp_assign_source_149 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto try_except_handler_40;
        }
        assert(tmp_assign_unpack_24__assign_source == NULL);
        tmp_assign_unpack_24__assign_source = tmp_assign_source_149;
    }
    {
        PyObject *tmp_ass_subvalue_136;
        PyObject *tmp_ass_subscribed_136;
        PyObject *tmp_ass_subscript_136;
        CHECK_OBJECT(tmp_assign_unpack_24__assign_source);
        tmp_ass_subvalue_136 = tmp_assign_unpack_24__assign_source;
        tmp_ass_subscribed_136 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_136 == NULL)) {
            tmp_ass_subscribed_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto try_except_handler_40;
        }
        tmp_ass_subscript_136 = mod_consts[385];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_136, tmp_ass_subscript_136, tmp_ass_subvalue_136);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto try_except_handler_40;
        }
    }
    goto try_end_30;
    // Exception handler code:
    try_except_handler_40:;
    exception_keeper_type_40 = exception_type;
    exception_keeper_value_40 = exception_value;
    exception_keeper_tb_40 = exception_tb;
    exception_keeper_lineno_40 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_24__assign_source);
    tmp_assign_unpack_24__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_40;
    exception_value = exception_keeper_value_40;
    exception_tb = exception_keeper_tb_40;
    exception_lineno = exception_keeper_lineno_40;

    goto frame_exception_exit_1;
    // End of try:
    try_end_30:;
    {
        PyObject *tmp_assign_source_150;
        CHECK_OBJECT(tmp_assign_unpack_24__assign_source);
        tmp_assign_source_150 = tmp_assign_unpack_24__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[386], tmp_assign_source_150);
    }
    CHECK_OBJECT(tmp_assign_unpack_24__assign_source);
    Py_DECREF(tmp_assign_unpack_24__assign_source);
    tmp_assign_unpack_24__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_137;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_called_instance_61;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_ass_subscribed_137;
        PyObject *tmp_ass_subscript_137;
        tmp_called_instance_61 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_called_instance_61 == NULL)) {
            tmp_called_instance_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
        }

        if (tmp_called_instance_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 325;
        tmp_expression_value_72 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_61, mod_consts[387]);
        if (tmp_expression_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_11 = mod_consts[3];
        tmp_ass_subvalue_137 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_72, tmp_subscript_value_11, 0);
        Py_DECREF(tmp_expression_value_72);
        if (tmp_ass_subvalue_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_137 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_137 == NULL)) {
            tmp_ass_subscribed_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_137);

            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_137 = mod_consts[388];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_137, tmp_ass_subscript_137, tmp_ass_subvalue_137);
        Py_DECREF(tmp_ass_subvalue_137);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_138;
        PyObject *tmp_called_value_46;
        PyObject *tmp_called_instance_62;
        PyObject *tmp_call_arg_element_3;
        PyObject *tmp_ass_subscribed_138;
        PyObject *tmp_ass_subscript_138;
        tmp_called_instance_62 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_called_instance_62 == NULL)) {
            tmp_called_instance_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_called_instance_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 327;
        tmp_called_value_46 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_62,
            mod_consts[389],
            PyTuple_GET_ITEM(mod_consts[390], 0)
        );

        if (tmp_called_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_3 = MAKE_LIST1(mod_consts[122]);
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 327;
        tmp_ass_subvalue_138 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_46, tmp_call_arg_element_3);
        Py_DECREF(tmp_called_value_46);
        Py_DECREF(tmp_call_arg_element_3);
        if (tmp_ass_subvalue_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_138 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_138 == NULL)) {
            tmp_ass_subscribed_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_138);

            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_138 = mod_consts[391];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_138, tmp_ass_subscript_138, tmp_ass_subvalue_138);
        Py_DECREF(tmp_ass_subvalue_138);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_mvar_value_10;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[392]);

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            tmp_mvar_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[392]);
        }

        if (tmp_mvar_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto try_except_handler_41;
        }
    }
    goto try_end_31;
    // Exception handler code:
    try_except_handler_41:;
    exception_keeper_type_41 = exception_type;
    exception_keeper_value_41 = exception_value;
    exception_keeper_tb_41 = exception_tb;
    exception_keeper_lineno_41 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 5.
    exception_preserved_5 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_41 == NULL) {
        exception_keeper_tb_41 = MAKE_TRACEBACK(frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_41);
    } else if (exception_keeper_lineno_41 != 0) {
        exception_keeper_tb_41 = ADD_TRACEBACK(exception_keeper_tb_41, frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_41);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_41, &exception_keeper_value_41, &exception_keeper_tb_41);
    // Tried code:
    {
        bool tmp_condition_result_26;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        tmp_cmp_expr_left_7 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_7 = PyExc_NameError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_26 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_26 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_ass_subvalue_139;
        PyObject *tmp_ass_subscribed_139;
        PyObject *tmp_ass_subscript_139;
        tmp_ass_subvalue_139 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[393]);

        if (unlikely(tmp_ass_subvalue_139 == NULL)) {
            tmp_ass_subvalue_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[393]);
        }

        if (tmp_ass_subvalue_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto try_except_handler_42;
        }
        tmp_ass_subscribed_139 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_139 == NULL)) {
            tmp_ass_subscribed_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto try_except_handler_42;
        }
        tmp_ass_subscript_139 = mod_consts[394];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_139, tmp_ass_subscript_139, tmp_ass_subvalue_139);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto try_except_handler_42;
        }
    }
    {
        PyObject *tmp_ass_subvalue_140;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_ass_subscribed_140;
        PyObject *tmp_ass_subscript_140;
        tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_expression_value_73 == NULL)) {
            tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_expression_value_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto try_except_handler_42;
        }
        tmp_subscript_value_12 = mod_consts[394];
        tmp_ass_subvalue_140 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_73, tmp_subscript_value_12);
        if (tmp_ass_subvalue_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto try_except_handler_42;
        }
        tmp_ass_subscribed_140 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_ass_subscribed_140 == NULL)) {
            tmp_ass_subscribed_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_ass_subscribed_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_140);

            exception_lineno = 334;

            goto try_except_handler_42;
        }
        tmp_ass_subscript_140 = mod_consts[395];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_140, tmp_ass_subscript_140, tmp_ass_subvalue_140);
        Py_DECREF(tmp_ass_subvalue_140);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto try_except_handler_42;
        }
    }
    goto branch_end_20;
    branch_no_20:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 329;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_055af561147bc398dec138c5e48a8193->m_frame) frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_42;
    branch_end_20:;
    goto try_end_32;
    // Exception handler code:
    try_except_handler_42:;
    exception_keeper_type_42 = exception_type;
    exception_keeper_value_42 = exception_value;
    exception_keeper_tb_42 = exception_tb;
    exception_keeper_lineno_42 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 5.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_5);

    // Re-raise.
    exception_type = exception_keeper_type_42;
    exception_value = exception_keeper_value_42;
    exception_tb = exception_keeper_tb_42;
    exception_lineno = exception_keeper_lineno_42;

    goto frame_exception_exit_1;
    // End of try:
    try_end_32:;
    // Restore previous exception id 5.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_5);

    goto try_end_31;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_31:;
    // Tried code:
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_43;
        PyObject *tmp_globals_arg_value_40;
        PyObject *tmp_locals_arg_value_40;
        PyObject *tmp_fromlist_value_40;
        PyObject *tmp_level_value_40;
        tmp_name_value_43 = mod_consts[396];
        tmp_globals_arg_value_40 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_40 = Py_None;
        tmp_fromlist_value_40 = mod_consts[397];
        tmp_level_value_40 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 336;
        tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_43, tmp_globals_arg_value_40, tmp_locals_arg_value_40, tmp_fromlist_value_40, tmp_level_value_40);
        if (tmp_import_name_from_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto try_except_handler_43;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_151 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_dill$_objects,
                mod_consts[398],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_151 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[398]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto try_except_handler_43;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[399], tmp_assign_source_151);
    }
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_44;
        PyObject *tmp_globals_arg_value_41;
        PyObject *tmp_locals_arg_value_41;
        PyObject *tmp_fromlist_value_41;
        PyObject *tmp_level_value_41;
        tmp_name_value_44 = mod_consts[396];
        tmp_globals_arg_value_41 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_41 = Py_None;
        tmp_fromlist_value_41 = mod_consts[400];
        tmp_level_value_41 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 337;
        tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_44, tmp_globals_arg_value_41, tmp_locals_arg_value_41, tmp_fromlist_value_41, tmp_level_value_41);
        if (tmp_import_name_from_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;

            goto try_except_handler_43;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_152 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_dill$_objects,
                mod_consts[31],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_152 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[31]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;

            goto try_except_handler_43;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[401], tmp_assign_source_152);
    }
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_45;
        PyObject *tmp_globals_arg_value_42;
        PyObject *tmp_locals_arg_value_42;
        PyObject *tmp_fromlist_value_42;
        PyObject *tmp_level_value_42;
        tmp_name_value_45 = mod_consts[396];
        tmp_globals_arg_value_42 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_42 = Py_None;
        tmp_fromlist_value_42 = mod_consts[402];
        tmp_level_value_42 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 338;
        tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_45, tmp_globals_arg_value_42, tmp_locals_arg_value_42, tmp_fromlist_value_42, tmp_level_value_42);
        if (tmp_import_name_from_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_43;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_153 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_dill$_objects,
                mod_consts[403],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_153 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[403]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_43;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[404], tmp_assign_source_153);
    }
    {
        PyObject *tmp_ass_subvalue_141;
        PyObject *tmp_ass_subscribed_141;
        PyObject *tmp_ass_subscript_141;
        tmp_ass_subvalue_141 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[399]);

        if (unlikely(tmp_ass_subvalue_141 == NULL)) {
            tmp_ass_subvalue_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[399]);
        }

        if (tmp_ass_subvalue_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;

            goto try_except_handler_43;
        }
        tmp_ass_subscribed_141 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_141 == NULL)) {
            tmp_ass_subscribed_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;

            goto try_except_handler_43;
        }
        tmp_ass_subscript_141 = mod_consts[405];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_141, tmp_ass_subscript_141, tmp_ass_subvalue_141);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;

            goto try_except_handler_43;
        }
    }
    {
        PyObject *tmp_ass_subvalue_142;
        PyObject *tmp_ass_subscribed_142;
        PyObject *tmp_ass_subscript_142;
        tmp_ass_subvalue_142 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[401]);

        if (unlikely(tmp_ass_subvalue_142 == NULL)) {
            tmp_ass_subvalue_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[401]);
        }

        if (tmp_ass_subvalue_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto try_except_handler_43;
        }
        tmp_ass_subscribed_142 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_142 == NULL)) {
            tmp_ass_subscribed_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto try_except_handler_43;
        }
        tmp_ass_subscript_142 = mod_consts[406];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_142, tmp_ass_subscript_142, tmp_ass_subvalue_142);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto try_except_handler_43;
        }
    }
    {
        PyObject *tmp_ass_subvalue_143;
        PyObject *tmp_ass_subscribed_143;
        PyObject *tmp_ass_subscript_143;
        tmp_ass_subvalue_143 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[404]);

        if (unlikely(tmp_ass_subvalue_143 == NULL)) {
            tmp_ass_subvalue_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[404]);
        }

        if (tmp_ass_subvalue_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;

            goto try_except_handler_43;
        }
        tmp_ass_subscribed_143 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_143 == NULL)) {
            tmp_ass_subscribed_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;

            goto try_except_handler_43;
        }
        tmp_ass_subscript_143 = mod_consts[407];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_143, tmp_ass_subscript_143, tmp_ass_subvalue_143);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;

            goto try_except_handler_43;
        }
    }
    goto try_end_33;
    // Exception handler code:
    try_except_handler_43:;
    exception_keeper_type_43 = exception_type;
    exception_keeper_value_43 = exception_value;
    exception_keeper_tb_43 = exception_tb;
    exception_keeper_lineno_43 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 6.
    exception_preserved_6 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_43 == NULL) {
        exception_keeper_tb_43 = MAKE_TRACEBACK(frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_43);
    } else if (exception_keeper_lineno_43 != 0) {
        exception_keeper_tb_43 = ADD_TRACEBACK(exception_keeper_tb_43, frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_43);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_43, &exception_keeper_value_43, &exception_keeper_tb_43);
    // Tried code:
    {
        bool tmp_condition_result_27;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        tmp_cmp_expr_left_8 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_8 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        assert(!(tmp_res == -1));
        tmp_condition_result_27 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 335;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_055af561147bc398dec138c5e48a8193->m_frame) frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_44;
    branch_no_21:;
    goto try_end_34;
    // Exception handler code:
    try_except_handler_44:;
    exception_keeper_type_44 = exception_type;
    exception_keeper_value_44 = exception_value;
    exception_keeper_tb_44 = exception_tb;
    exception_keeper_lineno_44 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 6.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_6);

    // Re-raise.
    exception_type = exception_keeper_type_44;
    exception_value = exception_keeper_value_44;
    exception_tb = exception_keeper_tb_44;
    exception_lineno = exception_keeper_lineno_44;

    goto frame_exception_exit_1;
    // End of try:
    try_end_34:;
    // Restore previous exception id 6.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_6);

    goto try_end_33;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_33:;
    {
        PyObject *tmp_ass_subvalue_144;
        PyObject *tmp_called_instance_63;
        PyObject *tmp_ass_subscribed_144;
        PyObject *tmp_ass_subscript_144;
        tmp_called_instance_63 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_instance_63 == NULL)) {
            tmp_called_instance_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_instance_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 345;
        tmp_ass_subvalue_144 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_63,
            mod_consts[408],
            &PyTuple_GET_ITEM(mod_consts[347], 0)
        );

        if (tmp_ass_subvalue_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_144 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_144 == NULL)) {
            tmp_ass_subscribed_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_144);

            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_144 = mod_consts[409];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_144, tmp_ass_subscript_144, tmp_ass_subvalue_144);
        Py_DECREF(tmp_ass_subvalue_144);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_145;
        PyObject *tmp_called_value_47;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_ass_subscribed_145;
        PyObject *tmp_ass_subscript_145;
        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_74 == NULL)) {
            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_expression_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        tmp_called_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[410]);
        if (tmp_called_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_value_75 == NULL)) {
            tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        assert(!(tmp_expression_value_75 == NULL));
        tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts[274]);
        if (tmp_args_element_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 347;
        tmp_ass_subvalue_145 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_47, tmp_args_element_value_19);
        Py_DECREF(tmp_called_value_47);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_ass_subvalue_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_145 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_145 == NULL)) {
            tmp_ass_subscribed_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_145);

            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_145 = mod_consts[411];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_145, tmp_ass_subscript_145, tmp_ass_subvalue_145);
        Py_DECREF(tmp_ass_subvalue_145);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_146;
        PyObject *tmp_called_value_48;
        PyObject *tmp_expression_value_76;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_ass_subscribed_146;
        PyObject *tmp_ass_subscript_146;
        tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_77 == NULL)) {
            tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_expression_value_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_76 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[412]);
        if (tmp_expression_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        tmp_called_value_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts[413]);
        Py_DECREF(tmp_expression_value_76);
        if (tmp_called_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_value_78 == NULL)) {
            tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        assert(!(tmp_expression_value_78 == NULL));
        tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts[274]);
        if (tmp_args_element_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 348;
        tmp_ass_subvalue_146 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_48, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_48);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_ass_subvalue_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_146 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_146 == NULL)) {
            tmp_ass_subscribed_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_146);

            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_146 = mod_consts[414];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_146, tmp_ass_subscript_146, tmp_ass_subvalue_146);
        Py_DECREF(tmp_ass_subvalue_146);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_147;
        PyObject *tmp_called_instance_64;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_ass_subscribed_147;
        PyObject *tmp_ass_subscript_147;
        tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_79 == NULL)) {
            tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_expression_value_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts[412]);
        if (tmp_called_instance_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 349;
        tmp_ass_subvalue_147 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_64,
            mod_consts[415],
            &PyTuple_GET_ITEM(mod_consts[416], 0)
        );

        Py_DECREF(tmp_called_instance_64);
        if (tmp_ass_subvalue_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_147 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_147 == NULL)) {
            tmp_ass_subscribed_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_147);

            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_147 = mod_consts[417];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_147, tmp_ass_subscript_147, tmp_ass_subvalue_147);
        Py_DECREF(tmp_ass_subvalue_147);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_148;
        PyObject *tmp_called_instance_65;
        PyObject *tmp_expression_value_80;
        PyObject *tmp_ass_subscribed_148;
        PyObject *tmp_ass_subscript_148;
        tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_80 == NULL)) {
            tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_expression_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[412]);
        if (tmp_called_instance_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 350;
        tmp_ass_subvalue_148 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_65,
            mod_consts[418],
            PyTuple_GET_ITEM(mod_consts[173], 0)
        );

        Py_DECREF(tmp_called_instance_65);
        if (tmp_ass_subvalue_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_148 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_148 == NULL)) {
            tmp_ass_subscribed_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_148);

            exception_lineno = 350;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_148 = mod_consts[419];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_148, tmp_ass_subscript_148, tmp_ass_subvalue_148);
        Py_DECREF(tmp_ass_subvalue_148);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_149;
        PyObject *tmp_called_instance_66;
        PyObject *tmp_ass_subscribed_149;
        PyObject *tmp_ass_subscript_149;
        tmp_called_instance_66 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_66 == NULL)) {
            tmp_called_instance_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_called_instance_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 352;
        tmp_ass_subvalue_149 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_66, mod_consts[420]);
        if (tmp_ass_subvalue_149 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_149 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_149 == NULL)) {
            tmp_ass_subscribed_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_149 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_149);

            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_149 = mod_consts[421];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_149, tmp_ass_subscript_149, tmp_ass_subvalue_149);
        Py_DECREF(tmp_ass_subvalue_149);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_150;
        PyObject *tmp_open_filename_6;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_open_mode_6;
        PyObject *tmp_open_buffering_2;
        PyObject *tmp_ass_subscribed_150;
        PyObject *tmp_ass_subscript_150;
        tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_value_81 == NULL)) {
            tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        assert(!(tmp_expression_value_81 == NULL));
        tmp_open_filename_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[274]);
        if (tmp_open_filename_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto frame_exception_exit_1;
        }
        tmp_open_mode_6 = mod_consts[296];
        tmp_open_buffering_2 = mod_consts[3];
        tmp_ass_subvalue_150 = BUILTIN_OPEN(tstate, tmp_open_filename_6, tmp_open_mode_6, tmp_open_buffering_2, NULL, NULL, NULL, NULL, NULL);
        Py_DECREF(tmp_open_filename_6);
        if (tmp_ass_subvalue_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_150 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_ass_subscribed_150 == NULL)) {
            tmp_ass_subscribed_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_ass_subscribed_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_150);

            exception_lineno = 362;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_150 = mod_consts[265];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_150, tmp_ass_subscript_150, tmp_ass_subvalue_150);
        Py_DECREF(tmp_ass_subvalue_150);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_151;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_ass_subscribed_151;
        PyObject *tmp_ass_subscript_151;
        tmp_iter_arg_2 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_iter_arg_2 == NULL)) {
            tmp_iter_arg_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[135]);
        }

        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_151 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        if (tmp_ass_subvalue_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_151 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_151 == NULL)) {
            tmp_ass_subscribed_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_151);

            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_151 = mod_consts[422];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_151, tmp_ass_subscript_151, tmp_ass_subvalue_151);
        Py_DECREF(tmp_ass_subvalue_151);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_152;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_ass_subscribed_152;
        PyObject *tmp_ass_subscript_152;
        tmp_iter_arg_3 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[151]);

        if (unlikely(tmp_iter_arg_3 == NULL)) {
            tmp_iter_arg_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[151]);
        }

        if (tmp_iter_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_152 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
        if (tmp_ass_subvalue_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_152 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_152 == NULL)) {
            tmp_ass_subscribed_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_152);

            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_152 = mod_consts[423];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_152, tmp_ass_subscript_152, tmp_ass_subvalue_152);
        Py_DECREF(tmp_ass_subvalue_152);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_153;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_ass_subscribed_153;
        PyObject *tmp_ass_subscript_153;
        tmp_iter_arg_4 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_iter_arg_4 == NULL)) {
            tmp_iter_arg_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[142]);
        }

        if (tmp_iter_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_153 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
        if (tmp_ass_subvalue_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_153 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_153 == NULL)) {
            tmp_ass_subscribed_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_153);

            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_153 = mod_consts[424];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_153, tmp_ass_subscript_153, tmp_ass_subvalue_153);
        Py_DECREF(tmp_ass_subvalue_153);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_154;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_ass_subscribed_154;
        PyObject *tmp_ass_subscript_154;
        tmp_iter_arg_5 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[312]);

        if (unlikely(tmp_iter_arg_5 == NULL)) {
            tmp_iter_arg_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[312]);
        }

        if (tmp_iter_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_154 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
        if (tmp_ass_subvalue_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_154 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_154 == NULL)) {
            tmp_ass_subscribed_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_154);

            exception_lineno = 368;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_154 = mod_consts[425];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_154, tmp_ass_subscript_154, tmp_ass_subvalue_154);
        Py_DECREF(tmp_ass_subvalue_154);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_155;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_ass_subscribed_155;
        PyObject *tmp_ass_subscript_155;
        tmp_iter_arg_6 = mod_consts[426];
        tmp_ass_subvalue_155 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_6);
        assert(!(tmp_ass_subvalue_155 == NULL));
        tmp_ass_subscribed_155 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_155 == NULL)) {
            tmp_ass_subscribed_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_155 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_155);

            exception_lineno = 369;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_155 = mod_consts[427];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_155, tmp_ass_subscript_155, tmp_ass_subvalue_155);
        Py_DECREF(tmp_ass_subvalue_155);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_156;
        PyObject *tmp_iter_arg_7;
        PyObject *tmp_ass_subscribed_156;
        PyObject *tmp_ass_subscript_156;
        tmp_iter_arg_7 = mod_consts[426];
        tmp_ass_subvalue_156 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_7);
        assert(!(tmp_ass_subvalue_156 == NULL));
        tmp_ass_subscribed_156 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_156 == NULL)) {
            tmp_ass_subscribed_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_156);

            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_156 = mod_consts[428];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_156, tmp_ass_subscript_156, tmp_ass_subvalue_156);
        Py_DECREF(tmp_ass_subvalue_156);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_154;
        nuitka_bool tmp_condition_result_28;
        PyObject *tmp_mvar_value_11;
        int tmp_truth_name_13;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_mvar_value_11 == NULL)) {
            tmp_mvar_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        if (tmp_mvar_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_13 = CHECK_IF_TRUE(tmp_mvar_value_11);
        if (tmp_truth_name_13 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_28 = tmp_truth_name_13 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        tmp_assign_source_154 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_assign_source_154 == NULL)) {
            tmp_assign_source_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_assign_source_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_assign_source_154 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_assign_source_154 == NULL)) {
            tmp_assign_source_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_assign_source_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        condexpr_end_7:;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_154);
    }
    {
        PyObject *tmp_ass_subvalue_157;
        PyObject *tmp_iter_callable_1;
        PyObject *tmp_iter_sentinel_1;
        PyObject *tmp_ass_subscribed_157;
        PyObject *tmp_ass_subscript_157;
        tmp_iter_callable_1 = LOOKUP_BUILTIN(mod_consts[429]);
        assert(tmp_iter_callable_1 != NULL);
        tmp_iter_sentinel_1 = Py_None;
        tmp_ass_subvalue_157 = BUILTIN_ITER2(tmp_iter_callable_1, tmp_iter_sentinel_1);
        if (tmp_ass_subvalue_157 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_157 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_ass_subscribed_157 == NULL)) {
            tmp_ass_subscribed_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        assert(!(tmp_ass_subscribed_157 == NULL));
        tmp_ass_subscript_157 = mod_consts[430];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_157, tmp_ass_subscript_157, tmp_ass_subvalue_157);
        Py_DECREF(tmp_ass_subvalue_157);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto frame_exception_exit_1;
        }
    }
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_dill$_objects, mod_consts[198]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[198]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 373;

        goto frame_exception_exit_1;
    }

    {
        PyObject *tmp_ass_subvalue_158;
        PyObject *tmp_iter_arg_8;
        PyObject *tmp_called_value_49;
        PyObject *tmp_ass_subscribed_158;
        PyObject *tmp_ass_subscript_158;
        tmp_called_value_49 = (PyObject *)&PyMemoryView_Type;
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 374;
        tmp_iter_arg_8 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_49, mod_consts[431]);

        if (tmp_iter_arg_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_158 = MAKE_ITERATOR(tstate, tmp_iter_arg_8);
        Py_DECREF(tmp_iter_arg_8);
        if (tmp_ass_subvalue_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_158 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_158 == NULL)) {
            tmp_ass_subscribed_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_158);

            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_158 = mod_consts[432];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_158, tmp_ass_subscript_158, tmp_ass_subvalue_158);
        Py_DECREF(tmp_ass_subvalue_158);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_159;
        PyObject *tmp_called_value_50;
        PyObject *tmp_call_arg_element_4;
        PyObject *tmp_ass_subscribed_159;
        PyObject *tmp_ass_subscript_159;
        tmp_called_value_50 = (PyObject *)&PyReversed_Type;
        tmp_call_arg_element_4 = MAKE_LIST_EMPTY(0);
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 375;
        tmp_ass_subvalue_159 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_50, tmp_call_arg_element_4);
        Py_DECREF(tmp_call_arg_element_4);
        if (tmp_ass_subvalue_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_159 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_159 == NULL)) {
            tmp_ass_subscribed_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_159);

            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_159 = mod_consts[433];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_159, tmp_ass_subscript_159, tmp_ass_subvalue_159);
        Py_DECREF(tmp_ass_subvalue_159);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_subscript_value_13;
        tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_expression_value_82 == NULL)) {
            tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_expression_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_13 = mod_consts[258];
        tmp_assign_source_155 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_82, tmp_subscript_value_13);
        if (tmp_assign_source_155 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[434], tmp_assign_source_155);
    }
    {
        PyObject *tmp_ass_subvalue_160;
        PyObject *tmp_called_value_51;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_ass_subscribed_160;
        PyObject *tmp_ass_subscript_160;
        tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[434]);

        if (unlikely(tmp_expression_value_83 == NULL)) {
            tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[434]);
        }

        assert(!(tmp_expression_value_83 == NULL));
        tmp_called_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts[435]);
        if (tmp_called_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 377;
        tmp_ass_subvalue_160 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_51);
        Py_DECREF(tmp_called_value_51);
        if (tmp_ass_subvalue_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_160 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_ass_subscribed_160 == NULL)) {
            tmp_ass_subscribed_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_ass_subscribed_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_160);

            exception_lineno = 377;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_160 = mod_consts[436];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_160, tmp_ass_subscript_160, tmp_ass_subvalue_160);
        Py_DECREF(tmp_ass_subvalue_160);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_161;
        PyObject *tmp_called_value_52;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_ass_subscribed_161;
        PyObject *tmp_ass_subscript_161;
        tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[434]);

        if (unlikely(tmp_expression_value_84 == NULL)) {
            tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[434]);
        }

        if (tmp_expression_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto frame_exception_exit_1;
        }
        tmp_called_value_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts[437]);
        if (tmp_called_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 378;
        tmp_ass_subvalue_161 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_52);
        Py_DECREF(tmp_called_value_52);
        if (tmp_ass_subvalue_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_161 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_ass_subscribed_161 == NULL)) {
            tmp_ass_subscribed_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_ass_subscribed_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_161);

            exception_lineno = 378;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_161 = mod_consts[438];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_161, tmp_ass_subscript_161, tmp_ass_subvalue_161);
        Py_DECREF(tmp_ass_subvalue_161);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_162;
        PyObject *tmp_called_value_53;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_ass_subscribed_162;
        PyObject *tmp_ass_subscript_162;
        tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[434]);

        if (unlikely(tmp_expression_value_85 == NULL)) {
            tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[434]);
        }

        if (tmp_expression_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
        tmp_called_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts[439]);
        if (tmp_called_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 379;
        tmp_ass_subvalue_162 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_53);
        Py_DECREF(tmp_called_value_53);
        if (tmp_ass_subvalue_162 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_162 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_ass_subscribed_162 == NULL)) {
            tmp_ass_subscribed_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_ass_subscribed_162 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_162);

            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_162 = mod_consts[440];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_162, tmp_ass_subscript_162, tmp_ass_subvalue_162);
        Py_DECREF(tmp_ass_subvalue_162);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_163;
        PyObject *tmp_iter_arg_9;
        PyObject *tmp_called_value_54;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_ass_subscribed_163;
        PyObject *tmp_ass_subscript_163;
        tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[434]);

        if (unlikely(tmp_expression_value_86 == NULL)) {
            tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[434]);
        }

        if (tmp_expression_value_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto frame_exception_exit_1;
        }
        tmp_called_value_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts[435]);
        if (tmp_called_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 380;
        tmp_iter_arg_9 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_54);
        Py_DECREF(tmp_called_value_54);
        if (tmp_iter_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_163 = MAKE_ITERATOR(tstate, tmp_iter_arg_9);
        Py_DECREF(tmp_iter_arg_9);
        if (tmp_ass_subvalue_163 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_163 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_163 == NULL)) {
            tmp_ass_subscribed_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_163 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_163);

            exception_lineno = 380;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_163 = mod_consts[441];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_163, tmp_ass_subscript_163, tmp_ass_subvalue_163);
        Py_DECREF(tmp_ass_subvalue_163);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto frame_exception_exit_1;
        }
    }
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_dill$_objects, mod_consts[434]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[434]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 381;

        goto frame_exception_exit_1;
    }

    {
        PyObject *tmp_ass_subvalue_164;
        PyObject *tmp_iter_arg_10;
        PyObject *tmp_called_value_55;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_expression_value_88;
        PyObject *tmp_ass_subscribed_164;
        PyObject *tmp_ass_subscript_164;
        tmp_expression_value_88 = (PyObject *)&PyType_Type;
        tmp_expression_value_87 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_88);
        assert(!(tmp_expression_value_87 == NULL));
        tmp_called_value_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[439]);
        Py_DECREF(tmp_expression_value_87);
        if (tmp_called_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 383;
        tmp_iter_arg_10 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_55);
        Py_DECREF(tmp_called_value_55);
        if (tmp_iter_arg_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_164 = MAKE_ITERATOR(tstate, tmp_iter_arg_10);
        Py_DECREF(tmp_iter_arg_10);
        if (tmp_ass_subvalue_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_164 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_164 == NULL)) {
            tmp_ass_subscribed_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_164);

            exception_lineno = 383;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_164 = mod_consts[442];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_164, tmp_ass_subscript_164, tmp_ass_subvalue_164);
        Py_DECREF(tmp_ass_subvalue_164);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_165;
        PyObject *tmp_iter_arg_11;
        PyObject *tmp_called_value_56;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_ass_subscribed_165;
        PyObject *tmp_ass_subscript_165;
        tmp_expression_value_90 = (PyObject *)&PyType_Type;
        tmp_expression_value_89 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_90);
        assert(!(tmp_expression_value_89 == NULL));
        tmp_called_value_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts[435]);
        Py_DECREF(tmp_expression_value_89);
        if (tmp_called_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 384;
        tmp_iter_arg_11 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_56);
        Py_DECREF(tmp_called_value_56);
        if (tmp_iter_arg_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_165 = MAKE_ITERATOR(tstate, tmp_iter_arg_11);
        Py_DECREF(tmp_iter_arg_11);
        if (tmp_ass_subvalue_165 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_165 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_165 == NULL)) {
            tmp_ass_subscribed_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_165 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_165);

            exception_lineno = 384;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_165 = mod_consts[443];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_165, tmp_ass_subscript_165, tmp_ass_subvalue_165);
        Py_DECREF(tmp_ass_subvalue_165);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_166;
        PyObject *tmp_iter_arg_12;
        PyObject *tmp_called_value_57;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_expression_value_92;
        PyObject *tmp_ass_subscribed_166;
        PyObject *tmp_ass_subscript_166;
        tmp_expression_value_92 = (PyObject *)&PyType_Type;
        tmp_expression_value_91 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_92);
        assert(!(tmp_expression_value_91 == NULL));
        tmp_called_value_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts[437]);
        Py_DECREF(tmp_expression_value_91);
        if (tmp_called_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 385;
        tmp_iter_arg_12 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_57);
        Py_DECREF(tmp_called_value_57);
        if (tmp_iter_arg_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_166 = MAKE_ITERATOR(tstate, tmp_iter_arg_12);
        Py_DECREF(tmp_iter_arg_12);
        if (tmp_ass_subvalue_166 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_166 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_166 == NULL)) {
            tmp_ass_subscribed_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_166 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_166);

            exception_lineno = 385;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_166 = mod_consts[444];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_166, tmp_ass_subscript_166, tmp_ass_subvalue_166);
        Py_DECREF(tmp_ass_subvalue_166);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_167;
        PyObject *tmp_called_value_58;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_dict_arg_1;
        PyObject *tmp_ass_subscribed_167;
        PyObject *tmp_ass_subscript_167;
        tmp_called_value_58 = (PyObject *)&PyReversed_Type;
        tmp_dict_arg_1 = MAKE_DICT_EMPTY();
        tmp_args_element_value_21 = DICT_ITERKEYS(tmp_dict_arg_1);
        Py_DECREF(tmp_dict_arg_1);
        assert(!(tmp_args_element_value_21 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 387;
        tmp_ass_subvalue_167 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_58, tmp_args_element_value_21);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_ass_subvalue_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_167 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_167 == NULL)) {
            tmp_ass_subscribed_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_167);

            exception_lineno = 387;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_167 = mod_consts[445];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_167, tmp_ass_subscript_167, tmp_ass_subvalue_167);
        Py_DECREF(tmp_ass_subvalue_167);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_168;
        PyObject *tmp_called_value_59;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_dict_arg_2;
        PyObject *tmp_ass_subscribed_168;
        PyObject *tmp_ass_subscript_168;
        tmp_called_value_59 = (PyObject *)&PyReversed_Type;
        tmp_dict_arg_2 = MAKE_DICT_EMPTY();
        tmp_args_element_value_22 = DICT_ITERVALUES(tmp_dict_arg_2);
        Py_DECREF(tmp_dict_arg_2);
        assert(!(tmp_args_element_value_22 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 388;
        tmp_ass_subvalue_168 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_59, tmp_args_element_value_22);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_ass_subvalue_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_168 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_168 == NULL)) {
            tmp_ass_subscribed_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_168);

            exception_lineno = 388;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_168 = mod_consts[446];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_168, tmp_ass_subscript_168, tmp_ass_subvalue_168);
        Py_DECREF(tmp_ass_subvalue_168);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_169;
        PyObject *tmp_called_value_60;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_dict_arg_3;
        PyObject *tmp_ass_subscribed_169;
        PyObject *tmp_ass_subscript_169;
        tmp_called_value_60 = (PyObject *)&PyReversed_Type;
        tmp_dict_arg_3 = MAKE_DICT_EMPTY();
        tmp_args_element_value_23 = DICT_ITERITEMS(tmp_dict_arg_3);
        Py_DECREF(tmp_dict_arg_3);
        assert(!(tmp_args_element_value_23 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 389;
        tmp_ass_subvalue_169 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_60, tmp_args_element_value_23);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_ass_subvalue_169 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_169 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_169 == NULL)) {
            tmp_ass_subscribed_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_169 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_169);

            exception_lineno = 389;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_169 = mod_consts[447];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_169, tmp_ass_subscript_169, tmp_ass_subvalue_169);
        Py_DECREF(tmp_ass_subvalue_169);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_156;
        PyObject *tmp_name_value_46;
        PyObject *tmp_globals_arg_value_43;
        PyObject *tmp_locals_arg_value_43;
        PyObject *tmp_fromlist_value_43;
        PyObject *tmp_level_value_43;
        tmp_name_value_46 = mod_consts[448];
        tmp_globals_arg_value_43 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_43 = Py_None;
        tmp_fromlist_value_43 = Py_None;
        tmp_level_value_43 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 392;
        tmp_assign_source_156 = IMPORT_MODULE5(tstate, tmp_name_value_46, tmp_globals_arg_value_43, tmp_locals_arg_value_43, tmp_fromlist_value_43, tmp_level_value_43);
        if (tmp_assign_source_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;

            goto try_except_handler_45;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[448], tmp_assign_source_156);
    }
    {
        PyObject *tmp_ass_subvalue_170;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_called_instance_67;
        PyObject *tmp_ass_subscribed_170;
        PyObject *tmp_ass_subscript_170;
        tmp_called_instance_67 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[448]);

        if (unlikely(tmp_called_instance_67 == NULL)) {
            tmp_called_instance_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[448]);
        }

        assert(!(tmp_called_instance_67 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 394;
        tmp_expression_value_93 = CALL_METHOD_WITH_ARGS3(
            tstate,
            tmp_called_instance_67,
            mod_consts[448],
            &PyTuple_GET_ITEM(mod_consts[449], 0)
        );

        if (tmp_expression_value_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto try_except_handler_45;
        }
        tmp_ass_subvalue_170 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[450]);
        Py_DECREF(tmp_expression_value_93);
        if (tmp_ass_subvalue_170 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto try_except_handler_45;
        }
        tmp_ass_subscribed_170 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_170 == NULL)) {
            tmp_ass_subscribed_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_170 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_170);

            exception_lineno = 394;

            goto try_except_handler_45;
        }
        tmp_ass_subscript_170 = mod_consts[451];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_170, tmp_ass_subscript_170, tmp_ass_subvalue_170);
        Py_DECREF(tmp_ass_subvalue_170);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto try_except_handler_45;
        }
    }
    goto try_end_35;
    // Exception handler code:
    try_except_handler_45:;
    exception_keeper_type_45 = exception_type;
    exception_keeper_value_45 = exception_value;
    exception_keeper_tb_45 = exception_tb;
    exception_keeper_lineno_45 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 7.
    exception_preserved_7 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_45 == NULL) {
        exception_keeper_tb_45 = MAKE_TRACEBACK(frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_45);
    } else if (exception_keeper_lineno_45 != 0) {
        exception_keeper_tb_45 = ADD_TRACEBACK(exception_keeper_tb_45, frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_45);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_45, &exception_keeper_value_45, &exception_keeper_tb_45);
    // Tried code:
    {
        bool tmp_condition_result_29;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        tmp_cmp_expr_left_9 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_9 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_29 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_29 != false) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 391;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_055af561147bc398dec138c5e48a8193->m_frame) frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_46;
    branch_no_22:;
    goto try_end_36;
    // Exception handler code:
    try_except_handler_46:;
    exception_keeper_type_46 = exception_type;
    exception_keeper_value_46 = exception_value;
    exception_keeper_tb_46 = exception_tb;
    exception_keeper_lineno_46 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 7.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_7);

    // Re-raise.
    exception_type = exception_keeper_type_46;
    exception_value = exception_keeper_value_46;
    exception_tb = exception_keeper_tb_46;
    exception_lineno = exception_keeper_lineno_46;

    goto frame_exception_exit_1;
    // End of try:
    try_end_36:;
    // Restore previous exception id 7.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_7);

    goto try_end_35;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_35:;
    {
        bool tmp_condition_result_30;
        PyObject *tmp_operand_value_6;
        tmp_operand_value_6 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_operand_value_6 == NULL)) {
            tmp_operand_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        if (tmp_operand_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_30 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_30 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_ass_subvalue_171;
        PyObject *tmp_called_instance_68;
        PyObject *tmp_compile_source_2;
        PyObject *tmp_compile_filename_2;
        PyObject *tmp_compile_mode_2;
        PyObject *tmp_ass_subscribed_171;
        PyObject *tmp_ass_subscript_171;
        tmp_compile_source_2 = mod_consts[452];
        tmp_compile_filename_2 = mod_consts[267];
        tmp_compile_mode_2 = mod_consts[453];
        tmp_called_instance_68 = COMPILE_CODE(tstate, tmp_compile_source_2, tmp_compile_filename_2, tmp_compile_mode_2, NULL, NULL, NULL);
        if (tmp_called_instance_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 399;
        tmp_ass_subvalue_171 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_68, mod_consts[454]);
        Py_DECREF(tmp_called_instance_68);
        if (tmp_ass_subvalue_171 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_171 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_171 == NULL)) {
            tmp_ass_subscribed_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_171 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_171);

            exception_lineno = 399;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_171 = mod_consts[455];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_171, tmp_ass_subscript_171, tmp_ass_subvalue_171);
        Py_DECREF(tmp_ass_subvalue_171);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto frame_exception_exit_1;
        }
    }
    branch_no_23:;
    {
        PyObject *tmp_assign_source_157;
        PyObject *tmp_import_name_from_6;
        tmp_import_name_from_6 = IMPORT_HARD_TYPES();
        assert(!(tmp_import_name_from_6 == NULL));
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_157 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_dill$_objects,
                mod_consts[456],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_157 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[456]);
        }

        if (tmp_assign_source_157 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[456], tmp_assign_source_157);
    }
    {
        PyObject *tmp_ass_subvalue_172;
        PyObject *tmp_iter_arg_13;
        PyObject *tmp_called_value_61;
        PyObject *tmp_ass_subscribed_172;
        PyObject *tmp_ass_subscript_172;
        tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[456]);

        if (unlikely(tmp_called_value_61 == NULL)) {
            tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[456]);
        }

        assert(!(tmp_called_value_61 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 403;
        tmp_iter_arg_13 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_61, mod_consts[457]);

        if (tmp_iter_arg_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_172 = MAKE_ITERATOR(tstate, tmp_iter_arg_13);
        Py_DECREF(tmp_iter_arg_13);
        if (tmp_ass_subvalue_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_172 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_ass_subscribed_172 == NULL)) {
            tmp_ass_subscribed_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_ass_subscribed_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_172);

            exception_lineno = 403;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_172 = mod_consts[458];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_172, tmp_ass_subscript_172, tmp_ass_subvalue_172);
        Py_DECREF(tmp_ass_subvalue_172);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_173;
        PyObject *tmp_called_instance_69;
        PyObject *tmp_compile_source_3;
        PyObject *tmp_compile_filename_3;
        PyObject *tmp_compile_mode_3;
        PyObject *tmp_ass_subscribed_173;
        PyObject *tmp_ass_subscript_173;
        tmp_compile_source_3 = mod_consts[452];
        tmp_compile_filename_3 = mod_consts[267];
        tmp_compile_mode_3 = mod_consts[453];
        tmp_called_instance_69 = COMPILE_CODE(tstate, tmp_compile_source_3, tmp_compile_filename_3, tmp_compile_mode_3, NULL, NULL, NULL);
        if (tmp_called_instance_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 404;
        tmp_ass_subvalue_173 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_69, mod_consts[459]);
        Py_DECREF(tmp_called_instance_69);
        if (tmp_ass_subvalue_173 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_173 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_173 == NULL)) {
            tmp_ass_subscribed_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_173 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_173);

            exception_lineno = 404;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_173 = mod_consts[460];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_173, tmp_ass_subscript_173, tmp_ass_subvalue_173);
        Py_DECREF(tmp_ass_subvalue_173);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_174;
        PyObject *tmp_called_instance_70;
        PyObject *tmp_ass_subscribed_174;
        PyObject *tmp_ass_subscript_174;
        tmp_called_instance_70 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_instance_70 == NULL)) {
            tmp_called_instance_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_called_instance_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 407;
        tmp_ass_subvalue_174 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_70, mod_consts[461]);
        if (tmp_ass_subvalue_174 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_174 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_174 == NULL)) {
            tmp_ass_subscribed_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_174 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_174);

            exception_lineno = 407;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_174 = mod_consts[462];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_174, tmp_ass_subscript_174, tmp_ass_subvalue_174);
        Py_DECREF(tmp_ass_subvalue_174);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_175;
        PyObject *tmp_called_instance_71;
        PyObject *tmp_ass_subscribed_175;
        PyObject *tmp_ass_subscript_175;
        tmp_called_instance_71 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_instance_71 == NULL)) {
            tmp_called_instance_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_instance_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 409;
        tmp_ass_subvalue_175 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_71,
            mod_consts[463],
            PyTuple_GET_ITEM(mod_consts[464], 0)
        );

        if (tmp_ass_subvalue_175 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_175 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_175 == NULL)) {
            tmp_ass_subscribed_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_175 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_175);

            exception_lineno = 409;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_175 = mod_consts[465];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_175, tmp_ass_subscript_175, tmp_ass_subvalue_175);
        Py_DECREF(tmp_ass_subvalue_175);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_176;
        PyObject *tmp_ass_subscribed_176;
        PyObject *tmp_ass_subscript_176;
        tmp_ass_subvalue_176 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_ass_subvalue_176 == NULL)) {
            tmp_ass_subvalue_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_ass_subvalue_176 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_176 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_176 == NULL)) {
            tmp_ass_subscribed_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_176 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_176 = mod_consts[466];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_176, tmp_ass_subscript_176, tmp_ass_subvalue_176);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_177;
        PyObject *tmp_called_value_62;
        PyObject *tmp_expression_value_94;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_ass_subscribed_177;
        PyObject *tmp_ass_subscript_177;
        tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_expression_value_94 == NULL)) {
            tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_expression_value_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto frame_exception_exit_1;
        }
        tmp_called_value_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts[467]);
        if (tmp_called_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_3 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_kw_call_value_0_3 == NULL)) {
            tmp_kw_call_value_0_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_kw_call_value_0_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 413;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 413;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_3};

            tmp_ass_subvalue_177 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_62, kw_values, mod_consts[468]);
        }

        Py_DECREF(tmp_called_value_62);
        if (tmp_ass_subvalue_177 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_177 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_177 == NULL)) {
            tmp_ass_subscribed_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_177 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_177);

            exception_lineno = 413;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_177 = mod_consts[469];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_177, tmp_ass_subscript_177, tmp_ass_subvalue_177);
        Py_DECREF(tmp_ass_subvalue_177);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_178;
        PyObject *tmp_called_instance_72;
        PyObject *tmp_ass_subscribed_178;
        PyObject *tmp_ass_subscript_178;
        tmp_called_instance_72 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_instance_72 == NULL)) {
            tmp_called_instance_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_called_instance_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 415;
        tmp_ass_subvalue_178 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_72, mod_consts[470]);
        if (tmp_ass_subvalue_178 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_178 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_178 == NULL)) {
            tmp_ass_subscribed_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_178 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_178);

            exception_lineno = 415;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_178 = mod_consts[471];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_178, tmp_ass_subscript_178, tmp_ass_subvalue_178);
        Py_DECREF(tmp_ass_subvalue_178);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_179;
        PyObject *tmp_called_instance_73;
        PyObject *tmp_ass_subscribed_179;
        PyObject *tmp_ass_subscript_179;
        tmp_called_instance_73 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_instance_73 == NULL)) {
            tmp_called_instance_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_instance_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 417;
        tmp_ass_subvalue_179 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_73,
            mod_consts[472],
            PyTuple_GET_ITEM(mod_consts[464], 0)
        );

        if (tmp_ass_subvalue_179 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_179 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_179 == NULL)) {
            tmp_ass_subscribed_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_179 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_179);

            exception_lineno = 417;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_179 = mod_consts[473];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_179, tmp_ass_subscript_179, tmp_ass_subvalue_179);
        Py_DECREF(tmp_ass_subvalue_179);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_180;
        PyObject *tmp_called_instance_74;
        PyObject *tmp_ass_subscribed_180;
        PyObject *tmp_ass_subscript_180;
        tmp_called_instance_74 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_instance_74 == NULL)) {
            tmp_called_instance_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_instance_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 418;
        tmp_ass_subvalue_180 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_74,
            mod_consts[474],
            &PyTuple_GET_ITEM(mod_consts[475], 0)
        );

        if (tmp_ass_subvalue_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_180 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_180 == NULL)) {
            tmp_ass_subscribed_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_180);

            exception_lineno = 418;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_180 = mod_consts[476];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_180, tmp_ass_subscript_180, tmp_ass_subvalue_180);
        Py_DECREF(tmp_ass_subvalue_180);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_181;
        PyObject *tmp_called_instance_75;
        PyObject *tmp_ass_subscribed_181;
        PyObject *tmp_ass_subscript_181;
        tmp_called_instance_75 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_instance_75 == NULL)) {
            tmp_called_instance_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_instance_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 419;
        tmp_ass_subvalue_181 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_75,
            mod_consts[477],
            PyTuple_GET_ITEM(mod_consts[176], 0)
        );

        if (tmp_ass_subvalue_181 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_181 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_181 == NULL)) {
            tmp_ass_subscribed_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_181 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_181);

            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_181 = mod_consts[478];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_181, tmp_ass_subscript_181, tmp_ass_subvalue_181);
        Py_DECREF(tmp_ass_subvalue_181);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_182;
        PyObject *tmp_called_instance_76;
        PyObject *tmp_call_arg_element_5;
        PyObject *tmp_call_arg_element_6;
        PyObject *tmp_ass_subscribed_182;
        PyObject *tmp_ass_subscript_182;
        tmp_called_instance_76 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_instance_76 == NULL)) {
            tmp_called_instance_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_instance_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_5 = mod_consts[480];
        tmp_call_arg_element_6 = MAKE_LIST1(mod_consts[122]);
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 420;
        {
            PyObject *call_args[] = {tmp_call_arg_element_5, tmp_call_arg_element_6};
            tmp_ass_subvalue_182 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_76,
                mod_consts[479],
                call_args
            );
        }

        Py_DECREF(tmp_call_arg_element_6);
        if (tmp_ass_subvalue_182 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_182 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_182 == NULL)) {
            tmp_ass_subscribed_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_182 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_182);

            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_182 = mod_consts[481];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_182, tmp_ass_subscript_182, tmp_ass_subvalue_182);
        Py_DECREF(tmp_ass_subvalue_182);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_called_value_63;
        tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_value_63 == NULL)) {
            tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_called_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto try_except_handler_47;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 425;
        tmp_assign_source_158 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_63, mod_consts[173]);

        if (tmp_assign_source_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto try_except_handler_47;
        }
        assert(tmp_assign_unpack_25__assign_source == NULL);
        tmp_assign_unpack_25__assign_source = tmp_assign_source_158;
    }
    {
        PyObject *tmp_ass_subvalue_183;
        PyObject *tmp_ass_subscribed_183;
        PyObject *tmp_ass_subscript_183;
        CHECK_OBJECT(tmp_assign_unpack_25__assign_source);
        tmp_ass_subvalue_183 = tmp_assign_unpack_25__assign_source;
        tmp_ass_subscribed_183 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_183 == NULL)) {
            tmp_ass_subscribed_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_183 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto try_except_handler_47;
        }
        tmp_ass_subscript_183 = mod_consts[482];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_183, tmp_ass_subscript_183, tmp_ass_subvalue_183);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto try_except_handler_47;
        }
    }
    goto try_end_37;
    // Exception handler code:
    try_except_handler_47:;
    exception_keeper_type_47 = exception_type;
    exception_keeper_value_47 = exception_value;
    exception_keeper_tb_47 = exception_tb;
    exception_keeper_lineno_47 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_25__assign_source);
    tmp_assign_unpack_25__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_47;
    exception_value = exception_keeper_value_47;
    exception_tb = exception_keeper_tb_47;
    exception_lineno = exception_keeper_lineno_47;

    goto frame_exception_exit_1;
    // End of try:
    try_end_37:;
    {
        PyObject *tmp_assign_source_159;
        CHECK_OBJECT(tmp_assign_unpack_25__assign_source);
        tmp_assign_source_159 = tmp_assign_unpack_25__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[483], tmp_assign_source_159);
    }
    CHECK_OBJECT(tmp_assign_unpack_25__assign_source);
    Py_DECREF(tmp_assign_unpack_25__assign_source);
    tmp_assign_unpack_25__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_184;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_ass_subscribed_184;
        PyObject *tmp_ass_subscript_184;
        tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[483]);

        if (unlikely(tmp_expression_value_95 == NULL)) {
            tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[483]);
        }

        if (tmp_expression_value_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_184 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts[484]);
        if (tmp_ass_subvalue_184 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_184 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_184 == NULL)) {
            tmp_ass_subscribed_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_184 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_184);

            exception_lineno = 426;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_184 = mod_consts[485];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_184, tmp_ass_subscript_184, tmp_ass_subvalue_184);
        Py_DECREF(tmp_ass_subvalue_184);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_185;
        PyObject *tmp_expression_value_96;
        PyObject *tmp_called_value_64;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_ass_subscribed_185;
        PyObject *tmp_ass_subscript_185;
        tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_value_64 == NULL)) {
            tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_called_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 427;
        tmp_expression_value_96 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_64);
        if (tmp_expression_value_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_14 = mod_consts[122];
        tmp_ass_subvalue_185 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_96, tmp_subscript_value_14, 1);
        Py_DECREF(tmp_expression_value_96);
        if (tmp_ass_subvalue_185 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_185 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_185 == NULL)) {
            tmp_ass_subscribed_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_185 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_185);

            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_185 = mod_consts[486];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_185, tmp_ass_subscript_185, tmp_ass_subvalue_185);
        Py_DECREF(tmp_ass_subvalue_185);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_186;
        PyObject *tmp_called_instance_77;
        PyObject *tmp_ass_subscribed_186;
        PyObject *tmp_ass_subscript_186;
        tmp_called_instance_77 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_called_instance_77 == NULL)) {
            tmp_called_instance_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_called_instance_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 433;
        tmp_ass_subvalue_186 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_77,
            mod_consts[487],
            PyTuple_GET_ITEM(mod_consts[488], 0)
        );

        if (tmp_ass_subvalue_186 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_186 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_186 == NULL)) {
            tmp_ass_subscribed_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_186 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_186);

            exception_lineno = 433;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_186 = mod_consts[489];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_186, tmp_ass_subscript_186, tmp_ass_subvalue_186);
        Py_DECREF(tmp_ass_subvalue_186);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_187;
        PyObject *tmp_called_instance_78;
        PyObject *tmp_ass_subscribed_187;
        PyObject *tmp_ass_subscript_187;
        tmp_called_instance_78 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[159]);

        if (unlikely(tmp_called_instance_78 == NULL)) {
            tmp_called_instance_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[159]);
        }

        if (tmp_called_instance_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 434;
        tmp_ass_subvalue_187 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_78,
            mod_consts[490],
            PyTuple_GET_ITEM(mod_consts[157], 0)
        );

        if (tmp_ass_subvalue_187 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_187 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_187 == NULL)) {
            tmp_ass_subscribed_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_187 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_187);

            exception_lineno = 434;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_187 = mod_consts[430];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_187, tmp_ass_subscript_187, tmp_ass_subvalue_187);
        Py_DECREF(tmp_ass_subvalue_187);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_188;
        PyObject *tmp_called_instance_79;
        PyObject *tmp_ass_subscribed_188;
        PyObject *tmp_ass_subscript_188;
        tmp_called_instance_79 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[159]);

        if (unlikely(tmp_called_instance_79 == NULL)) {
            tmp_called_instance_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[159]);
        }

        if (tmp_called_instance_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 435;
        tmp_ass_subvalue_188 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_79,
            mod_consts[491],
            PyTuple_GET_ITEM(mod_consts[157], 0)
        );

        if (tmp_ass_subvalue_188 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_188 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_188 == NULL)) {
            tmp_ass_subscribed_188 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_188 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_188);

            exception_lineno = 435;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_188 = mod_consts[492];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_188, tmp_ass_subscript_188, tmp_ass_subvalue_188);
        Py_DECREF(tmp_ass_subvalue_188);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_189;
        PyObject *tmp_called_instance_80;
        PyObject *tmp_ass_subscribed_189;
        PyObject *tmp_ass_subscript_189;
        tmp_called_instance_80 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[159]);

        if (unlikely(tmp_called_instance_80 == NULL)) {
            tmp_called_instance_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[159]);
        }

        if (tmp_called_instance_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 436;
        tmp_ass_subvalue_189 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_80,
            mod_consts[493],
            PyTuple_GET_ITEM(mod_consts[157], 0)
        );

        if (tmp_ass_subvalue_189 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_189 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_189 == NULL)) {
            tmp_ass_subscribed_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_189 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_189);

            exception_lineno = 436;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_189 = mod_consts[494];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_189, tmp_ass_subscript_189, tmp_ass_subvalue_189);
        Py_DECREF(tmp_ass_subvalue_189);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_190;
        PyObject *tmp_called_value_65;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_ass_subscribed_190;
        PyObject *tmp_ass_subscript_190;
        tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_97 == NULL)) {
            tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_expression_value_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;

            goto frame_exception_exit_1;
        }
        tmp_called_value_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts[495]);
        if (tmp_called_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_24 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[327]);

        if (unlikely(tmp_args_element_value_24 == NULL)) {
            tmp_args_element_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[327]);
        }

        if (tmp_args_element_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_65);

            exception_lineno = 437;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 437;
        tmp_ass_subvalue_190 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_65, tmp_args_element_value_24);
        Py_DECREF(tmp_called_value_65);
        if (tmp_ass_subvalue_190 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_190 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_190 == NULL)) {
            tmp_ass_subscribed_190 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_190 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_190);

            exception_lineno = 437;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_190 = mod_consts[495];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_190, tmp_ass_subscript_190, tmp_ass_subvalue_190);
        Py_DECREF(tmp_ass_subvalue_190);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;

            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_31;
        PyObject *tmp_mvar_value_12;
        int tmp_truth_name_14;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_mvar_value_12 == NULL)) {
            tmp_mvar_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
        }

        if (tmp_mvar_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_14 = CHECK_IF_TRUE(tmp_mvar_value_12);
        if (tmp_truth_name_14 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_31 = tmp_truth_name_14 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        PyObject *tmp_assign_source_160;
        nuitka_bool tmp_condition_result_32;
        PyObject *tmp_mvar_value_13;
        int tmp_truth_name_15;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_mvar_value_13 == NULL)) {
            tmp_mvar_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        if (tmp_mvar_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_15 = CHECK_IF_TRUE(tmp_mvar_value_13);
        if (tmp_truth_name_15 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_32 = tmp_truth_name_15 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        tmp_assign_source_160 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_assign_source_160 == NULL)) {
            tmp_assign_source_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_assign_source_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;

            goto frame_exception_exit_1;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_assign_source_160 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_assign_source_160 == NULL)) {
            tmp_assign_source_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_assign_source_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;

            goto frame_exception_exit_1;
        }
        condexpr_end_8:;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_160);
    }
    {
        PyObject *tmp_ass_subvalue_191;
        PyObject *tmp_called_value_66;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_ass_subscribed_191;
        PyObject *tmp_ass_subscript_191;
        tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_value_98 == NULL)) {
            tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_expression_value_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto frame_exception_exit_1;
        }
        tmp_called_value_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, mod_consts[301]);
        if (tmp_called_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_25 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_args_element_value_25 == NULL)) {
            tmp_args_element_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_args_element_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 442;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_26 = mod_consts[496];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 442;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_ass_subvalue_191 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_66, call_args);
        }

        Py_DECREF(tmp_called_value_66);
        if (tmp_ass_subvalue_191 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_191 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_ass_subscribed_191 == NULL)) {
            tmp_ass_subscribed_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_ass_subscribed_191 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_191);

            exception_lineno = 442;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_191 = mod_consts[497];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_191, tmp_ass_subscript_191, tmp_ass_subvalue_191);
        Py_DECREF(tmp_ass_subvalue_191);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto frame_exception_exit_1;
        }
    }
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_dill$_objects, mod_consts[198]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[198]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 443;

        goto frame_exception_exit_1;
    }

    branch_no_24:;
    {
        PyObject *tmp_ass_subvalue_192;
        PyObject *tmp_called_instance_81;
        PyObject *tmp_ass_subscribed_192;
        PyObject *tmp_ass_subscript_192;
        tmp_called_instance_81 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_instance_81 == NULL)) {
            tmp_called_instance_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_called_instance_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 447;
        tmp_ass_subvalue_192 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_81, mod_consts[498]);
        if (tmp_ass_subvalue_192 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_192 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_192 == NULL)) {
            tmp_ass_subscribed_192 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_192 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_192);

            exception_lineno = 447;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_192 = mod_consts[499];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_192, tmp_ass_subscript_192, tmp_ass_subvalue_192);
        Py_DECREF(tmp_ass_subvalue_192);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_193;
        PyObject *tmp_called_instance_82;
        PyObject *tmp_ass_subscribed_193;
        PyObject *tmp_ass_subscript_193;
        tmp_called_instance_82 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_instance_82 == NULL)) {
            tmp_called_instance_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_called_instance_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 448;
        tmp_ass_subvalue_193 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_82, mod_consts[500]);
        if (tmp_ass_subvalue_193 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_193 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_193 == NULL)) {
            tmp_ass_subscribed_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_193 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_193);

            exception_lineno = 448;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_193 = mod_consts[501];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_193, tmp_ass_subscript_193, tmp_ass_subvalue_193);
        Py_DECREF(tmp_ass_subvalue_193);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_194;
        PyObject *tmp_called_value_67;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_ass_subscribed_194;
        PyObject *tmp_ass_subscript_194;
        tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_value_99 == NULL)) {
            tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_expression_value_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;

            goto frame_exception_exit_1;
        }
        tmp_called_value_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts[502]);
        if (tmp_called_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_27 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[327]);

        if (unlikely(tmp_args_element_value_27 == NULL)) {
            tmp_args_element_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[327]);
        }

        if (tmp_args_element_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_67);

            exception_lineno = 450;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 450;
        tmp_ass_subvalue_194 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_67, tmp_args_element_value_27);
        Py_DECREF(tmp_called_value_67);
        if (tmp_ass_subvalue_194 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_194 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_194 == NULL)) {
            tmp_ass_subscribed_194 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_194 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_194);

            exception_lineno = 450;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_194 = mod_consts[503];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_194, tmp_ass_subscript_194, tmp_ass_subvalue_194);
        Py_DECREF(tmp_ass_subvalue_194);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_195;
        PyObject *tmp_called_value_68;
        PyObject *tmp_expression_value_100;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_ass_subscribed_195;
        PyObject *tmp_ass_subscript_195;
        tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_value_100 == NULL)) {
            tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_expression_value_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;

            goto frame_exception_exit_1;
        }
        tmp_called_value_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_100, mod_consts[504]);
        if (tmp_called_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_28 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[329]);

        if (unlikely(tmp_args_element_value_28 == NULL)) {
            tmp_args_element_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[329]);
        }

        if (tmp_args_element_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_68);

            exception_lineno = 451;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 451;
        tmp_ass_subvalue_195 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_68, tmp_args_element_value_28);
        Py_DECREF(tmp_called_value_68);
        if (tmp_ass_subvalue_195 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_195 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_195 == NULL)) {
            tmp_ass_subscribed_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_195 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_195);

            exception_lineno = 451;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_195 = mod_consts[505];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_195, tmp_ass_subscript_195, tmp_ass_subvalue_195);
        Py_DECREF(tmp_ass_subvalue_195);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_196;
        PyObject *tmp_called_value_69;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_ass_subscribed_196;
        PyObject *tmp_ass_subscript_196;
        tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_value_101 == NULL)) {
            tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_expression_value_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;

            goto frame_exception_exit_1;
        }
        tmp_called_value_69 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, mod_consts[506]);
        if (tmp_called_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_29 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[327]);

        if (unlikely(tmp_args_element_value_29 == NULL)) {
            tmp_args_element_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[327]);
        }

        if (tmp_args_element_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_69);

            exception_lineno = 452;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 452;
        tmp_ass_subvalue_196 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_69, tmp_args_element_value_29);
        Py_DECREF(tmp_called_value_69);
        if (tmp_ass_subvalue_196 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_196 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_196 == NULL)) {
            tmp_ass_subscribed_196 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_196 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_196);

            exception_lineno = 452;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_196 = mod_consts[507];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_196, tmp_ass_subscript_196, tmp_ass_subvalue_196);
        Py_DECREF(tmp_ass_subvalue_196);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_197;
        PyObject *tmp_called_value_70;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_ass_subscribed_197;
        PyObject *tmp_ass_subscript_197;
        tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_value_102 == NULL)) {
            tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_expression_value_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;

            goto frame_exception_exit_1;
        }
        tmp_called_value_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts[508]);
        if (tmp_called_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_30 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[329]);

        if (unlikely(tmp_args_element_value_30 == NULL)) {
            tmp_args_element_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[329]);
        }

        if (tmp_args_element_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_70);

            exception_lineno = 453;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_31 = MAKE_DICT_EMPTY();
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 453;
        {
            PyObject *call_args[] = {tmp_args_element_value_30, tmp_args_element_value_31};
            tmp_ass_subvalue_197 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_70, call_args);
        }

        Py_DECREF(tmp_called_value_70);
        Py_DECREF(tmp_args_element_value_31);
        if (tmp_ass_subvalue_197 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_197 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_197 == NULL)) {
            tmp_ass_subscribed_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_197 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_197);

            exception_lineno = 453;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_197 = mod_consts[509];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_197, tmp_ass_subscript_197, tmp_ass_subvalue_197);
        Py_DECREF(tmp_ass_subvalue_197);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_198;
        PyObject *tmp_called_instance_83;
        PyObject *tmp_ass_subscribed_198;
        PyObject *tmp_ass_subscript_198;
        tmp_called_instance_83 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_instance_83 == NULL)) {
            tmp_called_instance_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
        }

        if (tmp_called_instance_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 455;
        tmp_ass_subvalue_198 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_83, mod_consts[510]);
        if (tmp_ass_subvalue_198 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_198 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_198 == NULL)) {
            tmp_ass_subscribed_198 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_198 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_198);

            exception_lineno = 455;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_198 = mod_consts[511];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_198, tmp_ass_subscript_198, tmp_ass_subvalue_198);
        Py_DECREF(tmp_ass_subvalue_198);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_199;
        PyObject *tmp_called_value_71;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_args_value_13;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_kwargs_value_13;
        PyObject *tmp_ass_subscribed_199;
        PyObject *tmp_ass_subscript_199;
        tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_expression_value_103 == NULL)) {
            tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_expression_value_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;

            goto frame_exception_exit_1;
        }
        tmp_called_value_71 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, mod_consts[512]);
        if (tmp_called_value_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[325]);

        if (unlikely(tmp_tuple_element_19 == NULL)) {
            tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[325]);
        }

        if (tmp_tuple_element_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_71);

            exception_lineno = 459;

            goto frame_exception_exit_1;
        }
        tmp_args_value_13 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_19);
        tmp_kwargs_value_13 = DICT_COPY(mod_consts[513]);
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 459;
        tmp_ass_subvalue_199 = CALL_FUNCTION(tstate, tmp_called_value_71, tmp_args_value_13, tmp_kwargs_value_13);
        Py_DECREF(tmp_called_value_71);
        Py_DECREF(tmp_args_value_13);
        Py_DECREF(tmp_kwargs_value_13);
        if (tmp_ass_subvalue_199 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_199 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_199 == NULL)) {
            tmp_ass_subscribed_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_199 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_199);

            exception_lineno = 459;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_199 = mod_consts[514];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_199, tmp_ass_subscript_199, tmp_ass_subvalue_199);
        Py_DECREF(tmp_ass_subvalue_199);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_operand_value_7;
        tmp_operand_value_7 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_operand_value_7 == NULL)) {
            tmp_operand_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
        }

        if (tmp_operand_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;

            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_33;
        PyObject *tmp_mvar_value_14;
        int tmp_truth_name_16;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_mvar_value_14 == NULL)) {
            tmp_mvar_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
        }

        if (tmp_mvar_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_16 = CHECK_IF_TRUE(tmp_mvar_value_14);
        if (tmp_truth_name_16 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_33 = tmp_truth_name_16 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_ass_subvalue_200;
        PyObject *tmp_called_instance_84;
        PyObject *tmp_ass_subscribed_200;
        PyObject *tmp_ass_subscript_200;
        tmp_called_instance_84 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_84 == NULL)) {
            tmp_called_instance_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_called_instance_84 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 466;
        tmp_ass_subvalue_200 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_84, mod_consts[515]);
        if (tmp_ass_subvalue_200 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_200 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_200 == NULL)) {
            tmp_ass_subscribed_200 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_200 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_200);

            exception_lineno = 466;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_200 = mod_consts[516];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_200, tmp_ass_subscript_200, tmp_ass_subvalue_200);
        Py_DECREF(tmp_ass_subvalue_200);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_201;
        PyObject *tmp_called_instance_85;
        PyObject *tmp_ass_subscribed_201;
        PyObject *tmp_ass_subscript_201;
        tmp_called_instance_85 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_85 == NULL)) {
            tmp_called_instance_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_called_instance_85 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 467;
        tmp_ass_subvalue_201 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_85, mod_consts[517]);
        if (tmp_ass_subvalue_201 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_201 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_201 == NULL)) {
            tmp_ass_subscribed_201 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_201 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_201);

            exception_lineno = 467;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_201 = mod_consts[518];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_201, tmp_ass_subscript_201, tmp_ass_subvalue_201);
        Py_DECREF(tmp_ass_subvalue_201);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_202;
        PyObject *tmp_called_instance_86;
        PyObject *tmp_ass_subscribed_202;
        PyObject *tmp_ass_subscript_202;
        tmp_called_instance_86 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_86 == NULL)) {
            tmp_called_instance_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_called_instance_86 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 468;
        tmp_ass_subvalue_202 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_86, mod_consts[519]);
        if (tmp_ass_subvalue_202 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_202 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_202 == NULL)) {
            tmp_ass_subscribed_202 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_202 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_202);

            exception_lineno = 468;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_202 = mod_consts[520];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_202, tmp_ass_subscript_202, tmp_ass_subvalue_202);
        Py_DECREF(tmp_ass_subvalue_202);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_161;
        PyObject *tmp_expression_value_104;
        PyObject *tmp_expression_value_105;
        tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_expression_value_105 == NULL)) {
            tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_expression_value_105 == NULL));
        tmp_expression_value_104 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts[229]);
        if (tmp_expression_value_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;

            goto try_except_handler_48;
        }
        tmp_assign_source_161 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_104, mod_consts[521]);
        Py_DECREF(tmp_expression_value_104);
        if (tmp_assign_source_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;

            goto try_except_handler_48;
        }
        assert(tmp_assign_unpack_26__assign_source == NULL);
        tmp_assign_unpack_26__assign_source = tmp_assign_source_161;
    }
    {
        PyObject *tmp_ass_subvalue_203;
        PyObject *tmp_ass_subscribed_203;
        PyObject *tmp_ass_subscript_203;
        CHECK_OBJECT(tmp_assign_unpack_26__assign_source);
        tmp_ass_subvalue_203 = tmp_assign_unpack_26__assign_source;
        tmp_ass_subscribed_203 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_203 == NULL)) {
            tmp_ass_subscribed_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_203 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;

            goto try_except_handler_48;
        }
        tmp_ass_subscript_203 = mod_consts[522];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_203, tmp_ass_subscript_203, tmp_ass_subvalue_203);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;

            goto try_except_handler_48;
        }
    }
    goto try_end_38;
    // Exception handler code:
    try_except_handler_48:;
    exception_keeper_type_48 = exception_type;
    exception_keeper_value_48 = exception_value;
    exception_keeper_tb_48 = exception_tb;
    exception_keeper_lineno_48 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_26__assign_source);
    tmp_assign_unpack_26__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_48;
    exception_value = exception_keeper_value_48;
    exception_tb = exception_keeper_tb_48;
    exception_lineno = exception_keeper_lineno_48;

    goto frame_exception_exit_1;
    // End of try:
    try_end_38:;
    {
        PyObject *tmp_assign_source_162;
        CHECK_OBJECT(tmp_assign_unpack_26__assign_source);
        tmp_assign_source_162 = tmp_assign_unpack_26__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[523], tmp_assign_source_162);
    }
    CHECK_OBJECT(tmp_assign_unpack_26__assign_source);
    Py_DECREF(tmp_assign_unpack_26__assign_source);
    tmp_assign_unpack_26__assign_source = NULL;
    {
        bool tmp_condition_result_34;
        PyObject *tmp_operand_value_8;
        tmp_operand_value_8 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_operand_value_8 == NULL)) {
            tmp_operand_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        if (tmp_operand_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_34 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_34 != false) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    // Tried code:
    {
        PyObject *tmp_assign_source_163;
        PyObject *tmp_expression_value_106;
        tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_expression_value_106 == NULL)) {
            tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_expression_value_106 == NULL));
        tmp_assign_source_163 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_106, mod_consts[70]);
        if (tmp_assign_source_163 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto try_except_handler_49;
        }
        assert(tmp_assign_unpack_28__assign_source == NULL);
        tmp_assign_unpack_28__assign_source = tmp_assign_source_163;
    }
    {
        PyObject *tmp_ass_subvalue_204;
        PyObject *tmp_ass_subscribed_204;
        PyObject *tmp_ass_subscript_204;
        CHECK_OBJECT(tmp_assign_unpack_28__assign_source);
        tmp_ass_subvalue_204 = tmp_assign_unpack_28__assign_source;
        tmp_ass_subscribed_204 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_204 == NULL)) {
            tmp_ass_subscribed_204 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_204 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto try_except_handler_49;
        }
        tmp_ass_subscript_204 = mod_consts[524];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_204, tmp_ass_subscript_204, tmp_ass_subvalue_204);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto try_except_handler_49;
        }
    }
    goto try_end_39;
    // Exception handler code:
    try_except_handler_49:;
    exception_keeper_type_49 = exception_type;
    exception_keeper_value_49 = exception_value;
    exception_keeper_tb_49 = exception_tb;
    exception_keeper_lineno_49 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_28__assign_source);
    tmp_assign_unpack_28__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_49;
    exception_value = exception_keeper_value_49;
    exception_tb = exception_keeper_tb_49;
    exception_lineno = exception_keeper_lineno_49;

    goto frame_exception_exit_1;
    // End of try:
    try_end_39:;
    {
        PyObject *tmp_assign_source_164;
        CHECK_OBJECT(tmp_assign_unpack_28__assign_source);
        tmp_assign_source_164 = tmp_assign_unpack_28__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[525], tmp_assign_source_164);
    }
    CHECK_OBJECT(tmp_assign_unpack_28__assign_source);
    Py_DECREF(tmp_assign_unpack_28__assign_source);
    tmp_assign_unpack_28__assign_source = NULL;
    branch_no_26:;
    {
        PyObject *tmp_ass_subvalue_205;
        PyObject *tmp_called_instance_87;
        PyObject *tmp_ass_subscribed_205;
        PyObject *tmp_ass_subscript_205;
        tmp_called_instance_87 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[523]);

        if (unlikely(tmp_called_instance_87 == NULL)) {
            tmp_called_instance_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[523]);
        }

        if (tmp_called_instance_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 475;
        tmp_ass_subvalue_205 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_87, mod_consts[526]);
        if (tmp_ass_subvalue_205 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_205 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_205 == NULL)) {
            tmp_ass_subscribed_205 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_205 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_205);

            exception_lineno = 475;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_205 = mod_consts[527];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_205, tmp_ass_subscript_205, tmp_ass_subvalue_205);
        Py_DECREF(tmp_ass_subvalue_205);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_206;
        PyObject *tmp_called_instance_88;
        PyObject *tmp_ass_subscribed_206;
        PyObject *tmp_ass_subscript_206;
        tmp_called_instance_88 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_88 == NULL)) {
            tmp_called_instance_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_called_instance_88 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 476;
        tmp_ass_subvalue_206 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_88,
            mod_consts[528],
            PyTuple_GET_ITEM(mod_consts[173], 0)
        );

        if (tmp_ass_subvalue_206 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_206 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_206 == NULL)) {
            tmp_ass_subscribed_206 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_206 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_206);

            exception_lineno = 476;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_206 = mod_consts[529];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_206, tmp_ass_subscript_206, tmp_ass_subvalue_206);
        Py_DECREF(tmp_ass_subvalue_206);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_207;
        PyObject *tmp_called_instance_89;
        PyObject *tmp_ass_subscribed_207;
        PyObject *tmp_ass_subscript_207;
        tmp_called_instance_89 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_89 == NULL)) {
            tmp_called_instance_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_called_instance_89 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 477;
        tmp_ass_subvalue_207 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_89,
            mod_consts[530],
            PyTuple_GET_ITEM(mod_consts[173], 0)
        );

        if (tmp_ass_subvalue_207 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_207 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_207 == NULL)) {
            tmp_ass_subscribed_207 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_207 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_207);

            exception_lineno = 477;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_207 = mod_consts[531];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_207, tmp_ass_subscript_207, tmp_ass_subvalue_207);
        Py_DECREF(tmp_ass_subvalue_207);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_208;
        PyObject *tmp_called_value_72;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_ass_subscribed_208;
        PyObject *tmp_ass_subscript_208;
        tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_expression_value_107 == NULL)) {
            tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_expression_value_107 == NULL));
        tmp_called_value_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_107, mod_consts[532]);
        if (tmp_called_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_32 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[201]);

        if (unlikely(tmp_args_element_value_32 == NULL)) {
            tmp_args_element_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[201]);
        }

        if (tmp_args_element_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_72);

            exception_lineno = 478;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 478;
        tmp_ass_subvalue_208 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_72, tmp_args_element_value_32);
        Py_DECREF(tmp_called_value_72);
        if (tmp_ass_subvalue_208 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_208 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_208 == NULL)) {
            tmp_ass_subscribed_208 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_208 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_208);

            exception_lineno = 478;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_208 = mod_consts[533];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_208, tmp_ass_subscript_208, tmp_ass_subvalue_208);
        Py_DECREF(tmp_ass_subvalue_208);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_209;
        PyObject *tmp_called_value_73;
        PyObject *tmp_expression_value_108;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_ass_subscribed_209;
        PyObject *tmp_ass_subscript_209;
        tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_expression_value_108 == NULL)) {
            tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_expression_value_108 == NULL));
        tmp_called_value_73 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, mod_consts[534]);
        if (tmp_called_value_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_33 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[201]);

        if (unlikely(tmp_args_element_value_33 == NULL)) {
            tmp_args_element_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[201]);
        }

        if (tmp_args_element_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_73);

            exception_lineno = 479;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 479;
        tmp_ass_subvalue_209 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_73, tmp_args_element_value_33);
        Py_DECREF(tmp_called_value_73);
        if (tmp_ass_subvalue_209 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_209 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_209 == NULL)) {
            tmp_ass_subscribed_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_209 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_209);

            exception_lineno = 479;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_209 = mod_consts[535];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_209, tmp_ass_subscript_209, tmp_ass_subvalue_209);
        Py_DECREF(tmp_ass_subvalue_209);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_165;
        PyObject *tmp_called_value_74;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_expression_value_110;
        tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_expression_value_109 == NULL)) {
            tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_expression_value_109 == NULL));
        tmp_called_value_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_109, mod_consts[101]);
        if (tmp_called_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto try_except_handler_50;
        }
        tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_expression_value_110 == NULL)) {
            tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_expression_value_110 == NULL));
        tmp_args_element_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_110, mod_consts[199]);
        if (tmp_args_element_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_74);

            exception_lineno = 480;

            goto try_except_handler_50;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 480;
        tmp_assign_source_165 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_74, tmp_args_element_value_34);
        Py_DECREF(tmp_called_value_74);
        Py_DECREF(tmp_args_element_value_34);
        if (tmp_assign_source_165 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto try_except_handler_50;
        }
        assert(tmp_assign_unpack_29__assign_source == NULL);
        tmp_assign_unpack_29__assign_source = tmp_assign_source_165;
    }
    {
        PyObject *tmp_ass_subvalue_210;
        PyObject *tmp_ass_subscribed_210;
        PyObject *tmp_ass_subscript_210;
        CHECK_OBJECT(tmp_assign_unpack_29__assign_source);
        tmp_ass_subvalue_210 = tmp_assign_unpack_29__assign_source;
        tmp_ass_subscribed_210 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_210 == NULL)) {
            tmp_ass_subscribed_210 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_210 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto try_except_handler_50;
        }
        tmp_ass_subscript_210 = mod_consts[536];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_210, tmp_ass_subscript_210, tmp_ass_subvalue_210);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto try_except_handler_50;
        }
    }
    goto try_end_40;
    // Exception handler code:
    try_except_handler_50:;
    exception_keeper_type_50 = exception_type;
    exception_keeper_value_50 = exception_value;
    exception_keeper_tb_50 = exception_tb;
    exception_keeper_lineno_50 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_29__assign_source);
    tmp_assign_unpack_29__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_50;
    exception_value = exception_keeper_value_50;
    exception_tb = exception_keeper_tb_50;
    exception_lineno = exception_keeper_lineno_50;

    goto frame_exception_exit_1;
    // End of try:
    try_end_40:;
    {
        PyObject *tmp_assign_source_166;
        CHECK_OBJECT(tmp_assign_unpack_29__assign_source);
        tmp_assign_source_166 = tmp_assign_unpack_29__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[537], tmp_assign_source_166);
    }
    CHECK_OBJECT(tmp_assign_unpack_29__assign_source);
    Py_DECREF(tmp_assign_unpack_29__assign_source);
    tmp_assign_unpack_29__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_211;
        PyObject *tmp_called_value_75;
        PyObject *tmp_ass_subscribed_211;
        PyObject *tmp_ass_subscript_211;
        tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[537]);

        if (unlikely(tmp_called_value_75 == NULL)) {
            tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[537]);
        }

        if (tmp_called_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 481;
        tmp_ass_subvalue_211 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_75);
        if (tmp_ass_subvalue_211 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_211 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_211 == NULL)) {
            tmp_ass_subscribed_211 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_211 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_211);

            exception_lineno = 481;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_211 = mod_consts[538];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_211, tmp_ass_subscript_211, tmp_ass_subvalue_211);
        Py_DECREF(tmp_ass_subvalue_211);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_212;
        PyObject *tmp_called_instance_90;
        PyObject *tmp_ass_subscribed_212;
        PyObject *tmp_ass_subscript_212;
        tmp_called_instance_90 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_90 == NULL)) {
            tmp_called_instance_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_called_instance_90 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 482;
        tmp_ass_subvalue_212 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_90, mod_consts[539]);
        if (tmp_ass_subvalue_212 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_212 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_212 == NULL)) {
            tmp_ass_subscribed_212 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_212 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_212);

            exception_lineno = 482;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_212 = mod_consts[540];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_212, tmp_ass_subscript_212, tmp_ass_subvalue_212);
        Py_DECREF(tmp_ass_subvalue_212);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_213;
        PyObject *tmp_called_instance_91;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_ass_subscribed_213;
        PyObject *tmp_ass_subscript_213;
        tmp_called_instance_91 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_91 == NULL)) {
            tmp_called_instance_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_called_instance_91 == NULL));


        tmp_args_element_value_35 = MAKE_FUNCTION_dill$_objects$$$function__7_lambda();

        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 483;
        tmp_ass_subvalue_213 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_91, mod_consts[539], tmp_args_element_value_35);
        Py_DECREF(tmp_args_element_value_35);
        if (tmp_ass_subvalue_213 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_213 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_213 == NULL)) {
            tmp_ass_subscribed_213 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_213 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_213);

            exception_lineno = 483;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_213 = mod_consts[541];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_213, tmp_ass_subscript_213, tmp_ass_subvalue_213);
        Py_DECREF(tmp_ass_subvalue_213);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_167;
        nuitka_bool tmp_condition_result_35;
        PyObject *tmp_mvar_value_15;
        int tmp_truth_name_17;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_mvar_value_15 == NULL)) {
            tmp_mvar_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        if (tmp_mvar_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_17 = CHECK_IF_TRUE(tmp_mvar_value_15);
        if (tmp_truth_name_17 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_35 = tmp_truth_name_17 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_35 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        tmp_assign_source_167 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_assign_source_167 == NULL)) {
            tmp_assign_source_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_assign_source_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto frame_exception_exit_1;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        tmp_assign_source_167 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_assign_source_167 == NULL)) {
            tmp_assign_source_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_assign_source_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto frame_exception_exit_1;
        }
        condexpr_end_9:;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_167);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_168;
        PyObject *tmp_expression_value_111;
        tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_expression_value_111 == NULL)) {
            tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
        }

        if (tmp_expression_value_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;

            goto try_except_handler_51;
        }
        tmp_assign_source_168 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, mod_consts[98]);
        if (tmp_assign_source_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;

            goto try_except_handler_51;
        }
        assert(tmp_assign_unpack_30__assign_source == NULL);
        tmp_assign_unpack_30__assign_source = tmp_assign_source_168;
    }
    {
        PyObject *tmp_ass_subvalue_214;
        PyObject *tmp_ass_subscribed_214;
        PyObject *tmp_ass_subscript_214;
        CHECK_OBJECT(tmp_assign_unpack_30__assign_source);
        tmp_ass_subvalue_214 = tmp_assign_unpack_30__assign_source;
        tmp_ass_subscribed_214 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_ass_subscribed_214 == NULL)) {
            tmp_ass_subscribed_214 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_ass_subscribed_214 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;

            goto try_except_handler_51;
        }
        tmp_ass_subscript_214 = mod_consts[542];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_214, tmp_ass_subscript_214, tmp_ass_subvalue_214);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;

            goto try_except_handler_51;
        }
    }
    goto try_end_41;
    // Exception handler code:
    try_except_handler_51:;
    exception_keeper_type_51 = exception_type;
    exception_keeper_value_51 = exception_value;
    exception_keeper_tb_51 = exception_tb;
    exception_keeper_lineno_51 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_30__assign_source);
    tmp_assign_unpack_30__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_51;
    exception_value = exception_keeper_value_51;
    exception_tb = exception_keeper_tb_51;
    exception_lineno = exception_keeper_lineno_51;

    goto frame_exception_exit_1;
    // End of try:
    try_end_41:;
    {
        PyObject *tmp_assign_source_169;
        CHECK_OBJECT(tmp_assign_unpack_30__assign_source);
        tmp_assign_source_169 = tmp_assign_unpack_30__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_169);
    }
    CHECK_OBJECT(tmp_assign_unpack_30__assign_source);
    Py_DECREF(tmp_assign_unpack_30__assign_source);
    tmp_assign_unpack_30__assign_source = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_170;
        PyObject *tmp_called_value_76;
        PyObject *tmp_expression_value_112;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_expression_value_113;
        tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_expression_value_112 == NULL)) {
            tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_expression_value_112 == NULL));
        tmp_called_value_76 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_112, mod_consts[543]);
        if (tmp_called_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;

            goto try_except_handler_52;
        }
        tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_expression_value_113 == NULL)) {
            tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_expression_value_113 == NULL));
        tmp_args_element_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_113, mod_consts[199]);
        if (tmp_args_element_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 486;

            goto try_except_handler_52;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 486;
        tmp_assign_source_170 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_76, tmp_args_element_value_36);
        Py_DECREF(tmp_called_value_76);
        Py_DECREF(tmp_args_element_value_36);
        if (tmp_assign_source_170 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;

            goto try_except_handler_52;
        }
        assert(tmp_assign_unpack_31__assign_source == NULL);
        tmp_assign_unpack_31__assign_source = tmp_assign_source_170;
    }
    {
        PyObject *tmp_ass_subvalue_215;
        PyObject *tmp_ass_subscribed_215;
        PyObject *tmp_ass_subscript_215;
        CHECK_OBJECT(tmp_assign_unpack_31__assign_source);
        tmp_ass_subvalue_215 = tmp_assign_unpack_31__assign_source;
        tmp_ass_subscribed_215 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_ass_subscribed_215 == NULL)) {
            tmp_ass_subscribed_215 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_ass_subscribed_215 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;

            goto try_except_handler_52;
        }
        tmp_ass_subscript_215 = mod_consts[544];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_215, tmp_ass_subscript_215, tmp_ass_subvalue_215);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;

            goto try_except_handler_52;
        }
    }
    goto try_end_42;
    // Exception handler code:
    try_except_handler_52:;
    exception_keeper_type_52 = exception_type;
    exception_keeper_value_52 = exception_value;
    exception_keeper_tb_52 = exception_tb;
    exception_keeper_lineno_52 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_31__assign_source);
    tmp_assign_unpack_31__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_52;
    exception_value = exception_keeper_value_52;
    exception_tb = exception_keeper_tb_52;
    exception_lineno = exception_keeper_lineno_52;

    goto frame_exception_exit_1;
    // End of try:
    try_end_42:;
    {
        PyObject *tmp_assign_source_171;
        CHECK_OBJECT(tmp_assign_unpack_31__assign_source);
        tmp_assign_source_171 = tmp_assign_unpack_31__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[545], tmp_assign_source_171);
    }
    CHECK_OBJECT(tmp_assign_unpack_31__assign_source);
    Py_DECREF(tmp_assign_unpack_31__assign_source);
    tmp_assign_unpack_31__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_216;
        PyObject *tmp_called_value_77;
        PyObject *tmp_ass_subscribed_216;
        PyObject *tmp_ass_subscript_216;
        tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[545]);

        if (unlikely(tmp_called_value_77 == NULL)) {
            tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[545]);
        }

        if (tmp_called_value_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 488;
        tmp_ass_subvalue_216 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_77, mod_consts[546]);

        if (tmp_ass_subvalue_216 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_216 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_216 == NULL)) {
            tmp_ass_subscribed_216 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_216 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_216);

            exception_lineno = 488;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_216 = mod_consts[547];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_216, tmp_ass_subscript_216, tmp_ass_subvalue_216);
        Py_DECREF(tmp_ass_subvalue_216);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto frame_exception_exit_1;
        }
    }
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_dill$_objects, mod_consts[198]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[198]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 489;

        goto frame_exception_exit_1;
    }

    branch_no_25:;
    {
        PyObject *tmp_ass_subvalue_217;
        PyObject *tmp_called_instance_92;
        PyObject *tmp_ass_subscribed_217;
        PyObject *tmp_ass_subscript_217;
        tmp_called_instance_92 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_instance_92 == NULL)) {
            tmp_called_instance_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        if (tmp_called_instance_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 491;
        tmp_ass_subvalue_217 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_92,
            mod_consts[548],
            PyTuple_GET_ITEM(mod_consts[549], 0)
        );

        if (tmp_ass_subvalue_217 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_217 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_217 == NULL)) {
            tmp_ass_subscribed_217 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_217 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_217);

            exception_lineno = 491;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_217 = mod_consts[550];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_217, tmp_ass_subscript_217, tmp_ass_subvalue_217);
        Py_DECREF(tmp_ass_subvalue_217);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_218;
        PyObject *tmp_called_value_78;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_ass_subscribed_218;
        PyObject *tmp_ass_subscript_218;
        tmp_called_value_78 = (PyObject *)&PyMemoryView_Type;
        tmp_args_element_value_37 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[325]);

        if (unlikely(tmp_args_element_value_37 == NULL)) {
            tmp_args_element_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[325]);
        }

        if (tmp_args_element_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 493;
        tmp_ass_subvalue_218 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_78, tmp_args_element_value_37);
        if (tmp_ass_subvalue_218 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_218 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_218 == NULL)) {
            tmp_ass_subscribed_218 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_218 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_218);

            exception_lineno = 493;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_218 = mod_consts[551];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_218, tmp_ass_subscript_218, tmp_ass_subvalue_218);
        Py_DECREF(tmp_ass_subvalue_218);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_219;
        PyObject *tmp_called_value_79;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_bytearray_arg_1;
        PyObject *tmp_ass_subscribed_219;
        PyObject *tmp_ass_subscript_219;
        tmp_called_value_79 = (PyObject *)&PyMemoryView_Type;
        tmp_bytearray_arg_1 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[325]);

        if (unlikely(tmp_bytearray_arg_1 == NULL)) {
            tmp_bytearray_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[325]);
        }

        if (tmp_bytearray_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_38 = BUILTIN_BYTEARRAY1(tmp_bytearray_arg_1);
        if (tmp_args_element_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 494;
        tmp_ass_subvalue_219 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_79, tmp_args_element_value_38);
        Py_DECREF(tmp_args_element_value_38);
        if (tmp_ass_subvalue_219 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_219 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_219 == NULL)) {
            tmp_ass_subscribed_219 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_219 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_219);

            exception_lineno = 494;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_219 = mod_consts[552];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_219, tmp_ass_subscript_219, tmp_ass_subvalue_219);
        Py_DECREF(tmp_ass_subvalue_219);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_220;
        PyObject *tmp_called_value_80;
        PyObject *tmp_expression_value_114;
        PyObject *tmp_ass_subscribed_220;
        PyObject *tmp_ass_subscript_220;
        tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_expression_value_114 == NULL)) {
            tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_expression_value_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;

            goto frame_exception_exit_1;
        }
        tmp_called_value_80 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_114, mod_consts[439]);
        if (tmp_called_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 495;
        tmp_ass_subvalue_220 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_80);
        Py_DECREF(tmp_called_value_80);
        if (tmp_ass_subvalue_220 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_220 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_ass_subscribed_220 == NULL)) {
            tmp_ass_subscribed_220 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_ass_subscribed_220 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_220);

            exception_lineno = 495;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_220 = mod_consts[553];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_220, tmp_ass_subscript_220, tmp_ass_subvalue_220);
        Py_DECREF(tmp_ass_subvalue_220);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_221;
        PyObject *tmp_called_value_81;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_ass_subscribed_221;
        PyObject *tmp_ass_subscript_221;
        tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_expression_value_115 == NULL)) {
            tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_expression_value_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;

            goto frame_exception_exit_1;
        }
        tmp_called_value_81 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_115, mod_consts[435]);
        if (tmp_called_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 496;
        tmp_ass_subvalue_221 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_81);
        Py_DECREF(tmp_called_value_81);
        if (tmp_ass_subvalue_221 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_221 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_ass_subscribed_221 == NULL)) {
            tmp_ass_subscribed_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_ass_subscribed_221 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_221);

            exception_lineno = 496;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_221 = mod_consts[554];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_221, tmp_ass_subscript_221, tmp_ass_subvalue_221);
        Py_DECREF(tmp_ass_subvalue_221);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_222;
        PyObject *tmp_called_value_82;
        PyObject *tmp_expression_value_116;
        PyObject *tmp_ass_subscribed_222;
        PyObject *tmp_ass_subscript_222;
        tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_expression_value_116 == NULL)) {
            tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_expression_value_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto frame_exception_exit_1;
        }
        tmp_called_value_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_116, mod_consts[437]);
        if (tmp_called_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 497;
        tmp_ass_subvalue_222 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_82);
        Py_DECREF(tmp_called_value_82);
        if (tmp_ass_subvalue_222 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_222 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_ass_subscribed_222 == NULL)) {
            tmp_ass_subscribed_222 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_ass_subscribed_222 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_222);

            exception_lineno = 497;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_222 = mod_consts[555];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_222, tmp_ass_subscript_222, tmp_ass_subvalue_222);
        Py_DECREF(tmp_ass_subvalue_222);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_223;
        PyObject *tmp_called_instance_93;
        PyObject *tmp_ass_subscribed_223;
        PyObject *tmp_ass_subscript_223;
        tmp_called_instance_93 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[256]);

        if (unlikely(tmp_called_instance_93 == NULL)) {
            tmp_called_instance_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[256]);
        }

        if (tmp_called_instance_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 499;
        tmp_ass_subvalue_223 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_93,
            mod_consts[556],
            PyTuple_GET_ITEM(mod_consts[557], 0)
        );

        if (tmp_ass_subvalue_223 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_223 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_223 == NULL)) {
            tmp_ass_subscribed_223 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_223 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_223);

            exception_lineno = 499;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_223 = mod_consts[558];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_223, tmp_ass_subscript_223, tmp_ass_subvalue_223);
        Py_DECREF(tmp_ass_subvalue_223);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_224;
        PyObject *tmp_called_instance_94;
        PyObject *tmp_ass_subscribed_224;
        PyObject *tmp_ass_subscript_224;
        tmp_called_instance_94 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[256]);

        if (unlikely(tmp_called_instance_94 == NULL)) {
            tmp_called_instance_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[256]);
        }

        if (tmp_called_instance_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 500;
        tmp_ass_subvalue_224 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_94,
            mod_consts[559],
            PyTuple_GET_ITEM(mod_consts[557], 0)
        );

        if (tmp_ass_subvalue_224 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_224 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_224 == NULL)) {
            tmp_ass_subscribed_224 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_224 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_224);

            exception_lineno = 500;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_224 = mod_consts[560];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_224, tmp_ass_subscript_224, tmp_ass_subvalue_224);
        Py_DECREF(tmp_ass_subvalue_224);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_225;
        PyObject *tmp_called_instance_95;
        PyObject *tmp_ass_subscribed_225;
        PyObject *tmp_ass_subscript_225;
        tmp_called_instance_95 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[256]);

        if (unlikely(tmp_called_instance_95 == NULL)) {
            tmp_called_instance_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[256]);
        }

        if (tmp_called_instance_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 501;
        tmp_ass_subvalue_225 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_95,
            mod_consts[561],
            PyTuple_GET_ITEM(mod_consts[557], 0)
        );

        if (tmp_ass_subvalue_225 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_225 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_225 == NULL)) {
            tmp_ass_subscribed_225 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_225 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_225);

            exception_lineno = 501;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_225 = mod_consts[562];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_225, tmp_ass_subscript_225, tmp_ass_subvalue_225);
        Py_DECREF(tmp_ass_subvalue_225);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_172;
        nuitka_bool tmp_condition_result_36;
        PyObject *tmp_mvar_value_16;
        int tmp_truth_name_18;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_mvar_value_16 == NULL)) {
            tmp_mvar_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        if (tmp_mvar_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_18 = CHECK_IF_TRUE(tmp_mvar_value_16);
        if (tmp_truth_name_18 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_36 = tmp_truth_name_18 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        tmp_assign_source_172 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_assign_source_172 == NULL)) {
            tmp_assign_source_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_assign_source_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;

            goto frame_exception_exit_1;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        tmp_assign_source_172 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_assign_source_172 == NULL)) {
            tmp_assign_source_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_assign_source_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;

            goto frame_exception_exit_1;
        }
        condexpr_end_10:;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_172);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_173;
        PyObject *tmp_called_value_83;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_args_element_value_39;
        tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_value_117 == NULL)) {
            tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
        }

        assert(!(tmp_expression_value_117 == NULL));
        tmp_called_value_83 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, mod_consts[563]);
        if (tmp_called_value_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;

            goto try_except_handler_53;
        }
        tmp_args_element_value_39 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[319]);

        if (unlikely(tmp_args_element_value_39 == NULL)) {
            tmp_args_element_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[319]);
        }

        if (tmp_args_element_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_83);

            exception_lineno = 503;

            goto try_except_handler_53;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 503;
        tmp_assign_source_173 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_83, tmp_args_element_value_39);
        Py_DECREF(tmp_called_value_83);
        if (tmp_assign_source_173 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;

            goto try_except_handler_53;
        }
        assert(tmp_assign_unpack_32__assign_source == NULL);
        tmp_assign_unpack_32__assign_source = tmp_assign_source_173;
    }
    {
        PyObject *tmp_ass_subvalue_226;
        PyObject *tmp_ass_subscribed_226;
        PyObject *tmp_ass_subscript_226;
        CHECK_OBJECT(tmp_assign_unpack_32__assign_source);
        tmp_ass_subvalue_226 = tmp_assign_unpack_32__assign_source;
        tmp_ass_subscribed_226 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_ass_subscribed_226 == NULL)) {
            tmp_ass_subscribed_226 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_ass_subscribed_226 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;

            goto try_except_handler_53;
        }
        tmp_ass_subscript_226 = mod_consts[564];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_226, tmp_ass_subscript_226, tmp_ass_subvalue_226);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;

            goto try_except_handler_53;
        }
    }
    goto try_end_43;
    // Exception handler code:
    try_except_handler_53:;
    exception_keeper_type_53 = exception_type;
    exception_keeper_value_53 = exception_value;
    exception_keeper_tb_53 = exception_tb;
    exception_keeper_lineno_53 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_32__assign_source);
    tmp_assign_unpack_32__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_53;
    exception_value = exception_keeper_value_53;
    exception_tb = exception_keeper_tb_53;
    exception_lineno = exception_keeper_lineno_53;

    goto frame_exception_exit_1;
    // End of try:
    try_end_43:;
    {
        PyObject *tmp_assign_source_174;
        CHECK_OBJECT(tmp_assign_unpack_32__assign_source);
        tmp_assign_source_174 = tmp_assign_unpack_32__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[565], tmp_assign_source_174);
    }
    CHECK_OBJECT(tmp_assign_unpack_32__assign_source);
    Py_DECREF(tmp_assign_unpack_32__assign_source);
    tmp_assign_unpack_32__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_227;
        PyObject *tmp_called_value_84;
        PyObject *tmp_ass_subscribed_227;
        PyObject *tmp_ass_subscript_227;
        tmp_called_value_84 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[565]);

        if (unlikely(tmp_called_value_84 == NULL)) {
            tmp_called_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[565]);
        }

        if (tmp_called_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 504;
        tmp_ass_subvalue_227 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_84, mod_consts[464]);

        if (tmp_ass_subvalue_227 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_227 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_ass_subscribed_227 == NULL)) {
            tmp_ass_subscribed_227 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_ass_subscribed_227 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_227);

            exception_lineno = 504;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_227 = mod_consts[566];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_227, tmp_ass_subscript_227, tmp_ass_subvalue_227);
        Py_DECREF(tmp_ass_subvalue_227);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;

            goto frame_exception_exit_1;
        }
    }
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_dill$_objects, mod_consts[198]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[198]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 505;

        goto frame_exception_exit_1;
    }

    {
        PyObject *tmp_ass_subvalue_228;
        PyObject *tmp_expression_value_118;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_ass_subscribed_228;
        PyObject *tmp_ass_subscript_228;
        tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_118 == NULL)) {
            tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_15 = mod_consts[551];
        tmp_ass_subvalue_228 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_118, tmp_subscript_value_15);
        if (tmp_ass_subvalue_228 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_228 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_228 == NULL)) {
            tmp_ass_subscribed_228 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_228 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_228);

            exception_lineno = 507;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_228 = mod_consts[567];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_228, tmp_ass_subscript_228, tmp_ass_subvalue_228);
        Py_DECREF(tmp_ass_subvalue_228);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_175;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_47;
        PyObject *tmp_globals_arg_value_44;
        PyObject *tmp_locals_arg_value_44;
        PyObject *tmp_fromlist_value_44;
        PyObject *tmp_level_value_44;
        tmp_name_value_47 = mod_consts[568];
        tmp_globals_arg_value_44 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_44 = Py_None;
        tmp_fromlist_value_44 = mod_consts[569];
        tmp_level_value_44 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 509;
        tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_47, tmp_globals_arg_value_44, tmp_locals_arg_value_44, tmp_fromlist_value_44, tmp_level_value_44);
        if (tmp_import_name_from_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_175 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_dill$_objects,
                mod_consts[570],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_175 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[570]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_175 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[570], tmp_assign_source_175);
    }
    {
        bool tmp_condition_result_37;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        tmp_cmp_expr_left_10 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[570]);

        if (unlikely(tmp_cmp_expr_left_10 == NULL)) {
            tmp_cmp_expr_left_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[570]);
        }

        assert(!(tmp_cmp_expr_left_10 == NULL));
        tmp_cmp_expr_right_10 = Py_None;
        tmp_condition_result_37 = (tmp_cmp_expr_left_10 != tmp_cmp_expr_right_10) ? true : false;
        if (tmp_condition_result_37 != false) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_ass_subvalue_229;
        PyObject *tmp_ass_subscribed_229;
        PyObject *tmp_ass_subscript_229;
        tmp_ass_subvalue_229 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[570]);

        if (unlikely(tmp_ass_subvalue_229 == NULL)) {
            tmp_ass_subvalue_229 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[570]);
        }

        assert(!(tmp_ass_subvalue_229 == NULL));
        tmp_ass_subscribed_229 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_ass_subscribed_229 == NULL)) {
            tmp_ass_subscribed_229 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_ass_subscribed_229 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_229 = mod_consts[571];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_229, tmp_ass_subscript_229, tmp_ass_subvalue_229);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;

            goto frame_exception_exit_1;
        }
    }
    branch_no_27:;
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_dill$_objects, mod_consts[570]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[570]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 512;

        goto frame_exception_exit_1;
    }

    {
        bool tmp_condition_result_38;
        PyObject *tmp_expression_value_119;
        tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_119 == NULL)) {
            tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;

            goto frame_exception_exit_1;
        }
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_119, mod_consts[572]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_38 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_38 != false) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    {
        PyObject *tmp_ass_subvalue_230;
        PyObject *tmp_expression_value_120;
        PyObject *tmp_ass_subscribed_230;
        PyObject *tmp_ass_subscript_230;
        tmp_expression_value_120 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_120 == NULL)) {
            tmp_expression_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_230 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_120, mod_consts[572]);
        if (tmp_ass_subvalue_230 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_230 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_230 == NULL)) {
            tmp_ass_subscribed_230 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_230 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_230);

            exception_lineno = 515;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_230 = mod_consts[573];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_230, tmp_ass_subscript_230, tmp_ass_subvalue_230);
        Py_DECREF(tmp_ass_subvalue_230);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;

            goto frame_exception_exit_1;
        }
    }
    branch_no_28:;
    {
        bool tmp_condition_result_39;
        PyObject *tmp_expression_value_121;
        tmp_expression_value_121 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_121 == NULL)) {
            tmp_expression_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;

            goto frame_exception_exit_1;
        }
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_121, mod_consts[574]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_39 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_39 != false) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    {
        PyObject *tmp_ass_subvalue_231;
        PyObject *tmp_expression_value_122;
        PyObject *tmp_ass_subscribed_231;
        PyObject *tmp_ass_subscript_231;
        tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_122 == NULL)) {
            tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_231 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_122, mod_consts[574]);
        if (tmp_ass_subvalue_231 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_231 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_231 == NULL)) {
            tmp_ass_subscribed_231 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_231 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_231);

            exception_lineno = 518;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_231 = mod_consts[575];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_231, tmp_ass_subscript_231, tmp_ass_subvalue_231);
        Py_DECREF(tmp_ass_subvalue_231);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;

            goto frame_exception_exit_1;
        }
    }
    branch_no_29:;
    {
        bool tmp_condition_result_40;
        PyObject *tmp_expression_value_123;
        tmp_expression_value_123 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_123 == NULL)) {
            tmp_expression_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;

            goto frame_exception_exit_1;
        }
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_123, mod_consts[576]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_40 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_40 != false) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
    }
    branch_yes_30:;
    {
        PyObject *tmp_ass_subvalue_232;
        PyObject *tmp_expression_value_124;
        PyObject *tmp_ass_subscribed_232;
        PyObject *tmp_ass_subscript_232;
        tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_124 == NULL)) {
            tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_232 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_124, mod_consts[576]);
        if (tmp_ass_subvalue_232 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_232 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_232 == NULL)) {
            tmp_ass_subscribed_232 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_232 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_232);

            exception_lineno = 521;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_232 = mod_consts[577];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_232, tmp_ass_subscript_232, tmp_ass_subvalue_232);
        Py_DECREF(tmp_ass_subvalue_232);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto frame_exception_exit_1;
        }
    }
    branch_no_30:;
    {
        bool tmp_condition_result_41;
        PyObject *tmp_expression_value_125;
        tmp_expression_value_125 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_125 == NULL)) {
            tmp_expression_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;

            goto frame_exception_exit_1;
        }
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_125, mod_consts[578]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_41 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_41 != false) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    {
        PyObject *tmp_ass_subvalue_233;
        PyObject *tmp_expression_value_126;
        PyObject *tmp_ass_subscribed_233;
        PyObject *tmp_ass_subscript_233;
        tmp_expression_value_126 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_126 == NULL)) {
            tmp_expression_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_233 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_126, mod_consts[579]);
        if (tmp_ass_subvalue_233 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_233 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subscribed_233 == NULL)) {
            tmp_ass_subscribed_233 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subscribed_233 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_233);

            exception_lineno = 524;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_233 = mod_consts[580];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_233, tmp_ass_subscript_233, tmp_ass_subvalue_233);
        Py_DECREF(tmp_ass_subvalue_233);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;

            goto frame_exception_exit_1;
        }
    }
    branch_no_31:;
    {
        PyObject *tmp_called_value_85;
        PyObject *tmp_expression_value_127;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_40;
        tmp_expression_value_127 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_expression_value_127 == NULL)) {
            tmp_expression_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_expression_value_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;

            goto frame_exception_exit_1;
        }
        tmp_called_value_85 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_127, mod_consts[581]);
        if (tmp_called_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_40 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_args_element_value_40 == NULL)) {
            tmp_args_element_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_args_element_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_85);

            exception_lineno = 527;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 527;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_85, tmp_args_element_value_40);
        Py_DECREF(tmp_called_value_85);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_86;
        PyObject *tmp_expression_value_128;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_41;
        tmp_expression_value_128 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_value_128 == NULL)) {
            tmp_expression_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        assert(!(tmp_expression_value_128 == NULL));
        tmp_called_value_86 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_128, mod_consts[276]);
        if (tmp_called_value_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_41 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_args_element_value_41 == NULL)) {
            tmp_args_element_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[106]);
        }

        if (tmp_args_element_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_86);

            exception_lineno = 529;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 529;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_86, tmp_args_element_value_41);
        Py_DECREF(tmp_called_value_86);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_87;
        PyObject *tmp_expression_value_129;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_42;
        tmp_expression_value_129 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_value_129 == NULL)) {
            tmp_expression_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        assert(!(tmp_expression_value_129 == NULL));
        tmp_called_value_87 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_129, mod_consts[582]);
        if (tmp_called_value_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_42 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_args_element_value_42 == NULL)) {
            tmp_args_element_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_args_element_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_87);

            exception_lineno = 530;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 530;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_87, tmp_args_element_value_42);
        Py_DECREF(tmp_called_value_87);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_055af561147bc398dec138c5e48a8193, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_055af561147bc398dec138c5e48a8193->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_055af561147bc398dec138c5e48a8193, exception_lineno);
    }



    assertFrameObject(frame_055af561147bc398dec138c5e48a8193);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("dill._objects", false);

    Py_INCREF(module_dill$_objects);
    return module_dill$_objects;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("dill$_objects", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
