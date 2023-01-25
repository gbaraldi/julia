
// This file is a part of Julia. License is MIT: https://julialang.org/license

// Bring in the curated lists of exported data and function symbols, then
// perform C preprocessor magic upon them to generate lists of declarations and
// functions to re-export our function symbols from libjulia-internal to libjulia.
#include "../src/jl_exported_data.inc"

// Define pointer data as `const void * $(name);`
#define XX(name)    JL_DLLEXPORT const void * name;
JL_EXPORTED_DATA_POINTERS(XX)
#undef XX

// Define symbol data as `$(type) $(name);`
#define XX(name, type)    JL_DLLEXPORT type name;
JL_EXPORTED_DATA_SYMBOLS(XX)
#undef XX