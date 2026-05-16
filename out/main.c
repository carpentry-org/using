#include <assert.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <float.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdarg.h>
#include <stdio.h>
#include <time.h>
#include <carp_stdbool.h>
#include <core.h>
#include <carp_memory.h>
#include <carp_bool.h>
#include <carp_byte.h>
#include <carp_int.h>
#include <carp_long.h>
#include <carp_double.h>
#include <carp_float.h>
#include <carp_stdint.h>
#include <carp_char.h>
#include <carp_string.h>
#include <carp_system.h>
#include <errno.h>
#include <carp_io.h>
#include <carp_pattern.h>
#include <carp_debug.h>
#include <carp_binary.h>
#include <sys/wait.h>
#include <unistd.h>
#include <signal.h>



//Types:
typedef struct Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty;
typedef struct Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty;
typedef struct Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty;
typedef struct Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty;
typedef struct Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty;
typedef struct Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty;
typedef struct Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty;
typedef struct Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty;
typedef struct Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty;
typedef struct Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty;
typedef struct Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty;
typedef struct ByteOrder ByteOrder;
typedef struct Maybe__Long Maybe__Long;
typedef struct Maybe__String Maybe__String;
typedef struct Maybe__Uint16 Maybe__Uint16;
typedef struct Maybe__Uint32 Maybe__Uint32;
typedef struct Maybe__Uint64 Maybe__Uint64;
typedef struct Maybe__double Maybe__double;
typedef struct Maybe__float Maybe__float;
typedef struct Maybe__int Maybe__int;
typedef struct Maybe__uint8_t Maybe__uint8_t;
typedef struct Opaque Opaque;
typedef struct Pair__Array__Uint16_int Pair__Array__Uint16_int;
typedef struct Pair__Array__Uint32_int Pair__Array__Uint32_int;
typedef struct Pair__Array__Uint64_int Pair__Array__Uint64_int;
typedef struct Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty;
typedef struct Result__Array__Uint16_int Result__Array__Uint16_int;
typedef struct Result__Array__Uint32_int Result__Array__Uint32_int;
typedef struct Result__Array__Uint64_int Result__Array__Uint64_int;
typedef struct Result__Char_String Result__Char_String;
typedef struct Result__FILE_MUL__String Result__FILE_MUL__String;
typedef struct Result__String_String Result__String_String;
typedef struct Result__Uint16_Array__uint8_t Result__Uint16_Array__uint8_t;
typedef struct Result__Uint32_Array__uint8_t Result__Uint32_Array__uint8_t;
typedef struct Result__Uint64_Array__uint8_t Result__Uint64_Array__uint8_t;
typedef struct Result__bool_String Result__bool_String;


// Depth 3
struct Maybe__Long {
    union {
    struct {
        Long member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
};
#define Maybe__Long_Just_tag 0
#define Maybe__Long_Nothing_tag 1

// Depth 3
struct Maybe__String {
    union {
    struct {
        String member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
};
#define Maybe__String_Just_tag 0
#define Maybe__String_Nothing_tag 1

// Depth 3
struct Maybe__double {
    union {
    struct {
        double member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
};
#define Maybe__double_Just_tag 0
#define Maybe__double_Nothing_tag 1

// Depth 3
struct Maybe__float {
    union {
    struct {
        float member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
};
#define Maybe__float_Just_tag 0
#define Maybe__float_Nothing_tag 1

// Depth 3
struct Maybe__int {
    union {
    struct {
        int member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
};
#define Maybe__int_Just_tag 0
#define Maybe__int_Nothing_tag 1

// Depth 3
struct Maybe__uint8_t {
    union {
    struct {
        uint8_t member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
};
#define Maybe__uint8_t_Just_tag 0
#define Maybe__uint8_t_Nothing_tag 1

// Depth 3
struct Result__Char_String {
    union {
    struct {
        Char member0;
    } Success;
    struct {
        String member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
};
#define Result__Char_String_Success_tag 0
#define Result__Char_String_Error_tag 1

// Depth 3
struct Result__String_String {
    union {
    struct {
        String member0;
    } Success;
    struct {
        String member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
};
#define Result__String_String_Success_tag 0
#define Result__String_String_Error_tag 1

// Depth 3
struct Result__bool_String {
    union {
    struct {
        bool member0;
    } Success;
    struct {
        String member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
};
#define Result__bool_String_Success_tag 0
#define Result__bool_String_Error_tag 1

// Depth 4
typedef Array Array__Array__uint8_t;

// Depth 4
typedef Array Array__Char;

// Depth 4
typedef Array Array__PatternMatchResult;

// Depth 4
typedef Array Array__Result__Uint16_Array__uint8_t;

// Depth 4
typedef Array Array__Result__Uint32_Array__uint8_t;

// Depth 4
typedef Array Array__Result__Uint64_Array__uint8_t;

// Depth 4
typedef Array Array__String;

// Depth 4
typedef Array Array__Uint16;

// Depth 4
typedef Array Array__Uint32;

// Depth 4
typedef Array Array__Uint64;

// Depth 4
typedef Array Array__int;

// Depth 4
typedef Array Array__uint8_t;

// Depth 4
typedef bool(*Fn__Char_Char_bool)(Char, Char);

// Depth 4
typedef Char(*Fn__Char_MUL__Char)(Char*);

// Depth 4
typedef bool(*Fn__Char_bool)(Char);

// Depth 4
typedef int(*Fn__Char_int)(Char);

// Depth 4
typedef Long(*Fn__Long_Long_Long)(Long, Long);

// Depth 4
typedef bool(*Fn__Long_Long_bool)(Long, Long);

// Depth 4
typedef Long(*Fn__Long_MUL__Long)(Long*);

// Depth 4
typedef String(*Fn__Long_String)(Long);

// Depth 4
typedef bool(*Fn__Long_bool)(Long);

// Depth 4
typedef double(*Fn__Long_double)(Long);

// Depth 4
typedef int(*Fn__Long_int)(Long);

// Depth 4
typedef String(*Fn__Pattern_MUL__String_MUL__String_MUL__int_String)(Pattern*, String*, String*, int);

// Depth 4
typedef bool(*Fn__Pattern_MUL__String_MUL__bool)(Pattern*, String*);

// Depth 4
typedef int(*Fn__Pattern_MUL__String_MUL__int)(Pattern*, String*);

// Depth 4
typedef int(*Fn__String_MUL__Char_int)(String*, Char);

// Depth 4
typedef bool(*Fn__String_MUL__Long_MUL__bool)(String*, Long*);

// Depth 4
typedef String(*Fn__String_MUL__Long_String)(String*, Long);

// Depth 4
typedef Pattern(*Fn__String_MUL__Pattern)(String*);

// Depth 4
typedef String(*Fn__String_MUL__String)(String*);

// Depth 4
typedef String(*Fn__String_MUL__String_MUL__String)(String*, String*);

// Depth 4
typedef bool(*Fn__String_MUL__String_MUL__bool)(String*, String*);

// Depth 4
typedef int(*Fn__String_MUL__String_MUL__int)(String*, String*);

// Depth 4
typedef bool(*Fn__String_MUL__bool)(String*);

// Depth 4
typedef String(*Fn__String_MUL__bool_String)(String*, bool);

// Depth 4
typedef bool(*Fn__String_MUL__double_MUL__bool)(String*, double*);

// Depth 4
typedef String(*Fn__String_MUL__double_String)(String*, double);

// Depth 4
typedef bool(*Fn__String_MUL__float_MUL__bool)(String*, float*);

// Depth 4
typedef String(*Fn__String_MUL__float_String)(String*, float);

// Depth 4
typedef int(*Fn__String_MUL__int)(String*);

// Depth 4
typedef Char(*Fn__String_MUL__int_Char)(String*, int);

// Depth 4
typedef void(*Fn__String_MUL__int_Char_void)(String*, int, Char);

// Depth 4
typedef String(*Fn__String_MUL__int_MUL__String)(String*, int*);

// Depth 4
typedef bool(*Fn__String_MUL__int_MUL__bool)(String*, int*);

// Depth 4
typedef String(*Fn__String_MUL__int_String)(String*, int);

// Depth 4
typedef void(*Fn__String_MUL__int_String_MUL__void)(String*, int, String*);

// Depth 4
typedef String(*Fn__String_MUL__int_int_String)(String*, int, int);

// Depth 4
typedef bool(*Fn__String_MUL__uint8_t_MUL__bool)(String*, uint8_t*);

// Depth 4
typedef String(*Fn__String_MUL__uint8_t_String)(String*, uint8_t);

// Depth 4
typedef String(*Fn__String_String)(String);

// Depth 4
typedef Char(*Fn___Char)();

// Depth 4
typedef String(*Fn___String)();

// Depth 4
typedef double(*Fn___double)();

// Depth 4
typedef int(*Fn___int)();

// Depth 4
typedef void(*Fn___void)();

// Depth 4
typedef bool(*Fn__bool_MUL__bool)(bool*);

// Depth 4
typedef String(*Fn__bool_String)(bool);

// Depth 4
typedef bool(*Fn__bool_bool)(bool);

// Depth 4
typedef bool(*Fn__bool_bool_bool)(bool, bool);

// Depth 4
typedef Long(*Fn__double_Long)(double);

// Depth 4
typedef double(*Fn__double_MUL__double)(double*);

// Depth 4
typedef String(*Fn__double_String)(double);

// Depth 4
typedef bool(*Fn__double_double_bool)(double, double);

// Depth 4
typedef double(*Fn__double_double_double)(double, double);

// Depth 4
typedef float(*Fn__double_float)(double);

// Depth 4
typedef int(*Fn__double_int)(double);

// Depth 4
typedef float(*Fn__float_MUL__float)(float*);

// Depth 4
typedef String(*Fn__float_String)(float);

// Depth 4
typedef double(*Fn__float_double)(float);

// Depth 4
typedef bool(*Fn__float_float_bool)(float, float);

// Depth 4
typedef float(*Fn__float_float_float)(float, float);

// Depth 4
typedef int(*Fn__float_int)(float);

// Depth 4
typedef Char(*Fn__int_Char)(int);

// Depth 4
typedef String(*Fn__int_Char_String)(int, Char);

// Depth 4
typedef Long(*Fn__int_Long)(int);

// Depth 4
typedef int(*Fn__int_MUL__int)(int*);

// Depth 4
typedef String(*Fn__int_String)(int);

// Depth 4
typedef bool(*Fn__int_bool)(int);

// Depth 4
typedef double(*Fn__int_double)(int);

// Depth 4
typedef float(*Fn__int_float)(int);

// Depth 4
typedef int(*Fn__int_int)(int);

// Depth 4
typedef int(*Fn__int_int_MUL__int)(int, int*);

// Depth 4
typedef bool(*Fn__int_int_bool)(int, int);

// Depth 4
typedef int(*Fn__int_int_int)(int, int);

// Depth 4
typedef uint8_t(*Fn__int_uint8_t)(int);

// Depth 4
typedef String(*Fn__uint8_t_MUL__String)(uint8_t*);

// Depth 4
typedef uint8_t(*Fn__uint8_t_MUL__uint8_t)(uint8_t*);

// Depth 4
typedef String(*Fn__uint8_t_String)(uint8_t);

// Depth 4
typedef bool(*Fn__uint8_t_bool)(uint8_t);

// Depth 4
typedef int(*Fn__uint8_t_int)(uint8_t);

// Depth 4
typedef uint8_t(*Fn__uint8_t_uint8_t)(uint8_t);

// Depth 4
typedef bool(*Fn__uint8_t_uint8_t_bool)(uint8_t, uint8_t);

// Depth 4
typedef uint8_t(*Fn__uint8_t_uint8_t_uint8_t)(uint8_t, uint8_t);

// Depth 6
typedef Result__Char_String(*Fn__Char_Result__Char_String)(Char);

// Depth 6
typedef Maybe__Long(*Fn__Long_Maybe__Long)(Long);

// Depth 6
typedef String(*Fn__Maybe__String_String)(Maybe__String);

// Depth 6
typedef String(*Fn__Maybe__String_String_String)(Maybe__String, String);

// Depth 6
typedef Maybe__String(*Fn__String_Maybe__String)(String);

// Depth 6
typedef Result__Char_String(*Fn__String_Result__Char_String)(String);

// Depth 6
typedef Result__String_String(*Fn__String_Result__String_String)(String);

// Depth 6
typedef Result__bool_String(*Fn__String_Result__bool_String)(String);

// Depth 6
typedef Maybe__Long(*Fn___Maybe__Long)();

// Depth 6
typedef Maybe__String(*Fn___Maybe__String)();

// Depth 6
typedef Maybe__double(*Fn___Maybe__double)();

// Depth 6
typedef Maybe__float(*Fn___Maybe__float)();

// Depth 6
typedef Maybe__int(*Fn___Maybe__int)();

// Depth 6
typedef Maybe__uint8_t(*Fn___Maybe__uint8_t)();

// Depth 6
typedef Result__bool_String(*Fn__bool_Result__bool_String)(bool);

// Depth 6
typedef Maybe__double(*Fn__double_Maybe__double)(double);

// Depth 6
typedef Maybe__float(*Fn__float_Maybe__float)(float);

// Depth 6
typedef Maybe__int(*Fn__int_Maybe__int)(int);

// Depth 6
typedef Maybe__uint8_t(*Fn__uint8_t_Maybe__uint8_t)(uint8_t);

// Depth 7
typedef Array__Char(*Fn__Array__Char_Array__Char)(Array__Char);

// Depth 7
typedef Array__Char(*Fn__Array__Char_Char_Array__Char)(Array__Char, Char);

// Depth 7
typedef String(*Fn__Array__Char_MUL__String)(Array__Char*);

// Depth 7
typedef int(*Fn__Array__Char_MUL__int)(Array__Char*);

// Depth 7
typedef Array__Char(*Fn__Array__Char_MUL__int_Array__Char)(Array__Char*, int);

// Depth 7
typedef Char*(*Fn__Array__Char_MUL__int_Char_MUL_)(Array__Char*, int);

// Depth 7
typedef void(*Fn__Array__Char_MUL__int_Char_void)(Array__Char*, int, Char);

// Depth 7
typedef Array__Char(*Fn__Array__Char_MUL__int_int_Array__Char)(Array__Char*, int, int);

// Depth 7
typedef String(*Fn__Array__String_MUL__String)(Array__String*);

// Depth 7
typedef int(*Fn__Array__String_MUL__int)(Array__String*);

// Depth 7
typedef String*(*Fn__Array__String_MUL__int_String_MUL_)(Array__String*, int);

// Depth 7
typedef void(*Fn__Array__String_MUL__int_String_void)(Array__String*, int, String);

// Depth 7
typedef Array__String(*Fn__Array__String_String_Array__String)(Array__String, String);

// Depth 7
typedef int(*Fn__Array__int_MUL__int)(Array__int*);

// Depth 7
typedef int*(*Fn__Array__int_MUL__int_int_MUL_)(Array__int*, int);

// Depth 7
typedef void(*Fn__Array__int_MUL__int_int_void)(Array__int*, int, int);

// Depth 7
typedef Array__uint8_t(*Fn__Array__uint8_t_MUL__Array__uint8_t)(Array__uint8_t*);

// Depth 7
typedef String(*Fn__Array__uint8_t_MUL__String)(Array__uint8_t*);

// Depth 7
typedef int(*Fn__Array__uint8_t_MUL__int)(Array__uint8_t*);

// Depth 7
typedef Maybe__uint8_t(*Fn__Array__uint8_t_MUL__int_Maybe__uint8_t)(Array__uint8_t*, int);

// Depth 7
typedef Array__uint8_t(*Fn__Array__uint8_t_MUL__int_int_Array__uint8_t)(Array__uint8_t*, int, int);

// Depth 7
typedef uint8_t*(*Fn__Array__uint8_t_MUL__int_uint8_t_MUL_)(Array__uint8_t*, int);

// Depth 7
typedef void(*Fn__Array__uint8_t_MUL__int_uint8_t_void)(Array__uint8_t*, int, uint8_t);

// Depth 7
typedef Array__uint8_t(*Fn__Array__uint8_t_uint8_t_Array__uint8_t)(Array__uint8_t, uint8_t);

// Depth 7
typedef Array__String(*Fn__Fn__String_MUL__bool_MUL__Array__String_Array__String)(Lambda*, Array__String);

// Depth 7
typedef int(*Fn__Fn__int_int_MUL__int_MUL__int_Array__int_MUL__int)(Lambda*, int, Array__int*);

// Depth 7
typedef Array__String(*Fn__Fn__uint8_t_MUL__String_MUL__Array__uint8_t_MUL__Array__String)(Lambda*, Array__uint8_t*);

// Depth 7
typedef Array__uint8_t(*Fn__Fn__uint8_t_uint8_t_MUL__Array__uint8_t_Array__uint8_t)(Lambda*, Array__uint8_t);

// Depth 7
typedef Array__String(*Fn__Pattern_MUL__String_MUL__Array__String)(Pattern*, String*);

// Depth 7
typedef Array__int(*Fn__Pattern_MUL__String_MUL__Array__int)(Pattern*, String*);

// Depth 7
typedef Array__Char(*Fn__String_MUL__Array__Char)(String*);

// Depth 7
typedef Array__String(*Fn__String_MUL__Array__Char_MUL__Array__String)(String*, Array__Char*);

// Depth 7
typedef int(*Fn__String_MUL__Array__Char_MUL__int_int)(String*, Array__Char*, int);

// Depth 7
typedef String(*Fn__String_MUL__Array__String_MUL__String)(String*, Array__String*);

// Depth 7
typedef Array__uint8_t(*Fn__String_MUL__Array__uint8_t)(String*);

// Depth 7
typedef Array__uint8_t(*Fn___Array__uint8_t)();

// Depth 7
typedef Array__Char(*Fn__int_Array__Char)(int);

// Depth 7
typedef Array__String(*Fn__int_Array__String)(int);

// Depth 7
typedef Array__int(*Fn__int_Array__int)(int);

// Depth 7
typedef Array__uint8_t(*Fn__int_Array__uint8_t)(int);

// Depth 7
typedef Array__Char(*Fn__int_Char_MUL__Array__Char)(int, Char*);

// Depth 7
typedef Array__Char(*Fn__int_Fn___Char_MUL__Array__Char)(int, Lambda*);

// Depth 10
typedef Array__Array__uint8_t(*Fn__Array__Array__uint8_t_Array__uint8_t_Array__Array__uint8_t)(Array__Array__uint8_t, Array__uint8_t);

// Depth 10
typedef int(*Fn__Array__Array__uint8_t_MUL__int)(Array__Array__uint8_t*);

// Depth 10
typedef Array__uint8_t*(*Fn__Array__Array__uint8_t_MUL__int_Array__uint8_t_MUL_)(Array__Array__uint8_t*, int);

// Depth 10
typedef void(*Fn__Array__Array__uint8_t_MUL__int_Array__uint8_t_void)(Array__Array__uint8_t*, int, Array__uint8_t);

// Depth 10
typedef Array__Array__uint8_t(*Fn__Array__uint8_t_MUL__int_Array__Array__uint8_t)(Array__uint8_t*, int);

// Depth 10
typedef Array__int(*Fn__Fn__Array__uint8_t_MUL__int_MUL__Array__Array__uint8_t_MUL__Array__int)(Lambda*, Array__Array__uint8_t*);

// Depth 10
typedef Array__Array__uint8_t(*Fn__int_Array__Array__uint8_t)(int);

// Depth 101
struct ByteOrder {
    union {
    // LittleEndian
    // BigEndian
    char __dummy;
    } u;
    char _tag;
};
#define ByteOrder_LittleEndian_tag 0
#define ByteOrder_BigEndian_tag 1

// Depth 101
struct Opaque {
    union {
    char __dummy;
    } u;
    char _tag;
};

// Depth 103
struct Maybe__Uint16 {
    union {
    struct {
        Uint16 member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
};
#define Maybe__Uint16_Just_tag 0
#define Maybe__Uint16_Nothing_tag 1

// Depth 103
struct Maybe__Uint32 {
    union {
    struct {
        Uint32 member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
};
#define Maybe__Uint32_Just_tag 0
#define Maybe__Uint32_Nothing_tag 1

// Depth 103
struct Maybe__Uint64 {
    union {
    struct {
        Uint64 member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
};
#define Maybe__Uint64_Just_tag 0
#define Maybe__Uint64_Nothing_tag 1

// Depth 103
struct Result__FILE_MUL__String {
    union {
    struct {
        FILE* member0;
    } Success;
    struct {
        String member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
};
#define Result__FILE_MUL__String_Success_tag 0
#define Result__FILE_MUL__String_Error_tag 1

// Depth 103
struct Result__Uint16_Array__uint8_t {
    union {
    struct {
        Uint16 member0;
    } Success;
    struct {
        Array__uint8_t member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
};
#define Result__Uint16_Array__uint8_t_Success_tag 0
#define Result__Uint16_Array__uint8_t_Error_tag 1

// Depth 103
struct Result__Uint32_Array__uint8_t {
    union {
    struct {
        Uint32 member0;
    } Success;
    struct {
        Array__uint8_t member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
};
#define Result__Uint32_Array__uint8_t_Success_tag 0
#define Result__Uint32_Array__uint8_t_Error_tag 1

// Depth 103
struct Result__Uint64_Array__uint8_t {
    union {
    struct {
        Uint64 member0;
    } Success;
    struct {
        Array__uint8_t member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
};
#define Result__Uint64_Array__uint8_t_Success_tag 0
#define Result__Uint64_Array__uint8_t_Error_tag 1

// Depth 103
struct Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty {
    ByteOrder order;
};

// Depth 103
struct Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty {
    Uint32 i;
};

// Depth 103
struct Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty {
    ByteOrder order;
};

// Depth 103
struct Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty {
    Uint64 i;
};

// Depth 103
struct Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty {
    ByteOrder order;
};

// Depth 103
struct Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty {
    ByteOrder order;
};

// Depth 103
struct Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty {
    ByteOrder order;
};

// Depth 103
struct Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty {
    ByteOrder order;
};

// Depth 104
typedef Uint16(*Fn__Array__uint8_t_MUL__Uint16)(Array__uint8_t*);

// Depth 104
typedef Uint32(*Fn__Array__uint8_t_MUL__Uint32)(Array__uint8_t*);

// Depth 104
typedef Uint64(*Fn__Array__uint8_t_MUL__Uint64)(Array__uint8_t*);

// Depth 104
typedef Uint16(*Fn__ByteOrder_Array__uint8_t_MUL__Uint16)(ByteOrder, Array__uint8_t*);

// Depth 104
typedef Uint32(*Fn__ByteOrder_Array__uint8_t_MUL__Uint32)(ByteOrder, Array__uint8_t*);

// Depth 104
typedef Uint64(*Fn__ByteOrder_Array__uint8_t_MUL__Uint64)(ByteOrder, Array__uint8_t*);

// Depth 104
typedef String(*Fn__ByteOrder_MUL__String)(ByteOrder*);

// Depth 104
typedef Array__uint8_t(*Fn__ByteOrder_Uint16_Array__uint8_t)(ByteOrder, Uint16);

// Depth 104
typedef Array__uint8_t(*Fn__ByteOrder_Uint32_Array__uint8_t)(ByteOrder, Uint32);

// Depth 104
typedef Array__uint8_t(*Fn__ByteOrder_Uint64_Array__uint8_t)(ByteOrder, Uint64);

// Depth 104
typedef bool(*Fn__FILE_MUL__FILE_MUL__bool)(FILE*, FILE*);

// Depth 104
typedef bool(*Fn__FILE_MUL__bool)(FILE*);

// Depth 104
typedef int(*Fn__FILE_MUL__int)(FILE*);

// Depth 104
typedef void(*Fn__FILE_MUL__int_int_void)(FILE*, int, int);

// Depth 104
typedef void(*Fn__FILE_MUL__void)(FILE*);

// Depth 104
typedef bool(*Fn__Int16_Int16_bool)(Int16, Int16);

// Depth 104
typedef Long(*Fn__Int16_Long)(Int16);

// Depth 104
typedef Int16(*Fn__Int16_MUL__Int16)(Int16*);

// Depth 104
typedef String(*Fn__Int16_String)(Int16);

// Depth 104
typedef bool(*Fn__Int32_Int32_bool)(Int32, Int32);

// Depth 104
typedef Long(*Fn__Int32_Long)(Int32);

// Depth 104
typedef Int32(*Fn__Int32_MUL__Int32)(Int32*);

// Depth 104
typedef String(*Fn__Int32_String)(Int32);

// Depth 104
typedef bool(*Fn__Int64_Int64_bool)(Int64, Int64);

// Depth 104
typedef Long(*Fn__Int64_Long)(Int64);

// Depth 104
typedef Int64(*Fn__Int64_MUL__Int64)(Int64*);

// Depth 104
typedef String(*Fn__Int64_String)(Int64);

// Depth 104
typedef bool(*Fn__Int8_Int8_bool)(Int8, Int8);

// Depth 104
typedef Long(*Fn__Int8_Long)(Int8);

// Depth 104
typedef Int8(*Fn__Int8_MUL__Int8)(Int8*);

// Depth 104
typedef String(*Fn__Int8_String)(Int8);

// Depth 104
typedef Int16(*Fn__Long_Int16)(Long);

// Depth 104
typedef Int32(*Fn__Long_Int32)(Long);

// Depth 104
typedef Int64(*Fn__Long_Int64)(Long);

// Depth 104
typedef Int8(*Fn__Long_Int8)(Long);

// Depth 104
typedef Uint16(*Fn__Long_Uint16)(Long);

// Depth 104
typedef Uint32(*Fn__Long_Uint32)(Long);

// Depth 104
typedef Uint64(*Fn__Long_Uint64)(Long);

// Depth 104
typedef Uint8(*Fn__Long_Uint8)(Long);

// Depth 104
typedef String(*Fn__Opaque_MUL__String)(Opaque*);

// Depth 104
typedef FILE*(*Fn__String_MUL__String_MUL__FILE_MUL_)(String*, String*);

// Depth 104
typedef int(*Fn__String_MUL__int_int_FILE_MUL__int)(String*, int, int, FILE*);

// Depth 104
typedef Long(*Fn__Uint16_Long)(Uint16);

// Depth 104
typedef Array__uint8_t(*Fn__Uint16_MUL__Array__uint8_t)(Uint16*);

// Depth 104
typedef Uint16(*Fn__Uint16_MUL__Uint16)(Uint16*);

// Depth 104
typedef uint8_t(*Fn__Uint16_MUL__uint8_t)(Uint16*);

// Depth 104
typedef String(*Fn__Uint16_String)(Uint16);

// Depth 104
typedef Uint16(*Fn__Uint16_Uint16_Uint16)(Uint16, Uint16);

// Depth 104
typedef bool(*Fn__Uint16_Uint16_bool)(Uint16, Uint16);

// Depth 104
typedef Long(*Fn__Uint32_Long)(Uint32);

// Depth 104
typedef Array__uint8_t(*Fn__Uint32_MUL__Array__uint8_t)(Uint32*);

// Depth 104
typedef Uint32(*Fn__Uint32_MUL__Uint32)(Uint32*);

// Depth 104
typedef uint8_t(*Fn__Uint32_MUL__uint8_t)(Uint32*);

// Depth 104
typedef String(*Fn__Uint32_String)(Uint32);

// Depth 104
typedef Uint32(*Fn__Uint32_Uint32_Uint32)(Uint32, Uint32);

// Depth 104
typedef bool(*Fn__Uint32_Uint32_bool)(Uint32, Uint32);

// Depth 104
typedef Long(*Fn__Uint64_Long)(Uint64);

// Depth 104
typedef Array__uint8_t(*Fn__Uint64_MUL__Array__uint8_t)(Uint64*);

// Depth 104
typedef Uint64(*Fn__Uint64_MUL__Uint64)(Uint64*);

// Depth 104
typedef uint8_t(*Fn__Uint64_MUL__uint8_t)(Uint64*);

// Depth 104
typedef String(*Fn__Uint64_String)(Uint64);

// Depth 104
typedef Uint64(*Fn__Uint64_Uint64_Uint64)(Uint64, Uint64);

// Depth 104
typedef bool(*Fn__Uint64_Uint64_bool)(Uint64, Uint64);

// Depth 104
typedef double(*Fn__Uint64_double)(Uint64);

// Depth 104
typedef Long(*Fn__Uint8_Long)(Uint8);

// Depth 104
typedef Uint8(*Fn__Uint8_MUL__Uint8)(Uint8*);

// Depth 104
typedef String(*Fn__Uint8_String)(Uint8);

// Depth 104
typedef bool(*Fn__Uint8_Uint8_bool)(Uint8, Uint8);

// Depth 104
typedef ByteOrder(*Fn___ByteOrder)();

// Depth 104
typedef Uint16(*Fn___Uint16)();

// Depth 104
typedef Uint32(*Fn___Uint32)();

// Depth 104
typedef Uint64(*Fn___Uint64)();

// Depth 104
typedef Uint16(*Fn__uint8_t_uint8_t_Uint16)(uint8_t, uint8_t);

// Depth 104
typedef Uint32(*Fn__uint8_t_uint8_t_uint8_t_uint8_t_Uint32)(uint8_t, uint8_t, uint8_t, uint8_t);

// Depth 104
typedef Uint64(*Fn__uint8_t_uint8_t_uint8_t_uint8_t_uint8_t_uint8_t_uint8_t_uint8_t_Uint64)(uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t);

// Depth 106
struct Result__Array__Uint16_int {
    union {
    struct {
        Array__Uint16 member0;
    } Success;
    struct {
        int member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
};
#define Result__Array__Uint16_int_Success_tag 0
#define Result__Array__Uint16_int_Error_tag 1

// Depth 106
struct Result__Array__Uint32_int {
    union {
    struct {
        Array__Uint32 member0;
    } Success;
    struct {
        int member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
};
#define Result__Array__Uint32_int_Success_tag 0
#define Result__Array__Uint32_int_Error_tag 1

// Depth 106
struct Result__Array__Uint64_int {
    union {
    struct {
        Array__Uint64 member0;
    } Success;
    struct {
        int member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
};
#define Result__Array__Uint64_int_Success_tag 0
#define Result__Array__Uint64_int_Error_tag 1

// Depth 106
typedef Result__Uint16_Array__uint8_t(*Fn__Array__uint8_t_MUL__Result__Uint16_Array__uint8_t)(Array__uint8_t*);

// Depth 106
typedef Result__Uint32_Array__uint8_t(*Fn__Array__uint8_t_MUL__Result__Uint32_Array__uint8_t)(Array__uint8_t*);

// Depth 106
typedef Result__Uint64_Array__uint8_t(*Fn__Array__uint8_t_MUL__Result__Uint64_Array__uint8_t)(Array__uint8_t*);

// Depth 106
typedef Result__Uint16_Array__uint8_t(*Fn__Array__uint8_t_Result__Uint16_Array__uint8_t)(Array__uint8_t);

// Depth 106
typedef Result__Uint32_Array__uint8_t(*Fn__Array__uint8_t_Result__Uint32_Array__uint8_t)(Array__uint8_t);

// Depth 106
typedef Result__Uint64_Array__uint8_t(*Fn__Array__uint8_t_Result__Uint64_Array__uint8_t)(Array__uint8_t);

// Depth 106
typedef Maybe__Uint16(*Fn__ByteOrder_Array__uint8_t_MUL__Maybe__Uint16)(ByteOrder, Array__uint8_t*);

// Depth 106
typedef Maybe__Uint32(*Fn__ByteOrder_Array__uint8_t_MUL__Maybe__Uint32)(ByteOrder, Array__uint8_t*);

// Depth 106
typedef Maybe__Uint64(*Fn__ByteOrder_Array__uint8_t_MUL__Maybe__Uint64)(ByteOrder, Array__uint8_t*);

// Depth 106
typedef Result__FILE_MUL__String(*Fn__FILE_MUL__Result__FILE_MUL__String)(FILE*);

// Depth 106
typedef FILE*(*Fn__Result__FILE_MUL__String_FILE_MUL_)(Result__FILE_MUL__String);

// Depth 106
typedef bool(*Fn__Result__FILE_MUL__String_MUL__bool)(Result__FILE_MUL__String*);

// Depth 106
typedef String(*Fn__Result__FILE_MUL__String_String)(Result__FILE_MUL__String);

// Depth 106
typedef Array__uint8_t(*Fn__Result__Uint16_Array__uint8_t_Array__uint8_t_Array__uint8_t)(Result__Uint16_Array__uint8_t, Array__uint8_t);

// Depth 106
typedef Array__uint8_t(*Fn__Result__Uint16_Array__uint8_t_MUL__Array__uint8_t)(Result__Uint16_Array__uint8_t*);

// Depth 106
typedef Result__Uint16_Array__uint8_t(*Fn__Result__Uint16_Array__uint8_t_MUL__Result__Uint16_Array__uint8_t)(Result__Uint16_Array__uint8_t*);

// Depth 106
typedef Uint16(*Fn__Result__Uint16_Array__uint8_t_MUL__Uint16)(Result__Uint16_Array__uint8_t*);

// Depth 106
typedef bool(*Fn__Result__Uint16_Array__uint8_t_MUL__bool)(Result__Uint16_Array__uint8_t*);

// Depth 106
typedef Uint16(*Fn__Result__Uint16_Array__uint8_t_Uint16)(Result__Uint16_Array__uint8_t);

// Depth 106
typedef Array__uint8_t(*Fn__Result__Uint32_Array__uint8_t_Array__uint8_t_Array__uint8_t)(Result__Uint32_Array__uint8_t, Array__uint8_t);

// Depth 106
typedef Array__uint8_t(*Fn__Result__Uint32_Array__uint8_t_MUL__Array__uint8_t)(Result__Uint32_Array__uint8_t*);

// Depth 106
typedef Result__Uint32_Array__uint8_t(*Fn__Result__Uint32_Array__uint8_t_MUL__Result__Uint32_Array__uint8_t)(Result__Uint32_Array__uint8_t*);

// Depth 106
typedef Uint32(*Fn__Result__Uint32_Array__uint8_t_MUL__Uint32)(Result__Uint32_Array__uint8_t*);

// Depth 106
typedef bool(*Fn__Result__Uint32_Array__uint8_t_MUL__bool)(Result__Uint32_Array__uint8_t*);

// Depth 106
typedef Uint32(*Fn__Result__Uint32_Array__uint8_t_Uint32)(Result__Uint32_Array__uint8_t);

// Depth 106
typedef Array__uint8_t(*Fn__Result__Uint64_Array__uint8_t_Array__uint8_t_Array__uint8_t)(Result__Uint64_Array__uint8_t, Array__uint8_t);

// Depth 106
typedef Array__uint8_t(*Fn__Result__Uint64_Array__uint8_t_MUL__Array__uint8_t)(Result__Uint64_Array__uint8_t*);

// Depth 106
typedef Result__Uint64_Array__uint8_t(*Fn__Result__Uint64_Array__uint8_t_MUL__Result__Uint64_Array__uint8_t)(Result__Uint64_Array__uint8_t*);

// Depth 106
typedef Uint64(*Fn__Result__Uint64_Array__uint8_t_MUL__Uint64)(Result__Uint64_Array__uint8_t*);

// Depth 106
typedef bool(*Fn__Result__Uint64_Array__uint8_t_MUL__bool)(Result__Uint64_Array__uint8_t*);

// Depth 106
typedef Uint64(*Fn__Result__Uint64_Array__uint8_t_Uint64)(Result__Uint64_Array__uint8_t);

// Depth 106
typedef Result__FILE_MUL__String(*Fn__String_MUL__String_MUL__Result__FILE_MUL__String)(String*, String*);

// Depth 106
typedef Result__FILE_MUL__String(*Fn__String_Result__FILE_MUL__String)(String);

// Depth 106
typedef Maybe__Uint16(*Fn__Uint16_Maybe__Uint16)(Uint16);

// Depth 106
typedef Result__Uint16_Array__uint8_t(*Fn__Uint16_Result__Uint16_Array__uint8_t)(Uint16);

// Depth 106
typedef Maybe__Uint32(*Fn__Uint32_Maybe__Uint32)(Uint32);

// Depth 106
typedef Result__Uint32_Array__uint8_t(*Fn__Uint32_Result__Uint32_Array__uint8_t)(Uint32);

// Depth 106
typedef Maybe__Uint64(*Fn__Uint64_Maybe__Uint64)(Uint64);

// Depth 106
typedef Result__Uint64_Array__uint8_t(*Fn__Uint64_Result__Uint64_Array__uint8_t)(Uint64);

// Depth 106
typedef Maybe__Uint16(*Fn___Maybe__Uint16)();

// Depth 106
typedef Maybe__Uint32(*Fn___Maybe__Uint32)();

// Depth 106
typedef Maybe__Uint64(*Fn___Maybe__Uint64)();

// Depth 106
struct Pair__Array__Uint16_int {
    Array__Uint16 a;
    int b;
};

// Depth 106
struct Pair__Array__Uint32_int {
    Array__Uint32 a;
    int b;
};

// Depth 106
struct Pair__Array__Uint64_int {
    Array__Uint64 a;
    int b;
};

// Depth 107
typedef Array__Uint16(*Fn__Array__Uint16_MUL__Array__Uint16)(Array__Uint16*);

// Depth 107
typedef int(*Fn__Array__Uint16_MUL__int)(Array__Uint16*);

// Depth 107
typedef Uint16*(*Fn__Array__Uint16_MUL__int_Uint16_MUL_)(Array__Uint16*, int);

// Depth 107
typedef void(*Fn__Array__Uint16_MUL__int_Uint16_void)(Array__Uint16*, int, Uint16);

// Depth 107
typedef Array__Uint32(*Fn__Array__Uint32_MUL__Array__Uint32)(Array__Uint32*);

// Depth 107
typedef int(*Fn__Array__Uint32_MUL__int)(Array__Uint32*);

// Depth 107
typedef Uint32*(*Fn__Array__Uint32_MUL__int_Uint32_MUL_)(Array__Uint32*, int);

// Depth 107
typedef void(*Fn__Array__Uint32_MUL__int_Uint32_void)(Array__Uint32*, int, Uint32);

// Depth 107
typedef Array__Uint64(*Fn__Array__Uint64_MUL__Array__Uint64)(Array__Uint64*);

// Depth 107
typedef int(*Fn__Array__Uint64_MUL__int)(Array__Uint64*);

// Depth 107
typedef Uint64*(*Fn__Array__Uint64_MUL__int_Uint64_MUL_)(Array__Uint64*, int);

// Depth 107
typedef void(*Fn__Array__Uint64_MUL__int_Uint64_void)(Array__Uint64*, int, Uint64);

// Depth 107
typedef Array__Uint16(*Fn__Fn__Array__uint8_t_MUL__Uint16_MUL__Array__Array__uint8_t_MUL__Array__Uint16)(Lambda*, Array__Array__uint8_t*);

// Depth 107
typedef Array__Uint32(*Fn__Fn__Array__uint8_t_MUL__Uint32_MUL__Array__Array__uint8_t_MUL__Array__Uint32)(Lambda*, Array__Array__uint8_t*);

// Depth 107
typedef Array__Uint64(*Fn__Fn__Array__uint8_t_MUL__Uint64_MUL__Array__Array__uint8_t_MUL__Array__Uint64)(Lambda*, Array__Array__uint8_t*);

// Depth 107
typedef Lambda(*Fn__Fn__ByteOrder_Array__uint8_t_MUL__Maybe__Uint16_MUL__ByteOrder_Fn__Array__uint8_t_MUL__Result__Uint16_Array__uint8_t)(Lambda*, ByteOrder);

// Depth 107
typedef Lambda(*Fn__Fn__ByteOrder_Array__uint8_t_MUL__Maybe__Uint32_MUL__ByteOrder_Fn__Array__uint8_t_MUL__Result__Uint32_Array__uint8_t)(Lambda*, ByteOrder);

// Depth 107
typedef Lambda(*Fn__Fn__ByteOrder_Array__uint8_t_MUL__Maybe__Uint64_MUL__ByteOrder_Fn__Array__uint8_t_MUL__Result__Uint64_Array__uint8_t)(Lambda*, ByteOrder);

// Depth 107
typedef Array__Array__uint8_t(*Fn__Fn__Uint16_MUL__Array__uint8_t_MUL__Array__Uint16_MUL__Array__Array__uint8_t)(Lambda*, Array__Uint16*);

// Depth 107
typedef Array__uint8_t(*Fn__Fn__Uint16_MUL__uint8_t_MUL__Array__Uint16_MUL__Array__uint8_t)(Lambda*, Array__Uint16*);

// Depth 107
typedef Array__Array__uint8_t(*Fn__Fn__Uint32_MUL__Array__uint8_t_MUL__Array__Uint32_MUL__Array__Array__uint8_t)(Lambda*, Array__Uint32*);

// Depth 107
typedef Array__uint8_t(*Fn__Fn__Uint32_MUL__uint8_t_MUL__Array__Uint32_MUL__Array__uint8_t)(Lambda*, Array__Uint32*);

// Depth 107
typedef Array__Array__uint8_t(*Fn__Fn__Uint64_MUL__Array__uint8_t_MUL__Array__Uint64_MUL__Array__Array__uint8_t)(Lambda*, Array__Uint64*);

// Depth 107
typedef Array__uint8_t(*Fn__Fn__Uint64_MUL__uint8_t_MUL__Array__Uint64_MUL__Array__uint8_t)(Lambda*, Array__Uint64*);

// Depth 107
typedef Array__Uint16(*Fn__int_Array__Uint16)(int);

// Depth 107
typedef Array__Uint32(*Fn__int_Array__Uint32)(int);

// Depth 107
typedef Array__Uint64(*Fn__int_Array__Uint64)(int);

// Depth 109
typedef Array__Result__Uint16_Array__uint8_t(*Fn__Array__Result__Uint16_Array__uint8_t_MUL__Array__Result__Uint16_Array__uint8_t)(Array__Result__Uint16_Array__uint8_t*);

// Depth 109
typedef Array__Uint16(*Fn__Array__Result__Uint16_Array__uint8_t_MUL__Array__Uint16)(Array__Result__Uint16_Array__uint8_t*);

// Depth 109
typedef int(*Fn__Array__Result__Uint16_Array__uint8_t_MUL__int)(Array__Result__Uint16_Array__uint8_t*);

// Depth 109
typedef Result__Uint16_Array__uint8_t*(*Fn__Array__Result__Uint16_Array__uint8_t_MUL__int_Result__Uint16_Array__uint8_t_MUL_)(Array__Result__Uint16_Array__uint8_t*, int);

// Depth 109
typedef void(*Fn__Array__Result__Uint16_Array__uint8_t_MUL__int_Result__Uint16_Array__uint8_t_void)(Array__Result__Uint16_Array__uint8_t*, int, Result__Uint16_Array__uint8_t);

// Depth 109
typedef Array__Result__Uint32_Array__uint8_t(*Fn__Array__Result__Uint32_Array__uint8_t_MUL__Array__Result__Uint32_Array__uint8_t)(Array__Result__Uint32_Array__uint8_t*);

// Depth 109
typedef Array__Uint32(*Fn__Array__Result__Uint32_Array__uint8_t_MUL__Array__Uint32)(Array__Result__Uint32_Array__uint8_t*);

// Depth 109
typedef int(*Fn__Array__Result__Uint32_Array__uint8_t_MUL__int)(Array__Result__Uint32_Array__uint8_t*);

// Depth 109
typedef Result__Uint32_Array__uint8_t*(*Fn__Array__Result__Uint32_Array__uint8_t_MUL__int_Result__Uint32_Array__uint8_t_MUL_)(Array__Result__Uint32_Array__uint8_t*, int);

// Depth 109
typedef void(*Fn__Array__Result__Uint32_Array__uint8_t_MUL__int_Result__Uint32_Array__uint8_t_void)(Array__Result__Uint32_Array__uint8_t*, int, Result__Uint32_Array__uint8_t);

// Depth 109
typedef Array__Result__Uint64_Array__uint8_t(*Fn__Array__Result__Uint64_Array__uint8_t_MUL__Array__Result__Uint64_Array__uint8_t)(Array__Result__Uint64_Array__uint8_t*);

// Depth 109
typedef Array__Uint64(*Fn__Array__Result__Uint64_Array__uint8_t_MUL__Array__Uint64)(Array__Result__Uint64_Array__uint8_t*);

// Depth 109
typedef int(*Fn__Array__Result__Uint64_Array__uint8_t_MUL__int)(Array__Result__Uint64_Array__uint8_t*);

// Depth 109
typedef Result__Uint64_Array__uint8_t*(*Fn__Array__Result__Uint64_Array__uint8_t_MUL__int_Result__Uint64_Array__uint8_t_MUL_)(Array__Result__Uint64_Array__uint8_t*, int);

// Depth 109
typedef void(*Fn__Array__Result__Uint64_Array__uint8_t_MUL__int_Result__Uint64_Array__uint8_t_void)(Array__Result__Uint64_Array__uint8_t*, int, Result__Uint64_Array__uint8_t);

// Depth 109
typedef Result__Array__Uint16_int(*Fn__Array__Uint16_Result__Array__Uint16_int)(Array__Uint16);

// Depth 109
typedef Pair__Array__Uint16_int(*Fn__Array__Uint16_int_Pair__Array__Uint16_int)(Array__Uint16, int);

// Depth 109
typedef Result__Array__Uint32_int(*Fn__Array__Uint32_Result__Array__Uint32_int)(Array__Uint32);

// Depth 109
typedef Pair__Array__Uint32_int(*Fn__Array__Uint32_int_Pair__Array__Uint32_int)(Array__Uint32, int);

// Depth 109
typedef Result__Array__Uint64_int(*Fn__Array__Uint64_Result__Array__Uint64_int)(Array__Uint64);

// Depth 109
typedef Pair__Array__Uint64_int(*Fn__Array__Uint64_int_Pair__Array__Uint64_int)(Array__Uint64, int);

// Depth 109
typedef Pair__Array__Uint16_int(*Fn__ByteOrder_Array__uint8_t_MUL__Pair__Array__Uint16_int)(ByteOrder, Array__uint8_t*);

// Depth 109
typedef Pair__Array__Uint32_int(*Fn__ByteOrder_Array__uint8_t_MUL__Pair__Array__Uint32_int)(ByteOrder, Array__uint8_t*);

// Depth 109
typedef Pair__Array__Uint64_int(*Fn__ByteOrder_Array__uint8_t_MUL__Pair__Array__Uint64_int)(ByteOrder, Array__uint8_t*);

// Depth 109
typedef Array__Result__Uint16_Array__uint8_t(*Fn__Fn__Array__uint8_t_MUL__Result__Uint16_Array__uint8_t_MUL__Array__Array__uint8_t_MUL__Array__Result__Uint16_Array__uint8_t)(Lambda*, Array__Array__uint8_t*);

// Depth 109
typedef Array__Result__Uint32_Array__uint8_t(*Fn__Fn__Array__uint8_t_MUL__Result__Uint32_Array__uint8_t_MUL__Array__Array__uint8_t_MUL__Array__Result__Uint32_Array__uint8_t)(Lambda*, Array__Array__uint8_t*);

// Depth 109
typedef Array__Result__Uint64_Array__uint8_t(*Fn__Fn__Array__uint8_t_MUL__Result__Uint64_Array__uint8_t_MUL__Array__Array__uint8_t_MUL__Array__Result__Uint64_Array__uint8_t)(Lambda*, Array__Array__uint8_t*);

// Depth 109
typedef Array__Array__uint8_t(*Fn__Fn__Result__Uint16_Array__uint8_t_MUL__Array__uint8_t_MUL__Array__Result__Uint16_Array__uint8_t_MUL__Array__Array__uint8_t)(Lambda*, Array__Result__Uint16_Array__uint8_t*);

// Depth 109
typedef Array__Uint16(*Fn__Fn__Result__Uint16_Array__uint8_t_MUL__Uint16_MUL__Array__Result__Uint16_Array__uint8_t_MUL__Array__Uint16)(Lambda*, Array__Result__Uint16_Array__uint8_t*);

// Depth 109
typedef Array__Result__Uint16_Array__uint8_t(*Fn__Fn__Result__Uint16_Array__uint8_t_MUL__bool_MUL__Array__Result__Uint16_Array__uint8_t_Array__Result__Uint16_Array__uint8_t)(Lambda*, Array__Result__Uint16_Array__uint8_t);

// Depth 109
typedef Array__Result__Uint16_Array__uint8_t(*Fn__Fn__Result__Uint16_Array__uint8_t_MUL__bool_MUL__Array__Result__Uint16_Array__uint8_t_MUL__Array__Result__Uint16_Array__uint8_t)(Lambda*, Array__Result__Uint16_Array__uint8_t*);

// Depth 109
typedef Array__Array__uint8_t(*Fn__Fn__Result__Uint32_Array__uint8_t_MUL__Array__uint8_t_MUL__Array__Result__Uint32_Array__uint8_t_MUL__Array__Array__uint8_t)(Lambda*, Array__Result__Uint32_Array__uint8_t*);

// Depth 109
typedef Array__Uint32(*Fn__Fn__Result__Uint32_Array__uint8_t_MUL__Uint32_MUL__Array__Result__Uint32_Array__uint8_t_MUL__Array__Uint32)(Lambda*, Array__Result__Uint32_Array__uint8_t*);

// Depth 109
typedef Array__Result__Uint32_Array__uint8_t(*Fn__Fn__Result__Uint32_Array__uint8_t_MUL__bool_MUL__Array__Result__Uint32_Array__uint8_t_Array__Result__Uint32_Array__uint8_t)(Lambda*, Array__Result__Uint32_Array__uint8_t);

// Depth 109
typedef Array__Result__Uint32_Array__uint8_t(*Fn__Fn__Result__Uint32_Array__uint8_t_MUL__bool_MUL__Array__Result__Uint32_Array__uint8_t_MUL__Array__Result__Uint32_Array__uint8_t)(Lambda*, Array__Result__Uint32_Array__uint8_t*);

// Depth 109
typedef Array__Array__uint8_t(*Fn__Fn__Result__Uint64_Array__uint8_t_MUL__Array__uint8_t_MUL__Array__Result__Uint64_Array__uint8_t_MUL__Array__Array__uint8_t)(Lambda*, Array__Result__Uint64_Array__uint8_t*);

// Depth 109
typedef Array__Uint64(*Fn__Fn__Result__Uint64_Array__uint8_t_MUL__Uint64_MUL__Array__Result__Uint64_Array__uint8_t_MUL__Array__Uint64)(Lambda*, Array__Result__Uint64_Array__uint8_t*);

// Depth 109
typedef Array__Result__Uint64_Array__uint8_t(*Fn__Fn__Result__Uint64_Array__uint8_t_MUL__bool_MUL__Array__Result__Uint64_Array__uint8_t_Array__Result__Uint64_Array__uint8_t)(Lambda*, Array__Result__Uint64_Array__uint8_t);

// Depth 109
typedef Array__Result__Uint64_Array__uint8_t(*Fn__Fn__Result__Uint64_Array__uint8_t_MUL__bool_MUL__Array__Result__Uint64_Array__uint8_t_MUL__Array__Result__Uint64_Array__uint8_t)(Lambda*, Array__Result__Uint64_Array__uint8_t*);

// Depth 109
typedef Array__Uint16*(*Fn__Pair__Array__Uint16_int_MUL__Array__Uint16_MUL_)(Pair__Array__Uint16_int*);

// Depth 109
typedef int*(*Fn__Pair__Array__Uint16_int_MUL__int_MUL_)(Pair__Array__Uint16_int*);

// Depth 109
typedef Array__Uint32*(*Fn__Pair__Array__Uint32_int_MUL__Array__Uint32_MUL_)(Pair__Array__Uint32_int*);

// Depth 109
typedef int*(*Fn__Pair__Array__Uint32_int_MUL__int_MUL_)(Pair__Array__Uint32_int*);

// Depth 109
typedef Array__Uint64*(*Fn__Pair__Array__Uint64_int_MUL__Array__Uint64_MUL_)(Pair__Array__Uint64_int*);

// Depth 109
typedef int*(*Fn__Pair__Array__Uint64_int_MUL__int_MUL_)(Pair__Array__Uint64_int*);

// Depth 109
typedef Array__Result__Uint16_Array__uint8_t(*Fn__int_Array__Result__Uint16_Array__uint8_t)(int);

// Depth 109
typedef Array__Result__Uint32_Array__uint8_t(*Fn__int_Array__Result__Uint32_Array__uint8_t)(int);

// Depth 109
typedef Array__Result__Uint64_Array__uint8_t(*Fn__int_Array__Result__Uint64_Array__uint8_t)(int);

// Depth 109
typedef Result__Array__Uint16_int(*Fn__int_Result__Array__Uint16_int)(int);

// Depth 109
typedef Result__Array__Uint32_int(*Fn__int_Result__Array__Uint32_int)(int);

// Depth 109
typedef Result__Array__Uint64_int(*Fn__int_Result__Array__Uint64_int)(int);

// Depth 504
struct Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty {
    String* data;
};

// Depth 505
struct Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty {
    Lambda* f;
    ByteOrder order;
};

// Depth 505
struct Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty {
    Lambda* f;
    ByteOrder order;
};

// Depth 505
struct Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty {
    Lambda* f;
    ByteOrder order;
};

// Depth 505
typedef CChar*(*Fn__CChar_MUL__CChar_MUL_)(CChar*);

// Depth 505
typedef FILE*(*Fn__CChar_MUL__CChar_MUL__FILE_MUL_)(CChar*, CChar*);

// Depth 505
typedef bool(*Fn__CChar_MUL__CChar_MUL__bool)(CChar*, CChar*);

// Depth 505
typedef String(*Fn__CChar_MUL__String)(CChar*);

// Depth 505
typedef bool(*Fn__CChar_MUL__bool)(CChar*);

// Depth 505
typedef int(*Fn__CChar_MUL__int)(CChar*);

// Depth 505
typedef int(*Fn__CChar_MUL__int_int_FILE_MUL__int)(CChar*, int, int, FILE*);

// Depth 505
typedef bool(*Fn__LambdaEnv_Result__Uint16_Array__uint8_t_MUL__bool)(LambdaEnv, Result__Uint16_Array__uint8_t*);

// Depth 505
typedef bool(*Fn__LambdaEnv_Result__Uint32_Array__uint8_t_MUL__bool)(LambdaEnv, Result__Uint32_Array__uint8_t*);

// Depth 505
typedef bool(*Fn__LambdaEnv_Result__Uint64_Array__uint8_t_MUL__bool)(LambdaEnv, Result__Uint64_Array__uint8_t*);

// Depth 505
typedef bool(*Fn__LambdaEnv_String_MUL__bool)(LambdaEnv, String*);

// Depth 505
typedef int(*Fn__LambdaEnv_int_int)(LambdaEnv, int);

// Depth 505
typedef uint8_t(*Fn__LambdaEnv_uint8_t_uint8_t)(LambdaEnv, uint8_t);

// Depth 505
typedef String(*Fn__PatternMatchResult_MUL__String)(PatternMatchResult*);

// Depth 505
typedef Maybe__String(*Fn__PatternMatchResult_MUL__String_MUL__Maybe__String)(PatternMatchResult*, String*);

// Depth 505
typedef bool(*Fn__PatternMatchResult_MUL__bool)(PatternMatchResult*);

// Depth 505
typedef int(*Fn__PatternMatchResult_MUL__int)(PatternMatchResult*);

// Depth 505
typedef int*(*Fn__PatternMatchResult_MUL__int_MUL_)(PatternMatchResult*);

// Depth 505
typedef PatternMatchResult(*Fn__Pattern_MUL__String_MUL__PatternMatchResult)(Pattern*, String*);

// Depth 505
typedef PatternMatchResult(*Fn__Pattern_MUL__String_MUL__int_PatternMatchResult)(Pattern*, String*, int);

// Depth 505
typedef CChar*(*Fn__String_MUL__CChar_MUL_)(String*);

// Depth 505
typedef CChar*(*Fn__int_CChar_MUL_)(int);

// Depth 508
typedef int(*Fn__Array__PatternMatchResult_MUL__int)(Array__PatternMatchResult*);

// Depth 508
typedef PatternMatchResult*(*Fn__Array__PatternMatchResult_MUL__int_PatternMatchResult_MUL_)(Array__PatternMatchResult*, int);

// Depth 508
typedef Array__PatternMatchResult(*Fn__Array__PatternMatchResult_PatternMatchResult_Array__PatternMatchResult)(Array__PatternMatchResult, PatternMatchResult);

// Depth 508
typedef Array__String(*Fn__Fn__PatternMatchResult_MUL__String_MUL__Array__PatternMatchResult_MUL__Array__String)(Lambda*, Array__PatternMatchResult*);

// Depth 508
typedef Array__int(*Fn__Fn__PatternMatchResult_MUL__int_MUL__Array__PatternMatchResult_MUL__Array__int)(Lambda*, Array__PatternMatchResult*);

// Depth 508
typedef Array__PatternMatchResult(*Fn__Pattern_MUL__String_MUL__Array__PatternMatchResult)(Pattern*, String*);


//Declarations:

// Depth 500
bool _DIV__EQ___int(int a, int b);

// Depth 500
bool _DIV__EQ___uint8_t(uint8_t a, uint8_t b);

// Depth 500
bool _LT__EQ___Char(Char a, Char b);

// Depth 500
bool _LT__EQ___int(int a, int b);

// Depth 500
bool _GT__EQ___int(int a, int b);

// Depth 500
Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty_copy(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* pRef);

// Depth 500
void Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty_delete(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* p);

// Depth 500
Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty_copy(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* pRef);

// Depth 500
void Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty_delete(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* p);

// Depth 500
Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty_copy(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* pRef);

// Depth 500
void Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty_delete(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* p);

// Depth 500
Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* pRef);

// Depth 500
void Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* p);

// Depth 500
Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* pRef);

// Depth 500
void Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* p);

// Depth 500
Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* pRef);

// Depth 500
void Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* p);

// Depth 500
Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* pRef);

// Depth 500
void Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* p);

// Depth 500
Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* pRef);

// Depth 500
void Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* p);

// Depth 500
Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty_copy(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* pRef);

// Depth 500
void Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty_delete(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* p);

// Depth 500
Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty_copy(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* pRef);

// Depth 500
void Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty_delete(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* p);

// Depth 500
Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty_copy(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* pRef);

// Depth 500
void Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty_delete(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* p);

// Depth 500
Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty_copy(Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* pRef);

// Depth 500
void Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty_delete(Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* p);

// Depth 500
int id__int(int x);

// Depth 500
int max__int(int a, int b);

// Depth 500
int min__int(int a, int b);

// Depth 500
bool not(bool a);

// Depth 500
bool null_QMARK___CChar(CChar* p);

// Depth 500
bool null_QMARK___FILE(FILE* p);

// Depth 1000

// Depth 500
Array Array_allocate__Array__uint8_t (int n);

// Depth 500
Array Array_allocate__Char (int n);

// Depth 500
Array Array_allocate__Result__Uint16_Array__uint8_t (int n);

// Depth 500
Array Array_allocate__Result__Uint32_Array__uint8_t (int n);

// Depth 500
Array Array_allocate__Result__Uint64_Array__uint8_t (int n);

// Depth 500
Array Array_allocate__String (int n);

// Depth 500
Array Array_allocate__Uint16 (int n);

// Depth 500
Array Array_allocate__Uint32 (int n);

// Depth 500
Array Array_allocate__Uint64 (int n);

// Depth 500
Array Array_allocate__int (int n);

// Depth 500
Array Array_allocate__uint8_t (int n);

// Depth 500
void Array_aset_BANG___Char (Array *aRef, int n, Char newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Array__uint8_t (Array *aRef, int n, Array__uint8_t newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Char (Array *aRef, int n, Char newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Result__Uint16_Array__uint8_t (Array *aRef, int n, Result__Uint16_Array__uint8_t newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Result__Uint32_Array__uint8_t (Array *aRef, int n, Result__Uint32_Array__uint8_t newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Result__Uint64_Array__uint8_t (Array *aRef, int n, Result__Uint64_Array__uint8_t newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___String (Array *aRef, int n, String newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Uint16 (Array *aRef, int n, Uint16 newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Uint32 (Array *aRef, int n, Uint32 newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Uint64 (Array *aRef, int n, Uint64 newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___int (Array *aRef, int n, int newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___uint8_t (Array *aRef, int n, uint8_t newValue);

// Depth 500
Array__Result__Uint16_Array__uint8_t Array_copy_MINUS_filter__Result__Uint16_Array__uint8_t(Lambda* f, Array__Result__Uint16_Array__uint8_t* a);

// Depth 500
Array__Result__Uint32_Array__uint8_t Array_copy_MINUS_filter__Result__Uint32_Array__uint8_t(Lambda* f, Array__Result__Uint32_Array__uint8_t* a);

// Depth 500
Array__Result__Uint64_Array__uint8_t Array_copy_MINUS_filter__Result__Uint64_Array__uint8_t(Lambda* f, Array__Result__Uint64_Array__uint8_t* a);

// Depth 500
Array__Result__Uint16_Array__uint8_t Array_copy_MINUS_map__Array__uint8_t_Result__Uint16_Array__uint8_t(Lambda* f, Array__Array__uint8_t* a);

// Depth 500
Array__Result__Uint32_Array__uint8_t Array_copy_MINUS_map__Array__uint8_t_Result__Uint32_Array__uint8_t(Lambda* f, Array__Array__uint8_t* a);

// Depth 500
Array__Result__Uint64_Array__uint8_t Array_copy_MINUS_map__Array__uint8_t_Result__Uint64_Array__uint8_t(Lambda* f, Array__Array__uint8_t* a);

// Depth 500
Array__Uint16 Array_copy_MINUS_map__Array__uint8_t_Uint16(Lambda* f, Array__Array__uint8_t* a);

// Depth 500
Array__Uint32 Array_copy_MINUS_map__Array__uint8_t_Uint32(Lambda* f, Array__Array__uint8_t* a);

// Depth 500
Array__Uint64 Array_copy_MINUS_map__Array__uint8_t_Uint64(Lambda* f, Array__Array__uint8_t* a);

// Depth 500
Array__int Array_copy_MINUS_map__Array__uint8_t_int(Lambda* f, Array__Array__uint8_t* a);

// Depth 500
Array__String Array_copy_MINUS_map__PatternMatchResult_String(Lambda* f, Array__PatternMatchResult* a);

// Depth 500
Array__int Array_copy_MINUS_map__PatternMatchResult_int(Lambda* f, Array__PatternMatchResult* a);

// Depth 500
Array__Array__uint8_t Array_copy_MINUS_map__Result__Uint16_Array__uint8_t_Array__uint8_t(Lambda* f, Array__Result__Uint16_Array__uint8_t* a);

// Depth 500
Array__Uint16 Array_copy_MINUS_map__Result__Uint16_Array__uint8_t_Uint16(Lambda* f, Array__Result__Uint16_Array__uint8_t* a);

// Depth 500
Array__Array__uint8_t Array_copy_MINUS_map__Result__Uint32_Array__uint8_t_Array__uint8_t(Lambda* f, Array__Result__Uint32_Array__uint8_t* a);

// Depth 500
Array__Uint32 Array_copy_MINUS_map__Result__Uint32_Array__uint8_t_Uint32(Lambda* f, Array__Result__Uint32_Array__uint8_t* a);

// Depth 500
Array__Array__uint8_t Array_copy_MINUS_map__Result__Uint64_Array__uint8_t_Array__uint8_t(Lambda* f, Array__Result__Uint64_Array__uint8_t* a);

// Depth 500
Array__Uint64 Array_copy_MINUS_map__Result__Uint64_Array__uint8_t_Uint64(Lambda* f, Array__Result__Uint64_Array__uint8_t* a);

// Depth 500
Array__Array__uint8_t Array_copy_MINUS_map__Uint16_Array__uint8_t(Lambda* f, Array__Uint16* a);

// Depth 500
Array__uint8_t Array_copy_MINUS_map__Uint16_uint8_t(Lambda* f, Array__Uint16* a);

// Depth 500
Array__Array__uint8_t Array_copy_MINUS_map__Uint32_Array__uint8_t(Lambda* f, Array__Uint32* a);

// Depth 500
Array__uint8_t Array_copy_MINUS_map__Uint32_uint8_t(Lambda* f, Array__Uint32* a);

// Depth 500
Array__Array__uint8_t Array_copy_MINUS_map__Uint64_Array__uint8_t(Lambda* f, Array__Uint64* a);

// Depth 500
Array__uint8_t Array_copy_MINUS_map__Uint64_uint8_t(Lambda* f, Array__Uint64* a);

// Depth 500
Array__String Array_copy_MINUS_map__uint8_t_String(Lambda* f, Array__uint8_t* a);

// Depth 500
Array Array_copy__Result__Uint16_Array__uint8_t (Array* a);

// Depth 500
Array Array_copy__Result__Uint32_Array__uint8_t (Array* a);

// Depth 500
Array Array_copy__Result__Uint64_Array__uint8_t (Array* a);

// Depth 500
Array Array_copy__Uint16 (Array* a);

// Depth 500
Array Array_copy__Uint32 (Array* a);

// Depth 500
Array Array_copy__Uint64 (Array* a);

// Depth 500
Array Array_copy__uint8_t (Array* a);

// Depth 500
void Array_delete__Array__uint8_t (Array a);

// Depth 500
void Array_delete__Char (Array a);

// Depth 500
void Array_delete__PatternMatchResult (Array a);

// Depth 500
void Array_delete__Result__Uint16_Array__uint8_t (Array a);

// Depth 500
void Array_delete__Result__Uint32_Array__uint8_t (Array a);

// Depth 500
void Array_delete__Result__Uint64_Array__uint8_t (Array a);

// Depth 500
void Array_delete__String (Array a);

// Depth 500
void Array_delete__Uint16 (Array a);

// Depth 500
void Array_delete__Uint32 (Array a);

// Depth 500
void Array_delete__Uint64 (Array a);

// Depth 500
void Array_delete__int (Array a);

// Depth 500
void Array_delete__uint8_t (Array a);

// Depth 500
Array Array_endo_MINUS_filter__Result__Uint16_Array__uint8_t(Lambda *predicate, Array a);

// Depth 500
Array Array_endo_MINUS_filter__Result__Uint32_Array__uint8_t(Lambda *predicate, Array a);

// Depth 500
Array Array_endo_MINUS_filter__Result__Uint64_Array__uint8_t(Lambda *predicate, Array a);

// Depth 500
Array Array_endo_MINUS_filter__String(Lambda *predicate, Array a);

// Depth 500
Array Array_endo_MINUS_map__uint8_t(Lambda *f, Array a);

// Depth 500
int Array_length__Array__uint8_t (Array *a);

// Depth 500
int Array_length__Char (Array *a);

// Depth 500
int Array_length__PatternMatchResult (Array *a);

// Depth 500
int Array_length__Result__Uint16_Array__uint8_t (Array *a);

// Depth 500
int Array_length__Result__Uint32_Array__uint8_t (Array *a);

// Depth 500
int Array_length__Result__Uint64_Array__uint8_t (Array *a);

// Depth 500
int Array_length__String (Array *a);

// Depth 500
int Array_length__Uint16 (Array *a);

// Depth 500
int Array_length__Uint32 (Array *a);

// Depth 500
int Array_length__Uint64 (Array *a);

// Depth 500
int Array_length__int (Array *a);

// Depth 500
int Array_length__uint8_t (Array *a);

// Depth 500
Maybe__uint8_t Array_nth__uint8_t(Array__uint8_t* xs, int index);

// Depth 500
Array__Array__uint8_t Array_partition__uint8_t(Array__uint8_t* arr, int n);

// Depth 500
Array__Char Array_prefix__Array__Char(Array__Char* xs, int end_MINUS_index);

// Depth 500
Array Array_push_MINUS_back__Array__uint8_t(Array a, Array__uint8_t value);

// Depth 500
Array Array_push_MINUS_back__Char(Array a, Char value);

// Depth 500
Array Array_push_MINUS_back__PatternMatchResult(Array a, PatternMatchResult value);

// Depth 500
Array Array_push_MINUS_back__String(Array a, String value);

// Depth 500
Array Array_push_MINUS_back__uint8_t(Array a, uint8_t value);

// Depth 500
int Array_reduce__int_int(Lambda* f, int x, Array__int* xs);

// Depth 500
Array__Char Array_repeat__Char(int n, Lambda* f);

// Depth 500
Array__Char Array_replicate__Char(int n, Char* e);

// Depth 500
Array__Char Array_reverse__Char(Array__Char a);

// Depth 500
Array__Char Array_slice__Char(Array__Char* xs, int start_MINUS_index, int end_MINUS_index);

// Depth 500
Array__uint8_t Array_slice__uint8_t(Array__uint8_t* xs, int start_MINUS_index, int end_MINUS_index);

// Depth 500
Array__Char Array_suffix__Char(Array__Char* xs, int start_MINUS_index);

// Depth 500
Array__uint8_t* Array_unsafe_MINUS_nth__Array__uint8_t (Array *aRef, int n);

// Depth 500
Char* Array_unsafe_MINUS_nth__Char (Array *aRef, int n);

// Depth 500
PatternMatchResult* Array_unsafe_MINUS_nth__PatternMatchResult (Array *aRef, int n);

// Depth 500
Result__Uint16_Array__uint8_t* Array_unsafe_MINUS_nth__Result__Uint16_Array__uint8_t (Array *aRef, int n);

// Depth 500
Result__Uint32_Array__uint8_t* Array_unsafe_MINUS_nth__Result__Uint32_Array__uint8_t (Array *aRef, int n);

// Depth 500
Result__Uint64_Array__uint8_t* Array_unsafe_MINUS_nth__Result__Uint64_Array__uint8_t (Array *aRef, int n);

// Depth 500
String* Array_unsafe_MINUS_nth__String (Array *aRef, int n);

// Depth 500
Uint16* Array_unsafe_MINUS_nth__Uint16 (Array *aRef, int n);

// Depth 500
Uint32* Array_unsafe_MINUS_nth__Uint32 (Array *aRef, int n);

// Depth 500
Uint64* Array_unsafe_MINUS_nth__Uint64 (Array *aRef, int n);

// Depth 500
int* Array_unsafe_MINUS_nth__int (Array *aRef, int n);

// Depth 500
uint8_t* Array_unsafe_MINUS_nth__uint8_t (Array *aRef, int n);

// Depth 500
Array__uint8_t Array_zero__uint8_t();

// Depth 1000

// Depth 500
Result__Uint16_Array__uint8_t Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* _env, Array__uint8_t* bs);

// Depth 500
Result__Uint32_Array__uint8_t Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* _env, Array__uint8_t* bs);

// Depth 500
Result__Uint64_Array__uint8_t Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* _env, Array__uint8_t* bs);

// Depth 500
String Binary__Lambda_bytes_MINUS__GT_hex_MINUS_string_14_env(uint8_t* b);

// Depth 500
Array__uint8_t Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env(Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* _env, Uint16* i);

// Depth 500
Uint32 Binary__Lambda_int32_MINUS__GT_bytes_16_env(Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* _env, Long lng);

// Depth 500
Array__uint8_t Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env(Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* _env, Uint32* i);

// Depth 500
Uint64 Binary__Lambda_int64_MINUS__GT_bytes_16_env(Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* _env, Long lng);

// Depth 500
Array__uint8_t Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env(Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* _env, Uint64* i);

// Depth 500
int Binary__Lambda_remaining_MINUS_bytes_16_env(int x, int* y);

// Depth 500
int Binary__Lambda_remaining_MINUS_bytes__Uint16_uint8_t_16_env(int x, int* y);

// Depth 500
int Binary__Lambda_remaining_MINUS_bytes__Uint32_uint8_t_16_env(int x, int* y);

// Depth 500
int Binary__Lambda_remaining_MINUS_bytes__Uint64_uint8_t_16_env(int x, int* y);

// Depth 500
Uint16 Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* _env, Array__uint8_t* b);

// Depth 500
Uint32 Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* _env, Array__uint8_t* b);

// Depth 500
Uint64 Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* _env, Array__uint8_t* b);

// Depth 500
Lambda Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16(Lambda* f, ByteOrder order);

// Depth 500
Lambda Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32(Lambda* f, ByteOrder order);

// Depth 500
Lambda Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64(Lambda* f, ByteOrder order);

// Depth 500
String Binary_bytes_MINUS__GT_hex_MINUS_string(Array__uint8_t* bs);

// Depth 500
Maybe__Uint16 Binary_bytes_MINUS__GT_int16(ByteOrder order, Array__uint8_t* bytes);

// Depth 500
Pair__Array__Uint16_int Binary_bytes_MINUS__GT_int16_MINUS_seq(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Result__Array__Uint16_int Binary_bytes_MINUS__GT_int16_MINUS_seq_MINUS_exact(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Maybe__Uint32 Binary_bytes_MINUS__GT_int32(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Pair__Array__Uint32_int Binary_bytes_MINUS__GT_int32_MINUS_seq(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Result__Array__Uint32_int Binary_bytes_MINUS__GT_int32_MINUS_seq_MINUS_exact(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Maybe__Uint64 Binary_bytes_MINUS__GT_int64(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Pair__Array__Uint64_int Binary_bytes_MINUS__GT_int64_MINUS_seq(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Result__Array__Uint64_int Binary_bytes_MINUS__GT_int64_MINUS_seq_MINUS_exact(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Array__uint8_t Binary_int16_MINUS__GT_bytes(ByteOrder order, Uint16 i);

// Depth 500
Array__Array__uint8_t Binary_int16_MINUS_seq_MINUS__GT_bytes(ByteOrder order, Array__Uint16* is);

// Depth 500
Array__uint8_t Binary_int32_MINUS__GT_bytes(ByteOrder order, Uint32 i);

// Depth 500
Array__Array__uint8_t Binary_int32_MINUS_seq_MINUS__GT_bytes(ByteOrder order, Array__Uint32* is);

// Depth 500
Array__uint8_t Binary_int64_MINUS__GT_bytes(ByteOrder order, Uint64 i);

// Depth 500
Array__Array__uint8_t Binary_int64_MINUS_seq_MINUS__GT_bytes(ByteOrder order, Array__Uint64* is);

// Depth 500
Array__Uint16 Binary_interpreted__Uint16_Array__uint8_t(Array__Result__Uint16_Array__uint8_t* results);

// Depth 500
Array__Uint32 Binary_interpreted__Uint32_Array__uint8_t(Array__Result__Uint32_Array__uint8_t* results);

// Depth 500
Array__Uint64 Binary_interpreted__Uint64_Array__uint8_t(Array__Result__Uint64_Array__uint8_t* results);

// Depth 500
int Binary_remaining_MINUS_bytes__Uint16_uint8_t(Array__Result__Uint16_Array__uint8_t* results);

// Depth 500
int Binary_remaining_MINUS_bytes__Uint32_uint8_t(Array__Result__Uint32_Array__uint8_t* results);

// Depth 500
int Binary_remaining_MINUS_bytes__Uint64_uint8_t(Array__Result__Uint64_Array__uint8_t* results);

// Depth 500
ByteOrder Binary_system_MINUS_endianness();

// Depth 500
String Binary_to_MINUS_hex_MINUS_str(uint8_t b);

// Depth 500
Uint16 Binary_unsafe_MINUS_bytes_MINUS__GT_int16(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Array__Uint16 Binary_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Uint32 Binary_unsafe_MINUS_bytes_MINUS__GT_int32(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Array__Uint32 Binary_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Uint64 Binary_unsafe_MINUS_bytes_MINUS__GT_int64(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Array__Uint64 Binary_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Array__uint8_t Binary_unwrap_MINUS_error__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* x);

// Depth 500
Array__uint8_t Binary_unwrap_MINUS_error__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* x);

// Depth 500
Array__uint8_t Binary_unwrap_MINUS_error__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* x);

// Depth 500
Uint16 Binary_unwrap_MINUS_success__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* x);

// Depth 500
Uint32 Binary_unwrap_MINUS_success__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* x);

// Depth 500
Uint64 Binary_unwrap_MINUS_success__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* x);

// Depth 1000

// Depth 500
bool Bool_blit(bool x);

// Depth 500
int Bool_hash(bool* k);

// Depth 500
String Bool_prn(bool x);

// Depth 500
bool Bool_zero();

// Depth 1000

// Depth 500
String BoolRef_format(String* s, bool* x);

// Depth 500
String BoolRef_prn(bool* x);

// Depth 500
String BoolRef_str(bool* x);

// Depth 1000

// Depth 500
uint8_t Byte_add_MINUS_ref(uint8_t* x, uint8_t* y);

// Depth 500
uint8_t Byte_blit(uint8_t x);

// Depth 500
bool Byte_even_QMARK_(uint8_t a);

// Depth 500
Maybe__uint8_t Byte_from_MINUS_string(String* s);

// Depth 500
int Byte_hash(uint8_t* k);

// Depth 500
bool Byte_odd_QMARK_(uint8_t a);

// Depth 500
uint8_t Byte_pow(uint8_t x, uint8_t y);

// Depth 500
String Byte_prn(uint8_t x);

// Depth 500
uint8_t Byte_random();

// Depth 500
uint8_t Byte_random_MINUS_between(uint8_t lower, uint8_t upper);

// Depth 500
uint8_t Byte_zero();

// Depth 1000

// Depth 500
ByteOrder ByteOrder_BigEndian();

// Depth 500
ByteOrder ByteOrder_LittleEndian();

// Depth 500
ByteOrder ByteOrder_blit(ByteOrder x);

// Depth 500
ByteOrder ByteOrder_copy(ByteOrder* pRef);

// Depth 500
void ByteOrder_delete(ByteOrder p);

// Depth 500
int ByteOrder_get_MINUS_tag(ByteOrder *p);

// Depth 500
String ByteOrder_prn(ByteOrder *p);

// Depth 500
String ByteOrder_str(ByteOrder *p);

// Depth 1000

// Depth 500
bool ByteRef__LT_(uint8_t* a, uint8_t* b);

// Depth 500
bool ByteRef__EQ_(uint8_t* a, uint8_t* b);

// Depth 500
bool ByteRef__GT_(uint8_t* a, uint8_t* b);

// Depth 500
String ByteRef_format(String* s, uint8_t* x);

// Depth 500
String ByteRef_prn(uint8_t* x);

// Depth 500
String ByteRef_str(uint8_t* x);

// Depth 1000

// Depth 500
bool Char_alpha_QMARK_(Char c);

// Depth 500
bool Char_alphanum_QMARK_(Char c);

// Depth 500
Char Char_blit(Char x);

// Depth 500
int Char_hash(Char* k);

// Depth 500
bool Char_lower_MINUS_case_QMARK_(Char c);

// Depth 500
int Char_meaning(Char* char_MINUS_ref);

// Depth 500
bool Char_num_QMARK_(Char c);

// Depth 500
Char Char_random();

// Depth 500
Char Char_random_MINUS_between(Char a, Char b);

// Depth 500
bool Char_upper_MINUS_case_QMARK_(Char c);

// Depth 500
Char Char_zero();

// Depth 1000

// Depth 500
bool CharRef__LT_(Char* a, Char* b);

// Depth 500
bool CharRef__EQ_(Char* a, Char* b);

// Depth 500
bool CharRef__GT_(Char* a, Char* b);

// Depth 1000

// Depth 500
double Double_add_MINUS_ref(double* x, double* y);

// Depth 500
double Double_blit(double x);

// Depth 500
double Double_dec(double x);

// Depth 500
double Double_e;

// Depth 500
Maybe__double Double_from_MINUS_string(String* s);

// Depth 500
int Double_hash(double* k);

// Depth 500
double Double_inc(double x);

// Depth 500
bool Double_negative_QMARK_(double a);

// Depth 500
double Double_pi;

// Depth 500
bool Double_positive_QMARK_(double a);

// Depth 500
String Double_prn(double x);

// Depth 500
double Double_random();

// Depth 500
double Double_random_MINUS_between(double lower, double upper);

// Depth 500
double Double_sign(double x);

// Depth 500
double Double_zero();

// Depth 1000

// Depth 500
bool DoubleRef__LT_(double* a, double* b);

// Depth 500
bool DoubleRef__EQ_(double* a, double* b);

// Depth 500
bool DoubleRef__GT_(double* a, double* b);

// Depth 500
String DoubleRef_format(String* s, double* x);

// Depth 500
String DoubleRef_prn(double* x);

// Depth 500
String DoubleRef_str(double* x);

// Depth 1000

// Depth 500
float Float_add_MINUS_ref(float* x, float* y);

// Depth 500
float Float_blit(float x);

// Depth 500
float Float_dec(float x);

// Depth 500
Maybe__float Float_from_MINUS_string(String* s);

// Depth 500
int Float_hash(float* k);

// Depth 500
float Float_inc(float x);

// Depth 500
bool Float_negative_QMARK_(float a);

// Depth 500
float Float_pi;

// Depth 500
bool Float_positive_QMARK_(float a);

// Depth 500
String Float_prn(float x);

// Depth 500
float Float_random();

// Depth 500
float Float_random_MINUS_between(float lower, float upper);

// Depth 500
float Float_sign(float x);

// Depth 500
float Float_zero();

// Depth 1000

// Depth 500
bool FloatRef__LT_(float* a, float* b);

// Depth 500
bool FloatRef__EQ_(float* a, float* b);

// Depth 500
bool FloatRef__GT_(float* a, float* b);

// Depth 500
String FloatRef_format(String* s, float* x);

// Depth 500
String FloatRef_prn(float* x);

// Depth 500
String FloatRef_str(float* x);

// Depth 1000

// Depth 500
void Function_delete__Array__uint8_t_MUL__Result__Uint16_Array__uint8_t (Lambda f);

// Depth 500
void Function_delete__Array__uint8_t_MUL__Result__Uint32_Array__uint8_t (Lambda f);

// Depth 500
void Function_delete__Array__uint8_t_MUL__Result__Uint64_Array__uint8_t (Lambda f);

// Depth 500
void Function_delete__Array__uint8_t_MUL__Uint16 (Lambda f);

// Depth 500
void Function_delete__Array__uint8_t_MUL__Uint32 (Lambda f);

// Depth 500
void Function_delete__Array__uint8_t_MUL__Uint64 (Lambda f);

// Depth 500
void Function_delete__Long_Uint32 (Lambda f);

// Depth 500
void Function_delete__Long_Uint64 (Lambda f);

// Depth 500
void Function_delete__PatternMatchResult_MUL__String (Lambda f);

// Depth 500
void Function_delete__PatternMatchResult_MUL__int (Lambda f);

// Depth 500
void Function_delete__String_MUL__bool (Lambda f);

// Depth 500
void Function_delete__Uint16_MUL__Array__uint8_t (Lambda f);

// Depth 500
void Function_delete__Uint32_MUL__Array__uint8_t (Lambda f);

// Depth 500
void Function_delete__Uint64_MUL__Array__uint8_t (Lambda f);

// Depth 500
void Function_delete__int_int (Lambda f);

// Depth 500
void Function_delete__int_int_MUL__int (Lambda f);

// Depth 500
void Function_delete__uint8_t_MUL__String (Lambda f);

// Depth 500
void Function_delete__uint8_t_uint8_t (Lambda f);

// Depth 1000

// Depth 500
int Heap_lchild(int i);

// Depth 500
int Heap_parent(int i);

// Depth 500
int Heap_rchild(int i);

// Depth 1000

// Depth 500
Result__bool_String IO_append_MINUS_file(String* content, String* file_MINUS_name);

// Depth 500
Result__Char_String IO_fgetc(FILE* file);

// Depth 500
Maybe__String IO_getenv(String* s);

// Depth 500
Result__FILE_MUL__String IO_open_MINUS_file(String* filename, String* mode);

// Depth 500
Result__String_String IO_read_MINUS__GT_EOF(String* filename);

// Depth 500
Result__String_String IO_read_MINUS_file(String* filename);

// Depth 500
Result__bool_String IO_write_MINUS_file(String* content, String* file_MINUS_name);

// Depth 1000

// Depth 500
void IO_Raw_fclose_BANG_(FILE* file);

// Depth 500
void IO_Raw_fflush_BANG_(FILE* file);

// Depth 500
FILE* IO_Raw_fopen(String* pathname, String* mode);

// Depth 500
int IO_Raw_fread(String* file_MINUS_name, int item_MINUS_size, int items_MINUS_count, FILE* file);

// Depth 500
int IO_Raw_fwrite(String* data, int item_MINUS_size, int items_MINUS_count, FILE* file);

// Depth 500
void IO_Raw_fwrite_BANG_(String* data, int item_MINUS_size, int items_MINUS_count, FILE* file);

// Depth 500
int IO_Raw_unlink(String* file_MINUS_name);

// Depth 500
void IO_Raw_unlink_BANG_(String* file_MINUS_name);

// Depth 1000

// Depth 500
int Int_add_MINUS_ref(int* x, int* y);

// Depth 500
int Int_blit(int x);

// Depth 500
bool Int_even_QMARK_(int a);

// Depth 500
int Int_from_MINUS_int(int a);

// Depth 500
Maybe__int Int_from_MINUS_string(String* s);

// Depth 500
int Int_hash(int* k);

// Depth 500
bool Int_negative_QMARK_(int a);

// Depth 500
bool Int_odd_QMARK_(int a);

// Depth 500
int Int_positive_MINUS_mod(int k, int n);

// Depth 500
bool Int_positive_QMARK_(int a);

// Depth 500
int Int_pow(int x, int y);

// Depth 500
String Int_prn(int x);

// Depth 500
int Int_random();

// Depth 500
int Int_random_MINUS_between(int lower, int upper);

// Depth 500
int Int_sign(int n);

// Depth 500
int Int_to_MINUS_int(int a);

// Depth 500
int Int_zero();

// Depth 1000

// Depth 500
Int16 Int16_blit(Int16 x);

// Depth 500
int Int16_hash(Int16* k);

// Depth 500
String Int16_prn(Int16 a);

// Depth 500
Int16 Int16_zero();

// Depth 1000

// Depth 500
bool Int16Extra__EQ_(Int16* a, Int16* b);

// Depth 500
String Int16Extra_prn(Int16* a);

// Depth 500
String Int16Extra_str(Int16* a);

// Depth 1000

// Depth 500
Int32 Int32_blit(Int32 x);

// Depth 500
int Int32_hash(Int32* k);

// Depth 500
String Int32_prn(Int32 a);

// Depth 500
Int32 Int32_zero();

// Depth 1000

// Depth 500
bool Int32Extra__EQ_(Int32* a, Int32* b);

// Depth 500
String Int32Extra_prn(Int32* a);

// Depth 500
String Int32Extra_str(Int32* a);

// Depth 1000

// Depth 500
Int64 Int64_blit(Int64 x);

// Depth 500
int Int64_hash(Int64* k);

// Depth 500
String Int64_prn(Int64 a);

// Depth 500
Int64 Int64_zero();

// Depth 1000

// Depth 500
bool Int64Extra__EQ_(Int64* a, Int64* b);

// Depth 500
String Int64Extra_prn(Int64* a);

// Depth 500
String Int64Extra_str(Int64* a);

// Depth 1000

// Depth 500
Int8 Int8_blit(Int8 x);

// Depth 500
int Int8_hash(Int8* k);

// Depth 500
String Int8_prn(Int8 a);

// Depth 500
Int8 Int8_zero();

// Depth 1000

// Depth 500
bool Int8Extra__EQ_(Int8* a, Int8* b);

// Depth 500
String Int8Extra_prn(Int8* a);

// Depth 500
String Int8Extra_str(Int8* a);

// Depth 1000

// Depth 500
bool IntRef__LT_(int* a, int* b);

// Depth 500
bool IntRef__EQ_(int* a, int* b);

// Depth 500
bool IntRef__GT_(int* a, int* b);

// Depth 500
String IntRef_format(String* s, int* x);

// Depth 500
String IntRef_prn(int* x);

// Depth 500
String IntRef_str(int* x);

// Depth 1000

// Depth 500
Long Long_add_MINUS_ref(Long* x, Long* y);

// Depth 500
Long Long_blit(Long x);

// Depth 500
bool Long_even_QMARK_(Long a);

// Depth 500
Maybe__Long Long_from_MINUS_string(String* s);

// Depth 500
int Long_hash(Long* k);

// Depth 500
bool Long_negative_QMARK_(Long a);

// Depth 500
bool Long_odd_QMARK_(Long a);

// Depth 500
bool Long_positive_QMARK_(Long a);

// Depth 500
String Long_prn(Long x);

// Depth 500
Long Long_random();

// Depth 500
Long Long_random_MINUS_between(Long lower, Long upper);

// Depth 500
Long Long_sign(Long n);

// Depth 500
Long Long_zero();

// Depth 1000

// Depth 500
bool LongRef__LT_(Long* a, Long* b);

// Depth 500
bool LongRef__EQ_(Long* a, Long* b);

// Depth 500
bool LongRef__GT_(Long* a, Long* b);

// Depth 500
String LongRef_format(String* s, Long* x);

// Depth 500
String LongRef_prn(Long* x);

// Depth 500
String LongRef_str(Long* x);

// Depth 1000

// Depth 500
int Map_dflt_MINUS_len;

// Depth 500
int Map_max_MINUS_load;

// Depth 500
int Map_min_MINUS_load;

// Depth 1000

// Depth 500
Maybe__Long Maybe_Just__Long(Long member0);

// Depth 500
Maybe__String Maybe_Just__String(String member0);

// Depth 500
Maybe__Uint16 Maybe_Just__Uint16(Uint16 member0);

// Depth 500
Maybe__Uint32 Maybe_Just__Uint32(Uint32 member0);

// Depth 500
Maybe__Uint64 Maybe_Just__Uint64(Uint64 member0);

// Depth 500
Maybe__double Maybe_Just__double(double member0);

// Depth 500
Maybe__float Maybe_Just__float(float member0);

// Depth 500
Maybe__int Maybe_Just__int(int member0);

// Depth 500
Maybe__uint8_t Maybe_Just__uint8_t(uint8_t member0);

// Depth 500
Maybe__Long Maybe_Nothing__Long();

// Depth 500
Maybe__String Maybe_Nothing__String();

// Depth 500
Maybe__Uint16 Maybe_Nothing__Uint16();

// Depth 500
Maybe__Uint32 Maybe_Nothing__Uint32();

// Depth 500
Maybe__Uint64 Maybe_Nothing__Uint64();

// Depth 500
Maybe__double Maybe_Nothing__double();

// Depth 500
Maybe__float Maybe_Nothing__float();

// Depth 500
Maybe__int Maybe_Nothing__int();

// Depth 500
Maybe__uint8_t Maybe_Nothing__uint8_t();

// Depth 500
void Maybe_delete__Long(Maybe__Long p);

// Depth 500
void Maybe_delete__String(Maybe__String p);

// Depth 500
void Maybe_delete__Uint16(Maybe__Uint16 p);

// Depth 500
void Maybe_delete__Uint32(Maybe__Uint32 p);

// Depth 500
void Maybe_delete__Uint64(Maybe__Uint64 p);

// Depth 500
void Maybe_delete__double(Maybe__double p);

// Depth 500
void Maybe_delete__float(Maybe__float p);

// Depth 500
void Maybe_delete__int(Maybe__int p);

// Depth 500
void Maybe_delete__uint8_t(Maybe__uint8_t p);

// Depth 500
String Maybe_from__String(Maybe__String a, String dflt);

// Depth 500
String Maybe_unsafe_MINUS_from__String(Maybe__String a);

// Depth 1000

// Depth 500
Opaque Opaque_copy(Opaque* pRef);

// Depth 500
void Opaque_delete(Opaque p);

// Depth 500
int Opaque_get_MINUS_tag(Opaque *p);

// Depth 500
String Opaque_prn(Opaque *p);

// Depth 500
String Opaque_str(Opaque *p);

// Depth 1000

// Depth 500
Array__Uint16* Pair_a__Array__Uint16_int(Pair__Array__Uint16_int* p);

// Depth 500
Array__Uint32* Pair_a__Array__Uint32_int(Pair__Array__Uint32_int* p);

// Depth 500
Array__Uint64* Pair_a__Array__Uint64_int(Pair__Array__Uint64_int* p);

// Depth 500
int* Pair_b__Array__Uint16_int(Pair__Array__Uint16_int* p);

// Depth 500
int* Pair_b__Array__Uint32_int(Pair__Array__Uint32_int* p);

// Depth 500
int* Pair_b__Array__Uint64_int(Pair__Array__Uint64_int* p);

// Depth 500
void Pair_delete__Array__Uint16_int(Pair__Array__Uint16_int p);

// Depth 500
void Pair_delete__Array__Uint32_int(Pair__Array__Uint32_int p);

// Depth 500
void Pair_delete__Array__Uint64_int(Pair__Array__Uint64_int p);

// Depth 500
Pair__Array__Uint16_int Pair_init__Array__Uint16_int(Array__Uint16 a, int b);

// Depth 500
Pair__Array__Uint32_int Pair_init__Array__Uint32_int(Array__Uint32 a, int b);

// Depth 500
Pair__Array__Uint64_int Pair_init__Array__Uint64_int(Array__Uint64 a, int b);

// Depth 1000

// Depth 500
int Pattern__Lambda_find_MINUS_all_15_env(PatternMatchResult* m);

// Depth 500
String Pattern__Lambda_global_MINUS_match_MINUS_str_16_env(Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* _env, PatternMatchResult* m);

// Depth 500
Maybe__String Pattern_extract(PatternMatchResult* match_MINUS_res, String* data);

// Depth 500
int Pattern_find(Pattern* pattern, String* data);

// Depth 500
Array__int Pattern_find_MINUS_all(Pattern* pattern, String* data);

// Depth 500
Array__PatternMatchResult Pattern_find_MINUS_all_MINUS_matches(Pattern* pattern, String* data);

// Depth 500
Pattern Pattern_from_MINUS_chars(Array__Char* chars);

// Depth 500
Array__String Pattern_global_MINUS_match_MINUS_str(Pattern* pattern, String* data);

// Depth 500
PatternMatchResult Pattern_match(Pattern* pattern, String* data);

// Depth 500
String Pattern_match_MINUS_str(Pattern* pattern, String* data);

// Depth 500
bool Pattern_matches_QMARK_(Pattern* pat, String* s);

// Depth 500
bool Pattern_non_MINUS_match_QMARK_(PatternMatchResult* match_MINUS_res);

// Depth 500
Array__String Pattern_split(Pattern* p, String* s);

// Depth 1000

// Depth 500
int* Pattern_MatchResult_end(PatternMatchResult* p);

// Depth 500
PatternMatchResult Pattern_MatchResult_init(int start, int end);

// Depth 500
String Pattern_MatchResult_prn(PatternMatchResult *p);

// Depth 500
String Pattern_MatchResult_ref_MINUS_str(PatternMatchResult* ref_MINUS_matchres);

// Depth 500
PatternMatchResult Pattern_MatchResult_set_MINUS_end(PatternMatchResult p, int newValue);

// Depth 500
void Pattern_MatchResult_set_MINUS_end_BANG_(PatternMatchResult* pRef, int newValue);

// Depth 500
PatternMatchResult Pattern_MatchResult_set_MINUS_start(PatternMatchResult p, int newValue);

// Depth 500
void Pattern_MatchResult_set_MINUS_start_BANG_(PatternMatchResult* pRef, int newValue);

// Depth 500
int* Pattern_MatchResult_start(PatternMatchResult* p);

// Depth 500
String Pattern_MatchResult_str(PatternMatchResult matchres);

// Depth 500
PatternMatchResult Pattern_MatchResult_update_MINUS_end(PatternMatchResult p, Lambda *updater);

// Depth 500
PatternMatchResult Pattern_MatchResult_update_MINUS_start(PatternMatchResult p, Lambda *updater);

// Depth 1000

// Depth 500
bool Pointer_eq__CChar(CChar *p1, CChar *p2);

// Depth 500
bool Pointer_eq__FILE(FILE *p1, FILE *p2);

// Depth 1000

// Depth 500
bool Random__;

// Depth 500
double Random_a;

// Depth 500
double Random_c;

// Depth 500
bool Random_gen_MINUS_seed_MINUS_at_MINUS_startup_QMARK_();

// Depth 500
double Random_m;

// Depth 500
double Random_random();

// Depth 500
double Random_s;

// Depth 500
void Random_seed();

// Depth 500
void Random_seed_MINUS_from(double new_MINUS_seed);

// Depth 1000

// Depth 500
bool RefBool__EQ_(bool* a, bool* b);

// Depth 1000

// Depth 500
Result__Uint16_Array__uint8_t Result_Error__Array__uint8_t_Uint16(Array__uint8_t member0);

// Depth 500
Result__Uint32_Array__uint8_t Result_Error__Array__uint8_t_Uint32(Array__uint8_t member0);

// Depth 500
Result__Uint64_Array__uint8_t Result_Error__Array__uint8_t_Uint64(Array__uint8_t member0);

// Depth 500
Result__Char_String Result_Error__String_Char(String member0);

// Depth 500
Result__FILE_MUL__String Result_Error__String_FILE_MUL_(String member0);

// Depth 500
Result__String_String Result_Error__String_String(String member0);

// Depth 500
Result__bool_String Result_Error__String_bool(String member0);

// Depth 500
Result__Array__Uint16_int Result_Error__int_Array__Uint16(int member0);

// Depth 500
Result__Array__Uint32_int Result_Error__int_Array__Uint32(int member0);

// Depth 500
Result__Array__Uint64_int Result_Error__int_Array__Uint64(int member0);

// Depth 500
Result__Array__Uint16_int Result_Success__Array__Uint16_int(Array__Uint16 member0);

// Depth 500
Result__Array__Uint32_int Result_Success__Array__Uint32_int(Array__Uint32 member0);

// Depth 500
Result__Array__Uint64_int Result_Success__Array__Uint64_int(Array__Uint64 member0);

// Depth 500
Result__Char_String Result_Success__Char_String(Char member0);

// Depth 500
Result__FILE_MUL__String Result_Success__FILE_MUL__String(FILE* member0);

// Depth 500
Result__String_String Result_Success__String_String(String member0);

// Depth 500
Result__Uint16_Array__uint8_t Result_Success__Uint16_Array__uint8_t(Uint16 member0);

// Depth 500
Result__Uint32_Array__uint8_t Result_Success__Uint32_Array__uint8_t(Uint32 member0);

// Depth 500
Result__Uint64_Array__uint8_t Result_Success__Uint64_Array__uint8_t(Uint64 member0);

// Depth 500
Result__bool_String Result_Success__bool_String(bool member0);

// Depth 500
Result__Uint16_Array__uint8_t Result_copy__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* pRef);

// Depth 500
Result__Uint32_Array__uint8_t Result_copy__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* pRef);

// Depth 500
Result__Uint64_Array__uint8_t Result_copy__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* pRef);

// Depth 500
void Result_delete__Array__Uint16_int(Result__Array__Uint16_int p);

// Depth 500
void Result_delete__Array__Uint32_int(Result__Array__Uint32_int p);

// Depth 500
void Result_delete__Array__Uint64_int(Result__Array__Uint64_int p);

// Depth 500
void Result_delete__Char_String(Result__Char_String p);

// Depth 500
void Result_delete__FILE_MUL__String(Result__FILE_MUL__String p);

// Depth 500
void Result_delete__String_String(Result__String_String p);

// Depth 500
void Result_delete__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t p);

// Depth 500
void Result_delete__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t p);

// Depth 500
void Result_delete__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t p);

// Depth 500
void Result_delete__bool_String(Result__bool_String p);

// Depth 500
bool Result_error_QMARK___FILE_MUL__String(Result__FILE_MUL__String* a);

// Depth 500
bool Result_error_QMARK___Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* a);

// Depth 500
bool Result_error_QMARK___Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* a);

// Depth 500
bool Result_error_QMARK___Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* a);

// Depth 500
Array__uint8_t Result_from_MINUS_error__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t a, Array__uint8_t dflt);

// Depth 500
Array__uint8_t Result_from_MINUS_error__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t a, Array__uint8_t dflt);

// Depth 500
Array__uint8_t Result_from_MINUS_error__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t a, Array__uint8_t dflt);

// Depth 500
bool Result_success_QMARK___Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* a);

// Depth 500
bool Result_success_QMARK___Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* a);

// Depth 500
bool Result_success_QMARK___Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* a);

// Depth 500
String Result_unsafe_MINUS_from_MINUS_error__FILE_MUL__String(Result__FILE_MUL__String a);

// Depth 500
FILE* Result_unsafe_MINUS_from_MINUS_success__FILE_MUL__String(Result__FILE_MUL__String a);

// Depth 500
Uint16 Result_unwrap_MINUS_or_MINUS_zero__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t a);

// Depth 500
Uint32 Result_unwrap_MINUS_or_MINUS_zero__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t a);

// Depth 500
Uint64 Result_unwrap_MINUS_or_MINUS_zero__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t a);

// Depth 1000

// Depth 500
int Set_dflt_MINUS_len;

// Depth 500
int Set_max_MINUS_load;

// Depth 500
int Set_min_MINUS_load;

// Depth 1000

// Depth 500
uint8_t String__Lambda_ascii_MINUS_to_MINUS_lower_14_env(uint8_t c);

// Depth 500
uint8_t String__Lambda_ascii_MINUS_to_MINUS_upper_14_env(uint8_t c);

// Depth 500
bool String__Lambda_words_14_env(String* s);

// Depth 500
bool String_allocated_QMARK_(String* s);

// Depth 500
bool String_alpha_QMARK_(String* s);

// Depth 500
bool String_alphanum_QMARK_(String* s);

// Depth 500
String String_ascii_MINUS_to_MINUS_lower(String* s);

// Depth 500
String String_ascii_MINUS_to_MINUS_upper(String* s);

// Depth 500
String String_chomp(String* s);

// Depth 500
String String_collapse_MINUS_whitespace(String* s);

// Depth 500
String String_concat(Array__String* strings);

// Depth 500
bool String_contains_MINUS_string_QMARK_(String* s, String* needle);

// Depth 500
bool String_contains_QMARK_(String* s, Char c);

// Depth 500
int String_count_MINUS_char(String* s, Char c);

// Depth 500
bool String_empty_QMARK_(String* s);

// Depth 500
bool String_ends_MINUS_with_QMARK_(String* s, String* sub);

// Depth 500
int String_hash(String* k);

// Depth 500
Char String_head(String* s);

// Depth 500
bool String_hex_QMARK_(String* s);

// Depth 500
bool String_in_QMARK_(String* s, String* sub);

// Depth 500
int String_index_MINUS_of(String* s, Char c);

// Depth 500
int String_index_MINUS_of_MINUS_from(String* s, Char c, int i);

// Depth 500
String String_join(String* sep, Array__String* strings);

// Depth 500
String String_join_MINUS_with_MINUS_char(Char sep, Array__String* strings);

// Depth 500
Array__String String_lines(String* s);

// Depth 500
bool String_lower_QMARK_(String* s);

// Depth 500
bool String_num_QMARK_(String* s);

// Depth 500
String String_pad_MINUS_left(int len, Char pad, String* s);

// Depth 500
String String_pad_MINUS_right(int len, Char pad, String* s);

// Depth 500
String String_prefix(String* s, int a);

// Depth 500
String String_random_MINUS_sized(int n);

// Depth 500
String String_repeat(int n, String* inpt);

// Depth 500
String String_reverse(String* s);

// Depth 500
String String_slice(String* s, int a, int b);

// Depth 500
Array__String String_split_MINUS_by(String* s, Array__Char* separators);

// Depth 500
bool String_starts_MINUS_with_QMARK_(String* s, String* sub);

// Depth 500
String String_suffix(String* s, int b);

// Depth 500
int String_sum_MINUS_length(Array__String* strings);

// Depth 500
String String_trim(String* s);

// Depth 500
String String_trim_MINUS_left(String* s);

// Depth 500
String String_trim_MINUS_right(String* s);

// Depth 500
bool String_upper_QMARK_(String* s);

// Depth 500
Array__String String_words(String* s);

// Depth 500
String String_zero();

// Depth 1000

// Depth 500
bool StringCopy__LT_(String a, String b);

// Depth 500
bool StringCopy__EQ_(String a, String b);

// Depth 500
bool StringCopy__GT_(String a, String b);

// Depth 500
String StringCopy_prn(String s);

// Depth 500
String StringCopy_str(String s);

// Depth 1000

// Depth 500
String System_error_MINUS_text();

// Depth 500
String System_strerror(int error_MINUS_no);

// Depth 1000

// Depth 500
Uint16 Uint16_blit(Uint16 x);

// Depth 500
int Uint16_hash(Uint16* k);

// Depth 500
String Uint16_prn(Uint16 a);

// Depth 500
Uint16 Uint16_zero();

// Depth 1000

// Depth 500
bool Uint16Extra__EQ_(Uint16* a, Uint16* b);

// Depth 500
String Uint16Extra_prn(Uint16* a);

// Depth 500
String Uint16Extra_str(Uint16* a);

// Depth 1000

// Depth 500
Uint32 Uint32_blit(Uint32 x);

// Depth 500
int Uint32_hash(Uint32* k);

// Depth 500
String Uint32_prn(Uint32 a);

// Depth 500
Uint32 Uint32_zero();

// Depth 1000

// Depth 500
bool Uint32Extra__EQ_(Uint32* a, Uint32* b);

// Depth 500
String Uint32Extra_prn(Uint32* a);

// Depth 500
String Uint32Extra_str(Uint32* a);

// Depth 1000

// Depth 500
Uint64 Uint64_blit(Uint64 x);

// Depth 500
int Uint64_hash(Uint64* k);

// Depth 500
String Uint64_prn(Uint64 a);

// Depth 500
Uint64 Uint64_zero();

// Depth 1000

// Depth 500
bool Uint64Extra__EQ_(Uint64* a, Uint64* b);

// Depth 500
String Uint64Extra_prn(Uint64* a);

// Depth 500
String Uint64Extra_str(Uint64* a);

// Depth 1000

// Depth 500
Uint8 Uint8_blit(Uint8 x);

// Depth 500
int Uint8_hash(Uint8* k);

// Depth 500
String Uint8_prn(Uint8 a);

// Depth 500
Uint8 Uint8_zero();

// Depth 1000

// Depth 500
bool Uint8Extra__EQ_(Uint8* a, Uint8* b);

// Depth 500
String Uint8Extra_prn(Uint8* a);

// Depth 500
String Uint8Extra_str(Uint8* a);

// Depth 1000

// Depth 500
bool Unit__EQ_();

// Depth 500
void Unit_copy();

// Depth 500
String Unit_prn();

// Depth 500
void Unit_zero();

// Depth 1000

// Depth 500
bool UnitRef__EQ_();


//Init globals:
void carp_init_globals(int argc, char** argv) {
  System_args.len = argc;
  System_args.data = argv;
#if defined _WIN32
  SetConsoleOutputCP(CP_UTF8);
#endif
    // Depth 0
    {
        Double_pi = 3.141592653589793;
    }

    // Depth 0
    {
        Double_e = 2.718281828459045;
    }

    // Depth 0
    {
        Float_pi = 3.1415926536f;
    }

    // Depth 0
    {
        Map_min_MINUS_load = 20;
    }

    // Depth 0
    {
        Map_max_MINUS_load = 80;
    }

    // Depth 0
    {
        Map_dflt_MINUS_len = 16;
    }

    // Depth 0
    {
        Random_s = 1.938011e7;
    }

    // Depth 0
    {
        Random_m = 4.294967296e9;
    }

    // Depth 0
    {
        Random_c = 1.0;
    }

    // Depth 0
    {
        Random_a = 69069.0;
    }

    // Depth 0
    {
        Set_min_MINUS_load = 20;
    }

    // Depth 0
    {
        Set_max_MINUS_load = 80;
    }

    // Depth 0
    {
        Set_dflt_MINUS_len = 16;
    }

    // Depth 2
    {
        Random_seed();
        bool _6 = true;
        Random__ = _6;
    }
}

//Definitions:
bool _DIV__EQ___int(int a, int b) {
    bool _9 = Int__EQ_(a, b);
    bool _10 = not(_9);
    return _10;
}

bool _DIV__EQ___uint8_t(uint8_t a, uint8_t b) {
    bool _9 = Byte__EQ_(a, b);
    bool _10 = not(_9);
    return _10;
}

bool _LT__EQ___Char(Char a, Char b) {
    bool _19;
    bool _9 = Char__LT_(a, b);
    if (_9) {
        bool _12 = true;
        _19 = _12;
    } else {
        bool _17 = Char__EQ_(a, b);
        bool _18 = _17;
        _19 = _18;
    }
    return _19;
}

bool _LT__EQ___int(int a, int b) {
    bool _19;
    bool _9 = Int__LT_(a, b);
    if (_9) {
        bool _12 = true;
        _19 = _12;
    } else {
        bool _17 = Int__EQ_(a, b);
        bool _18 = _17;
        _19 = _18;
    }
    return _19;
}

bool _GT__EQ___int(int a, int b) {
    bool _19;
    bool _9 = Int__GT_(a, b);
    if (_9) {
        bool _12 = true;
        _19 = _12;
    } else {
        bool _17 = Int__EQ_(a, b);
        bool _18 = _17;
        _19 = _18;
    }
    return _19;
}

Array Array_allocate__Array__uint8_t (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Array__uint8_t));
    return a;
}

Array Array_allocate__Char (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Char));
    return a;
}

Array Array_allocate__Result__Uint16_Array__uint8_t (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Result__Uint16_Array__uint8_t));
    return a;
}

Array Array_allocate__Result__Uint32_Array__uint8_t (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Result__Uint32_Array__uint8_t));
    return a;
}

Array Array_allocate__Result__Uint64_Array__uint8_t (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Result__Uint64_Array__uint8_t));
    return a;
}

Array Array_allocate__String (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(String));
    return a;
}

Array Array_allocate__Uint16 (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Uint16));
    return a;
}

Array Array_allocate__Uint32 (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Uint32));
    return a;
}

Array Array_allocate__Uint64 (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Uint64));
    return a;
}

Array Array_allocate__int (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(int));
    return a;
}

Array Array_allocate__uint8_t (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(uint8_t));
    return a;
}

void Array_aset_BANG___Char (Array *aRef, int n, Char newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    /* Ignore non-managed type inside Array: 'Char' */

    ((Char*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Array__uint8_t (Array *aRef, int n, Array__uint8_t newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Array__uint8_t*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Char (Array *aRef, int n, Char newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Char*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Result__Uint16_Array__uint8_t (Array *aRef, int n, Result__Uint16_Array__uint8_t newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Result__Uint16_Array__uint8_t*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Result__Uint32_Array__uint8_t (Array *aRef, int n, Result__Uint32_Array__uint8_t newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Result__Uint32_Array__uint8_t*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Result__Uint64_Array__uint8_t (Array *aRef, int n, Result__Uint64_Array__uint8_t newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Result__Uint64_Array__uint8_t*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___String (Array *aRef, int n, String newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((String*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Uint16 (Array *aRef, int n, Uint16 newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Uint16*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Uint32 (Array *aRef, int n, Uint32 newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Uint32*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Uint64 (Array *aRef, int n, Uint64 newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Uint64*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___int (Array *aRef, int n, int newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((int*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___uint8_t (Array *aRef, int n, uint8_t newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((uint8_t*)a.data)[n] = newValue;
}

Array__Result__Uint16_Array__uint8_t Array_copy_MINUS_filter__Result__Uint16_Array__uint8_t(Lambda* f, Array__Result__Uint16_Array__uint8_t* a) {
    Array__Result__Uint16_Array__uint8_t _9 = Array_copy__Result__Uint16_Array__uint8_t(a);
    Array__Result__Uint16_Array__uint8_t _10 = Array_endo_MINUS_filter__Result__Uint16_Array__uint8_t(f, _9);
    return _10;
}

Array__Result__Uint32_Array__uint8_t Array_copy_MINUS_filter__Result__Uint32_Array__uint8_t(Lambda* f, Array__Result__Uint32_Array__uint8_t* a) {
    Array__Result__Uint32_Array__uint8_t _9 = Array_copy__Result__Uint32_Array__uint8_t(a);
    Array__Result__Uint32_Array__uint8_t _10 = Array_endo_MINUS_filter__Result__Uint32_Array__uint8_t(f, _9);
    return _10;
}

Array__Result__Uint64_Array__uint8_t Array_copy_MINUS_filter__Result__Uint64_Array__uint8_t(Lambda* f, Array__Result__Uint64_Array__uint8_t* a) {
    Array__Result__Uint64_Array__uint8_t _9 = Array_copy__Result__Uint64_Array__uint8_t(a);
    Array__Result__Uint64_Array__uint8_t _10 = Array_endo_MINUS_filter__Result__Uint64_Array__uint8_t(f, _9);
    return _10;
}

Array__Result__Uint16_Array__uint8_t Array_copy_MINUS_map__Array__uint8_t_Result__Uint16_Array__uint8_t(Lambda* f, Array__Array__uint8_t* a) {
    Array__Result__Uint16_Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Array__uint8_t(a);
        Array__Result__Uint16_Array__uint8_t _11 = Array_allocate__Result__Uint16_Array__uint8_t(_10);
        Array__Result__Uint16_Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Result__Uint16_Array__uint8_t* _29 = &na; // ref
                Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Array__uint8_t(a, i);
                Result__Uint16_Array__uint8_t _38 = (*f).env ? ((Result__Uint16_Array__uint8_t(*)(LambdaEnv, Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Result__Uint16_Array__uint8_t(*)(Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Result__Uint16_Array__uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Result__Uint16_Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Result__Uint32_Array__uint8_t Array_copy_MINUS_map__Array__uint8_t_Result__Uint32_Array__uint8_t(Lambda* f, Array__Array__uint8_t* a) {
    Array__Result__Uint32_Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Array__uint8_t(a);
        Array__Result__Uint32_Array__uint8_t _11 = Array_allocate__Result__Uint32_Array__uint8_t(_10);
        Array__Result__Uint32_Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Result__Uint32_Array__uint8_t* _29 = &na; // ref
                Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Array__uint8_t(a, i);
                Result__Uint32_Array__uint8_t _38 = (*f).env ? ((Result__Uint32_Array__uint8_t(*)(LambdaEnv, Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Result__Uint32_Array__uint8_t(*)(Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Result__Uint32_Array__uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Result__Uint32_Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Result__Uint64_Array__uint8_t Array_copy_MINUS_map__Array__uint8_t_Result__Uint64_Array__uint8_t(Lambda* f, Array__Array__uint8_t* a) {
    Array__Result__Uint64_Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Array__uint8_t(a);
        Array__Result__Uint64_Array__uint8_t _11 = Array_allocate__Result__Uint64_Array__uint8_t(_10);
        Array__Result__Uint64_Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Result__Uint64_Array__uint8_t* _29 = &na; // ref
                Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Array__uint8_t(a, i);
                Result__Uint64_Array__uint8_t _38 = (*f).env ? ((Result__Uint64_Array__uint8_t(*)(LambdaEnv, Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Result__Uint64_Array__uint8_t(*)(Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Result__Uint64_Array__uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Result__Uint64_Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Uint16 Array_copy_MINUS_map__Array__uint8_t_Uint16(Lambda* f, Array__Array__uint8_t* a) {
    Array__Uint16 _52;
    /* let */ {
        int _10 = Array_length__Array__uint8_t(a);
        Array__Uint16 _11 = Array_allocate__Uint16(_10);
        Array__Uint16 na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Uint16* _29 = &na; // ref
                Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Array__uint8_t(a, i);
                Uint16 _38 = (*f).env ? ((Uint16(*)(LambdaEnv, Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Uint16(*)(Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Uint16(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Uint16 _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Uint32 Array_copy_MINUS_map__Array__uint8_t_Uint32(Lambda* f, Array__Array__uint8_t* a) {
    Array__Uint32 _52;
    /* let */ {
        int _10 = Array_length__Array__uint8_t(a);
        Array__Uint32 _11 = Array_allocate__Uint32(_10);
        Array__Uint32 na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Uint32* _29 = &na; // ref
                Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Array__uint8_t(a, i);
                Uint32 _38 = (*f).env ? ((Uint32(*)(LambdaEnv, Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Uint32(*)(Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Uint32(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Uint32 _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Uint64 Array_copy_MINUS_map__Array__uint8_t_Uint64(Lambda* f, Array__Array__uint8_t* a) {
    Array__Uint64 _52;
    /* let */ {
        int _10 = Array_length__Array__uint8_t(a);
        Array__Uint64 _11 = Array_allocate__Uint64(_10);
        Array__Uint64 na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Uint64* _29 = &na; // ref
                Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Array__uint8_t(a, i);
                Uint64 _38 = (*f).env ? ((Uint64(*)(LambdaEnv, Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Uint64(*)(Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Uint64(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Uint64 _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__int Array_copy_MINUS_map__Array__uint8_t_int(Lambda* f, Array__Array__uint8_t* a) {
    Array__int _52;
    /* let */ {
        int _10 = Array_length__Array__uint8_t(a);
        Array__int _11 = Array_allocate__int(_10);
        Array__int na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__int* _29 = &na; // ref
                Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Array__uint8_t(a, i);
                int _38 = (*f).env ? ((int(*)(LambdaEnv, Array__uint8_t*))(*f).callback)((*f).env, _37) : ((int(*)(Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___int(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__int _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__String Array_copy_MINUS_map__PatternMatchResult_String(Lambda* f, Array__PatternMatchResult* a) {
    Array__String _52;
    /* let */ {
        int _10 = Array_length__PatternMatchResult(a);
        Array__String _11 = Array_allocate__String(_10);
        Array__String na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__PatternMatchResult(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__String* _29 = &na; // ref
                PatternMatchResult* _37 = Array_unsafe_MINUS_nth__PatternMatchResult(a, i);
                String _38 = (*f).env ? ((String(*)(LambdaEnv, PatternMatchResult*))(*f).callback)((*f).env, _37) : ((String(*)(PatternMatchResult*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___String(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__PatternMatchResult(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__String _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__int Array_copy_MINUS_map__PatternMatchResult_int(Lambda* f, Array__PatternMatchResult* a) {
    Array__int _52;
    /* let */ {
        int _10 = Array_length__PatternMatchResult(a);
        Array__int _11 = Array_allocate__int(_10);
        Array__int na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__PatternMatchResult(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__int* _29 = &na; // ref
                PatternMatchResult* _37 = Array_unsafe_MINUS_nth__PatternMatchResult(a, i);
                int _38 = (*f).env ? ((int(*)(LambdaEnv, PatternMatchResult*))(*f).callback)((*f).env, _37) : ((int(*)(PatternMatchResult*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___int(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__PatternMatchResult(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__int _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Array__uint8_t Array_copy_MINUS_map__Result__Uint16_Array__uint8_t_Array__uint8_t(Lambda* f, Array__Result__Uint16_Array__uint8_t* a) {
    Array__Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Result__Uint16_Array__uint8_t(a);
        Array__Array__uint8_t _11 = Array_allocate__Array__uint8_t(_10);
        Array__Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Result__Uint16_Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Array__uint8_t* _29 = &na; // ref
                Result__Uint16_Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Result__Uint16_Array__uint8_t(a, i);
                Array__uint8_t _38 = (*f).env ? ((Array__uint8_t(*)(LambdaEnv, Result__Uint16_Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Array__uint8_t(*)(Result__Uint16_Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Array__uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Result__Uint16_Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Uint16 Array_copy_MINUS_map__Result__Uint16_Array__uint8_t_Uint16(Lambda* f, Array__Result__Uint16_Array__uint8_t* a) {
    Array__Uint16 _52;
    /* let */ {
        int _10 = Array_length__Result__Uint16_Array__uint8_t(a);
        Array__Uint16 _11 = Array_allocate__Uint16(_10);
        Array__Uint16 na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Result__Uint16_Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Uint16* _29 = &na; // ref
                Result__Uint16_Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Result__Uint16_Array__uint8_t(a, i);
                Uint16 _38 = (*f).env ? ((Uint16(*)(LambdaEnv, Result__Uint16_Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Uint16(*)(Result__Uint16_Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Uint16(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Result__Uint16_Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Uint16 _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Array__uint8_t Array_copy_MINUS_map__Result__Uint32_Array__uint8_t_Array__uint8_t(Lambda* f, Array__Result__Uint32_Array__uint8_t* a) {
    Array__Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Result__Uint32_Array__uint8_t(a);
        Array__Array__uint8_t _11 = Array_allocate__Array__uint8_t(_10);
        Array__Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Result__Uint32_Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Array__uint8_t* _29 = &na; // ref
                Result__Uint32_Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Result__Uint32_Array__uint8_t(a, i);
                Array__uint8_t _38 = (*f).env ? ((Array__uint8_t(*)(LambdaEnv, Result__Uint32_Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Array__uint8_t(*)(Result__Uint32_Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Array__uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Result__Uint32_Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Uint32 Array_copy_MINUS_map__Result__Uint32_Array__uint8_t_Uint32(Lambda* f, Array__Result__Uint32_Array__uint8_t* a) {
    Array__Uint32 _52;
    /* let */ {
        int _10 = Array_length__Result__Uint32_Array__uint8_t(a);
        Array__Uint32 _11 = Array_allocate__Uint32(_10);
        Array__Uint32 na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Result__Uint32_Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Uint32* _29 = &na; // ref
                Result__Uint32_Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Result__Uint32_Array__uint8_t(a, i);
                Uint32 _38 = (*f).env ? ((Uint32(*)(LambdaEnv, Result__Uint32_Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Uint32(*)(Result__Uint32_Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Uint32(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Result__Uint32_Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Uint32 _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Array__uint8_t Array_copy_MINUS_map__Result__Uint64_Array__uint8_t_Array__uint8_t(Lambda* f, Array__Result__Uint64_Array__uint8_t* a) {
    Array__Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Result__Uint64_Array__uint8_t(a);
        Array__Array__uint8_t _11 = Array_allocate__Array__uint8_t(_10);
        Array__Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Result__Uint64_Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Array__uint8_t* _29 = &na; // ref
                Result__Uint64_Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Result__Uint64_Array__uint8_t(a, i);
                Array__uint8_t _38 = (*f).env ? ((Array__uint8_t(*)(LambdaEnv, Result__Uint64_Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Array__uint8_t(*)(Result__Uint64_Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Array__uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Result__Uint64_Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Uint64 Array_copy_MINUS_map__Result__Uint64_Array__uint8_t_Uint64(Lambda* f, Array__Result__Uint64_Array__uint8_t* a) {
    Array__Uint64 _52;
    /* let */ {
        int _10 = Array_length__Result__Uint64_Array__uint8_t(a);
        Array__Uint64 _11 = Array_allocate__Uint64(_10);
        Array__Uint64 na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Result__Uint64_Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Uint64* _29 = &na; // ref
                Result__Uint64_Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Result__Uint64_Array__uint8_t(a, i);
                Uint64 _38 = (*f).env ? ((Uint64(*)(LambdaEnv, Result__Uint64_Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Uint64(*)(Result__Uint64_Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Uint64(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Result__Uint64_Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Uint64 _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Array__uint8_t Array_copy_MINUS_map__Uint16_Array__uint8_t(Lambda* f, Array__Uint16* a) {
    Array__Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Uint16(a);
        Array__Array__uint8_t _11 = Array_allocate__Array__uint8_t(_10);
        Array__Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Uint16(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Array__uint8_t* _29 = &na; // ref
                Uint16* _37 = Array_unsafe_MINUS_nth__Uint16(a, i);
                Array__uint8_t _38 = (*f).env ? ((Array__uint8_t(*)(LambdaEnv, Uint16*))(*f).callback)((*f).env, _37) : ((Array__uint8_t(*)(Uint16*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Array__uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Uint16(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__uint8_t Array_copy_MINUS_map__Uint16_uint8_t(Lambda* f, Array__Uint16* a) {
    Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Uint16(a);
        Array__uint8_t _11 = Array_allocate__uint8_t(_10);
        Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Uint16(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__uint8_t* _29 = &na; // ref
                Uint16* _37 = Array_unsafe_MINUS_nth__Uint16(a, i);
                uint8_t _38 = (*f).env ? ((uint8_t(*)(LambdaEnv, Uint16*))(*f).callback)((*f).env, _37) : ((uint8_t(*)(Uint16*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Uint16(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Array__uint8_t Array_copy_MINUS_map__Uint32_Array__uint8_t(Lambda* f, Array__Uint32* a) {
    Array__Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Uint32(a);
        Array__Array__uint8_t _11 = Array_allocate__Array__uint8_t(_10);
        Array__Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Uint32(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Array__uint8_t* _29 = &na; // ref
                Uint32* _37 = Array_unsafe_MINUS_nth__Uint32(a, i);
                Array__uint8_t _38 = (*f).env ? ((Array__uint8_t(*)(LambdaEnv, Uint32*))(*f).callback)((*f).env, _37) : ((Array__uint8_t(*)(Uint32*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Array__uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Uint32(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__uint8_t Array_copy_MINUS_map__Uint32_uint8_t(Lambda* f, Array__Uint32* a) {
    Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Uint32(a);
        Array__uint8_t _11 = Array_allocate__uint8_t(_10);
        Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Uint32(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__uint8_t* _29 = &na; // ref
                Uint32* _37 = Array_unsafe_MINUS_nth__Uint32(a, i);
                uint8_t _38 = (*f).env ? ((uint8_t(*)(LambdaEnv, Uint32*))(*f).callback)((*f).env, _37) : ((uint8_t(*)(Uint32*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Uint32(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Array__uint8_t Array_copy_MINUS_map__Uint64_Array__uint8_t(Lambda* f, Array__Uint64* a) {
    Array__Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Uint64(a);
        Array__Array__uint8_t _11 = Array_allocate__Array__uint8_t(_10);
        Array__Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Uint64(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Array__uint8_t* _29 = &na; // ref
                Uint64* _37 = Array_unsafe_MINUS_nth__Uint64(a, i);
                Array__uint8_t _38 = (*f).env ? ((Array__uint8_t(*)(LambdaEnv, Uint64*))(*f).callback)((*f).env, _37) : ((Array__uint8_t(*)(Uint64*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Array__uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Uint64(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__uint8_t Array_copy_MINUS_map__Uint64_uint8_t(Lambda* f, Array__Uint64* a) {
    Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Uint64(a);
        Array__uint8_t _11 = Array_allocate__uint8_t(_10);
        Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Uint64(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__uint8_t* _29 = &na; // ref
                Uint64* _37 = Array_unsafe_MINUS_nth__Uint64(a, i);
                uint8_t _38 = (*f).env ? ((uint8_t(*)(LambdaEnv, Uint64*))(*f).callback)((*f).env, _37) : ((uint8_t(*)(Uint64*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Uint64(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__String Array_copy_MINUS_map__uint8_t_String(Lambda* f, Array__uint8_t* a) {
    Array__String _52;
    /* let */ {
        int _10 = Array_length__uint8_t(a);
        Array__String _11 = Array_allocate__String(_10);
        Array__String na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__String* _29 = &na; // ref
                uint8_t* _37 = Array_unsafe_MINUS_nth__uint8_t(a, i);
                String _38 = (*f).env ? ((String(*)(LambdaEnv, uint8_t*))(*f).callback)((*f).env, _37) : ((String(*)(uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___String(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__String _51 = na;
        _52 = _51;
    }
    return _52;
}

Array Array_copy__Result__Uint16_Array__uint8_t (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(Result__Uint16_Array__uint8_t) * a->capacity);
    for(int i = 0; i < a->len; i++) {
        ((Result__Uint16_Array__uint8_t*)(copy.data))[i] = Result_copy__Uint16_Array__uint8_t(&(((Result__Uint16_Array__uint8_t*)a->data)[i]));
    }
    return copy;
}

Array Array_copy__Result__Uint32_Array__uint8_t (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(Result__Uint32_Array__uint8_t) * a->capacity);
    for(int i = 0; i < a->len; i++) {
        ((Result__Uint32_Array__uint8_t*)(copy.data))[i] = Result_copy__Uint32_Array__uint8_t(&(((Result__Uint32_Array__uint8_t*)a->data)[i]));
    }
    return copy;
}

Array Array_copy__Result__Uint64_Array__uint8_t (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(Result__Uint64_Array__uint8_t) * a->capacity);
    for(int i = 0; i < a->len; i++) {
        ((Result__Uint64_Array__uint8_t*)(copy.data))[i] = Result_copy__Uint64_Array__uint8_t(&(((Result__Uint64_Array__uint8_t*)a->data)[i]));
    }
    return copy;
}

Array Array_copy__Uint16 (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(Uint16) * a->capacity);
    memcpy(copy.data, a->data, sizeof(Uint16) * a->len);
    return copy;
}

Array Array_copy__Uint32 (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(Uint32) * a->capacity);
    memcpy(copy.data, a->data, sizeof(Uint32) * a->len);
    return copy;
}

Array Array_copy__Uint64 (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(Uint64) * a->capacity);
    memcpy(copy.data, a->data, sizeof(Uint64) * a->len);
    return copy;
}

Array Array_copy__uint8_t (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(uint8_t) * a->capacity);
    memcpy(copy.data, a->data, sizeof(uint8_t) * a->len);
    return copy;
}

void Array_delete__Array__uint8_t (Array a){
    for(int i = 0; i < a.len; i++) {
        Array_delete__uint8_t(((Array__uint8_t*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__Char (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Char' */
    }
    CARP_FREE(a.data);
}

void Array_delete__PatternMatchResult (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Pattern.MatchResult' */
    }
    CARP_FREE(a.data);
}

void Array_delete__Result__Uint16_Array__uint8_t (Array a){
    for(int i = 0; i < a.len; i++) {
        Result_delete__Uint16_Array__uint8_t(((Result__Uint16_Array__uint8_t*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__Result__Uint32_Array__uint8_t (Array a){
    for(int i = 0; i < a.len; i++) {
        Result_delete__Uint32_Array__uint8_t(((Result__Uint32_Array__uint8_t*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__Result__Uint64_Array__uint8_t (Array a){
    for(int i = 0; i < a.len; i++) {
        Result_delete__Uint64_Array__uint8_t(((Result__Uint64_Array__uint8_t*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__String (Array a){
    for(int i = 0; i < a.len; i++) {
        String_delete(((String*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__Uint16 (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Uint16' */
    }
    CARP_FREE(a.data);
}

void Array_delete__Uint32 (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Uint32' */
    }
    CARP_FREE(a.data);
}

void Array_delete__Uint64 (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Uint64' */
    }
    CARP_FREE(a.data);
}

void Array_delete__int (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Int' */
    }
    CARP_FREE(a.data);
}

void Array_delete__uint8_t (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Byte' */
    }
    CARP_FREE(a.data);
}

Array Array_endo_MINUS_filter__Result__Uint16_Array__uint8_t(Lambda *predicate, Array a) { 
    int insertIndex = 0;
    for(int i = 0; i < a.len; ++i) {
        if((*predicate).env ? ((Fn__LambdaEnv_Result__Uint16_Array__uint8_t_MUL__bool)(*predicate).callback)((*predicate).env, &(((Result__Uint16_Array__uint8_t*)a.data)[i])) : ((Fn__Result__Uint16_Array__uint8_t_MUL__bool)(*predicate).callback)(&(((Result__Uint16_Array__uint8_t*)a.data)[i]))) {
            (((Result__Uint16_Array__uint8_t*)a.data)[insertIndex++]) = ((Result__Uint16_Array__uint8_t*)a.data)[i];
        } else {
            Result_delete__Uint16_Array__uint8_t(((Result__Uint16_Array__uint8_t*)a.data)[i]);

        }
    }
    a.len = insertIndex;
    if(a.len < (a.capacity / 4)) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(Result__Uint16_Array__uint8_t) * a .capacity);
    }

    return a;
}

Array Array_endo_MINUS_filter__Result__Uint32_Array__uint8_t(Lambda *predicate, Array a) { 
    int insertIndex = 0;
    for(int i = 0; i < a.len; ++i) {
        if((*predicate).env ? ((Fn__LambdaEnv_Result__Uint32_Array__uint8_t_MUL__bool)(*predicate).callback)((*predicate).env, &(((Result__Uint32_Array__uint8_t*)a.data)[i])) : ((Fn__Result__Uint32_Array__uint8_t_MUL__bool)(*predicate).callback)(&(((Result__Uint32_Array__uint8_t*)a.data)[i]))) {
            (((Result__Uint32_Array__uint8_t*)a.data)[insertIndex++]) = ((Result__Uint32_Array__uint8_t*)a.data)[i];
        } else {
            Result_delete__Uint32_Array__uint8_t(((Result__Uint32_Array__uint8_t*)a.data)[i]);

        }
    }
    a.len = insertIndex;
    if(a.len < (a.capacity / 4)) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(Result__Uint32_Array__uint8_t) * a .capacity);
    }

    return a;
}

Array Array_endo_MINUS_filter__Result__Uint64_Array__uint8_t(Lambda *predicate, Array a) { 
    int insertIndex = 0;
    for(int i = 0; i < a.len; ++i) {
        if((*predicate).env ? ((Fn__LambdaEnv_Result__Uint64_Array__uint8_t_MUL__bool)(*predicate).callback)((*predicate).env, &(((Result__Uint64_Array__uint8_t*)a.data)[i])) : ((Fn__Result__Uint64_Array__uint8_t_MUL__bool)(*predicate).callback)(&(((Result__Uint64_Array__uint8_t*)a.data)[i]))) {
            (((Result__Uint64_Array__uint8_t*)a.data)[insertIndex++]) = ((Result__Uint64_Array__uint8_t*)a.data)[i];
        } else {
            Result_delete__Uint64_Array__uint8_t(((Result__Uint64_Array__uint8_t*)a.data)[i]);

        }
    }
    a.len = insertIndex;
    if(a.len < (a.capacity / 4)) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(Result__Uint64_Array__uint8_t) * a .capacity);
    }

    return a;
}

Array Array_endo_MINUS_filter__String(Lambda *predicate, Array a) { 
    int insertIndex = 0;
    for(int i = 0; i < a.len; ++i) {
        if((*predicate).env ? ((Fn__LambdaEnv_String_MUL__bool)(*predicate).callback)((*predicate).env, &(((String*)a.data)[i])) : ((Fn__String_MUL__bool)(*predicate).callback)(&(((String*)a.data)[i]))) {
            (((String*)a.data)[insertIndex++]) = ((String*)a.data)[i];
        } else {
            String_delete(((String*)a.data)[i]);

        }
    }
    a.len = insertIndex;
    if(a.len < (a.capacity / 4)) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(String) * a .capacity);
    }

    return a;
}

Array Array_endo_MINUS_map__uint8_t(Lambda *f, Array a) { 
    for(int i = 0; i < a.len; ++i) {
        ((uint8_t*)a.data)[i] = (*f).env ? ((Fn__LambdaEnv_uint8_t_uint8_t)(*f).callback)((*f).env, (((uint8_t*)a.data)[i])) : ((Fn__uint8_t_uint8_t)(*f).callback)((((uint8_t*)a.data)[i]));
    }
    return a;
}

int Array_length__Array__uint8_t (Array *a) { return (*a).len; }
int Array_length__Char (Array *a) { return (*a).len; }
int Array_length__PatternMatchResult (Array *a) { return (*a).len; }
int Array_length__Result__Uint16_Array__uint8_t (Array *a) { return (*a).len; }
int Array_length__Result__Uint32_Array__uint8_t (Array *a) { return (*a).len; }
int Array_length__Result__Uint64_Array__uint8_t (Array *a) { return (*a).len; }
int Array_length__String (Array *a) { return (*a).len; }
int Array_length__Uint16 (Array *a) { return (*a).len; }
int Array_length__Uint32 (Array *a) { return (*a).len; }
int Array_length__Uint64 (Array *a) { return (*a).len; }
int Array_length__int (Array *a) { return (*a).len; }
int Array_length__uint8_t (Array *a) { return (*a).len; }
Maybe__uint8_t Array_nth__uint8_t(Array__uint8_t* xs, int index) {
    Maybe__uint8_t _37;
    bool _22;
    bool _10 = _GT__EQ___int(index, 0);
    if (_10) {
        int _16 = Array_length__uint8_t(xs);
        bool _17 = Int__LT_(index, _16);
        bool _18 = _17;
        _22 = _18;
    } else {
        bool _21 = false;
        _22 = _21;
    }
    if (_22) {
        uint8_t* _29 = Array_unsafe_MINUS_nth__uint8_t(xs, index);
        uint8_t _30 = Byte_copy(_29);
        Maybe__uint8_t _31 = Maybe_Just__uint8_t(_30);
        Maybe__uint8_t _32 = _31;
        _37 = _32;
    } else {
        Maybe__uint8_t _35 = Maybe_Nothing__uint8_t();
        Maybe__uint8_t _36 = _35;
        _37 = _36;
    }
    return _37;
}

Array__Array__uint8_t Array_partition__uint8_t(Array__uint8_t* arr, int n) {
    Array__Array__uint8_t _67;
    /* let */ {
        int x = 0;
        int y = 0;
        Array _11 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(Array__uint8_t) * 0) };
        Array__Array__uint8_t a = _11;
        int _19 = Array_length__uint8_t(arr);
        bool _20 = Int__LT_(x, _19);
        bool _64 = _20;
        while (_64) {
            int _27 = Int__PLUS_(x, n);
            y = _27;  // Int = Int
            int _34 = Array_length__uint8_t(arr);
            bool _35 = Int__GT_(y, _34);
            if (_35) {
                int _41 = Array_length__uint8_t(arr);
                y = _41;  // Int = Int
            } else {
                /* () */
            }
            Array__uint8_t _56 = Array_slice__uint8_t(arr, x, y);
            Array__Array__uint8_t _57 = Array_push_MINUS_back__Array__uint8_t(a, _56);
            a = _57;  // (Array (Array Byte)) = (Array (Array Byte))
            x = y;  // Int = Int
            int _19 = Array_length__uint8_t(arr);
            bool _20 = Int__LT_(x, _19);
            _64 = _20;
        }
        Array__Array__uint8_t _66 = a;
        _67 = _66;
    }
    return _67;
}

Array__Char Array_prefix__Array__Char(Array__Char* xs, int end_MINUS_index) {
    Array__Char _9 = Array_slice__Char(xs, 0, end_MINUS_index);
    return _9;
}

Array Array_push_MINUS_back__Array__uint8_t(Array a, Array__uint8_t value) { 
    a.len++;
    if(a.len > a.capacity) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(Array__uint8_t) * a.capacity);
    }
    ((Array__uint8_t*)a.data)[a.len - 1] = value;
    return a;
}

Array Array_push_MINUS_back__Char(Array a, Char value) { 
    a.len++;
    if(a.len > a.capacity) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(Char) * a.capacity);
    }
    ((Char*)a.data)[a.len - 1] = value;
    return a;
}

Array Array_push_MINUS_back__PatternMatchResult(Array a, PatternMatchResult value) { 
    a.len++;
    if(a.len > a.capacity) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(PatternMatchResult) * a.capacity);
    }
    ((PatternMatchResult*)a.data)[a.len - 1] = value;
    return a;
}

Array Array_push_MINUS_back__String(Array a, String value) { 
    a.len++;
    if(a.len > a.capacity) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(String) * a.capacity);
    }
    ((String*)a.data)[a.len - 1] = value;
    return a;
}

Array Array_push_MINUS_back__uint8_t(Array a, uint8_t value) { 
    a.len++;
    if(a.len > a.capacity) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(uint8_t) * a.capacity);
    }
    ((uint8_t*)a.data)[a.len - 1] = value;
    return a;
}

int Array_reduce__int_int(Lambda* f, int x, Array__int* xs) {
    int _47;
    /* let */ {
        int total = x;
        /* let */ {
            int i = 0;
            int _20 = Array_length__int(xs);
            bool _1000008 = Int__LT_(i, _20);
            bool _1000006 = _1000008;
            while (_1000006) {
                int* _32 = Array_unsafe_MINUS_nth__int(xs, i);
                int _33 = (*f).env ? ((int(*)(LambdaEnv, int, int*))(*f).callback)((*f).env, total, _32) : ((int(*)(int, int*))(*f).callback)(total, _32);
                total = _33;  // Int = Int
                int _1000014 = Int__PLUS_(i, 1);
                i = _1000014;  // Int = Int
                int _20 = Array_length__int(xs);
                bool _1000008 = Int__LT_(i, _20);
                _1000006 = _1000008;
            }
        }
        int _46 = total;
        _47 = _46;
    }
    return _47;
}

Array__Char Array_repeat__Char(int n, Lambda* f) {
    Array__Char _44;
    /* let */ {
        Array__Char _9 = Array_allocate__Char(n);
        Array__Char a = _9;
        /* let */ {
            int i = 0;
            bool _1000008 = Int__LT_(i, n);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Char* _25 = &a; // ref
                Char _30 = (*f).env ? ((Char(*)(LambdaEnv))(*f).callback)((*f).env) : ((Char(*)())(*f).callback)();
                Array_aset_MINUS_uninitialized_BANG___Char(_25, i, _30);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                bool _1000008 = Int__LT_(i, n);
                _1000006 = _1000008;
            }
        }
        Array__Char _43 = a;
        _44 = _43;
    }
    return _44;
}

Array__Char Array_replicate__Char(int n, Char* e) {
    Array__Char _43;
    /* let */ {
        Array__Char _9 = Array_allocate__Char(n);
        Array__Char a = _9;
        /* let */ {
            int i = 0;
            bool _1000008 = Int__LT_(i, n);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Char* _25 = &a; // ref
                Char _29 = Char_copy(e);
                Array_aset_MINUS_uninitialized_BANG___Char(_25, i, _29);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                bool _1000008 = Int__LT_(i, n);
                _1000006 = _1000008;
            }
        }
        Array__Char _42 = a;
        _43 = _42;
    }
    return _43;
}

Array__Char Array_reverse__Char(Array__Char a) {
    Array__Char _72;
    /* let */ {
        int i = 0;
        Array__Char* _12 = &a; // ref
        int _13 = Array_length__Char(_12);
        int _14 = Int_dec(_13);
        int j = _14;
        bool _21 = Int__LT_(i, j);
        bool _69 = _21;
        while (_69) {
            /* let */ {
                Array__Char* _28 = &a; // ref
                Char* _30 = Array_unsafe_MINUS_nth__Char(_28, i);
                Char _31 = Char_copy(_30);
                Char tmp = _31;
                Array__Char* _37 = &a; // ref
                Array__Char* _43 = &a; // ref
                Char* _45 = Array_unsafe_MINUS_nth__Char(_43, j);
                Char _46 = Char_copy(_45);
                Array_aset_BANG___Char(_37, i, _46);
                int _52 = Int_inc(i);
                i = _52;  // Int = Int
                Array__Char* _57 = &a; // ref
                Array_aset_BANG___Char(_57, j, tmp);
                int _65 = Int_dec(j);
                j = _65;  // Int = Int
            }
            bool _21 = Int__LT_(i, j);
            _69 = _21;
        }
        Array__Char _71 = a;
        _72 = _71;
    }
    return _72;
}

Array__Char Array_slice__Char(Array__Char* xs, int start_MINUS_index, int end_MINUS_index) {
    Array__Char _45;
    /* let */ {
        Array _8 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(Char) * 0) };
        Array__Char result = _8;
        /* let */ {
            int i = start_MINUS_index;
            bool _1000008 = Int__LT_(i, end_MINUS_index);
            bool _1000006 = _1000008;
            while (_1000006) {
                Char* _29 = Array_unsafe_MINUS_nth__Char(xs, i);
                Char _30 = Char_copy(_29);
                Array__Char _31 = Array_push_MINUS_back__Char(result, _30);
                result = _31;  // (Array Char) = (Array Char)
                int _1000014 = Int__PLUS_(i, 1);
                i = _1000014;  // Int = Int
                bool _1000008 = Int__LT_(i, end_MINUS_index);
                _1000006 = _1000008;
            }
        }
        Array__Char _44 = result;
        _45 = _44;
    }
    return _45;
}

Array__uint8_t Array_slice__uint8_t(Array__uint8_t* xs, int start_MINUS_index, int end_MINUS_index) {
    Array__uint8_t _45;
    /* let */ {
        Array _8 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(uint8_t) * 0) };
        Array__uint8_t result = _8;
        /* let */ {
            int i = start_MINUS_index;
            bool _1000008 = Int__LT_(i, end_MINUS_index);
            bool _1000006 = _1000008;
            while (_1000006) {
                uint8_t* _29 = Array_unsafe_MINUS_nth__uint8_t(xs, i);
                uint8_t _30 = Byte_copy(_29);
                Array__uint8_t _31 = Array_push_MINUS_back__uint8_t(result, _30);
                result = _31;  // (Array Byte) = (Array Byte)
                int _1000014 = Int__PLUS_(i, 1);
                i = _1000014;  // Int = Int
                bool _1000008 = Int__LT_(i, end_MINUS_index);
                _1000006 = _1000008;
            }
        }
        Array__uint8_t _44 = result;
        _45 = _44;
    }
    return _45;
}

Array__Char Array_suffix__Char(Array__Char* xs, int start_MINUS_index) {
    int _10 = Array_length__Char(xs);
    Array__Char _11 = Array_slice__Char(xs, start_MINUS_index, _10);
    return _11;
}

Array__uint8_t* Array_unsafe_MINUS_nth__Array__uint8_t (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Array__uint8_t*)a.data)[n]);
}

Char* Array_unsafe_MINUS_nth__Char (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Char*)a.data)[n]);
}

PatternMatchResult* Array_unsafe_MINUS_nth__PatternMatchResult (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((PatternMatchResult*)a.data)[n]);
}

Result__Uint16_Array__uint8_t* Array_unsafe_MINUS_nth__Result__Uint16_Array__uint8_t (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Result__Uint16_Array__uint8_t*)a.data)[n]);
}

Result__Uint32_Array__uint8_t* Array_unsafe_MINUS_nth__Result__Uint32_Array__uint8_t (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Result__Uint32_Array__uint8_t*)a.data)[n]);
}

Result__Uint64_Array__uint8_t* Array_unsafe_MINUS_nth__Result__Uint64_Array__uint8_t (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Result__Uint64_Array__uint8_t*)a.data)[n]);
}

String* Array_unsafe_MINUS_nth__String (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((String*)a.data)[n]);
}

Uint16* Array_unsafe_MINUS_nth__Uint16 (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Uint16*)a.data)[n]);
}

Uint32* Array_unsafe_MINUS_nth__Uint32 (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Uint32*)a.data)[n]);
}

Uint64* Array_unsafe_MINUS_nth__Uint64 (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Uint64*)a.data)[n]);
}

int* Array_unsafe_MINUS_nth__int (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((int*)a.data)[n]);
}

uint8_t* Array_unsafe_MINUS_nth__uint8_t (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((uint8_t*)a.data)[n]);
}

Array__uint8_t Array_zero__uint8_t() {
    Array _3 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(uint8_t) * 0) };
    return _3;
}

Result__Uint16_Array__uint8_t Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* _env, Array__uint8_t* bs) {
    Maybe__Uint16 _14 = (*_env->f).env ? ((Maybe__Uint16(*)(LambdaEnv, ByteOrder, Array__uint8_t*))(*_env->f).callback)((*_env->f).env, _env->order, bs) : ((Maybe__Uint16(*)(ByteOrder, Array__uint8_t*))(*_env->f).callback)(_env->order, bs);
    Result__Uint16_Array__uint8_t _28;
    if(_14._tag == Maybe__Uint16_Nothing_tag) {
        Maybe__Uint16 _14_temp = _14;
        // Case expr:
        Array__uint8_t _20 = Array_copy__uint8_t(bs);
        Result__Uint16_Array__uint8_t _21 = Result_Error__Array__uint8_t_Uint16(_20);
        _28 = _21;
    }
    else if(_14._tag == Maybe__Uint16_Just_tag) {
        Maybe__Uint16 _14_temp = _14;
        Uint16 i = _14_temp.u.Just.member0;
        // Case expr:
        Result__Uint16_Array__uint8_t _27 = Result_Success__Uint16_Array__uint8_t(i);
        _28 = _27;
    }
    else UNHANDLED("Binary.carp", 61);
    return _28;
}

Result__Uint32_Array__uint8_t Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* _env, Array__uint8_t* bs) {
    Maybe__Uint32 _14 = (*_env->f).env ? ((Maybe__Uint32(*)(LambdaEnv, ByteOrder, Array__uint8_t*))(*_env->f).callback)((*_env->f).env, _env->order, bs) : ((Maybe__Uint32(*)(ByteOrder, Array__uint8_t*))(*_env->f).callback)(_env->order, bs);
    Result__Uint32_Array__uint8_t _28;
    if(_14._tag == Maybe__Uint32_Nothing_tag) {
        Maybe__Uint32 _14_temp = _14;
        // Case expr:
        Array__uint8_t _20 = Array_copy__uint8_t(bs);
        Result__Uint32_Array__uint8_t _21 = Result_Error__Array__uint8_t_Uint32(_20);
        _28 = _21;
    }
    else if(_14._tag == Maybe__Uint32_Just_tag) {
        Maybe__Uint32 _14_temp = _14;
        Uint32 i = _14_temp.u.Just.member0;
        // Case expr:
        Result__Uint32_Array__uint8_t _27 = Result_Success__Uint32_Array__uint8_t(i);
        _28 = _27;
    }
    else UNHANDLED("Binary.carp", 61);
    return _28;
}

Result__Uint64_Array__uint8_t Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* _env, Array__uint8_t* bs) {
    Maybe__Uint64 _14 = (*_env->f).env ? ((Maybe__Uint64(*)(LambdaEnv, ByteOrder, Array__uint8_t*))(*_env->f).callback)((*_env->f).env, _env->order, bs) : ((Maybe__Uint64(*)(ByteOrder, Array__uint8_t*))(*_env->f).callback)(_env->order, bs);
    Result__Uint64_Array__uint8_t _28;
    if(_14._tag == Maybe__Uint64_Nothing_tag) {
        Maybe__Uint64 _14_temp = _14;
        // Case expr:
        Array__uint8_t _20 = Array_copy__uint8_t(bs);
        Result__Uint64_Array__uint8_t _21 = Result_Error__Array__uint8_t_Uint64(_20);
        _28 = _21;
    }
    else if(_14._tag == Maybe__Uint64_Just_tag) {
        Maybe__Uint64 _14_temp = _14;
        Uint64 i = _14_temp.u.Just.member0;
        // Case expr:
        Result__Uint64_Array__uint8_t _27 = Result_Success__Uint64_Array__uint8_t(i);
        _28 = _27;
    }
    else UNHANDLED("Binary.carp", 61);
    return _28;
}

String Binary__Lambda_bytes_MINUS__GT_hex_MINUS_string_14_env(uint8_t* b) {
    uint8_t _12 = Byte_copy(b);
    String _13 = Binary_to_MINUS_hex_MINUS_str(_12);
    return _13;
}

Array__uint8_t Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env(Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* _env, Uint16* i) {
    Uint16 _14 = Uint16_copy(i);
    Array__uint8_t _15 = Binary_int16_MINUS__GT_bytes(_env->order, _14);
    return _15;
}

Uint32 Binary__Lambda_int32_MINUS__GT_bytes_16_env(Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* _env, Long lng) {
    Uint32 _14 = Uint32_from_MINUS_long(lng);
    Uint32 _15 = Uint32_bit_MINUS_shift_MINUS_right(_env->i, _14);
    return _15;
}

Array__uint8_t Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env(Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* _env, Uint32* i) {
    Uint32 _14 = Uint32_copy(i);
    Array__uint8_t _15 = Binary_int32_MINUS__GT_bytes(_env->order, _14);
    return _15;
}

Uint64 Binary__Lambda_int64_MINUS__GT_bytes_16_env(Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* _env, Long lng) {
    Uint64 _14 = Uint64_from_MINUS_long(lng);
    Uint64 _15 = Uint64_bit_MINUS_shift_MINUS_right(_env->i, _14);
    return _15;
}

Array__uint8_t Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env(Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* _env, Uint64* i) {
    Uint64 _14 = Uint64_copy(i);
    Array__uint8_t _15 = Binary_int64_MINUS__GT_bytes(_env->order, _14);
    return _15;
}

int Binary__Lambda_remaining_MINUS_bytes_16_env(int x, int* y) {
    int _14 = Int_copy(y);
    int _15 = Int__PLUS_(x, _14);
    return _15;
}

int Binary__Lambda_remaining_MINUS_bytes__Uint16_uint8_t_16_env(int x, int* y) {
    int _14 = Int_copy(y);
    int _15 = Int__PLUS_(x, _14);
    return _15;
}

int Binary__Lambda_remaining_MINUS_bytes__Uint32_uint8_t_16_env(int x, int* y) {
    int _14 = Int_copy(y);
    int _15 = Int__PLUS_(x, _14);
    return _15;
}

int Binary__Lambda_remaining_MINUS_bytes__Uint64_uint8_t_16_env(int x, int* y) {
    int _14 = Int_copy(y);
    int _15 = Int__PLUS_(x, _14);
    return _15;
}

Uint16 Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* _env, Array__uint8_t* b) {
    Uint16 _18 = Binary_unsafe_MINUS_bytes_MINUS__GT_int16(_env->order, b);
    return _18;
}

Uint32 Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* _env, Array__uint8_t* b) {
    Uint32 _18 = Binary_unsafe_MINUS_bytes_MINUS__GT_int32(_env->order, b);
    return _18;
}

Uint64 Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* _env, Array__uint8_t* b) {
    Uint64 _18 = Binary_unsafe_MINUS_bytes_MINUS__GT_int64(_env->order, b);
    return _18;
}

Lambda Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16(Lambda* f, ByteOrder order) {
    // This lambda captures 2 variables: f, order
    Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty *_29_env = CARP_MALLOC(sizeof(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty));
    _29_env->f = f;
    _29_env->order = order;
    Lambda _29 = {
      .callback = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env,
      .env = _29_env,
      .delete = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty_delete,
      .copy = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty_copy
    };
    return _29;
}

Lambda Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32(Lambda* f, ByteOrder order) {
    // This lambda captures 2 variables: f, order
    Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty *_29_env = CARP_MALLOC(sizeof(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty));
    _29_env->f = f;
    _29_env->order = order;
    Lambda _29 = {
      .callback = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env,
      .env = _29_env,
      .delete = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty_delete,
      .copy = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty_copy
    };
    return _29;
}

Lambda Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64(Lambda* f, ByteOrder order) {
    // This lambda captures 2 variables: f, order
    Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty *_29_env = CARP_MALLOC(sizeof(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty));
    _29_env->f = f;
    _29_env->order = order;
    Lambda _29 = {
      .callback = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env,
      .env = _29_env,
      .delete = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty_delete,
      .copy = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty_copy
    };
    return _29;
}

String Binary_bytes_MINUS__GT_hex_MINUS_string(Array__uint8_t* bs) {
    String _27;
    /* let */ {
        // This lambda captures 0 variables: 
        Lambda _14 = {
          .callback = (void*)Binary__Lambda_bytes_MINUS__GT_hex_MINUS_string_14_env,
          .env = NULL,
          .delete = (void*)NULL,
          .copy = (void*)NULL
        };
        Lambda f = _14;
        static String _17 = " ";
        String *_17_ref = &_17;
        Lambda* _22 = &f; // ref
        Array__String _24 = Array_copy_MINUS_map__uint8_t_String(_22, bs);
        Array__String* _25 = &_24; // ref
        String _26 = String_join(_17_ref, _25);
        _27 = _26;
        Array_delete__String(_24);
        Function_delete__uint8_t_MUL__String(f);
    }
    return _27;
}

Maybe__Uint16 Binary_bytes_MINUS__GT_int16(ByteOrder order, Array__uint8_t* bytes) {
    Maybe__Uint16 _83;
    if(order._tag == ByteOrder_LittleEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        Maybe__uint8_t _13 = Array_nth__uint8_t(bytes, 0);
        Maybe__Uint16 _1000003;
        if(_13._tag == Maybe__uint8_t_Nothing_tag) {
            Maybe__uint8_t _13_temp = _13;
            // Case expr:
            Maybe__Uint16 _1000006 = Maybe_Nothing__Uint16();
            _1000003 = _1000006;
        }
        else if(_13._tag == Maybe__uint8_t_Just_tag) {
            Maybe__uint8_t _13_temp = _13;
            uint8_t zip1009 = _13_temp.u.Just.member0;
            // Case expr:
            Maybe__uint8_t _25 = Array_nth__uint8_t(bytes, 1);
            Maybe__Uint16 _1000008;
            if(_25._tag == Maybe__uint8_t_Nothing_tag) {
                Maybe__uint8_t _25_temp = _25;
                // Case expr:
                Maybe__Uint16 _1000011 = Maybe_Nothing__Uint16();
                _1000008 = _1000011;
            }
            else if(_25._tag == Maybe__uint8_t_Just_tag) {
                Maybe__uint8_t _25_temp = _25;
                uint8_t zip1010 = _25_temp.u.Just.member0;
                // Case expr:
                Lambda _36 = { .callback = (void*)Binary_to_MINUS_int16, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.to-int16 (LookupGlobal ExternalCode AFunction)
                Lambda* _37 = &_36; // ref
                Uint16 _1000014 = (*_37).env ? ((Uint16(*)(LambdaEnv, uint8_t, uint8_t))(*_37).callback)((*_37).env, zip1009, zip1010) : ((Uint16(*)(uint8_t, uint8_t))(*_37).callback)(zip1009, zip1010);
                Maybe__Uint16 _1000013 = Maybe_Just__Uint16(_1000014);
                _1000008 = _1000013;
            }
            else UNHANDLED("Binary.carp", 112);
            _1000003 = _1000008;
        }
        else UNHANDLED("Binary.carp", 112);
        _83 = _1000003;
    }
    else if(order._tag == ByteOrder_BigEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        Maybe__uint8_t _51 = Array_nth__uint8_t(bytes, 1);
        Maybe__Uint16 _1000016;
        if(_51._tag == Maybe__uint8_t_Nothing_tag) {
            Maybe__uint8_t _51_temp = _51;
            // Case expr:
            Maybe__Uint16 _1000019 = Maybe_Nothing__Uint16();
            _1000016 = _1000019;
        }
        else if(_51._tag == Maybe__uint8_t_Just_tag) {
            Maybe__uint8_t _51_temp = _51;
            uint8_t zip1011 = _51_temp.u.Just.member0;
            // Case expr:
            Maybe__uint8_t _63 = Array_nth__uint8_t(bytes, 0);
            Maybe__Uint16 _1000021;
            if(_63._tag == Maybe__uint8_t_Nothing_tag) {
                Maybe__uint8_t _63_temp = _63;
                // Case expr:
                Maybe__Uint16 _1000024 = Maybe_Nothing__Uint16();
                _1000021 = _1000024;
            }
            else if(_63._tag == Maybe__uint8_t_Just_tag) {
                Maybe__uint8_t _63_temp = _63;
                uint8_t zip1012 = _63_temp.u.Just.member0;
                // Case expr:
                Lambda _74 = { .callback = (void*)Binary_to_MINUS_int16, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.to-int16 (LookupGlobal ExternalCode AFunction)
                Lambda* _75 = &_74; // ref
                Uint16 _1000027 = (*_75).env ? ((Uint16(*)(LambdaEnv, uint8_t, uint8_t))(*_75).callback)((*_75).env, zip1011, zip1012) : ((Uint16(*)(uint8_t, uint8_t))(*_75).callback)(zip1011, zip1012);
                Maybe__Uint16 _1000026 = Maybe_Just__Uint16(_1000027);
                _1000021 = _1000026;
            }
            else UNHANDLED("Binary.carp", 112);
            _1000016 = _1000021;
        }
        else UNHANDLED("Binary.carp", 112);
        _83 = _1000016;
    }
    else UNHANDLED("Binary.carp", 112);
    return _83;
}

Pair__Array__Uint16_int Binary_bytes_MINUS__GT_int16_MINUS_seq(ByteOrder order, Array__uint8_t* bs) {
    Pair__Array__Uint16_int _43;
    /* let */ {
        Array__Array__uint8_t _10 = Array_partition__uint8_t(bs, 2);
        Array__Array__uint8_t partitions = _10;
        Lambda _14 = { .callback = (void*)Binary_bytes_MINUS__GT_int16, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.bytes->int16 (LookupGlobal CarpLand AFunction)
        Lambda* _15 = &_14; // ref
        Lambda _17 = Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16(_15, order);
        Lambda f = _17;
        Pair__Array__Uint16_int _42;
        /* let */ {
            Lambda* _24 = &f; // ref
            Array__Array__uint8_t* _27 = &partitions; // ref
            Array__Result__Uint16_Array__uint8_t _28 = Array_copy_MINUS_map__Array__uint8_t_Result__Uint16_Array__uint8_t(_24, _27);
            Array__Result__Uint16_Array__uint8_t results = _28;
            Array__Result__Uint16_Array__uint8_t* _34 = &results; // ref
            Array__Uint16 _35 = Binary_interpreted__Uint16_Array__uint8_t(_34);
            Array__Result__Uint16_Array__uint8_t* _39 = &results; // ref
            int _40 = Binary_remaining_MINUS_bytes__Uint16_uint8_t(_39);
            Pair__Array__Uint16_int _41 = Pair_init__Array__Uint16_int(_35, _40);
            _42 = _41;
            Array_delete__Result__Uint16_Array__uint8_t(results);
        }
        _43 = _42;
        Array_delete__Array__uint8_t(partitions);
        Function_delete__Array__uint8_t_MUL__Result__Uint16_Array__uint8_t(f);
    }
    return _43;
}

Result__Array__Uint16_int Binary_bytes_MINUS__GT_int16_MINUS_seq_MINUS_exact(ByteOrder order, Array__uint8_t* bs) {
    Result__Array__Uint16_int _46;
    /* let */ {
        Pair__Array__Uint16_int _10 = Binary_bytes_MINUS__GT_int16_MINUS_seq(order, bs);
        Pair__Array__Uint16_int r = _10;
        Result__Array__Uint16_int _45;
        Pair__Array__Uint16_int* _19 = &r; // ref
        int* _20 = Pair_b__Array__Uint16_int(_19);
        int _21 = Int_copy(_20);
        bool _22 = Int__EQ_(0, _21);
        if (_22) {
            Pair__Array__Uint16_int* _29 = &r; // ref
            Array__Uint16* _30 = Pair_a__Array__Uint16_int(_29);
            Array__Uint16 _31 = Array_copy__Uint16(_30);
            Result__Array__Uint16_int _32 = Result_Success__Array__Uint16_int(_31);
            Result__Array__Uint16_int _33 = _32;
            _45 = _33;
        } else {
            Pair__Array__Uint16_int* _40 = &r; // ref
            int* _41 = Pair_b__Array__Uint16_int(_40);
            int _42 = Int_copy(_41);
            Result__Array__Uint16_int _43 = Result_Error__int_Array__Uint16(_42);
            Result__Array__Uint16_int _44 = _43;
            _45 = _44;
        }
        _46 = _45;
        Pair_delete__Array__Uint16_int(r);
    }
    return _46;
}

Maybe__Uint32 Binary_bytes_MINUS__GT_int32(ByteOrder order, Array__uint8_t* bs) {
    Maybe__Uint32 _139;
    if(order._tag == ByteOrder_LittleEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        Maybe__uint8_t _13 = Array_nth__uint8_t(bs, 0);
        Maybe__Uint32 _1000003;
        if(_13._tag == Maybe__uint8_t_Nothing_tag) {
            Maybe__uint8_t _13_temp = _13;
            // Case expr:
            Maybe__Uint32 _1000006 = Maybe_Nothing__Uint32();
            _1000003 = _1000006;
        }
        else if(_13._tag == Maybe__uint8_t_Just_tag) {
            Maybe__uint8_t _13_temp = _13;
            uint8_t zip1013 = _13_temp.u.Just.member0;
            // Case expr:
            Maybe__uint8_t _25 = Array_nth__uint8_t(bs, 1);
            Maybe__Uint32 _1000008;
            if(_25._tag == Maybe__uint8_t_Nothing_tag) {
                Maybe__uint8_t _25_temp = _25;
                // Case expr:
                Maybe__Uint32 _1000011 = Maybe_Nothing__Uint32();
                _1000008 = _1000011;
            }
            else if(_25._tag == Maybe__uint8_t_Just_tag) {
                Maybe__uint8_t _25_temp = _25;
                uint8_t zip1014 = _25_temp.u.Just.member0;
                // Case expr:
                Maybe__uint8_t _37 = Array_nth__uint8_t(bs, 2);
                Maybe__Uint32 _1000013;
                if(_37._tag == Maybe__uint8_t_Nothing_tag) {
                    Maybe__uint8_t _37_temp = _37;
                    // Case expr:
                    Maybe__Uint32 _1000016 = Maybe_Nothing__Uint32();
                    _1000013 = _1000016;
                }
                else if(_37._tag == Maybe__uint8_t_Just_tag) {
                    Maybe__uint8_t _37_temp = _37;
                    uint8_t zip1015 = _37_temp.u.Just.member0;
                    // Case expr:
                    Maybe__uint8_t _49 = Array_nth__uint8_t(bs, 3);
                    Maybe__Uint32 _1000018;
                    if(_49._tag == Maybe__uint8_t_Nothing_tag) {
                        Maybe__uint8_t _49_temp = _49;
                        // Case expr:
                        Maybe__Uint32 _1000021 = Maybe_Nothing__Uint32();
                        _1000018 = _1000021;
                    }
                    else if(_49._tag == Maybe__uint8_t_Just_tag) {
                        Maybe__uint8_t _49_temp = _49;
                        uint8_t zip1016 = _49_temp.u.Just.member0;
                        // Case expr:
                        Lambda _60 = { .callback = (void*)Binary_to_MINUS_int32, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.to-int32 (LookupGlobal ExternalCode AFunction)
                        Lambda* _61 = &_60; // ref
                        Uint32 _1000024 = (*_61).env ? ((Uint32(*)(LambdaEnv, uint8_t, uint8_t, uint8_t, uint8_t))(*_61).callback)((*_61).env, zip1013, zip1014, zip1015, zip1016) : ((Uint32(*)(uint8_t, uint8_t, uint8_t, uint8_t))(*_61).callback)(zip1013, zip1014, zip1015, zip1016);
                        Maybe__Uint32 _1000023 = Maybe_Just__Uint32(_1000024);
                        _1000018 = _1000023;
                    }
                    else UNHANDLED("Binary.carp", 186);
                    _1000013 = _1000018;
                }
                else UNHANDLED("Binary.carp", 186);
                _1000008 = _1000013;
            }
            else UNHANDLED("Binary.carp", 186);
            _1000003 = _1000008;
        }
        else UNHANDLED("Binary.carp", 186);
        _139 = _1000003;
    }
    else if(order._tag == ByteOrder_BigEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        Maybe__uint8_t _79 = Array_nth__uint8_t(bs, 3);
        Maybe__Uint32 _1000026;
        if(_79._tag == Maybe__uint8_t_Nothing_tag) {
            Maybe__uint8_t _79_temp = _79;
            // Case expr:
            Maybe__Uint32 _1000029 = Maybe_Nothing__Uint32();
            _1000026 = _1000029;
        }
        else if(_79._tag == Maybe__uint8_t_Just_tag) {
            Maybe__uint8_t _79_temp = _79;
            uint8_t zip1017 = _79_temp.u.Just.member0;
            // Case expr:
            Maybe__uint8_t _91 = Array_nth__uint8_t(bs, 2);
            Maybe__Uint32 _1000031;
            if(_91._tag == Maybe__uint8_t_Nothing_tag) {
                Maybe__uint8_t _91_temp = _91;
                // Case expr:
                Maybe__Uint32 _1000034 = Maybe_Nothing__Uint32();
                _1000031 = _1000034;
            }
            else if(_91._tag == Maybe__uint8_t_Just_tag) {
                Maybe__uint8_t _91_temp = _91;
                uint8_t zip1018 = _91_temp.u.Just.member0;
                // Case expr:
                Maybe__uint8_t _103 = Array_nth__uint8_t(bs, 1);
                Maybe__Uint32 _1000036;
                if(_103._tag == Maybe__uint8_t_Nothing_tag) {
                    Maybe__uint8_t _103_temp = _103;
                    // Case expr:
                    Maybe__Uint32 _1000039 = Maybe_Nothing__Uint32();
                    _1000036 = _1000039;
                }
                else if(_103._tag == Maybe__uint8_t_Just_tag) {
                    Maybe__uint8_t _103_temp = _103;
                    uint8_t zip1019 = _103_temp.u.Just.member0;
                    // Case expr:
                    Maybe__uint8_t _115 = Array_nth__uint8_t(bs, 0);
                    Maybe__Uint32 _1000041;
                    if(_115._tag == Maybe__uint8_t_Nothing_tag) {
                        Maybe__uint8_t _115_temp = _115;
                        // Case expr:
                        Maybe__Uint32 _1000044 = Maybe_Nothing__Uint32();
                        _1000041 = _1000044;
                    }
                    else if(_115._tag == Maybe__uint8_t_Just_tag) {
                        Maybe__uint8_t _115_temp = _115;
                        uint8_t zip1020 = _115_temp.u.Just.member0;
                        // Case expr:
                        Lambda _126 = { .callback = (void*)Binary_to_MINUS_int32, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.to-int32 (LookupGlobal ExternalCode AFunction)
                        Lambda* _127 = &_126; // ref
                        Uint32 _1000047 = (*_127).env ? ((Uint32(*)(LambdaEnv, uint8_t, uint8_t, uint8_t, uint8_t))(*_127).callback)((*_127).env, zip1017, zip1018, zip1019, zip1020) : ((Uint32(*)(uint8_t, uint8_t, uint8_t, uint8_t))(*_127).callback)(zip1017, zip1018, zip1019, zip1020);
                        Maybe__Uint32 _1000046 = Maybe_Just__Uint32(_1000047);
                        _1000041 = _1000046;
                    }
                    else UNHANDLED("Binary.carp", 186);
                    _1000036 = _1000041;
                }
                else UNHANDLED("Binary.carp", 186);
                _1000031 = _1000036;
            }
            else UNHANDLED("Binary.carp", 186);
            _1000026 = _1000031;
        }
        else UNHANDLED("Binary.carp", 186);
        _139 = _1000026;
    }
    else UNHANDLED("Binary.carp", 186);
    return _139;
}

Pair__Array__Uint32_int Binary_bytes_MINUS__GT_int32_MINUS_seq(ByteOrder order, Array__uint8_t* bs) {
    Pair__Array__Uint32_int _43;
    /* let */ {
        Array__Array__uint8_t _10 = Array_partition__uint8_t(bs, 4);
        Array__Array__uint8_t partitions = _10;
        Lambda _14 = { .callback = (void*)Binary_bytes_MINUS__GT_int32, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.bytes->int32 (LookupGlobal CarpLand AFunction)
        Lambda* _15 = &_14; // ref
        Lambda _17 = Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32(_15, order);
        Lambda f = _17;
        Pair__Array__Uint32_int _42;
        /* let */ {
            Lambda* _24 = &f; // ref
            Array__Array__uint8_t* _27 = &partitions; // ref
            Array__Result__Uint32_Array__uint8_t _28 = Array_copy_MINUS_map__Array__uint8_t_Result__Uint32_Array__uint8_t(_24, _27);
            Array__Result__Uint32_Array__uint8_t results = _28;
            Array__Result__Uint32_Array__uint8_t* _34 = &results; // ref
            Array__Uint32 _35 = Binary_interpreted__Uint32_Array__uint8_t(_34);
            Array__Result__Uint32_Array__uint8_t* _39 = &results; // ref
            int _40 = Binary_remaining_MINUS_bytes__Uint32_uint8_t(_39);
            Pair__Array__Uint32_int _41 = Pair_init__Array__Uint32_int(_35, _40);
            _42 = _41;
            Array_delete__Result__Uint32_Array__uint8_t(results);
        }
        _43 = _42;
        Array_delete__Array__uint8_t(partitions);
        Function_delete__Array__uint8_t_MUL__Result__Uint32_Array__uint8_t(f);
    }
    return _43;
}

Result__Array__Uint32_int Binary_bytes_MINUS__GT_int32_MINUS_seq_MINUS_exact(ByteOrder order, Array__uint8_t* bs) {
    Result__Array__Uint32_int _46;
    /* let */ {
        Pair__Array__Uint32_int _10 = Binary_bytes_MINUS__GT_int32_MINUS_seq(order, bs);
        Pair__Array__Uint32_int r = _10;
        Result__Array__Uint32_int _45;
        Pair__Array__Uint32_int* _19 = &r; // ref
        int* _20 = Pair_b__Array__Uint32_int(_19);
        int _21 = Int_copy(_20);
        bool _22 = Int__EQ_(0, _21);
        if (_22) {
            Pair__Array__Uint32_int* _29 = &r; // ref
            Array__Uint32* _30 = Pair_a__Array__Uint32_int(_29);
            Array__Uint32 _31 = Array_copy__Uint32(_30);
            Result__Array__Uint32_int _32 = Result_Success__Array__Uint32_int(_31);
            Result__Array__Uint32_int _33 = _32;
            _45 = _33;
        } else {
            Pair__Array__Uint32_int* _40 = &r; // ref
            int* _41 = Pair_b__Array__Uint32_int(_40);
            int _42 = Int_copy(_41);
            Result__Array__Uint32_int _43 = Result_Error__int_Array__Uint32(_42);
            Result__Array__Uint32_int _44 = _43;
            _45 = _44;
        }
        _46 = _45;
        Pair_delete__Array__Uint32_int(r);
    }
    return _46;
}

Maybe__Uint64 Binary_bytes_MINUS__GT_int64(ByteOrder order, Array__uint8_t* bs) {
    Maybe__Uint64 _251;
    if(order._tag == ByteOrder_LittleEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        Maybe__uint8_t _13 = Array_nth__uint8_t(bs, 0);
        Maybe__Uint64 _1000003;
        if(_13._tag == Maybe__uint8_t_Nothing_tag) {
            Maybe__uint8_t _13_temp = _13;
            // Case expr:
            Maybe__Uint64 _1000006 = Maybe_Nothing__Uint64();
            _1000003 = _1000006;
        }
        else if(_13._tag == Maybe__uint8_t_Just_tag) {
            Maybe__uint8_t _13_temp = _13;
            uint8_t zip1021 = _13_temp.u.Just.member0;
            // Case expr:
            Maybe__uint8_t _25 = Array_nth__uint8_t(bs, 1);
            Maybe__Uint64 _1000008;
            if(_25._tag == Maybe__uint8_t_Nothing_tag) {
                Maybe__uint8_t _25_temp = _25;
                // Case expr:
                Maybe__Uint64 _1000011 = Maybe_Nothing__Uint64();
                _1000008 = _1000011;
            }
            else if(_25._tag == Maybe__uint8_t_Just_tag) {
                Maybe__uint8_t _25_temp = _25;
                uint8_t zip1022 = _25_temp.u.Just.member0;
                // Case expr:
                Maybe__uint8_t _37 = Array_nth__uint8_t(bs, 2);
                Maybe__Uint64 _1000013;
                if(_37._tag == Maybe__uint8_t_Nothing_tag) {
                    Maybe__uint8_t _37_temp = _37;
                    // Case expr:
                    Maybe__Uint64 _1000016 = Maybe_Nothing__Uint64();
                    _1000013 = _1000016;
                }
                else if(_37._tag == Maybe__uint8_t_Just_tag) {
                    Maybe__uint8_t _37_temp = _37;
                    uint8_t zip1023 = _37_temp.u.Just.member0;
                    // Case expr:
                    Maybe__uint8_t _49 = Array_nth__uint8_t(bs, 3);
                    Maybe__Uint64 _1000018;
                    if(_49._tag == Maybe__uint8_t_Nothing_tag) {
                        Maybe__uint8_t _49_temp = _49;
                        // Case expr:
                        Maybe__Uint64 _1000021 = Maybe_Nothing__Uint64();
                        _1000018 = _1000021;
                    }
                    else if(_49._tag == Maybe__uint8_t_Just_tag) {
                        Maybe__uint8_t _49_temp = _49;
                        uint8_t zip1024 = _49_temp.u.Just.member0;
                        // Case expr:
                        Maybe__uint8_t _61 = Array_nth__uint8_t(bs, 4);
                        Maybe__Uint64 _1000023;
                        if(_61._tag == Maybe__uint8_t_Nothing_tag) {
                            Maybe__uint8_t _61_temp = _61;
                            // Case expr:
                            Maybe__Uint64 _1000026 = Maybe_Nothing__Uint64();
                            _1000023 = _1000026;
                        }
                        else if(_61._tag == Maybe__uint8_t_Just_tag) {
                            Maybe__uint8_t _61_temp = _61;
                            uint8_t zip1025 = _61_temp.u.Just.member0;
                            // Case expr:
                            Maybe__uint8_t _73 = Array_nth__uint8_t(bs, 5);
                            Maybe__Uint64 _1000028;
                            if(_73._tag == Maybe__uint8_t_Nothing_tag) {
                                Maybe__uint8_t _73_temp = _73;
                                // Case expr:
                                Maybe__Uint64 _1000031 = Maybe_Nothing__Uint64();
                                _1000028 = _1000031;
                            }
                            else if(_73._tag == Maybe__uint8_t_Just_tag) {
                                Maybe__uint8_t _73_temp = _73;
                                uint8_t zip1026 = _73_temp.u.Just.member0;
                                // Case expr:
                                Maybe__uint8_t _85 = Array_nth__uint8_t(bs, 6);
                                Maybe__Uint64 _1000033;
                                if(_85._tag == Maybe__uint8_t_Nothing_tag) {
                                    Maybe__uint8_t _85_temp = _85;
                                    // Case expr:
                                    Maybe__Uint64 _1000036 = Maybe_Nothing__Uint64();
                                    _1000033 = _1000036;
                                }
                                else if(_85._tag == Maybe__uint8_t_Just_tag) {
                                    Maybe__uint8_t _85_temp = _85;
                                    uint8_t zip1027 = _85_temp.u.Just.member0;
                                    // Case expr:
                                    Maybe__uint8_t _97 = Array_nth__uint8_t(bs, 7);
                                    Maybe__Uint64 _1000038;
                                    if(_97._tag == Maybe__uint8_t_Nothing_tag) {
                                        Maybe__uint8_t _97_temp = _97;
                                        // Case expr:
                                        Maybe__Uint64 _1000041 = Maybe_Nothing__Uint64();
                                        _1000038 = _1000041;
                                    }
                                    else if(_97._tag == Maybe__uint8_t_Just_tag) {
                                        Maybe__uint8_t _97_temp = _97;
                                        uint8_t zip1028 = _97_temp.u.Just.member0;
                                        // Case expr:
                                        Lambda _108 = { .callback = (void*)Binary_to_MINUS_int64, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.to-int64 (LookupGlobal ExternalCode AFunction)
                                        Lambda* _109 = &_108; // ref
                                        Uint64 _1000044 = (*_109).env ? ((Uint64(*)(LambdaEnv, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t))(*_109).callback)((*_109).env, zip1021, zip1022, zip1023, zip1024, zip1025, zip1026, zip1027, zip1028) : ((Uint64(*)(uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t))(*_109).callback)(zip1021, zip1022, zip1023, zip1024, zip1025, zip1026, zip1027, zip1028);
                                        Maybe__Uint64 _1000043 = Maybe_Just__Uint64(_1000044);
                                        _1000038 = _1000043;
                                    }
                                    else UNHANDLED("Binary.carp", 269);
                                    _1000033 = _1000038;
                                }
                                else UNHANDLED("Binary.carp", 269);
                                _1000028 = _1000033;
                            }
                            else UNHANDLED("Binary.carp", 269);
                            _1000023 = _1000028;
                        }
                        else UNHANDLED("Binary.carp", 269);
                        _1000018 = _1000023;
                    }
                    else UNHANDLED("Binary.carp", 269);
                    _1000013 = _1000018;
                }
                else UNHANDLED("Binary.carp", 269);
                _1000008 = _1000013;
            }
            else UNHANDLED("Binary.carp", 269);
            _1000003 = _1000008;
        }
        else UNHANDLED("Binary.carp", 269);
        _251 = _1000003;
    }
    else if(order._tag == ByteOrder_BigEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        Maybe__uint8_t _135 = Array_nth__uint8_t(bs, 7);
        Maybe__Uint64 _1000046;
        if(_135._tag == Maybe__uint8_t_Nothing_tag) {
            Maybe__uint8_t _135_temp = _135;
            // Case expr:
            Maybe__Uint64 _1000049 = Maybe_Nothing__Uint64();
            _1000046 = _1000049;
        }
        else if(_135._tag == Maybe__uint8_t_Just_tag) {
            Maybe__uint8_t _135_temp = _135;
            uint8_t zip1029 = _135_temp.u.Just.member0;
            // Case expr:
            Maybe__uint8_t _147 = Array_nth__uint8_t(bs, 6);
            Maybe__Uint64 _1000051;
            if(_147._tag == Maybe__uint8_t_Nothing_tag) {
                Maybe__uint8_t _147_temp = _147;
                // Case expr:
                Maybe__Uint64 _1000054 = Maybe_Nothing__Uint64();
                _1000051 = _1000054;
            }
            else if(_147._tag == Maybe__uint8_t_Just_tag) {
                Maybe__uint8_t _147_temp = _147;
                uint8_t zip1030 = _147_temp.u.Just.member0;
                // Case expr:
                Maybe__uint8_t _159 = Array_nth__uint8_t(bs, 5);
                Maybe__Uint64 _1000056;
                if(_159._tag == Maybe__uint8_t_Nothing_tag) {
                    Maybe__uint8_t _159_temp = _159;
                    // Case expr:
                    Maybe__Uint64 _1000059 = Maybe_Nothing__Uint64();
                    _1000056 = _1000059;
                }
                else if(_159._tag == Maybe__uint8_t_Just_tag) {
                    Maybe__uint8_t _159_temp = _159;
                    uint8_t zip1031 = _159_temp.u.Just.member0;
                    // Case expr:
                    Maybe__uint8_t _171 = Array_nth__uint8_t(bs, 4);
                    Maybe__Uint64 _1000061;
                    if(_171._tag == Maybe__uint8_t_Nothing_tag) {
                        Maybe__uint8_t _171_temp = _171;
                        // Case expr:
                        Maybe__Uint64 _1000064 = Maybe_Nothing__Uint64();
                        _1000061 = _1000064;
                    }
                    else if(_171._tag == Maybe__uint8_t_Just_tag) {
                        Maybe__uint8_t _171_temp = _171;
                        uint8_t zip1032 = _171_temp.u.Just.member0;
                        // Case expr:
                        Maybe__uint8_t _183 = Array_nth__uint8_t(bs, 3);
                        Maybe__Uint64 _1000066;
                        if(_183._tag == Maybe__uint8_t_Nothing_tag) {
                            Maybe__uint8_t _183_temp = _183;
                            // Case expr:
                            Maybe__Uint64 _1000069 = Maybe_Nothing__Uint64();
                            _1000066 = _1000069;
                        }
                        else if(_183._tag == Maybe__uint8_t_Just_tag) {
                            Maybe__uint8_t _183_temp = _183;
                            uint8_t zip1033 = _183_temp.u.Just.member0;
                            // Case expr:
                            Maybe__uint8_t _195 = Array_nth__uint8_t(bs, 2);
                            Maybe__Uint64 _1000071;
                            if(_195._tag == Maybe__uint8_t_Nothing_tag) {
                                Maybe__uint8_t _195_temp = _195;
                                // Case expr:
                                Maybe__Uint64 _1000074 = Maybe_Nothing__Uint64();
                                _1000071 = _1000074;
                            }
                            else if(_195._tag == Maybe__uint8_t_Just_tag) {
                                Maybe__uint8_t _195_temp = _195;
                                uint8_t zip1034 = _195_temp.u.Just.member0;
                                // Case expr:
                                Maybe__uint8_t _207 = Array_nth__uint8_t(bs, 1);
                                Maybe__Uint64 _1000076;
                                if(_207._tag == Maybe__uint8_t_Nothing_tag) {
                                    Maybe__uint8_t _207_temp = _207;
                                    // Case expr:
                                    Maybe__Uint64 _1000079 = Maybe_Nothing__Uint64();
                                    _1000076 = _1000079;
                                }
                                else if(_207._tag == Maybe__uint8_t_Just_tag) {
                                    Maybe__uint8_t _207_temp = _207;
                                    uint8_t zip1035 = _207_temp.u.Just.member0;
                                    // Case expr:
                                    Maybe__uint8_t _219 = Array_nth__uint8_t(bs, 0);
                                    Maybe__Uint64 _1000081;
                                    if(_219._tag == Maybe__uint8_t_Nothing_tag) {
                                        Maybe__uint8_t _219_temp = _219;
                                        // Case expr:
                                        Maybe__Uint64 _1000084 = Maybe_Nothing__Uint64();
                                        _1000081 = _1000084;
                                    }
                                    else if(_219._tag == Maybe__uint8_t_Just_tag) {
                                        Maybe__uint8_t _219_temp = _219;
                                        uint8_t zip1036 = _219_temp.u.Just.member0;
                                        // Case expr:
                                        Lambda _230 = { .callback = (void*)Binary_to_MINUS_int64, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.to-int64 (LookupGlobal ExternalCode AFunction)
                                        Lambda* _231 = &_230; // ref
                                        Uint64 _1000087 = (*_231).env ? ((Uint64(*)(LambdaEnv, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t))(*_231).callback)((*_231).env, zip1029, zip1030, zip1031, zip1032, zip1033, zip1034, zip1035, zip1036) : ((Uint64(*)(uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t))(*_231).callback)(zip1029, zip1030, zip1031, zip1032, zip1033, zip1034, zip1035, zip1036);
                                        Maybe__Uint64 _1000086 = Maybe_Just__Uint64(_1000087);
                                        _1000081 = _1000086;
                                    }
                                    else UNHANDLED("Binary.carp", 269);
                                    _1000076 = _1000081;
                                }
                                else UNHANDLED("Binary.carp", 269);
                                _1000071 = _1000076;
                            }
                            else UNHANDLED("Binary.carp", 269);
                            _1000066 = _1000071;
                        }
                        else UNHANDLED("Binary.carp", 269);
                        _1000061 = _1000066;
                    }
                    else UNHANDLED("Binary.carp", 269);
                    _1000056 = _1000061;
                }
                else UNHANDLED("Binary.carp", 269);
                _1000051 = _1000056;
            }
            else UNHANDLED("Binary.carp", 269);
            _1000046 = _1000051;
        }
        else UNHANDLED("Binary.carp", 269);
        _251 = _1000046;
    }
    else UNHANDLED("Binary.carp", 269);
    return _251;
}

Pair__Array__Uint64_int Binary_bytes_MINUS__GT_int64_MINUS_seq(ByteOrder order, Array__uint8_t* bs) {
    Pair__Array__Uint64_int _43;
    /* let */ {
        Array__Array__uint8_t _10 = Array_partition__uint8_t(bs, 8);
        Array__Array__uint8_t partitions = _10;
        Lambda _14 = { .callback = (void*)Binary_bytes_MINUS__GT_int64, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.bytes->int64 (LookupGlobal CarpLand AFunction)
        Lambda* _15 = &_14; // ref
        Lambda _17 = Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64(_15, order);
        Lambda f = _17;
        Pair__Array__Uint64_int _42;
        /* let */ {
            Lambda* _24 = &f; // ref
            Array__Array__uint8_t* _27 = &partitions; // ref
            Array__Result__Uint64_Array__uint8_t _28 = Array_copy_MINUS_map__Array__uint8_t_Result__Uint64_Array__uint8_t(_24, _27);
            Array__Result__Uint64_Array__uint8_t results = _28;
            Array__Result__Uint64_Array__uint8_t* _34 = &results; // ref
            Array__Uint64 _35 = Binary_interpreted__Uint64_Array__uint8_t(_34);
            Array__Result__Uint64_Array__uint8_t* _39 = &results; // ref
            int _40 = Binary_remaining_MINUS_bytes__Uint64_uint8_t(_39);
            Pair__Array__Uint64_int _41 = Pair_init__Array__Uint64_int(_35, _40);
            _42 = _41;
            Array_delete__Result__Uint64_Array__uint8_t(results);
        }
        _43 = _42;
        Array_delete__Array__uint8_t(partitions);
        Function_delete__Array__uint8_t_MUL__Result__Uint64_Array__uint8_t(f);
    }
    return _43;
}

Result__Array__Uint64_int Binary_bytes_MINUS__GT_int64_MINUS_seq_MINUS_exact(ByteOrder order, Array__uint8_t* bs) {
    Result__Array__Uint64_int _46;
    /* let */ {
        Pair__Array__Uint64_int _10 = Binary_bytes_MINUS__GT_int64_MINUS_seq(order, bs);
        Pair__Array__Uint64_int r = _10;
        Result__Array__Uint64_int _45;
        Pair__Array__Uint64_int* _19 = &r; // ref
        int* _20 = Pair_b__Array__Uint64_int(_19);
        int _21 = Int_copy(_20);
        bool _22 = Int__EQ_(0, _21);
        if (_22) {
            Pair__Array__Uint64_int* _29 = &r; // ref
            Array__Uint64* _30 = Pair_a__Array__Uint64_int(_29);
            Array__Uint64 _31 = Array_copy__Uint64(_30);
            Result__Array__Uint64_int _32 = Result_Success__Array__Uint64_int(_31);
            Result__Array__Uint64_int _33 = _32;
            _45 = _33;
        } else {
            Pair__Array__Uint64_int* _40 = &r; // ref
            int* _41 = Pair_b__Array__Uint64_int(_40);
            int _42 = Int_copy(_41);
            Result__Array__Uint64_int _43 = Result_Error__int_Array__Uint64(_42);
            Result__Array__Uint64_int _44 = _43;
            _45 = _44;
        }
        _46 = _45;
        Pair_delete__Array__Uint64_int(r);
    }
    return _46;
}

Array__uint8_t Binary_int16_MINUS__GT_bytes(ByteOrder order, Uint16 i) {
    Array__uint8_t _41;
    if(order._tag == ByteOrder_LittleEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        Lambda _11 = { .callback = (void*)Binary_int16_MINUS_to_MINUS_byte, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.int16-to-byte (LookupGlobal ExternalCode AFunction)
        Lambda* _12 = &_11; // ref
        Array _21 = { .len = 2, .capacity = 2, .data = CARP_MALLOC(sizeof(Uint16) * 2) };
        ((Uint16*)_21.data)[0] = i;
        Uint16 _19 = Uint16_from_MINUS_long(8l);
        Uint16 _20 = Uint16_bit_MINUS_shift_MINUS_right(i, _19);
        ((Uint16*)_21.data)[1] = _20;
        Array__Uint16* _22 = &_21; // ref
        Array__uint8_t _23 = Array_copy_MINUS_map__Uint16_uint8_t(_12, _22);
        _41 = _23;
        Array_delete__Uint16(_21);
    }
    else if(order._tag == ByteOrder_BigEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        Lambda _28 = { .callback = (void*)Binary_int16_MINUS_to_MINUS_byte, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.int16-to-byte (LookupGlobal ExternalCode AFunction)
        Lambda* _29 = &_28; // ref
        Array _38 = { .len = 2, .capacity = 2, .data = CARP_MALLOC(sizeof(Uint16) * 2) };
        Uint16 _35 = Uint16_from_MINUS_long(8l);
        Uint16 _36 = Uint16_bit_MINUS_shift_MINUS_right(i, _35);
        ((Uint16*)_38.data)[0] = _36;
        ((Uint16*)_38.data)[1] = i;
        Array__Uint16* _39 = &_38; // ref
        Array__uint8_t _40 = Array_copy_MINUS_map__Uint16_uint8_t(_29, _39);
        _41 = _40;
        Array_delete__Uint16(_38);
    }
    else UNHANDLED("Binary.carp", 122);
    return _41;
}

Array__Array__uint8_t Binary_int16_MINUS_seq_MINUS__GT_bytes(ByteOrder order, Array__Uint16* is) {
    Array__Array__uint8_t _24;
    /* let */ {
        // This lambda captures 1 variables: order
        Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty *_16_env = CARP_MALLOC(sizeof(Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty));
        _16_env->order = order;
        Lambda _16 = {
          .callback = (void*)Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env,
          .env = _16_env,
          .delete = (void*)Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete,
          .copy = (void*)Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy
        };
        Lambda f = _16;
        Lambda* _21 = &f; // ref
        Array__Array__uint8_t _23 = Array_copy_MINUS_map__Uint16_Array__uint8_t(_21, is);
        _24 = _23;
        Function_delete__Uint16_MUL__Array__uint8_t(f);
    }
    return _24;
}

Array__uint8_t Binary_int32_MINUS__GT_bytes(ByteOrder order, Uint32 i) {
    Array__uint8_t _61;
    /* let */ {
        // This lambda captures 1 variables: i
        Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty *_16_env = CARP_MALLOC(sizeof(Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty));
        _16_env->i = i;
        Lambda _16 = {
          .callback = (void*)Binary__Lambda_int32_MINUS__GT_bytes_16_env,
          .env = _16_env,
          .delete = (void*)Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty_delete,
          .copy = (void*)Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty_copy
        };
        Lambda shift = _16;
        Array__uint8_t _60;
        if(order._tag == ByteOrder_LittleEndian_tag) {
            ByteOrder _19_temp = order;
            // Case expr:
            Lambda _24 = { .callback = (void*)Binary_int32_MINUS_to_MINUS_byte, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.int32-to-byte (LookupGlobal ExternalCode AFunction)
            Lambda* _25 = &_24; // ref
            Array _37 = { .len = 4, .capacity = 4, .data = CARP_MALLOC(sizeof(Uint32) * 4) };
            ((Uint32*)_37.data)[0] = i;
            Uint32 _30 = shift.env ? ((Uint32(*)(LambdaEnv, Long))shift.callback)(shift.env, 8l) : ((Uint32(*)(Long))shift.callback)(8l);
            ((Uint32*)_37.data)[1] = _30;
            Uint32 _33 = shift.env ? ((Uint32(*)(LambdaEnv, Long))shift.callback)(shift.env, 16l) : ((Uint32(*)(Long))shift.callback)(16l);
            ((Uint32*)_37.data)[2] = _33;
            Uint32 _36 = shift.env ? ((Uint32(*)(LambdaEnv, Long))shift.callback)(shift.env, 24l) : ((Uint32(*)(Long))shift.callback)(24l);
            ((Uint32*)_37.data)[3] = _36;
            Array__Uint32* _38 = &_37; // ref
            Array__uint8_t _39 = Array_copy_MINUS_map__Uint32_uint8_t(_25, _38);
            _60 = _39;
            Array_delete__Uint32(_37);
        }
        else if(order._tag == ByteOrder_BigEndian_tag) {
            ByteOrder _19_temp = order;
            // Case expr:
            Lambda _44 = { .callback = (void*)Binary_int32_MINUS_to_MINUS_byte, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.int32-to-byte (LookupGlobal ExternalCode AFunction)
            Lambda* _45 = &_44; // ref
            Array _57 = { .len = 4, .capacity = 4, .data = CARP_MALLOC(sizeof(Uint32) * 4) };
            Uint32 _49 = shift.env ? ((Uint32(*)(LambdaEnv, Long))shift.callback)(shift.env, 24l) : ((Uint32(*)(Long))shift.callback)(24l);
            ((Uint32*)_57.data)[0] = _49;
            Uint32 _52 = shift.env ? ((Uint32(*)(LambdaEnv, Long))shift.callback)(shift.env, 16l) : ((Uint32(*)(Long))shift.callback)(16l);
            ((Uint32*)_57.data)[1] = _52;
            Uint32 _55 = shift.env ? ((Uint32(*)(LambdaEnv, Long))shift.callback)(shift.env, 8l) : ((Uint32(*)(Long))shift.callback)(8l);
            ((Uint32*)_57.data)[2] = _55;
            ((Uint32*)_57.data)[3] = i;
            Array__Uint32* _58 = &_57; // ref
            Array__uint8_t _59 = Array_copy_MINUS_map__Uint32_uint8_t(_45, _58);
            _60 = _59;
            Array_delete__Uint32(_57);
        }
        else UNHANDLED("Binary.carp", 199);
        _61 = _60;
        Function_delete__Long_Uint32(shift);
    }
    return _61;
}

Array__Array__uint8_t Binary_int32_MINUS_seq_MINUS__GT_bytes(ByteOrder order, Array__Uint32* is) {
    Array__Array__uint8_t _24;
    /* let */ {
        // This lambda captures 1 variables: order
        Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty *_16_env = CARP_MALLOC(sizeof(Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty));
        _16_env->order = order;
        Lambda _16 = {
          .callback = (void*)Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env,
          .env = _16_env,
          .delete = (void*)Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete,
          .copy = (void*)Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy
        };
        Lambda f = _16;
        Lambda* _21 = &f; // ref
        Array__Array__uint8_t _23 = Array_copy_MINUS_map__Uint32_Array__uint8_t(_21, is);
        _24 = _23;
        Function_delete__Uint32_MUL__Array__uint8_t(f);
    }
    return _24;
}

Array__uint8_t Binary_int64_MINUS__GT_bytes(ByteOrder order, Uint64 i) {
    Array__uint8_t _85;
    /* let */ {
        // This lambda captures 1 variables: i
        Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty *_16_env = CARP_MALLOC(sizeof(Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty));
        _16_env->i = i;
        Lambda _16 = {
          .callback = (void*)Binary__Lambda_int64_MINUS__GT_bytes_16_env,
          .env = _16_env,
          .delete = (void*)Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty_delete,
          .copy = (void*)Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty_copy
        };
        Lambda shift = _16;
        Array__uint8_t _84;
        if(order._tag == ByteOrder_LittleEndian_tag) {
            ByteOrder _19_temp = order;
            // Case expr:
            Lambda _24 = { .callback = (void*)Binary_int64_MINUS_to_MINUS_byte, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.int64-to-byte (LookupGlobal ExternalCode AFunction)
            Lambda* _25 = &_24; // ref
            Array _49 = { .len = 8, .capacity = 8, .data = CARP_MALLOC(sizeof(Uint64) * 8) };
            ((Uint64*)_49.data)[0] = i;
            Uint64 _30 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 8l) : ((Uint64(*)(Long))shift.callback)(8l);
            ((Uint64*)_49.data)[1] = _30;
            Uint64 _33 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 16l) : ((Uint64(*)(Long))shift.callback)(16l);
            ((Uint64*)_49.data)[2] = _33;
            Uint64 _36 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 24l) : ((Uint64(*)(Long))shift.callback)(24l);
            ((Uint64*)_49.data)[3] = _36;
            Uint64 _39 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 32l) : ((Uint64(*)(Long))shift.callback)(32l);
            ((Uint64*)_49.data)[4] = _39;
            Uint64 _42 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 40l) : ((Uint64(*)(Long))shift.callback)(40l);
            ((Uint64*)_49.data)[5] = _42;
            Uint64 _45 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 48l) : ((Uint64(*)(Long))shift.callback)(48l);
            ((Uint64*)_49.data)[6] = _45;
            Uint64 _48 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 56l) : ((Uint64(*)(Long))shift.callback)(56l);
            ((Uint64*)_49.data)[7] = _48;
            Array__Uint64* _50 = &_49; // ref
            Array__uint8_t _51 = Array_copy_MINUS_map__Uint64_uint8_t(_25, _50);
            _84 = _51;
            Array_delete__Uint64(_49);
        }
        else if(order._tag == ByteOrder_BigEndian_tag) {
            ByteOrder _19_temp = order;
            // Case expr:
            Lambda _56 = { .callback = (void*)Binary_int64_MINUS_to_MINUS_byte, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.int64-to-byte (LookupGlobal ExternalCode AFunction)
            Lambda* _57 = &_56; // ref
            Array _81 = { .len = 8, .capacity = 8, .data = CARP_MALLOC(sizeof(Uint64) * 8) };
            Uint64 _61 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 56l) : ((Uint64(*)(Long))shift.callback)(56l);
            ((Uint64*)_81.data)[0] = _61;
            Uint64 _64 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 48l) : ((Uint64(*)(Long))shift.callback)(48l);
            ((Uint64*)_81.data)[1] = _64;
            Uint64 _67 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 40l) : ((Uint64(*)(Long))shift.callback)(40l);
            ((Uint64*)_81.data)[2] = _67;
            Uint64 _70 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 32l) : ((Uint64(*)(Long))shift.callback)(32l);
            ((Uint64*)_81.data)[3] = _70;
            Uint64 _73 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 24l) : ((Uint64(*)(Long))shift.callback)(24l);
            ((Uint64*)_81.data)[4] = _73;
            Uint64 _76 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 16l) : ((Uint64(*)(Long))shift.callback)(16l);
            ((Uint64*)_81.data)[5] = _76;
            Uint64 _79 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 8l) : ((Uint64(*)(Long))shift.callback)(8l);
            ((Uint64*)_81.data)[6] = _79;
            ((Uint64*)_81.data)[7] = i;
            Array__Uint64* _82 = &_81; // ref
            Array__uint8_t _83 = Array_copy_MINUS_map__Uint64_uint8_t(_57, _82);
            _84 = _83;
            Array_delete__Uint64(_81);
        }
        else UNHANDLED("Binary.carp", 285);
        _85 = _84;
        Function_delete__Long_Uint64(shift);
    }
    return _85;
}

Array__Array__uint8_t Binary_int64_MINUS_seq_MINUS__GT_bytes(ByteOrder order, Array__Uint64* is) {
    Array__Array__uint8_t _24;
    /* let */ {
        // This lambda captures 1 variables: order
        Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty *_16_env = CARP_MALLOC(sizeof(Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty));
        _16_env->order = order;
        Lambda _16 = {
          .callback = (void*)Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env,
          .env = _16_env,
          .delete = (void*)Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete,
          .copy = (void*)Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy
        };
        Lambda f = _16;
        Lambda* _21 = &f; // ref
        Array__Array__uint8_t _23 = Array_copy_MINUS_map__Uint64_Array__uint8_t(_21, is);
        _24 = _23;
        Function_delete__Uint64_MUL__Array__uint8_t(f);
    }
    return _24;
}

Array__Uint16 Binary_interpreted__Uint16_Array__uint8_t(Array__Result__Uint16_Array__uint8_t* results) {
    Lambda _6 = { .callback = (void*)Binary_unwrap_MINUS_success__Uint16_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.unwrap-success__Uint16_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _7 = &_6; // ref
    Lambda _11 = { .callback = (void*)Result_success_QMARK___Uint16_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Result.success?__Uint16_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _12 = &_11; // ref
    Array__Result__Uint16_Array__uint8_t _14 = Array_copy_MINUS_filter__Result__Uint16_Array__uint8_t(_12, results);
    Array__Result__Uint16_Array__uint8_t* _15 = &_14; // ref
    Array__Uint16 _16 = Array_copy_MINUS_map__Result__Uint16_Array__uint8_t_Uint16(_7, _15);
    Array_delete__Result__Uint16_Array__uint8_t(_14);
    return _16;
}

Array__Uint32 Binary_interpreted__Uint32_Array__uint8_t(Array__Result__Uint32_Array__uint8_t* results) {
    Lambda _6 = { .callback = (void*)Binary_unwrap_MINUS_success__Uint32_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.unwrap-success__Uint32_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _7 = &_6; // ref
    Lambda _11 = { .callback = (void*)Result_success_QMARK___Uint32_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Result.success?__Uint32_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _12 = &_11; // ref
    Array__Result__Uint32_Array__uint8_t _14 = Array_copy_MINUS_filter__Result__Uint32_Array__uint8_t(_12, results);
    Array__Result__Uint32_Array__uint8_t* _15 = &_14; // ref
    Array__Uint32 _16 = Array_copy_MINUS_map__Result__Uint32_Array__uint8_t_Uint32(_7, _15);
    Array_delete__Result__Uint32_Array__uint8_t(_14);
    return _16;
}

Array__Uint64 Binary_interpreted__Uint64_Array__uint8_t(Array__Result__Uint64_Array__uint8_t* results) {
    Lambda _6 = { .callback = (void*)Binary_unwrap_MINUS_success__Uint64_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.unwrap-success__Uint64_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _7 = &_6; // ref
    Lambda _11 = { .callback = (void*)Result_success_QMARK___Uint64_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Result.success?__Uint64_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _12 = &_11; // ref
    Array__Result__Uint64_Array__uint8_t _14 = Array_copy_MINUS_filter__Result__Uint64_Array__uint8_t(_12, results);
    Array__Result__Uint64_Array__uint8_t* _15 = &_14; // ref
    Array__Uint64 _16 = Array_copy_MINUS_map__Result__Uint64_Array__uint8_t_Uint64(_7, _15);
    Array_delete__Result__Uint64_Array__uint8_t(_14);
    return _16;
}

int Binary_remaining_MINUS_bytes__Uint16_uint8_t(Array__Result__Uint16_Array__uint8_t* results) {
    // This lambda captures 0 variables: 
    Lambda _16 = {
      .callback = (void*)Binary__Lambda_remaining_MINUS_bytes__Uint16_uint8_t_16_env,
      .env = NULL,
      .delete = (void*)NULL,
      .copy = (void*)NULL
    };
    Lambda* _17 = &_16; // ref
    Lambda _22 = { .callback = (void*)Array_length__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Array.length__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _23 = &_22; // ref
    Lambda _27 = { .callback = (void*)Binary_unwrap_MINUS_error__Uint16_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.unwrap-error__Uint16_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _28 = &_27; // ref
    Lambda _32 = { .callback = (void*)Result_error_QMARK___Uint16_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Result.error?__Uint16_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _33 = &_32; // ref
    Array__Result__Uint16_Array__uint8_t _35 = Array_copy_MINUS_filter__Result__Uint16_Array__uint8_t(_33, results);
    Array__Result__Uint16_Array__uint8_t* _36 = &_35; // ref
    Array__Array__uint8_t _37 = Array_copy_MINUS_map__Result__Uint16_Array__uint8_t_Array__uint8_t(_28, _36);
    Array__Array__uint8_t* _38 = &_37; // ref
    Array__int _39 = Array_copy_MINUS_map__Array__uint8_t_int(_23, _38);
    Array__int* _40 = &_39; // ref
    int _41 = Array_reduce__int_int(_17, 0, _40);
    Array_delete__Array__uint8_t(_37);
    Array_delete__Result__Uint16_Array__uint8_t(_35);
    Array_delete__int(_39);
    Function_delete__int_int_MUL__int(_16);
    return _41;
}

int Binary_remaining_MINUS_bytes__Uint32_uint8_t(Array__Result__Uint32_Array__uint8_t* results) {
    // This lambda captures 0 variables: 
    Lambda _16 = {
      .callback = (void*)Binary__Lambda_remaining_MINUS_bytes__Uint32_uint8_t_16_env,
      .env = NULL,
      .delete = (void*)NULL,
      .copy = (void*)NULL
    };
    Lambda* _17 = &_16; // ref
    Lambda _22 = { .callback = (void*)Array_length__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Array.length__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _23 = &_22; // ref
    Lambda _27 = { .callback = (void*)Binary_unwrap_MINUS_error__Uint32_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.unwrap-error__Uint32_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _28 = &_27; // ref
    Lambda _32 = { .callback = (void*)Result_error_QMARK___Uint32_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Result.error?__Uint32_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _33 = &_32; // ref
    Array__Result__Uint32_Array__uint8_t _35 = Array_copy_MINUS_filter__Result__Uint32_Array__uint8_t(_33, results);
    Array__Result__Uint32_Array__uint8_t* _36 = &_35; // ref
    Array__Array__uint8_t _37 = Array_copy_MINUS_map__Result__Uint32_Array__uint8_t_Array__uint8_t(_28, _36);
    Array__Array__uint8_t* _38 = &_37; // ref
    Array__int _39 = Array_copy_MINUS_map__Array__uint8_t_int(_23, _38);
    Array__int* _40 = &_39; // ref
    int _41 = Array_reduce__int_int(_17, 0, _40);
    Array_delete__Array__uint8_t(_37);
    Array_delete__Result__Uint32_Array__uint8_t(_35);
    Array_delete__int(_39);
    Function_delete__int_int_MUL__int(_16);
    return _41;
}

int Binary_remaining_MINUS_bytes__Uint64_uint8_t(Array__Result__Uint64_Array__uint8_t* results) {
    // This lambda captures 0 variables: 
    Lambda _16 = {
      .callback = (void*)Binary__Lambda_remaining_MINUS_bytes__Uint64_uint8_t_16_env,
      .env = NULL,
      .delete = (void*)NULL,
      .copy = (void*)NULL
    };
    Lambda* _17 = &_16; // ref
    Lambda _22 = { .callback = (void*)Array_length__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Array.length__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _23 = &_22; // ref
    Lambda _27 = { .callback = (void*)Binary_unwrap_MINUS_error__Uint64_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.unwrap-error__Uint64_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _28 = &_27; // ref
    Lambda _32 = { .callback = (void*)Result_error_QMARK___Uint64_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Result.error?__Uint64_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _33 = &_32; // ref
    Array__Result__Uint64_Array__uint8_t _35 = Array_copy_MINUS_filter__Result__Uint64_Array__uint8_t(_33, results);
    Array__Result__Uint64_Array__uint8_t* _36 = &_35; // ref
    Array__Array__uint8_t _37 = Array_copy_MINUS_map__Result__Uint64_Array__uint8_t_Array__uint8_t(_28, _36);
    Array__Array__uint8_t* _38 = &_37; // ref
    Array__int _39 = Array_copy_MINUS_map__Array__uint8_t_int(_23, _38);
    Array__int* _40 = &_39; // ref
    int _41 = Array_reduce__int_int(_17, 0, _40);
    Array_delete__Array__uint8_t(_37);
    Array_delete__Result__Uint64_Array__uint8_t(_35);
    Array_delete__int(_39);
    Function_delete__int_int_MUL__int(_16);
    return _41;
}

ByteOrder Binary_system_MINUS_endianness() {
    ByteOrder _17;
    int _6 = Binary_system_MINUS_endianness_MINUS_internal();
    bool _8 = Int__EQ_(_6, 1);
    if (_8) {
        ByteOrder _11 = ByteOrder_LittleEndian();
        ByteOrder _12 = _11;
        _17 = _12;
    } else {
        ByteOrder _15 = ByteOrder_BigEndian();
        ByteOrder _16 = _15;
        _17 = _16;
    }
    return _17;
}

String Binary_to_MINUS_hex_MINUS_str(uint8_t b) {
    String _525;
    /* let */ {
        uint8_t _10 = Byte_from_MINUS_int(240);
        uint8_t _11 = Byte_bit_MINUS_and(b, _10);
        uint8_t hi = _11;
        uint8_t _17 = Byte_from_MINUS_int(4);
        uint8_t _18 = Byte_bit_MINUS_shift_MINUS_left(b, _17);
        uint8_t lo = _18;
        String _267;
        /* let */ {
            uint8_t gensym_MINUS_generated1037 = hi;
            String _266;
            uint8_t _29 = Byte_from_MINUS_int(0);
            bool _30 = Byte__EQ_(gensym_MINUS_generated1037, _29);
            if (_30) {
                static String _33 = "0";
                String *_33_ref = &_33;
                String _34 = String_copy(_33_ref);
                String _35 = _34;
                _266 = _35;
            } else {
                String _264;
                uint8_t _42 = Byte_from_MINUS_int(16);
                bool _43 = Byte__EQ_(gensym_MINUS_generated1037, _42);
                if (_43) {
                    static String _46 = "1";
                    String *_46_ref = &_46;
                    String _47 = String_copy(_46_ref);
                    String _48 = _47;
                    _264 = _48;
                } else {
                    String _262;
                    uint8_t _55 = Byte_from_MINUS_int(32);
                    bool _56 = Byte__EQ_(gensym_MINUS_generated1037, _55);
                    if (_56) {
                        static String _59 = "2";
                        String *_59_ref = &_59;
                        String _60 = String_copy(_59_ref);
                        String _61 = _60;
                        _262 = _61;
                    } else {
                        String _260;
                        uint8_t _68 = Byte_from_MINUS_int(48);
                        bool _69 = Byte__EQ_(gensym_MINUS_generated1037, _68);
                        if (_69) {
                            static String _72 = "3";
                            String *_72_ref = &_72;
                            String _73 = String_copy(_72_ref);
                            String _74 = _73;
                            _260 = _74;
                        } else {
                            String _258;
                            uint8_t _81 = Byte_from_MINUS_int(64);
                            bool _82 = Byte__EQ_(gensym_MINUS_generated1037, _81);
                            if (_82) {
                                static String _85 = "4";
                                String *_85_ref = &_85;
                                String _86 = String_copy(_85_ref);
                                String _87 = _86;
                                _258 = _87;
                            } else {
                                String _256;
                                uint8_t _94 = Byte_from_MINUS_int(80);
                                bool _95 = Byte__EQ_(gensym_MINUS_generated1037, _94);
                                if (_95) {
                                    static String _98 = "5";
                                    String *_98_ref = &_98;
                                    String _99 = String_copy(_98_ref);
                                    String _100 = _99;
                                    _256 = _100;
                                } else {
                                    String _254;
                                    uint8_t _107 = Byte_from_MINUS_int(96);
                                    bool _108 = Byte__EQ_(gensym_MINUS_generated1037, _107);
                                    if (_108) {
                                        static String _111 = "6";
                                        String *_111_ref = &_111;
                                        String _112 = String_copy(_111_ref);
                                        String _113 = _112;
                                        _254 = _113;
                                    } else {
                                        String _252;
                                        uint8_t _120 = Byte_from_MINUS_int(112);
                                        bool _121 = Byte__EQ_(gensym_MINUS_generated1037, _120);
                                        if (_121) {
                                            static String _124 = "7";
                                            String *_124_ref = &_124;
                                            String _125 = String_copy(_124_ref);
                                            String _126 = _125;
                                            _252 = _126;
                                        } else {
                                            String _250;
                                            uint8_t _133 = Byte_from_MINUS_int(128);
                                            bool _134 = Byte__EQ_(gensym_MINUS_generated1037, _133);
                                            if (_134) {
                                                static String _137 = "8";
                                                String *_137_ref = &_137;
                                                String _138 = String_copy(_137_ref);
                                                String _139 = _138;
                                                _250 = _139;
                                            } else {
                                                String _248;
                                                uint8_t _146 = Byte_from_MINUS_int(144);
                                                bool _147 = Byte__EQ_(gensym_MINUS_generated1037, _146);
                                                if (_147) {
                                                    static String _150 = "9";
                                                    String *_150_ref = &_150;
                                                    String _151 = String_copy(_150_ref);
                                                    String _152 = _151;
                                                    _248 = _152;
                                                } else {
                                                    String _246;
                                                    uint8_t _159 = Byte_from_MINUS_int(160);
                                                    bool _160 = Byte__EQ_(gensym_MINUS_generated1037, _159);
                                                    if (_160) {
                                                        static String _163 = "A";
                                                        String *_163_ref = &_163;
                                                        String _164 = String_copy(_163_ref);
                                                        String _165 = _164;
                                                        _246 = _165;
                                                    } else {
                                                        String _244;
                                                        uint8_t _172 = Byte_from_MINUS_int(176);
                                                        bool _173 = Byte__EQ_(gensym_MINUS_generated1037, _172);
                                                        if (_173) {
                                                            static String _176 = "B";
                                                            String *_176_ref = &_176;
                                                            String _177 = String_copy(_176_ref);
                                                            String _178 = _177;
                                                            _244 = _178;
                                                        } else {
                                                            String _242;
                                                            uint8_t _185 = Byte_from_MINUS_int(192);
                                                            bool _186 = Byte__EQ_(gensym_MINUS_generated1037, _185);
                                                            if (_186) {
                                                                static String _189 = "C";
                                                                String *_189_ref = &_189;
                                                                String _190 = String_copy(_189_ref);
                                                                String _191 = _190;
                                                                _242 = _191;
                                                            } else {
                                                                String _240;
                                                                uint8_t _198 = Byte_from_MINUS_int(208);
                                                                bool _199 = Byte__EQ_(gensym_MINUS_generated1037, _198);
                                                                if (_199) {
                                                                    static String _202 = "D";
                                                                    String *_202_ref = &_202;
                                                                    String _203 = String_copy(_202_ref);
                                                                    String _204 = _203;
                                                                    _240 = _204;
                                                                } else {
                                                                    String _238;
                                                                    uint8_t _211 = Byte_from_MINUS_int(224);
                                                                    bool _212 = Byte__EQ_(gensym_MINUS_generated1037, _211);
                                                                    if (_212) {
                                                                        static String _215 = "E";
                                                                        String *_215_ref = &_215;
                                                                        String _216 = String_copy(_215_ref);
                                                                        String _217 = _216;
                                                                        _238 = _217;
                                                                    } else {
                                                                        String _236;
                                                                        uint8_t _224 = Byte_from_MINUS_int(240);
                                                                        bool _225 = Byte__EQ_(gensym_MINUS_generated1037, _224);
                                                                        if (_225) {
                                                                            static String _228 = "F";
                                                                            String *_228_ref = &_228;
                                                                            String _229 = String_copy(_228_ref);
                                                                            String _230 = _229;
                                                                            _236 = _230;
                                                                        } else {
                                                                            static String _233 = "FATAL ERROR IN BIT LAND! ALL IS LOST";
                                                                            String *_233_ref = &_233;
                                                                            String _234 = String_copy(_233_ref);
                                                                            String _235 = _234;
                                                                            _236 = _235;
                                                                        }
                                                                        String _237 = _236;
                                                                        _238 = _237;
                                                                    }
                                                                    String _239 = _238;
                                                                    _240 = _239;
                                                                }
                                                                String _241 = _240;
                                                                _242 = _241;
                                                            }
                                                            String _243 = _242;
                                                            _244 = _243;
                                                        }
                                                        String _245 = _244;
                                                        _246 = _245;
                                                    }
                                                    String _247 = _246;
                                                    _248 = _247;
                                                }
                                                String _249 = _248;
                                                _250 = _249;
                                            }
                                            String _251 = _250;
                                            _252 = _251;
                                        }
                                        String _253 = _252;
                                        _254 = _253;
                                    }
                                    String _255 = _254;
                                    _256 = _255;
                                }
                                String _257 = _256;
                                _258 = _257;
                            }
                            String _259 = _258;
                            _260 = _259;
                        }
                        String _261 = _260;
                        _262 = _261;
                    }
                    String _263 = _262;
                    _264 = _263;
                }
                String _265 = _264;
                _266 = _265;
            }
            _267 = _266;
        }
        String nib_MINUS_one = _267;
        String _516;
        /* let */ {
            uint8_t gensym_MINUS_generated1038 = lo;
            String _515;
            uint8_t _278 = Byte_from_MINUS_int(0);
            bool _279 = Byte__EQ_(gensym_MINUS_generated1038, _278);
            if (_279) {
                static String _282 = "0";
                String *_282_ref = &_282;
                String _283 = String_copy(_282_ref);
                String _284 = _283;
                _515 = _284;
            } else {
                String _513;
                uint8_t _291 = Byte_from_MINUS_int(16);
                bool _292 = Byte__EQ_(gensym_MINUS_generated1038, _291);
                if (_292) {
                    static String _295 = "1";
                    String *_295_ref = &_295;
                    String _296 = String_copy(_295_ref);
                    String _297 = _296;
                    _513 = _297;
                } else {
                    String _511;
                    uint8_t _304 = Byte_from_MINUS_int(32);
                    bool _305 = Byte__EQ_(gensym_MINUS_generated1038, _304);
                    if (_305) {
                        static String _308 = "2";
                        String *_308_ref = &_308;
                        String _309 = String_copy(_308_ref);
                        String _310 = _309;
                        _511 = _310;
                    } else {
                        String _509;
                        uint8_t _317 = Byte_from_MINUS_int(48);
                        bool _318 = Byte__EQ_(gensym_MINUS_generated1038, _317);
                        if (_318) {
                            static String _321 = "3";
                            String *_321_ref = &_321;
                            String _322 = String_copy(_321_ref);
                            String _323 = _322;
                            _509 = _323;
                        } else {
                            String _507;
                            uint8_t _330 = Byte_from_MINUS_int(64);
                            bool _331 = Byte__EQ_(gensym_MINUS_generated1038, _330);
                            if (_331) {
                                static String _334 = "4";
                                String *_334_ref = &_334;
                                String _335 = String_copy(_334_ref);
                                String _336 = _335;
                                _507 = _336;
                            } else {
                                String _505;
                                uint8_t _343 = Byte_from_MINUS_int(80);
                                bool _344 = Byte__EQ_(gensym_MINUS_generated1038, _343);
                                if (_344) {
                                    static String _347 = "5";
                                    String *_347_ref = &_347;
                                    String _348 = String_copy(_347_ref);
                                    String _349 = _348;
                                    _505 = _349;
                                } else {
                                    String _503;
                                    uint8_t _356 = Byte_from_MINUS_int(96);
                                    bool _357 = Byte__EQ_(gensym_MINUS_generated1038, _356);
                                    if (_357) {
                                        static String _360 = "6";
                                        String *_360_ref = &_360;
                                        String _361 = String_copy(_360_ref);
                                        String _362 = _361;
                                        _503 = _362;
                                    } else {
                                        String _501;
                                        uint8_t _369 = Byte_from_MINUS_int(112);
                                        bool _370 = Byte__EQ_(gensym_MINUS_generated1038, _369);
                                        if (_370) {
                                            static String _373 = "7";
                                            String *_373_ref = &_373;
                                            String _374 = String_copy(_373_ref);
                                            String _375 = _374;
                                            _501 = _375;
                                        } else {
                                            String _499;
                                            uint8_t _382 = Byte_from_MINUS_int(128);
                                            bool _383 = Byte__EQ_(gensym_MINUS_generated1038, _382);
                                            if (_383) {
                                                static String _386 = "8";
                                                String *_386_ref = &_386;
                                                String _387 = String_copy(_386_ref);
                                                String _388 = _387;
                                                _499 = _388;
                                            } else {
                                                String _497;
                                                uint8_t _395 = Byte_from_MINUS_int(144);
                                                bool _396 = Byte__EQ_(gensym_MINUS_generated1038, _395);
                                                if (_396) {
                                                    static String _399 = "9";
                                                    String *_399_ref = &_399;
                                                    String _400 = String_copy(_399_ref);
                                                    String _401 = _400;
                                                    _497 = _401;
                                                } else {
                                                    String _495;
                                                    uint8_t _408 = Byte_from_MINUS_int(160);
                                                    bool _409 = Byte__EQ_(gensym_MINUS_generated1038, _408);
                                                    if (_409) {
                                                        static String _412 = "A";
                                                        String *_412_ref = &_412;
                                                        String _413 = String_copy(_412_ref);
                                                        String _414 = _413;
                                                        _495 = _414;
                                                    } else {
                                                        String _493;
                                                        uint8_t _421 = Byte_from_MINUS_int(176);
                                                        bool _422 = Byte__EQ_(gensym_MINUS_generated1038, _421);
                                                        if (_422) {
                                                            static String _425 = "B";
                                                            String *_425_ref = &_425;
                                                            String _426 = String_copy(_425_ref);
                                                            String _427 = _426;
                                                            _493 = _427;
                                                        } else {
                                                            String _491;
                                                            uint8_t _434 = Byte_from_MINUS_int(192);
                                                            bool _435 = Byte__EQ_(gensym_MINUS_generated1038, _434);
                                                            if (_435) {
                                                                static String _438 = "C";
                                                                String *_438_ref = &_438;
                                                                String _439 = String_copy(_438_ref);
                                                                String _440 = _439;
                                                                _491 = _440;
                                                            } else {
                                                                String _489;
                                                                uint8_t _447 = Byte_from_MINUS_int(208);
                                                                bool _448 = Byte__EQ_(gensym_MINUS_generated1038, _447);
                                                                if (_448) {
                                                                    static String _451 = "D";
                                                                    String *_451_ref = &_451;
                                                                    String _452 = String_copy(_451_ref);
                                                                    String _453 = _452;
                                                                    _489 = _453;
                                                                } else {
                                                                    String _487;
                                                                    uint8_t _460 = Byte_from_MINUS_int(224);
                                                                    bool _461 = Byte__EQ_(gensym_MINUS_generated1038, _460);
                                                                    if (_461) {
                                                                        static String _464 = "E";
                                                                        String *_464_ref = &_464;
                                                                        String _465 = String_copy(_464_ref);
                                                                        String _466 = _465;
                                                                        _487 = _466;
                                                                    } else {
                                                                        String _485;
                                                                        uint8_t _473 = Byte_from_MINUS_int(240);
                                                                        bool _474 = Byte__EQ_(gensym_MINUS_generated1038, _473);
                                                                        if (_474) {
                                                                            static String _477 = "F";
                                                                            String *_477_ref = &_477;
                                                                            String _478 = String_copy(_477_ref);
                                                                            String _479 = _478;
                                                                            _485 = _479;
                                                                        } else {
                                                                            static String _482 = "FATAL ERROR IN BIT LAND! ALL IS LOST";
                                                                            String *_482_ref = &_482;
                                                                            String _483 = String_copy(_482_ref);
                                                                            String _484 = _483;
                                                                            _485 = _484;
                                                                        }
                                                                        String _486 = _485;
                                                                        _487 = _486;
                                                                    }
                                                                    String _488 = _487;
                                                                    _489 = _488;
                                                                }
                                                                String _490 = _489;
                                                                _491 = _490;
                                                            }
                                                            String _492 = _491;
                                                            _493 = _492;
                                                        }
                                                        String _494 = _493;
                                                        _495 = _494;
                                                    }
                                                    String _496 = _495;
                                                    _497 = _496;
                                                }
                                                String _498 = _497;
                                                _499 = _498;
                                            }
                                            String _500 = _499;
                                            _501 = _500;
                                        }
                                        String _502 = _501;
                                        _503 = _502;
                                    }
                                    String _504 = _503;
                                    _505 = _504;
                                }
                                String _506 = _505;
                                _507 = _506;
                            }
                            String _508 = _507;
                            _509 = _508;
                        }
                        String _510 = _509;
                        _511 = _510;
                    }
                    String _512 = _511;
                    _513 = _512;
                }
                String _514 = _513;
                _515 = _514;
            }
            _516 = _515;
        }
        String nib_MINUS_two = _516;
        Array _522 = { .len = 2, .capacity = 2, .data = CARP_MALLOC(sizeof(String) * 2) };
        ((String*)_522.data)[0] = nib_MINUS_one;
        ((String*)_522.data)[1] = nib_MINUS_two;
        Array__String* _523 = &_522; // ref
        String _524 = String_concat(_523);
        _525 = _524;
        Array_delete__String(_522);
    }
    return _525;
}

Uint16 Binary_unsafe_MINUS_bytes_MINUS__GT_int16(ByteOrder order, Array__uint8_t* bs) {
    Uint16 _39;
    if(order._tag == ByteOrder_LittleEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        uint8_t* _14 = Array_unsafe_MINUS_nth__uint8_t(bs, 0);
        uint8_t _15 = Byte_copy(_14);
        uint8_t* _20 = Array_unsafe_MINUS_nth__uint8_t(bs, 1);
        uint8_t _21 = Byte_copy(_20);
        Uint16 _22 = Binary_to_MINUS_int16(_15, _21);
        _39 = _22;
    }
    else if(order._tag == ByteOrder_BigEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        uint8_t* _30 = Array_unsafe_MINUS_nth__uint8_t(bs, 1);
        uint8_t _31 = Byte_copy(_30);
        uint8_t* _36 = Array_unsafe_MINUS_nth__uint8_t(bs, 0);
        uint8_t _37 = Byte_copy(_36);
        Uint16 _38 = Binary_to_MINUS_int16(_31, _37);
        _39 = _38;
    }
    else UNHANDLED("Binary.carp", 99);
    return _39;
}

Array__Uint16 Binary_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq(ByteOrder order, Array__uint8_t* bs) {
    Array__Uint16 _29;
    /* let */ {
        Array__Array__uint8_t _10 = Array_partition__uint8_t(bs, 2);
        Array__Array__uint8_t partitions = _10;
        // This lambda captures 1 variables: order
        Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty *_19_env = CARP_MALLOC(sizeof(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty));
        _19_env->order = order;
        Lambda _19 = {
          .callback = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env,
          .env = _19_env,
          .delete = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty_delete,
          .copy = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty_copy
        };
        Lambda f = _19;
        Lambda* _24 = &f; // ref
        Array__Array__uint8_t* _27 = &partitions; // ref
        Array__Uint16 _28 = Array_copy_MINUS_map__Array__uint8_t_Uint16(_24, _27);
        _29 = _28;
        Array_delete__Array__uint8_t(partitions);
        Function_delete__Array__uint8_t_MUL__Uint16(f);
    }
    return _29;
}

Uint32 Binary_unsafe_MINUS_bytes_MINUS__GT_int32(ByteOrder order, Array__uint8_t* bs) {
    Uint32 _63;
    if(order._tag == ByteOrder_LittleEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        uint8_t* _14 = Array_unsafe_MINUS_nth__uint8_t(bs, 0);
        uint8_t _15 = Byte_copy(_14);
        uint8_t* _20 = Array_unsafe_MINUS_nth__uint8_t(bs, 1);
        uint8_t _21 = Byte_copy(_20);
        uint8_t* _26 = Array_unsafe_MINUS_nth__uint8_t(bs, 2);
        uint8_t _27 = Byte_copy(_26);
        uint8_t* _32 = Array_unsafe_MINUS_nth__uint8_t(bs, 3);
        uint8_t _33 = Byte_copy(_32);
        Uint32 _34 = Binary_to_MINUS_int32(_15, _21, _27, _33);
        _63 = _34;
    }
    else if(order._tag == ByteOrder_BigEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        uint8_t* _42 = Array_unsafe_MINUS_nth__uint8_t(bs, 3);
        uint8_t _43 = Byte_copy(_42);
        uint8_t* _48 = Array_unsafe_MINUS_nth__uint8_t(bs, 2);
        uint8_t _49 = Byte_copy(_48);
        uint8_t* _54 = Array_unsafe_MINUS_nth__uint8_t(bs, 1);
        uint8_t _55 = Byte_copy(_54);
        uint8_t* _60 = Array_unsafe_MINUS_nth__uint8_t(bs, 0);
        uint8_t _61 = Byte_copy(_60);
        Uint32 _62 = Binary_to_MINUS_int32(_43, _49, _55, _61);
        _63 = _62;
    }
    else UNHANDLED("Binary.carp", 171);
    return _63;
}

Array__Uint32 Binary_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq(ByteOrder order, Array__uint8_t* bs) {
    Array__Uint32 _29;
    /* let */ {
        Array__Array__uint8_t _10 = Array_partition__uint8_t(bs, 4);
        Array__Array__uint8_t partitions = _10;
        // This lambda captures 1 variables: order
        Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty *_19_env = CARP_MALLOC(sizeof(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty));
        _19_env->order = order;
        Lambda _19 = {
          .callback = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env,
          .env = _19_env,
          .delete = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty_delete,
          .copy = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty_copy
        };
        Lambda f = _19;
        Lambda* _24 = &f; // ref
        Array__Array__uint8_t* _27 = &partitions; // ref
        Array__Uint32 _28 = Array_copy_MINUS_map__Array__uint8_t_Uint32(_24, _27);
        _29 = _28;
        Array_delete__Array__uint8_t(partitions);
        Function_delete__Array__uint8_t_MUL__Uint32(f);
    }
    return _29;
}

Uint64 Binary_unsafe_MINUS_bytes_MINUS__GT_int64(ByteOrder order, Array__uint8_t* bs) {
    Uint64 _111;
    if(order._tag == ByteOrder_LittleEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        uint8_t* _14 = Array_unsafe_MINUS_nth__uint8_t(bs, 0);
        uint8_t _15 = Byte_copy(_14);
        uint8_t* _20 = Array_unsafe_MINUS_nth__uint8_t(bs, 1);
        uint8_t _21 = Byte_copy(_20);
        uint8_t* _26 = Array_unsafe_MINUS_nth__uint8_t(bs, 2);
        uint8_t _27 = Byte_copy(_26);
        uint8_t* _32 = Array_unsafe_MINUS_nth__uint8_t(bs, 3);
        uint8_t _33 = Byte_copy(_32);
        uint8_t* _38 = Array_unsafe_MINUS_nth__uint8_t(bs, 4);
        uint8_t _39 = Byte_copy(_38);
        uint8_t* _44 = Array_unsafe_MINUS_nth__uint8_t(bs, 5);
        uint8_t _45 = Byte_copy(_44);
        uint8_t* _50 = Array_unsafe_MINUS_nth__uint8_t(bs, 6);
        uint8_t _51 = Byte_copy(_50);
        uint8_t* _56 = Array_unsafe_MINUS_nth__uint8_t(bs, 7);
        uint8_t _57 = Byte_copy(_56);
        Uint64 _58 = Binary_to_MINUS_int64(_15, _21, _27, _33, _39, _45, _51, _57);
        _111 = _58;
    }
    else if(order._tag == ByteOrder_BigEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        uint8_t* _66 = Array_unsafe_MINUS_nth__uint8_t(bs, 7);
        uint8_t _67 = Byte_copy(_66);
        uint8_t* _72 = Array_unsafe_MINUS_nth__uint8_t(bs, 6);
        uint8_t _73 = Byte_copy(_72);
        uint8_t* _78 = Array_unsafe_MINUS_nth__uint8_t(bs, 5);
        uint8_t _79 = Byte_copy(_78);
        uint8_t* _84 = Array_unsafe_MINUS_nth__uint8_t(bs, 4);
        uint8_t _85 = Byte_copy(_84);
        uint8_t* _90 = Array_unsafe_MINUS_nth__uint8_t(bs, 3);
        uint8_t _91 = Byte_copy(_90);
        uint8_t* _96 = Array_unsafe_MINUS_nth__uint8_t(bs, 2);
        uint8_t _97 = Byte_copy(_96);
        uint8_t* _102 = Array_unsafe_MINUS_nth__uint8_t(bs, 1);
        uint8_t _103 = Byte_copy(_102);
        uint8_t* _108 = Array_unsafe_MINUS_nth__uint8_t(bs, 0);
        uint8_t _109 = Byte_copy(_108);
        Uint64 _110 = Binary_to_MINUS_int64(_67, _73, _79, _85, _91, _97, _103, _109);
        _111 = _110;
    }
    else UNHANDLED("Binary.carp", 250);
    return _111;
}

Array__Uint64 Binary_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq(ByteOrder order, Array__uint8_t* bs) {
    Array__Uint64 _29;
    /* let */ {
        Array__Array__uint8_t _10 = Array_partition__uint8_t(bs, 8);
        Array__Array__uint8_t partitions = _10;
        // This lambda captures 1 variables: order
        Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty *_19_env = CARP_MALLOC(sizeof(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty));
        _19_env->order = order;
        Lambda _19 = {
          .callback = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env,
          .env = _19_env,
          .delete = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty_delete,
          .copy = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty_copy
        };
        Lambda f = _19;
        Lambda* _24 = &f; // ref
        Array__Array__uint8_t* _27 = &partitions; // ref
        Array__Uint64 _28 = Array_copy_MINUS_map__Array__uint8_t_Uint64(_24, _27);
        _29 = _28;
        Array_delete__Array__uint8_t(partitions);
        Function_delete__Array__uint8_t_MUL__Uint64(f);
    }
    return _29;
}

Array__uint8_t Binary_unwrap_MINUS_error__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* x) {
    Result__Uint16_Array__uint8_t _7 = Result_copy__Uint16_Array__uint8_t(x);
    Array__uint8_t _9 = Array_zero__uint8_t();
    Array__uint8_t _10 = Result_from_MINUS_error__Uint16_Array__uint8_t(_7, _9);
    return _10;
}

Array__uint8_t Binary_unwrap_MINUS_error__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* x) {
    Result__Uint32_Array__uint8_t _7 = Result_copy__Uint32_Array__uint8_t(x);
    Array__uint8_t _9 = Array_zero__uint8_t();
    Array__uint8_t _10 = Result_from_MINUS_error__Uint32_Array__uint8_t(_7, _9);
    return _10;
}

Array__uint8_t Binary_unwrap_MINUS_error__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* x) {
    Result__Uint64_Array__uint8_t _7 = Result_copy__Uint64_Array__uint8_t(x);
    Array__uint8_t _9 = Array_zero__uint8_t();
    Array__uint8_t _10 = Result_from_MINUS_error__Uint64_Array__uint8_t(_7, _9);
    return _10;
}

Uint16 Binary_unwrap_MINUS_success__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* x) {
    Result__Uint16_Array__uint8_t _7 = Result_copy__Uint16_Array__uint8_t(x);
    Uint16 _8 = Result_unwrap_MINUS_or_MINUS_zero__Uint16_Array__uint8_t(_7);
    return _8;
}

Uint32 Binary_unwrap_MINUS_success__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* x) {
    Result__Uint32_Array__uint8_t _7 = Result_copy__Uint32_Array__uint8_t(x);
    Uint32 _8 = Result_unwrap_MINUS_or_MINUS_zero__Uint32_Array__uint8_t(_7);
    return _8;
}

Uint64 Binary_unwrap_MINUS_success__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* x) {
    Result__Uint64_Array__uint8_t _7 = Result_copy__Uint64_Array__uint8_t(x);
    Uint64 _8 = Result_unwrap_MINUS_or_MINUS_zero__Uint64_Array__uint8_t(_7);
    return _8;
}

Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty_copy(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* pRef) {
    Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'f' : (Ref (Fn [ByteOrder, (Ref (Array Byte) <c>)] (Maybe Uint16) <StaticLifetime>) <StaticLifetime>) */
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty_delete(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* p) {
    /* Ignore non-managed member 'f' : (Ref (Fn [ByteOrder, (Ref (Array Byte) <c>)] (Maybe Uint16) <StaticLifetime>) <StaticLifetime>) */
    /* Ignore non-managed member 'order' : ByteOrder */
}

Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty_copy(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* pRef) {
    Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'f' : (Ref (Fn [ByteOrder, (Ref (Array Byte) <c>)] (Maybe Uint32) <StaticLifetime>) <StaticLifetime>) */
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty_delete(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* p) {
    /* Ignore non-managed member 'f' : (Ref (Fn [ByteOrder, (Ref (Array Byte) <c>)] (Maybe Uint32) <StaticLifetime>) <StaticLifetime>) */
    /* Ignore non-managed member 'order' : ByteOrder */
}

Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty_copy(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* pRef) {
    Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'f' : (Ref (Fn [ByteOrder, (Ref (Array Byte) <c>)] (Maybe Uint64) <StaticLifetime>) <StaticLifetime>) */
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty_delete(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* p) {
    /* Ignore non-managed member 'f' : (Ref (Fn [ByteOrder, (Ref (Array Byte) <c>)] (Maybe Uint64) <StaticLifetime>) <StaticLifetime>) */
    /* Ignore non-managed member 'order' : ByteOrder */
}

Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* pRef) {
    Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* p) {
    /* Ignore non-managed member 'order' : ByteOrder */
}

Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* pRef) {
    Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'i' : Uint32 */
    return copy;
}

void Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* p) {
    /* Ignore non-managed member 'i' : Uint32 */
}

Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* pRef) {
    Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* p) {
    /* Ignore non-managed member 'order' : ByteOrder */
}

Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* pRef) {
    Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'i' : Uint64 */
    return copy;
}

void Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* p) {
    /* Ignore non-managed member 'i' : Uint64 */
}

Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* pRef) {
    Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* p) {
    /* Ignore non-managed member 'order' : ByteOrder */
}

Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty_copy(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* pRef) {
    Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty_delete(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* p) {
    /* Ignore non-managed member 'order' : ByteOrder */
}

Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty_copy(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* pRef) {
    Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty_delete(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* p) {
    /* Ignore non-managed member 'order' : ByteOrder */
}

Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty_copy(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* pRef) {
    Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty_delete(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* p) {
    /* Ignore non-managed member 'order' : ByteOrder */
}

bool Bool_blit(bool x) {
    bool _7 = x; // From the 'the' function.
    return _7;
}

int Bool_hash(bool* k) {
    int _17;
    bool _9 = Bool_copy(k);
    bool _10 = _9; // From the 'the' function.
    if (_10) {
        int _13 = 1;
        _17 = _13;
    } else {
        int _16 = 0;
        _17 = _16;
    }
    return _17;
}

String Bool_prn(bool x) {
    String _6 = Bool_str(x);
    return _6;
}

bool Bool_zero() {
    return false;
}

String BoolRef_format(String* s, bool* x) {
    bool _9 = Bool_copy(x);
    String _10 = Bool_format(s, _9);
    return _10;
}

String BoolRef_prn(bool* x) {
    bool _7 = Bool_copy(x);
    String _8 = Bool_str(_7);
    return _8;
}

String BoolRef_str(bool* x) {
    bool _7 = Bool_copy(x);
    String _8 = Bool_str(_7);
    return _8;
}

uint8_t Byte_add_MINUS_ref(uint8_t* x, uint8_t* y) {
    uint8_t _8 = Byte_copy(x);
    uint8_t _11 = Byte_copy(y);
    uint8_t _12 = Byte__PLUS_(_8, _11);
    return _12;
}

uint8_t Byte_blit(uint8_t x) {
    uint8_t _7 = x; // From the 'the' function.
    return _7;
}

bool Byte_even_QMARK_(uint8_t a) {
    uint8_t _8 = Byte_mod(a, 2);
    bool _10 = Byte__EQ_(_8, 0);
    return _10;
}

Maybe__uint8_t Byte_from_MINUS_string(String* s) {
    Maybe__uint8_t _25;
    /* let */ {
        uint8_t res = 0;
        Maybe__uint8_t _24;
        uint8_t* _13 = &res; // ref
        bool _14 = Byte_from_MINUS_string_MINUS_internal(s, _13);
        if (_14) {
            Maybe__uint8_t _18 = Maybe_Just__uint8_t(res);
            Maybe__uint8_t _19 = _18;
            _24 = _19;
        } else {
            Maybe__uint8_t _22 = Maybe_Nothing__uint8_t();
            Maybe__uint8_t _23 = _22;
            _24 = _23;
        }
        _25 = _24;
    }
    return _25;
}

int Byte_hash(uint8_t* k) {
    uint8_t _9 = Byte_copy(k);
    uint8_t _10 = _9; // From the 'the' function.
    int _11 = Byte_to_MINUS_int(_10);
    return _11;
}

bool Byte_odd_QMARK_(uint8_t a) {
    bool _7 = Byte_even_QMARK_(a);
    bool _8 = not(_7);
    return _8;
}

uint8_t Byte_pow(uint8_t x, uint8_t y) {
    uint8_t _55;
    /* let */ {
        uint8_t r = 1;
        bool _14 = _DIV__EQ___uint8_t(y, 0);
        bool _52 = _14;
        while (_52) {
            uint8_t _21 = Byte_bit_MINUS_and(y, 1);
            bool _23 = _DIV__EQ___uint8_t(_21, 0);
            if (_23) {
                uint8_t _30 = Byte__MUL_(r, x);
                r = _30;  // Byte = Byte
            } else {
                /* () */
            }
            uint8_t _42 = Byte__DIV_(y, 2);
            y = _42;  // Byte = Byte
            uint8_t _49 = Byte__MUL_(x, x);
            x = _49;  // Byte = Byte
            bool _14 = _DIV__EQ___uint8_t(y, 0);
            _52 = _14;
        }
        uint8_t _54 = r;
        _55 = _54;
    }
    return _55;
}

String Byte_prn(uint8_t x) {
    String _6 = Byte_str(x);
    return _6;
}

uint8_t Byte_random() {
    int _5 = Int_random();
    uint8_t _6 = Byte_from_MINUS_int(_5);
    return _6;
}

uint8_t Byte_random_MINUS_between(uint8_t lower, uint8_t upper) {
    int _9 = Byte_to_MINUS_int(lower);
    int _12 = Byte_to_MINUS_int(upper);
    int _13 = Int_random_MINUS_between(_9, _12);
    uint8_t _14 = Byte_from_MINUS_int(_13);
    return _14;
}

uint8_t Byte_zero() {
    return 0;
}

ByteOrder ByteOrder_BigEndian() {
  ByteOrder instance;

    instance._tag = ByteOrder_BigEndian_tag;
    return instance;
}

ByteOrder ByteOrder_LittleEndian() {
  ByteOrder instance;

    instance._tag = ByteOrder_LittleEndian_tag;
    return instance;
}

ByteOrder ByteOrder_blit(ByteOrder x) {
    ByteOrder _7 = x; // From the 'the' function.
    return _7;
}

ByteOrder ByteOrder_copy(ByteOrder* pRef) {
    ByteOrder copy = *pRef;
    if(pRef->_tag == ByteOrder_LittleEndian_tag) {

    }

    else if(pRef->_tag == ByteOrder_BigEndian_tag) {

    }

    return copy;
}

void ByteOrder_delete(ByteOrder p) {
  if(p._tag == ByteOrder_LittleEndian_tag) {

  }
  else if(p._tag == ByteOrder_BigEndian_tag) {

  }

}

int ByteOrder_get_MINUS_tag(ByteOrder *p) { return p->_tag; }
String ByteOrder_prn(ByteOrder *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = 1;
  if(p->_tag == ByteOrder_LittleEndian_tag) {
    size += snprintf(NULL, 0, "(%s ", "LittleEndian");

  }
  if(p->_tag == ByteOrder_BigEndian_tag) {
    size += snprintf(NULL, 0, "(%s ", "BigEndian");

  }

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  if(p->_tag == ByteOrder_LittleEndian_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "LittleEndian");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ByteOrder_BigEndian_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BigEndian");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }

  return buffer;
}

String ByteOrder_str(ByteOrder *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = 1;
  if(p->_tag == ByteOrder_LittleEndian_tag) {
    size += snprintf(NULL, 0, "(%s ", "LittleEndian");

  }
  if(p->_tag == ByteOrder_BigEndian_tag) {
    size += snprintf(NULL, 0, "(%s ", "BigEndian");

  }

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  if(p->_tag == ByteOrder_LittleEndian_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "LittleEndian");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ByteOrder_BigEndian_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BigEndian");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }

  return buffer;
}

bool ByteRef__LT_(uint8_t* a, uint8_t* b) {
    uint8_t _8 = Byte_copy(a);
    uint8_t _11 = Byte_copy(b);
    bool _12 = Byte__LT_(_8, _11);
    return _12;
}

bool ByteRef__EQ_(uint8_t* a, uint8_t* b) {
    uint8_t _8 = Byte_copy(a);
    uint8_t _11 = Byte_copy(b);
    bool _12 = Byte__EQ_(_8, _11);
    return _12;
}

bool ByteRef__GT_(uint8_t* a, uint8_t* b) {
    uint8_t _8 = Byte_copy(a);
    uint8_t _11 = Byte_copy(b);
    bool _12 = Byte__GT_(_8, _11);
    return _12;
}

String ByteRef_format(String* s, uint8_t* x) {
    uint8_t _9 = Byte_copy(x);
    String _10 = Byte_format(s, _9);
    return _10;
}

String ByteRef_prn(uint8_t* x) {
    uint8_t _7 = Byte_copy(x);
    String _8 = Byte_str(_7);
    return _8;
}

String ByteRef_str(uint8_t* x) {
    uint8_t _7 = Byte_copy(x);
    String _8 = Byte_str(_7);
    return _8;
}

bool Char_alpha_QMARK_(Char c) {
    bool _16;
    bool _7 = Char_lower_MINUS_case_QMARK_(c);
    if (_7) {
        bool _10 = true;
        _16 = _10;
    } else {
        bool _14 = Char_upper_MINUS_case_QMARK_(c);
        bool _15 = _14;
        _16 = _15;
    }
    return _16;
}

bool Char_alphanum_QMARK_(Char c) {
    bool _16;
    bool _7 = Char_alpha_QMARK_(c);
    if (_7) {
        bool _10 = true;
        _16 = _10;
    } else {
        bool _14 = Char_num_QMARK_(c);
        bool _15 = _14;
        _16 = _15;
    }
    return _16;
}

Char Char_blit(Char x) {
    Char _7 = x; // From the 'the' function.
    return _7;
}

int Char_hash(Char* k) {
    Char _9 = Char_copy(k);
    Char _10 = _9; // From the 'the' function.
    int _11 = Char_to_MINUS_int(_10);
    return _11;
}

bool Char_lower_MINUS_case_QMARK_(Char c) {
    bool _18;
    bool _8 = _LT__EQ___Char(97/*'a'*/, c);
    if (_8) {
        bool _13 = _LT__EQ___Char(c, 122/*'z'*/);
        bool _14 = _13;
        _18 = _14;
    } else {
        bool _17 = false;
        _18 = _17;
    }
    return _18;
}

int Char_meaning(Char* char_MINUS_ref) {
    int _126;
    /* let */ {
        Char _8 = Char_copy(char_MINUS_ref);
        Char c = _8;
        int _125;
        /* let */ {
            Char gensym_MINUS_generated1002 = c;
            int _124;
            bool _18 = Char__EQ_(gensym_MINUS_generated1002, 48/*'0'*/);
            if (_18) {
                int _21 = 0;
                _124 = _21;
            } else {
                int _122;
                bool _27 = Char__EQ_(gensym_MINUS_generated1002, 49/*'1'*/);
                if (_27) {
                    int _30 = 1;
                    _122 = _30;
                } else {
                    int _120;
                    bool _36 = Char__EQ_(gensym_MINUS_generated1002, 50/*'2'*/);
                    if (_36) {
                        int _39 = 2;
                        _120 = _39;
                    } else {
                        int _118;
                        bool _45 = Char__EQ_(gensym_MINUS_generated1002, 51/*'3'*/);
                        if (_45) {
                            int _48 = 3;
                            _118 = _48;
                        } else {
                            int _116;
                            bool _54 = Char__EQ_(gensym_MINUS_generated1002, 52/*'4'*/);
                            if (_54) {
                                int _57 = 4;
                                _116 = _57;
                            } else {
                                int _114;
                                bool _63 = Char__EQ_(gensym_MINUS_generated1002, 53/*'5'*/);
                                if (_63) {
                                    int _66 = 5;
                                    _114 = _66;
                                } else {
                                    int _112;
                                    bool _72 = Char__EQ_(gensym_MINUS_generated1002, 54/*'6'*/);
                                    if (_72) {
                                        int _75 = 6;
                                        _112 = _75;
                                    } else {
                                        int _110;
                                        bool _81 = Char__EQ_(gensym_MINUS_generated1002, 55/*'7'*/);
                                        if (_81) {
                                            int _84 = 7;
                                            _110 = _84;
                                        } else {
                                            int _108;
                                            bool _90 = Char__EQ_(gensym_MINUS_generated1002, 56/*'8'*/);
                                            if (_90) {
                                                int _93 = 8;
                                                _108 = _93;
                                            } else {
                                                int _106;
                                                bool _99 = Char__EQ_(gensym_MINUS_generated1002, 57/*'9'*/);
                                                if (_99) {
                                                    int _102 = 9;
                                                    _106 = _102;
                                                } else {
                                                    int _105 = -1;
                                                    _106 = _105;
                                                }
                                                int _107 = _106;
                                                _108 = _107;
                                            }
                                            int _109 = _108;
                                            _110 = _109;
                                        }
                                        int _111 = _110;
                                        _112 = _111;
                                    }
                                    int _113 = _112;
                                    _114 = _113;
                                }
                                int _115 = _114;
                                _116 = _115;
                            }
                            int _117 = _116;
                            _118 = _117;
                        }
                        int _119 = _118;
                        _120 = _119;
                    }
                    int _121 = _120;
                    _122 = _121;
                }
                int _123 = _122;
                _124 = _123;
            }
            _125 = _124;
        }
        _126 = _125;
    }
    return _126;
}

bool Char_num_QMARK_(Char c) {
    bool _18;
    bool _8 = _LT__EQ___Char(48/*'0'*/, c);
    if (_8) {
        bool _13 = _LT__EQ___Char(c, 57/*'9'*/);
        bool _14 = _13;
        _18 = _14;
    } else {
        bool _17 = false;
        _18 = _17;
    }
    return _18;
}

Char Char_random() {
    int _5 = Int_random();
    Char _6 = Char_from_MINUS_int(_5);
    return _6;
}

Char Char_random_MINUS_between(Char a, Char b) {
    int _9 = Char_to_MINUS_int(a);
    int _12 = Char_to_MINUS_int(b);
    int _13 = Int_random_MINUS_between(_9, _12);
    Char _14 = Char_from_MINUS_int(_13);
    return _14;
}

bool Char_upper_MINUS_case_QMARK_(Char c) {
    bool _18;
    bool _8 = _LT__EQ___Char(65/*'A'*/, c);
    if (_8) {
        bool _13 = _LT__EQ___Char(c, 90/*'Z'*/);
        bool _14 = _13;
        _18 = _14;
    } else {
        bool _17 = false;
        _18 = _17;
    }
    return _18;
}

Char Char_zero() {
    Char _7 = Char_from_MINUS_int(0);
    Char _8 = _7; // From the 'the' function.
    return _8;
}

bool CharRef__LT_(Char* a, Char* b) {
    Char _8 = Char_copy(a);
    Char _11 = Char_copy(b);
    bool _12 = Char__LT_(_8, _11);
    return _12;
}

bool CharRef__EQ_(Char* a, Char* b) {
    Char _8 = Char_copy(a);
    Char _11 = Char_copy(b);
    bool _12 = Char__EQ_(_8, _11);
    return _12;
}

bool CharRef__GT_(Char* a, Char* b) {
    Char _8 = Char_copy(a);
    Char _11 = Char_copy(b);
    bool _12 = Char__GT_(_8, _11);
    return _12;
}

double Double_add_MINUS_ref(double* x, double* y) {
    double _8 = Double_copy(x);
    double _11 = Double_copy(y);
    double _12 = Double__PLUS_(_8, _11);
    return _12;
}

double Double_blit(double x) {
    double _7 = x; // From the 'the' function.
    return _7;
}

double Double_dec(double x) {
    double _7 = Double__MINUS_(x, 1.0);
    return _7;
}

Maybe__double Double_from_MINUS_string(String* s) {
    Maybe__double _25;
    /* let */ {
        double res = 0.0;
        Maybe__double _24;
        double* _13 = &res; // ref
        bool _14 = Double_from_MINUS_string_MINUS_internal(s, _13);
        if (_14) {
            Maybe__double _18 = Maybe_Just__double(res);
            Maybe__double _19 = _18;
            _24 = _19;
        } else {
            Maybe__double _22 = Maybe_Nothing__double();
            Maybe__double _23 = _22;
            _24 = _23;
        }
        _25 = _24;
    }
    return _25;
}

int Double_hash(double* k) {
    double _8 = Double_copy(k);
    Long _9 = Double_to_MINUS_bytes(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

double Double_inc(double x) {
    double _7 = Double__PLUS_(1.0, x);
    return _7;
}

bool Double_negative_QMARK_(double a) {
    bool _7 = Double__LT_(a, 0.0);
    return _7;
}

bool Double_positive_QMARK_(double a) {
    bool _7 = Double__GT_(a, 0.0);
    return _7;
}

String Double_prn(double x) {
    String _6 = Double_str(x);
    return _6;
}

double Double_random() {
    double _7 = Double_from_MINUS_int(CARP_INT_MAX);
    double _8 = Double_random_MINUS_between(0.0, _7);
    return _8;
}

double Double_random_MINUS_between(double lower, double upper) {
    double _20;
    /* let */ {
        double _10 = Double__MINUS_(upper, lower);
        double diff = _10;
        double _16 = Random_random();
        double _17 = Double__MUL_(diff, _16);
        double _19 = Double__PLUS_(_17, lower);
        _20 = _19;
    }
    return _20;
}

double Double_sign(double x) {
    double _26;
    bool _8 = Double__GT_(x, 0.0);
    if (_8) {
        double _11 = 1.0;
        _26 = _11;
    } else {
        double _24;
        bool _17 = Double__LT_(x, 0.0);
        if (_17) {
            double _20 = -1.0;
            _24 = _20;
        } else {
            double _23 = 0.0;
            _24 = _23;
        }
        double _25 = _24;
        _26 = _25;
    }
    return _26;
}

double Double_zero() {
    return 0.0;
}

bool DoubleRef__LT_(double* a, double* b) {
    double _8 = Double_copy(a);
    double _11 = Double_copy(b);
    bool _12 = Double__LT_(_8, _11);
    return _12;
}

bool DoubleRef__EQ_(double* a, double* b) {
    double _8 = Double_copy(a);
    double _11 = Double_copy(b);
    bool _12 = Double__EQ_(_8, _11);
    return _12;
}

bool DoubleRef__GT_(double* a, double* b) {
    double _8 = Double_copy(a);
    double _11 = Double_copy(b);
    bool _12 = Double__GT_(_8, _11);
    return _12;
}

String DoubleRef_format(String* s, double* x) {
    double _9 = Double_copy(x);
    String _10 = Double_format(s, _9);
    return _10;
}

String DoubleRef_prn(double* x) {
    double _7 = Double_copy(x);
    String _8 = Double_str(_7);
    return _8;
}

String DoubleRef_str(double* x) {
    double _7 = Double_copy(x);
    String _8 = Double_str(_7);
    return _8;
}

float Float_add_MINUS_ref(float* x, float* y) {
    float _8 = Float_copy(x);
    float _11 = Float_copy(y);
    float _12 = Float__PLUS_(_8, _11);
    return _12;
}

float Float_blit(float x) {
    float _7 = x; // From the 'the' function.
    return _7;
}

float Float_dec(float x) {
    float _7 = Float__MINUS_(x, 1.0f);
    return _7;
}

Maybe__float Float_from_MINUS_string(String* s) {
    Maybe__float _25;
    /* let */ {
        float res = 0.0f;
        Maybe__float _24;
        float* _13 = &res; // ref
        bool _14 = Float_from_MINUS_string_MINUS_internal(s, _13);
        if (_14) {
            Maybe__float _18 = Maybe_Just__float(res);
            Maybe__float _19 = _18;
            _24 = _19;
        } else {
            Maybe__float _22 = Maybe_Nothing__float();
            Maybe__float _23 = _22;
            _24 = _23;
        }
        _25 = _24;
    }
    return _25;
}

int Float_hash(float* k) {
    float _7 = Float_copy(k);
    int _8 = Float_to_MINUS_bytes(_7);
    return _8;
}

float Float_inc(float x) {
    float _7 = Float__PLUS_(1.0f, x);
    return _7;
}

bool Float_negative_QMARK_(float a) {
    bool _7 = Float__LT_(a, 0.0f);
    return _7;
}

bool Float_positive_QMARK_(float a) {
    bool _7 = Float__GT_(a, 0.0f);
    return _7;
}

String Float_prn(float x) {
    String _6 = Float_str(x);
    return _6;
}

float Float_random() {
    float _7 = Float_from_MINUS_int(CARP_INT_MAX);
    float _8 = Float_random_MINUS_between(0.0f, _7);
    return _8;
}

float Float_random_MINUS_between(float lower, float upper) {
    float _24;
    /* let */ {
        float _10 = Float__MINUS_(upper, lower);
        float diff = _10;
        double _17 = Double_from_MINUS_float(diff);
        double _19 = Random_random();
        double _20 = Double__MUL_(_17, _19);
        float _21 = Double_to_MINUS_float(_20);
        float _23 = Float__PLUS_(_21, lower);
        _24 = _23;
    }
    return _24;
}

float Float_sign(float x) {
    float _26;
    bool _8 = Float__GT_(x, 0.0f);
    if (_8) {
        float _11 = 1.0f;
        _26 = _11;
    } else {
        float _24;
        bool _17 = Float__LT_(x, 0.0f);
        if (_17) {
            float _20 = -1.0f;
            _24 = _20;
        } else {
            float _23 = 0.0f;
            _24 = _23;
        }
        float _25 = _24;
        _26 = _25;
    }
    return _26;
}

float Float_zero() {
    return 0.0f;
}

bool FloatRef__LT_(float* a, float* b) {
    float _8 = Float_copy(a);
    float _11 = Float_copy(b);
    bool _12 = Float__LT_(_8, _11);
    return _12;
}

bool FloatRef__EQ_(float* a, float* b) {
    float _8 = Float_copy(a);
    float _11 = Float_copy(b);
    bool _12 = Float__EQ_(_8, _11);
    return _12;
}

bool FloatRef__GT_(float* a, float* b) {
    float _8 = Float_copy(a);
    float _11 = Float_copy(b);
    bool _12 = Float__GT_(_8, _11);
    return _12;
}

String FloatRef_format(String* s, float* x) {
    float _9 = Float_copy(x);
    String _10 = Float_format(s, _9);
    return _10;
}

String FloatRef_prn(float* x) {
    float _7 = Float_copy(x);
    String _8 = Float_str(_7);
    return _8;
}

String FloatRef_str(float* x) {
    float _7 = Float_copy(x);
    String _8 = Float_str(_7);
    return _8;
}

void Function_delete__Array__uint8_t_MUL__Result__Uint16_Array__uint8_t (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Array__uint8_t_MUL__Result__Uint32_Array__uint8_t (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Array__uint8_t_MUL__Result__Uint64_Array__uint8_t (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Array__uint8_t_MUL__Uint16 (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Array__uint8_t_MUL__Uint32 (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Array__uint8_t_MUL__Uint64 (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Long_Uint32 (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Long_Uint64 (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__PatternMatchResult_MUL__String (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__PatternMatchResult_MUL__int (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__String_MUL__bool (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Uint16_MUL__Array__uint8_t (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Uint32_MUL__Array__uint8_t (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Uint64_MUL__Array__uint8_t (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__int_int (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__int_int_MUL__int (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__uint8_t_MUL__String (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__uint8_t_uint8_t (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

int Heap_lchild(int i) {
    int _9 = Int__MUL_(2, i);
    int _10 = Int__PLUS_(1, _9);
    return _10;
}

int Heap_parent(int i) {
    int _8 = Int__MINUS_(i, 1);
    int _10 = Int__DIV_(_8, 2);
    return _10;
}

int Heap_rchild(int i) {
    int _9 = Int__MUL_(2, i);
    int _10 = Int__PLUS_(2, _9);
    return _10;
}

void IO_Raw_fclose_BANG_(FILE* file) {
    /* let */ {
        int _8 = fclose(file);
        int _ = _8;
        /* () */
    }
}

void IO_Raw_fflush_BANG_(FILE* file) {
    /* let */ {
        int _8 = fflush(file);
        int _ = _8;
        /* () */
    }
}

FILE* IO_Raw_fopen(String* pathname, String* mode) {
    CChar* _8 = String_cstr(pathname);
    CChar* _11 = String_cstr(mode);
    FILE* _12 = fopen(_8, _11);
    return _12;
}

int IO_Raw_fread(String* file_MINUS_name, int item_MINUS_size, int items_MINUS_count, FILE* file) {
    CChar* _10 = String_cstr(file_MINUS_name);
    int _14 = fread(_10, item_MINUS_size, items_MINUS_count, file);
    return _14;
}

int IO_Raw_fwrite(String* data, int item_MINUS_size, int items_MINUS_count, FILE* file) {
    CChar* _10 = String_cstr(data);
    int _14 = fwrite(_10, item_MINUS_size, items_MINUS_count, file);
    return _14;
}

void IO_Raw_fwrite_BANG_(String* data, int item_MINUS_size, int items_MINUS_count, FILE* file) {
    /* let */ {
        int _14 = IO_Raw_fwrite(data, item_MINUS_size, items_MINUS_count, file);
        int _ = _14;
        /* () */
    }
}

int IO_Raw_unlink(String* file_MINUS_name) {
    CChar* _7 = String_cstr(file_MINUS_name);
    int _8 = unlink(_7);
    return _8;
}

void IO_Raw_unlink_BANG_(String* file_MINUS_name) {
    /* let */ {
        int _8 = IO_Raw_unlink(file_MINUS_name);
        int _ = _8;
        /* () */
    }
}

Result__bool_String IO_append_MINUS_file(String* content, String* file_MINUS_name) {
    Result__bool_String _103;
    /* let */ {
        static String _9 = "ab";
        String *_9_ref = &_9;
        Result__FILE_MUL__String _10 = IO_open_MINUS_file(file_MINUS_name, _9_ref);
        Result__FILE_MUL__String fOut_QMARK_ = _10;
        int _14 = String_length(content);
        int bytes2write = _14;
        Result__bool_String _102;
        Result__FILE_MUL__String* _20 = &fOut_QMARK_; // ref
        bool _21 = Result_error_QMARK___FILE_MUL__String(_20);
        if (_21) {
            static String _29 = "error='%s' opening file='";
            String *_29_ref = &_29;
            String _33 = Result_unsafe_MINUS_from_MINUS_error__FILE_MUL__String(fOut_QMARK_);
            String* _34 = &_33; // ref
            String _1000010 = String_format(_29_ref, _34);
            String* _1000008 = &_1000010; // ref
            static String _39 = "%s'";
            String *_39_ref = &_39;
            String _1000013 = String_format(_39_ref, file_MINUS_name);
            String* _1000011 = &_1000013; // ref
            String _1000007 = String_append(_1000008, _1000011);
            String* _1000005 = &_1000007; // ref
            String _45 = String_copy(_1000005);
            Result__bool_String _46 = Result_Error__String_bool(_45);
            Result__bool_String _47 = _46;
            String_delete(_1000007);
            String_delete(_1000010);
            String_delete(_1000013);
            String_delete(_33);
            _102 = _47;
        } else {
            Result__bool_String _100;
            /* let */ {
                FILE* _53 = Result_unsafe_MINUS_from_MINUS_success__FILE_MUL__String(fOut_QMARK_);
                FILE* fOut = _53;
                int _60 = IO_Raw_fwrite(content, 1, bytes2write, fOut);
                int bytes_MINUS_written = _60;
                IO_Raw_fclose_BANG_(fOut);
                Result__bool_String _98;
                bool _70 = Int__EQ_(bytes_MINUS_written, bytes2write);
                if (_70) {
                    Result__bool_String _74 = Result_Success__bool_String(true);
                    Result__bool_String _75 = _74;
                    _98 = _75;
                } else {
                    static String _83 = "only %d of ";
                    String *_83_ref = &_83;
                    String _1000025 = Int_format(_83_ref, bytes_MINUS_written);
                    String* _1000023 = &_1000025; // ref
                    static String _89 = "%d bytes were written";
                    String *_89_ref = &_89;
                    String _1000028 = Int_format(_89_ref, bytes2write);
                    String* _1000026 = &_1000028; // ref
                    String _1000022 = String_append(_1000023, _1000026);
                    String* _1000020 = &_1000022; // ref
                    String _95 = String_copy(_1000020);
                    Result__bool_String _96 = Result_Error__String_bool(_95);
                    Result__bool_String _97 = _96;
                    String_delete(_1000022);
                    String_delete(_1000025);
                    String_delete(_1000028);
                    _98 = _97;
                }
                Result__bool_String _99 = _98;
                _100 = _99;
            }
            Result__bool_String _101 = _100;
            _102 = _101;
        }
        _103 = _102;
    }
    return _103;
}

Result__Char_String IO_fgetc(FILE* file) {
    Result__Char_String _43;
    /* let */ {
        int _8 = fgetc(file);
        int _CHAR_ = _8;
        Result__Char_String _42;
        bool _13 = feof(file);
        if (_13) {
            static String _17 = "couldn't read char from file, EOF reached";
            String *_17_ref = &_17;
            String _18 = String_copy(_17_ref);
            Result__Char_String _19 = Result_Error__String_Char(_18);
            Result__Char_String _20 = _19;
            _42 = _20;
        } else {
            Result__Char_String _40;
            bool _25 = ferror(file);
            if (_25) {
                static String _29 = "error while reading char from file";
                String *_29_ref = &_29;
                String _30 = String_copy(_29_ref);
                Result__Char_String _31 = Result_Error__String_Char(_30);
                Result__Char_String _32 = _31;
                _40 = _32;
            } else {
                Char _37 = Char_from_MINUS_int(_CHAR_);
                Result__Char_String _38 = Result_Success__Char_String(_37);
                Result__Char_String _39 = _38;
                _40 = _39;
            }
            Result__Char_String _41 = _40;
            _42 = _41;
        }
        _43 = _42;
    }
    return _43;
}

Maybe__String IO_getenv(String* s) {
    Maybe__String _28;
    /* let */ {
        CChar* _9 = String_cstr(s);
        CChar* _10 = getenv(_9);
        CChar* e = _10;
        Maybe__String _27;
        bool _15 = null_QMARK___CChar(e);
        if (_15) {
            Maybe__String _18 = Maybe_Nothing__String();
            Maybe__String _19 = _18;
            _27 = _19;
        } else {
            String _24 = String_from_MINUS_cstr(e);
            Maybe__String _25 = Maybe_Just__String(_24);
            Maybe__String _26 = _25;
            _27 = _26;
        }
        _28 = _27;
    }
    return _28;
}

Result__FILE_MUL__String IO_open_MINUS_file(String* filename, String* mode) {
    Result__FILE_MUL__String _28;
    /* let */ {
        FILE* _10 = IO_Raw_fopen(filename, mode);
        FILE* ptr = _10;
        Result__FILE_MUL__String _27;
        bool _15 = null_QMARK___FILE(ptr);
        if (_15) {
            String _19 = System_error_MINUS_text();
            Result__FILE_MUL__String _20 = Result_Error__String_FILE_MUL_(_19);
            Result__FILE_MUL__String _21 = _20;
            _27 = _21;
        } else {
            Result__FILE_MUL__String _25 = Result_Success__FILE_MUL__String(ptr);
            Result__FILE_MUL__String _26 = _25;
            _27 = _26;
        }
        _28 = _27;
    }
    return _28;
}

Result__String_String IO_read_MINUS__GT_EOF(String* filename) {
    Result__String_String _66;
    /* let */ {
        static String _8 = "rb";
        String *_8_ref = &_8;
        Result__FILE_MUL__String _9 = IO_open_MINUS_file(filename, _8_ref);
        Result__FILE_MUL__String file_QMARK_ = _9;
        Result__String_String _65;
        if(file_QMARK_._tag == Result__FILE_MUL__String_Error_tag) {
            Result__FILE_MUL__String _12_temp = file_QMARK_;
            String x = _12_temp.u.Error.member0;
            // Case expr:
            Result__String_String _18 = Result_Error__String_String(x);
            _65 = _18;
        }
        else if(file_QMARK_._tag == Result__FILE_MUL__String_Success_tag) {
            Result__FILE_MUL__String _12_temp = file_QMARK_;
            FILE* f = _12_temp.u.Success.member0;
            // Case expr:
            Result__String_String _64;
            /* let */ {
                int _25 = Int_zero();
                int c = _25;
                Array _27 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(uint8_t) * 0) };
                Array__uint8_t r = _27;
                int _36 = fgetc(f);
                c = _36;  // Int = Int
                bool _41 = _DIV__EQ___int(c, EOF);
                bool _42 = _41;
                bool _52 = _42;
                while (_52) {
                    uint8_t _49 = Byte_from_MINUS_int(c);
                    Array__uint8_t _50 = Array_push_MINUS_back__uint8_t(r, _49);
                    r = _50;  // (Array Byte) = (Array Byte)
                    int _36 = fgetc(f);
                    c = _36;  // Int = Int
                    bool _41 = _DIV__EQ___int(c, EOF);
                    bool _42 = _41;
                    _52 = _42;
                }
                IO_Raw_fclose_BANG_(f);
                Array__uint8_t* _60 = &r; // ref
                String _61 = String_from_MINUS_bytes(_60);
                Result__String_String _62 = Result_Success__String_String(_61);
                Result__String_String _63 = _62;
                _64 = _63;
                Array_delete__uint8_t(r);
            }
            _65 = _64;
        }
        else UNHANDLED("IO.carp", 273);
        _66 = _65;
    }
    return _66;
}

Result__String_String IO_read_MINUS_file(String* filename) {
    Result__String_String _176;
    /* let */ {
        static String _8 = "rb";
        String *_8_ref = &_8;
        Result__FILE_MUL__String _9 = IO_open_MINUS_file(filename, _8_ref);
        Result__FILE_MUL__String finput_QMARK_ = _9;
        Result__String_String _175;
        Result__FILE_MUL__String* _15 = &finput_QMARK_; // ref
        bool _16 = Result_error_QMARK___FILE_MUL__String(_15);
        if (_16) {
            static String _24 = "Failed to open file='%s', error='";
            String *_24_ref = &_24;
            String _1000010 = String_format(_24_ref, filename);
            String* _1000008 = &_1000010; // ref
            static String _30 = "%s'";
            String *_30_ref = &_30;
            String _34 = Result_unsafe_MINUS_from_MINUS_error__FILE_MUL__String(finput_QMARK_);
            String* _35 = &_34; // ref
            String _1000013 = String_format(_30_ref, _35);
            String* _1000011 = &_1000013; // ref
            String _1000007 = String_append(_1000008, _1000011);
            String* _1000005 = &_1000007; // ref
            String _40 = String_copy(_1000005);
            Result__String_String _41 = Result_Error__String_String(_40);
            Result__String_String _42 = _41;
            String_delete(_1000007);
            String_delete(_1000010);
            String_delete(_1000013);
            String_delete(_34);
            _175 = _42;
        } else {
            Result__String_String _173;
            /* let */ {
                FILE* _48 = Result_unsafe_MINUS_from_MINUS_success__FILE_MUL__String(finput_QMARK_);
                FILE* finput = _48;
                fseek(finput, 0, SEEK_END);
                int _68;
                /* let */ {
                    int _60 = ftell(finput);
                    int flength = _60;
                    rewind(finput);
                    int _67 = flength;
                    _68 = _67;
                }
                int _69 = _68;
                int length = _69;
                String _74 = String_allocate(length, 48/*'0'*/);
                String buffer = _74;
                Result__String_String _172;
                String* _81 = &buffer; // ref
                bool _82 = String_allocated_QMARK_(_81);
                bool _83 = not(_82);
                if (_83) {
                    IO_Raw_fclose_BANG_(finput);
                    static String _94 = "Failed to open buffer with size=%d from file='";
                    String *_94_ref = &_94;
                    String _1000026 = Int_format(_94_ref, length);
                    String* _1000024 = &_1000026; // ref
                    static String _100 = "%s'";
                    String *_100_ref = &_100;
                    String _1000029 = String_format(_100_ref, filename);
                    String* _1000027 = &_1000029; // ref
                    String _1000023 = String_append(_1000024, _1000027);
                    String* _1000021 = &_1000023; // ref
                    String _106 = String_copy(_1000021);
                    Result__String_String _107 = Result_Error__String_String(_106);
                    Result__String_String _108 = _107;
                    String_delete(_1000023);
                    String_delete(_1000026);
                    String_delete(_1000029);
                    String_delete(buffer);
                    _172 = _108;
                } else {
                    Result__String_String _170;
                    /* let */ {
                        String* _115 = &buffer; // ref
                        int _119 = IO_Raw_fread(_115, 1, length, finput);
                        int bytes_MINUS_read = _119;
                        IO_Raw_fclose_BANG_(finput);
                        Result__String_String _169;
                        bool _130 = Int__EQ_(bytes_MINUS_read, length);
                        bool _131 = not(_130);
                        if (_131) {
                            static String _139 = "Error: file='%s' has length=";
                            String *_139_ref = &_139;
                            String _1000039 = String_format(_139_ref, filename);
                            String* _1000037 = &_1000039; // ref
                            static String _147 = "%d but bytes-read=";
                            String *_147_ref = &_147;
                            String _1000045 = Int_format(_147_ref, length);
                            String* _1000043 = &_1000045; // ref
                            static String _153 = "%d";
                            String *_153_ref = &_153;
                            String _1000048 = Int_format(_153_ref, bytes_MINUS_read);
                            String* _1000046 = &_1000048; // ref
                            String _1000042 = String_append(_1000043, _1000046);
                            String* _1000040 = &_1000042; // ref
                            String _1000036 = String_append(_1000037, _1000040);
                            String* _1000034 = &_1000036; // ref
                            String _161 = String_copy(_1000034);
                            Result__String_String _162 = Result_Error__String_String(_161);
                            Result__String_String _163 = _162;
                            String_delete(_1000036);
                            String_delete(_1000039);
                            String_delete(_1000042);
                            String_delete(_1000045);
                            String_delete(_1000048);
                            String_delete(buffer);
                            _169 = _163;
                        } else {
                            Result__String_String _167 = Result_Success__String_String(buffer);
                            Result__String_String _168 = _167;
                            _169 = _168;
                        }
                        _170 = _169;
                    }
                    Result__String_String _171 = _170;
                    _172 = _171;
                }
                _173 = _172;
            }
            Result__String_String _174 = _173;
            _175 = _174;
        }
        _176 = _175;
    }
    return _176;
}

Result__bool_String IO_write_MINUS_file(String* content, String* file_MINUS_name) {
    Result__bool_String _103;
    /* let */ {
        static String _9 = "wb";
        String *_9_ref = &_9;
        Result__FILE_MUL__String _10 = IO_open_MINUS_file(file_MINUS_name, _9_ref);
        Result__FILE_MUL__String fOut_QMARK_ = _10;
        int _14 = String_length(content);
        int bytes2write = _14;
        Result__bool_String _102;
        Result__FILE_MUL__String* _20 = &fOut_QMARK_; // ref
        bool _21 = Result_error_QMARK___FILE_MUL__String(_20);
        if (_21) {
            static String _29 = "error='%s' opening file='";
            String *_29_ref = &_29;
            String _33 = Result_unsafe_MINUS_from_MINUS_error__FILE_MUL__String(fOut_QMARK_);
            String* _34 = &_33; // ref
            String _1000010 = String_format(_29_ref, _34);
            String* _1000008 = &_1000010; // ref
            static String _39 = "%s'";
            String *_39_ref = &_39;
            String _1000013 = String_format(_39_ref, file_MINUS_name);
            String* _1000011 = &_1000013; // ref
            String _1000007 = String_append(_1000008, _1000011);
            String* _1000005 = &_1000007; // ref
            String _45 = String_copy(_1000005);
            Result__bool_String _46 = Result_Error__String_bool(_45);
            Result__bool_String _47 = _46;
            String_delete(_1000007);
            String_delete(_1000010);
            String_delete(_1000013);
            String_delete(_33);
            _102 = _47;
        } else {
            Result__bool_String _100;
            /* let */ {
                FILE* _53 = Result_unsafe_MINUS_from_MINUS_success__FILE_MUL__String(fOut_QMARK_);
                FILE* fOut = _53;
                int _60 = IO_Raw_fwrite(content, 1, bytes2write, fOut);
                int bytes_MINUS_written = _60;
                IO_Raw_fclose_BANG_(fOut);
                Result__bool_String _98;
                bool _70 = Int__EQ_(bytes_MINUS_written, bytes2write);
                if (_70) {
                    Result__bool_String _74 = Result_Success__bool_String(true);
                    Result__bool_String _75 = _74;
                    _98 = _75;
                } else {
                    static String _83 = "only %d of ";
                    String *_83_ref = &_83;
                    String _1000025 = Int_format(_83_ref, bytes_MINUS_written);
                    String* _1000023 = &_1000025; // ref
                    static String _89 = "%d bytes were written";
                    String *_89_ref = &_89;
                    String _1000028 = Int_format(_89_ref, bytes2write);
                    String* _1000026 = &_1000028; // ref
                    String _1000022 = String_append(_1000023, _1000026);
                    String* _1000020 = &_1000022; // ref
                    String _95 = String_copy(_1000020);
                    Result__bool_String _96 = Result_Error__String_bool(_95);
                    Result__bool_String _97 = _96;
                    String_delete(_1000022);
                    String_delete(_1000025);
                    String_delete(_1000028);
                    _98 = _97;
                }
                Result__bool_String _99 = _98;
                _100 = _99;
            }
            Result__bool_String _101 = _100;
            _102 = _101;
        }
        _103 = _102;
    }
    return _103;
}

int Int_add_MINUS_ref(int* x, int* y) {
    int _8 = Int_copy(x);
    int _11 = Int_copy(y);
    int _12 = Int__PLUS_(_8, _11);
    return _12;
}

int Int_blit(int x) {
    int _7 = x; // From the 'the' function.
    return _7;
}

bool Int_even_QMARK_(int a) {
    int _8 = Int_mod(a, 2);
    bool _10 = Int__EQ_(_8, 0);
    return _10;
}

int Int_from_MINUS_int(int a) {
    return a;
}

Maybe__int Int_from_MINUS_string(String* s) {
    Maybe__int _25;
    /* let */ {
        int res = 0;
        Maybe__int _24;
        int* _13 = &res; // ref
        bool _14 = Int_from_MINUS_string_MINUS_internal(s, _13);
        if (_14) {
            Maybe__int _18 = Maybe_Just__int(res);
            Maybe__int _19 = _18;
            _24 = _19;
        } else {
            Maybe__int _22 = Maybe_Nothing__int();
            Maybe__int _23 = _22;
            _24 = _23;
        }
        _25 = _24;
    }
    return _25;
}

int Int_hash(int* k) {
    int _8 = Int_copy(k);
    int _9 = _8; // From the 'the' function.
    return _9;
}

bool Int_negative_QMARK_(int a) {
    bool _7 = Int__LT_(a, 0);
    return _7;
}

bool Int_odd_QMARK_(int a) {
    bool _7 = Int_even_QMARK_(a);
    bool _8 = not(_7);
    return _8;
}

int Int_positive_MINUS_mod(int k, int n) {
    int _27;
    /* let */ {
        int _10 = Int_mod(k, n);
        int r = _10;
        int _26;
        bool _16 = Int__GT_(0, r);
        if (_16) {
            int _21 = Int__PLUS_(r, n);
            int _22 = _21;
            _26 = _22;
        } else {
            int _25 = r;
            _26 = _25;
        }
        _27 = _26;
    }
    return _27;
}

bool Int_positive_QMARK_(int a) {
    bool _7 = Int__GT_(a, 0);
    return _7;
}

int Int_pow(int x, int y) {
    int _55;
    /* let */ {
        int r = 1;
        bool _14 = _DIV__EQ___int(y, 0);
        bool _52 = _14;
        while (_52) {
            int _21 = Int_bit_MINUS_and(y, 1);
            bool _23 = _DIV__EQ___int(_21, 0);
            if (_23) {
                int _30 = Int__MUL_(r, x);
                r = _30;  // Int = Int
            } else {
                /* () */
            }
            int _42 = Int__DIV_(y, 2);
            y = _42;  // Int = Int
            int _49 = Int__MUL_(x, x);
            x = _49;  // Int = Int
            bool _14 = _DIV__EQ___int(y, 0);
            _52 = _14;
        }
        int _54 = r;
        _55 = _54;
    }
    return _55;
}

String Int_prn(int x) {
    String _6 = Int_str(x);
    return _6;
}

int Int_random() {
    int _6 = Int_random_MINUS_between(0, CARP_INT_MAX);
    return _6;
}

int Int_random_MINUS_between(int lower, int upper) {
    int _24;
    /* let */ {
        int _10 = Int__MINUS_(upper, lower);
        int diff = _10;
        double _17 = Double_from_MINUS_int(diff);
        double _19 = Random_random();
        double _20 = Double__MUL_(_17, _19);
        int _21 = Double_to_MINUS_int(_20);
        int _23 = Int__PLUS_(_21, lower);
        _24 = _23;
    }
    return _24;
}

int Int_sign(int n) {
    int _26;
    bool _8 = Int__GT_(n, 0);
    if (_8) {
        int _11 = 1;
        _26 = _11;
    } else {
        int _24;
        bool _17 = Int__LT_(n, 0);
        if (_17) {
            int _20 = -1;
            _24 = _20;
        } else {
            int _23 = 0;
            _24 = _23;
        }
        int _25 = _24;
        _26 = _25;
    }
    return _26;
}

int Int_to_MINUS_int(int a) {
    return a;
}

int Int_zero() {
    return 0;
}

Int16 Int16_blit(Int16 x) {
    Int16 _7 = x; // From the 'the' function.
    return _7;
}

int Int16_hash(Int16* k) {
    Int16 _8 = Int16_copy(k);
    Long _9 = Int16_to_MINUS_long(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

String Int16_prn(Int16 a) {
    String _6 = Int16_str(a);
    return _6;
}

Int16 Int16_zero() {
    Int16 _5 = Int16_from_MINUS_long(0l);
    return _5;
}

bool Int16Extra__EQ_(Int16* a, Int16* b) {
    Int16 _8 = Int16_copy(a);
    Int16 _11 = Int16_copy(b);
    bool _12 = Int16__EQ_(_8, _11);
    return _12;
}

String Int16Extra_prn(Int16* a) {
    Int16 _7 = Int16_copy(a);
    String _8 = Int16_prn(_7);
    return _8;
}

String Int16Extra_str(Int16* a) {
    Int16 _7 = Int16_copy(a);
    String _8 = Int16_str(_7);
    return _8;
}

Int32 Int32_blit(Int32 x) {
    Int32 _7 = x; // From the 'the' function.
    return _7;
}

int Int32_hash(Int32* k) {
    Int32 _8 = Int32_copy(k);
    Long _9 = Int32_to_MINUS_long(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

String Int32_prn(Int32 a) {
    String _6 = Int32_str(a);
    return _6;
}

Int32 Int32_zero() {
    Int32 _5 = Int32_from_MINUS_long(0l);
    return _5;
}

bool Int32Extra__EQ_(Int32* a, Int32* b) {
    Int32 _8 = Int32_copy(a);
    Int32 _11 = Int32_copy(b);
    bool _12 = Int32__EQ_(_8, _11);
    return _12;
}

String Int32Extra_prn(Int32* a) {
    Int32 _7 = Int32_copy(a);
    String _8 = Int32_prn(_7);
    return _8;
}

String Int32Extra_str(Int32* a) {
    Int32 _7 = Int32_copy(a);
    String _8 = Int32_str(_7);
    return _8;
}

Int64 Int64_blit(Int64 x) {
    Int64 _7 = x; // From the 'the' function.
    return _7;
}

int Int64_hash(Int64* k) {
    Int64 _8 = Int64_copy(k);
    Long _9 = Int64_to_MINUS_long(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

String Int64_prn(Int64 a) {
    String _6 = Int64_str(a);
    return _6;
}

Int64 Int64_zero() {
    Int64 _5 = Int64_from_MINUS_long(0l);
    return _5;
}

bool Int64Extra__EQ_(Int64* a, Int64* b) {
    Int64 _8 = Int64_copy(a);
    Int64 _11 = Int64_copy(b);
    bool _12 = Int64__EQ_(_8, _11);
    return _12;
}

String Int64Extra_prn(Int64* a) {
    Int64 _7 = Int64_copy(a);
    String _8 = Int64_prn(_7);
    return _8;
}

String Int64Extra_str(Int64* a) {
    Int64 _7 = Int64_copy(a);
    String _8 = Int64_str(_7);
    return _8;
}

Int8 Int8_blit(Int8 x) {
    Int8 _7 = x; // From the 'the' function.
    return _7;
}

int Int8_hash(Int8* k) {
    Int8 _8 = Int8_copy(k);
    Long _9 = Int8_to_MINUS_long(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

String Int8_prn(Int8 a) {
    String _6 = Int8_str(a);
    return _6;
}

Int8 Int8_zero() {
    Int8 _5 = Int8_from_MINUS_long(0l);
    return _5;
}

bool Int8Extra__EQ_(Int8* a, Int8* b) {
    Int8 _8 = Int8_copy(a);
    Int8 _11 = Int8_copy(b);
    bool _12 = Int8__EQ_(_8, _11);
    return _12;
}

String Int8Extra_prn(Int8* a) {
    Int8 _7 = Int8_copy(a);
    String _8 = Int8_prn(_7);
    return _8;
}

String Int8Extra_str(Int8* a) {
    Int8 _7 = Int8_copy(a);
    String _8 = Int8_str(_7);
    return _8;
}

bool IntRef__LT_(int* a, int* b) {
    int _8 = Int_copy(a);
    int _11 = Int_copy(b);
    bool _12 = Int__LT_(_8, _11);
    return _12;
}

bool IntRef__EQ_(int* a, int* b) {
    int _8 = Int_copy(a);
    int _11 = Int_copy(b);
    bool _12 = Int__EQ_(_8, _11);
    return _12;
}

bool IntRef__GT_(int* a, int* b) {
    int _8 = Int_copy(a);
    int _11 = Int_copy(b);
    bool _12 = Int__GT_(_8, _11);
    return _12;
}

String IntRef_format(String* s, int* x) {
    int _9 = Int_copy(x);
    String _10 = Int_format(s, _9);
    return _10;
}

String IntRef_prn(int* x) {
    int _7 = Int_copy(x);
    String _8 = Int_str(_7);
    return _8;
}

String IntRef_str(int* x) {
    int _7 = Int_copy(x);
    String _8 = Int_str(_7);
    return _8;
}

Long Long_add_MINUS_ref(Long* x, Long* y) {
    Long _8 = Long_copy(x);
    Long _11 = Long_copy(y);
    Long _12 = Long__PLUS_(_8, _11);
    return _12;
}

Long Long_blit(Long x) {
    Long _7 = x; // From the 'the' function.
    return _7;
}

bool Long_even_QMARK_(Long a) {
    Long _8 = Long_mod(a, 2l);
    bool _10 = Long__EQ_(_8, 0l);
    return _10;
}

Maybe__Long Long_from_MINUS_string(String* s) {
    Maybe__Long _25;
    /* let */ {
        Long res = 0l;
        Maybe__Long _24;
        Long* _13 = &res; // ref
        bool _14 = Long_from_MINUS_string_MINUS_internal(s, _13);
        if (_14) {
            Maybe__Long _18 = Maybe_Just__Long(res);
            Maybe__Long _19 = _18;
            _24 = _19;
        } else {
            Maybe__Long _22 = Maybe_Nothing__Long();
            Maybe__Long _23 = _22;
            _24 = _23;
        }
        _25 = _24;
    }
    return _25;
}

int Long_hash(Long* k) {
    Long _9 = Long_copy(k);
    Long _10 = _9; // From the 'the' function.
    int _11 = Long_to_MINUS_int(_10);
    return _11;
}

bool Long_negative_QMARK_(Long a) {
    bool _7 = Long__LT_(a, 0l);
    return _7;
}

bool Long_odd_QMARK_(Long a) {
    bool _7 = Long_even_QMARK_(a);
    bool _8 = not(_7);
    return _8;
}

bool Long_positive_QMARK_(Long a) {
    bool _7 = Long__GT_(a, 0l);
    return _7;
}

String Long_prn(Long x) {
    String _6 = Long_str(x);
    return _6;
}

Long Long_random() {
    Long _7 = Long_from_MINUS_int(CARP_INT_MAX);
    Long _8 = Long_random_MINUS_between(0l, _7);
    return _8;
}

Long Long_random_MINUS_between(Long lower, Long upper) {
    Long _24;
    /* let */ {
        Long _10 = Long__MINUS_(upper, lower);
        Long diff = _10;
        double _17 = Double_from_MINUS_long(diff);
        double _19 = Random_random();
        double _20 = Double__MUL_(_17, _19);
        Long _21 = Double_to_MINUS_long(_20);
        Long _23 = Long__PLUS_(_21, lower);
        _24 = _23;
    }
    return _24;
}

Long Long_sign(Long n) {
    Long _26;
    bool _8 = Long__GT_(n, 0l);
    if (_8) {
        Long _11 = 1l;
        _26 = _11;
    } else {
        Long _24;
        bool _17 = Long__LT_(n, 0l);
        if (_17) {
            Long _20 = -1l;
            _24 = _20;
        } else {
            Long _23 = 0l;
            _24 = _23;
        }
        Long _25 = _24;
        _26 = _25;
    }
    return _26;
}

Long Long_zero() {
    return 0l;
}

bool LongRef__LT_(Long* a, Long* b) {
    Long _8 = Long_copy(a);
    Long _11 = Long_copy(b);
    bool _12 = Long__LT_(_8, _11);
    return _12;
}

bool LongRef__EQ_(Long* a, Long* b) {
    Long _8 = Long_copy(a);
    Long _11 = Long_copy(b);
    bool _12 = Long__EQ_(_8, _11);
    return _12;
}

bool LongRef__GT_(Long* a, Long* b) {
    Long _8 = Long_copy(a);
    Long _11 = Long_copy(b);
    bool _12 = Long__GT_(_8, _11);
    return _12;
}

String LongRef_format(String* s, Long* x) {
    Long _9 = Long_copy(x);
    String _10 = Long_format(s, _9);
    return _10;
}

String LongRef_prn(Long* x) {
    Long _7 = Long_copy(x);
    String _8 = Long_str(_7);
    return _8;
}

String LongRef_str(Long* x) {
    Long _7 = Long_copy(x);
    String _8 = Long_str(_7);
    return _8;
}

Maybe__Long Maybe_Just__Long(Long member0) {
  Maybe__Long instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__Long_Just_tag;
    return instance;
}

Maybe__String Maybe_Just__String(String member0) {
  Maybe__String instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__String_Just_tag;
    return instance;
}

Maybe__Uint16 Maybe_Just__Uint16(Uint16 member0) {
  Maybe__Uint16 instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__Uint16_Just_tag;
    return instance;
}

Maybe__Uint32 Maybe_Just__Uint32(Uint32 member0) {
  Maybe__Uint32 instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__Uint32_Just_tag;
    return instance;
}

Maybe__Uint64 Maybe_Just__Uint64(Uint64 member0) {
  Maybe__Uint64 instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__Uint64_Just_tag;
    return instance;
}

Maybe__double Maybe_Just__double(double member0) {
  Maybe__double instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__double_Just_tag;
    return instance;
}

Maybe__float Maybe_Just__float(float member0) {
  Maybe__float instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__float_Just_tag;
    return instance;
}

Maybe__int Maybe_Just__int(int member0) {
  Maybe__int instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__int_Just_tag;
    return instance;
}

Maybe__uint8_t Maybe_Just__uint8_t(uint8_t member0) {
  Maybe__uint8_t instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__uint8_t_Just_tag;
    return instance;
}

Maybe__Long Maybe_Nothing__Long() {
  Maybe__Long instance;

    instance._tag = Maybe__Long_Nothing_tag;
    return instance;
}

Maybe__String Maybe_Nothing__String() {
  Maybe__String instance;

    instance._tag = Maybe__String_Nothing_tag;
    return instance;
}

Maybe__Uint16 Maybe_Nothing__Uint16() {
  Maybe__Uint16 instance;

    instance._tag = Maybe__Uint16_Nothing_tag;
    return instance;
}

Maybe__Uint32 Maybe_Nothing__Uint32() {
  Maybe__Uint32 instance;

    instance._tag = Maybe__Uint32_Nothing_tag;
    return instance;
}

Maybe__Uint64 Maybe_Nothing__Uint64() {
  Maybe__Uint64 instance;

    instance._tag = Maybe__Uint64_Nothing_tag;
    return instance;
}

Maybe__double Maybe_Nothing__double() {
  Maybe__double instance;

    instance._tag = Maybe__double_Nothing_tag;
    return instance;
}

Maybe__float Maybe_Nothing__float() {
  Maybe__float instance;

    instance._tag = Maybe__float_Nothing_tag;
    return instance;
}

Maybe__int Maybe_Nothing__int() {
  Maybe__int instance;

    instance._tag = Maybe__int_Nothing_tag;
    return instance;
}

Maybe__uint8_t Maybe_Nothing__uint8_t() {
  Maybe__uint8_t instance;

    instance._tag = Maybe__uint8_t_Nothing_tag;
    return instance;
}

void Maybe_delete__Long(Maybe__Long p) {
  if(p._tag == Maybe__Long_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Long */
  }
  else if(p._tag == Maybe__Long_Nothing_tag) {

  }

}

void Maybe_delete__String(Maybe__String p) {
  if(p._tag == Maybe__String_Just_tag) {
    String_delete(p.u.Just.member0);
  }
  else if(p._tag == Maybe__String_Nothing_tag) {

  }

}

void Maybe_delete__Uint16(Maybe__Uint16 p) {
  if(p._tag == Maybe__Uint16_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Uint16 */
  }
  else if(p._tag == Maybe__Uint16_Nothing_tag) {

  }

}

void Maybe_delete__Uint32(Maybe__Uint32 p) {
  if(p._tag == Maybe__Uint32_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Uint32 */
  }
  else if(p._tag == Maybe__Uint32_Nothing_tag) {

  }

}

void Maybe_delete__Uint64(Maybe__Uint64 p) {
  if(p._tag == Maybe__Uint64_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Uint64 */
  }
  else if(p._tag == Maybe__Uint64_Nothing_tag) {

  }

}

void Maybe_delete__double(Maybe__double p) {
  if(p._tag == Maybe__double_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Double */
  }
  else if(p._tag == Maybe__double_Nothing_tag) {

  }

}

void Maybe_delete__float(Maybe__float p) {
  if(p._tag == Maybe__float_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Float */
  }
  else if(p._tag == Maybe__float_Nothing_tag) {

  }

}

void Maybe_delete__int(Maybe__int p) {
  if(p._tag == Maybe__int_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Int */
  }
  else if(p._tag == Maybe__int_Nothing_tag) {

  }

}

void Maybe_delete__uint8_t(Maybe__uint8_t p) {
  if(p._tag == Maybe__uint8_t_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Byte */
  }
  else if(p._tag == Maybe__uint8_t_Nothing_tag) {

  }

}

String Maybe_from__String(Maybe__String a, String dflt) {
    String _14;
    if(a._tag == Maybe__String_Nothing_tag) {
        Maybe__String _6_temp = a;
        // Case expr:
        _14 = dflt;
    }
    else if(a._tag == Maybe__String_Just_tag) {
        Maybe__String _6_temp = a;
        String x = _6_temp.u.Just.member0;
        // Case expr:
        _14 = x;
        String_delete(dflt);
    }
    else UNHANDLED("Maybe.carp", 22);
    return _14;
}

String Maybe_unsafe_MINUS_from__String(Maybe__String a) {
    String _10;
    if(a._tag == Maybe__String_Just_tag) {
        Maybe__String _5_temp = a;
        String x = _5_temp.u.Just.member0;
        // Case expr:
        _10 = x;
    }
    else UNHANDLED("Maybe.carp", 17);
    return _10;
}

Opaque Opaque_copy(Opaque* pRef) {
    Opaque copy = *pRef;

    return copy;
}

void Opaque_delete(Opaque p) {

}

int Opaque_get_MINUS_tag(Opaque *p) { return p->_tag; }
String Opaque_prn(Opaque *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = 1;

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;


  return buffer;
}

String Opaque_str(Opaque *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = 1;

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;


  return buffer;
}

Array__Uint16* Pair_a__Array__Uint16_int(Pair__Array__Uint16_int* p) { return (&(p->a)); }

Array__Uint32* Pair_a__Array__Uint32_int(Pair__Array__Uint32_int* p) { return (&(p->a)); }

Array__Uint64* Pair_a__Array__Uint64_int(Pair__Array__Uint64_int* p) { return (&(p->a)); }

int* Pair_b__Array__Uint16_int(Pair__Array__Uint16_int* p) { return (&(p->b)); }

int* Pair_b__Array__Uint32_int(Pair__Array__Uint32_int* p) { return (&(p->b)); }

int* Pair_b__Array__Uint64_int(Pair__Array__Uint64_int* p) { return (&(p->b)); }

void Pair_delete__Array__Uint16_int(Pair__Array__Uint16_int p) {
    Array_delete__Uint16(p.a);
    /* Ignore non-managed member 'b' : Int */
}

void Pair_delete__Array__Uint32_int(Pair__Array__Uint32_int p) {
    Array_delete__Uint32(p.a);
    /* Ignore non-managed member 'b' : Int */
}

void Pair_delete__Array__Uint64_int(Pair__Array__Uint64_int p) {
    Array_delete__Uint64(p.a);
    /* Ignore non-managed member 'b' : Int */
}

Pair__Array__Uint16_int Pair_init__Array__Uint16_int(Array__Uint16 a, int b) {
    Pair__Array__Uint16_int instance;
    instance.a = a;
    instance.b = b;
    return instance;
}

Pair__Array__Uint32_int Pair_init__Array__Uint32_int(Array__Uint32 a, int b) {
    Pair__Array__Uint32_int instance;
    instance.a = a;
    instance.b = b;
    return instance;
}

Pair__Array__Uint64_int Pair_init__Array__Uint64_int(Array__Uint64 a, int b) {
    Pair__Array__Uint64_int instance;
    instance.a = a;
    instance.b = b;
    return instance;
}

int* Pattern_MatchResult_end(PatternMatchResult* p) { return (&(p->end)); }

PatternMatchResult Pattern_MatchResult_init(int start, int end) {
    PatternMatchResult instance;
    instance.start = start;
    instance.end = end;
    return instance;
}

String Pattern_MatchResult_prn(PatternMatchResult *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Pattern.MatchResult");
  temp = Int_prn(p->start); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->end); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Pattern.MatchResult");
  temp = Int_prn(p->start);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->end);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

String Pattern_MatchResult_ref_MINUS_str(PatternMatchResult* ref_MINUS_matchres) {
    static String _9 = "(MatchResult start=%d end=";
    String *_9_ref = &_9;
    int* _12 = Pattern_MatchResult_start(ref_MINUS_matchres);
    String _1000007 = IntRef_format(_9_ref, _12);
    String* _1000005 = &_1000007; // ref
    static String _17 = "%d)";
    String *_17_ref = &_17;
    int* _20 = Pattern_MatchResult_end(ref_MINUS_matchres);
    String _1000010 = IntRef_format(_17_ref, _20);
    String* _1000008 = &_1000010; // ref
    String _1000004 = String_append(_1000005, _1000008);
    String* _1000002 = &_1000004; // ref
    String _25 = String_copy(_1000002);
    String_delete(_1000004);
    String_delete(_1000007);
    String_delete(_1000010);
    return _25;
}

PatternMatchResult Pattern_MatchResult_set_MINUS_end(PatternMatchResult p, int newValue) {
    /* Ignore non-managed member 'end' : Int */
    p.end = newValue;
    return p;
}


void Pattern_MatchResult_set_MINUS_end_BANG_(PatternMatchResult* pRef, int newValue) {
    /* Ignore non-managed member 'end' : Int */
    pRef->end = newValue;
}


PatternMatchResult Pattern_MatchResult_set_MINUS_start(PatternMatchResult p, int newValue) {
    /* Ignore non-managed member 'start' : Int */
    p.start = newValue;
    return p;
}


void Pattern_MatchResult_set_MINUS_start_BANG_(PatternMatchResult* pRef, int newValue) {
    /* Ignore non-managed member 'start' : Int */
    pRef->start = newValue;
}


int* Pattern_MatchResult_start(PatternMatchResult* p) { return (&(p->start)); }

String Pattern_MatchResult_str(PatternMatchResult matchres) {
    PatternMatchResult* _7 = &matchres; // ref
    String _8 = Pattern_MatchResult_ref_MINUS_str(_7);
    return _8;
}

PatternMatchResult Pattern_MatchResult_update_MINUS_end(PatternMatchResult p, Lambda *updater) {
    p.end = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.end) : ((Fn__int_int)(*updater).callback)(p.end);
    return p;
}


PatternMatchResult Pattern_MatchResult_update_MINUS_start(PatternMatchResult p, Lambda *updater) {
    p.start = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.start) : ((Fn__int_int)(*updater).callback)(p.start);
    return p;
}


int Pattern__Lambda_find_MINUS_all_15_env(PatternMatchResult* m) {
    int* _13 = Pattern_MatchResult_start(m);
    int _14 = Int_copy(_13);
    return _14;
}

String Pattern__Lambda_global_MINUS_match_MINUS_str_16_env(Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* _env, PatternMatchResult* m) {
    Maybe__String _14 = Pattern_extract(m, _env->data);
    String _15 = Maybe_unsafe_MINUS_from__String(_14);
    return _15;
}

Maybe__String Pattern_extract(PatternMatchResult* match_MINUS_res, String* data) {
    Maybe__String _30;
    bool _8 = Pattern_non_MINUS_match_QMARK_(match_MINUS_res);
    if (_8) {
        Maybe__String _11 = Maybe_Nothing__String();
        Maybe__String _12 = _11;
        _30 = _12;
    } else {
        int* _20 = Pattern_MatchResult_start(match_MINUS_res);
        int _21 = Int_copy(_20);
        int* _25 = Pattern_MatchResult_end(match_MINUS_res);
        int _26 = Int_copy(_25);
        String _27 = String_slice(data, _21, _26);
        Maybe__String _28 = Maybe_Just__String(_27);
        Maybe__String _29 = _28;
        _30 = _29;
    }
    return _30;
}

int Pattern_find(Pattern* pattern, String* data) {
    PatternMatchResult _11 = Pattern_match(pattern, data);
    PatternMatchResult* _12 = &_11; // ref
    int* _13 = Pattern_MatchResult_start(_12);
    int _14 = Int_copy(_13);
    return _14;
}

Array__int Pattern_find_MINUS_all(Pattern* pattern, String* data) {
    // This lambda captures 0 variables: 
    Lambda _15 = {
      .callback = (void*)Pattern__Lambda_find_MINUS_all_15_env,
      .env = NULL,
      .delete = (void*)NULL,
      .copy = (void*)NULL
    };
    Lambda* _16 = &_15; // ref
    Array__PatternMatchResult _21 = Pattern_find_MINUS_all_MINUS_matches(pattern, data);
    Array__PatternMatchResult* _22 = &_21; // ref
    Array__int _23 = Array_copy_MINUS_map__PatternMatchResult_int(_16, _22);
    Array_delete__PatternMatchResult(_21);
    Function_delete__PatternMatchResult_MUL__int(_15);
    return _23;
}

Array__PatternMatchResult Pattern_find_MINUS_all_MINUS_matches(Pattern* pattern, String* data) {
    Array__PatternMatchResult _77;
    /* let */ {
        Array _7 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(PatternMatchResult) * 0) };
        Array__PatternMatchResult result = _7;
        int _11 = String_length(data);
        int stop = _11;
        PatternMatchResult _17 = Pattern_match_MINUS_from(pattern, data, 0);
        PatternMatchResult found = _17;
        PatternMatchResult* _23 = &found; // ref
        int* _24 = Pattern_MatchResult_end(_23);
        int _25 = Int_copy(_24);
        int start = _25;
        bool _46;
        bool _33 = _LT__EQ___int(start, stop);
        if (_33) {
            PatternMatchResult* _39 = &found; // ref
            bool _40 = Pattern_non_MINUS_match_QMARK_(_39);
            bool _41 = not(_40);
            bool _42 = _41;
            _46 = _42;
        } else {
            bool _45 = false;
            _46 = _45;
        }
        bool _74 = _46;
        while (_74) {
            Array__PatternMatchResult _53 = Array_push_MINUS_back__PatternMatchResult(result, found);
            result = _53;  // (Array Pattern.MatchResult) = (Array Pattern.MatchResult)
            PatternMatchResult _61 = Pattern_match_MINUS_from(pattern, data, start);
            found = _61;  // Pattern.MatchResult = Pattern.MatchResult
            PatternMatchResult* _69 = &found; // ref
            int* _70 = Pattern_MatchResult_end(_69);
            int _71 = Int_copy(_70);
            start = _71;  // Int = Int
            bool _46;
            bool _33 = _LT__EQ___int(start, stop);
            if (_33) {
                PatternMatchResult* _39 = &found; // ref
                bool _40 = Pattern_non_MINUS_match_QMARK_(_39);
                bool _41 = not(_40);
                bool _42 = _41;
                _46 = _42;
            } else {
                bool _45 = false;
                _46 = _45;
            }
            _74 = _46;
        }
        Array__PatternMatchResult _76 = result;
        _77 = _76;
    }
    return _77;
}

Pattern Pattern_from_MINUS_chars(Array__Char* chars) {
    static String _12 = "[";
    String *_12_ref = &_12;
    String _13 = String_copy(_12_ref);
    String _1000006 = StringCopy_str(_13);
    String* _1000005 = &_1000006; // ref
    String _22 = String_from_MINUS_chars(chars);
    String _1000010 = StringCopy_str(_22);
    String* _1000009 = &_1000010; // ref
    static String _28 = "]";
    String *_28_ref = &_28;
    String _29 = String_copy(_28_ref);
    String _1000012 = StringCopy_str(_29);
    String* _1000011 = &_1000012; // ref
    String _1000008 = String_append(_1000009, _1000011);
    String* _1000007 = &_1000008; // ref
    String _1000004 = String_append(_1000005, _1000007);
    String* _1000003 = &_1000004; // ref
    String _1000002 = String_copy(_1000003);
    String* _37 = &_1000002; // ref
    Pattern _38 = Pattern_init(_37);
    String_delete(_1000002);
    String_delete(_1000004);
    String_delete(_1000006);
    String_delete(_1000008);
    String_delete(_1000010);
    String_delete(_1000012);
    return _38;
}

Array__String Pattern_global_MINUS_match_MINUS_str(Pattern* pattern, String* data) {
    // This lambda captures 1 variables: data
    Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty *_16_env = CARP_MALLOC(sizeof(Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty));
    _16_env->data = data;
    Lambda _16 = {
      .callback = (void*)Pattern__Lambda_global_MINUS_match_MINUS_str_16_env,
      .env = _16_env,
      .delete = (void*)Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty_delete,
      .copy = (void*)Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty_copy
    };
    Lambda* _17 = &_16; // ref
    Array__PatternMatchResult _22 = Pattern_find_MINUS_all_MINUS_matches(pattern, data);
    Array__PatternMatchResult* _23 = &_22; // ref
    Array__String _24 = Array_copy_MINUS_map__PatternMatchResult_String(_17, _23);
    Array_delete__PatternMatchResult(_22);
    Function_delete__PatternMatchResult_MUL__String(_16);
    return _24;
}

PatternMatchResult Pattern_match(Pattern* pattern, String* data) {
    PatternMatchResult _9 = Pattern_match_MINUS_from(pattern, data, 0);
    return _9;
}

String Pattern_match_MINUS_str(Pattern* pattern, String* data) {
    PatternMatchResult _11 = Pattern_match(pattern, data);
    PatternMatchResult* _12 = &_11; // ref
    Maybe__String _14 = Pattern_extract(_12, data);
    static String _16 = "";
    String *_16_ref = &_16;
    String _17 = String_copy(_16_ref);
    String _18 = Maybe_from__String(_14, _17);
    return _18;
}

bool Pattern_matches_QMARK_(Pattern* pat, String* s) {
    int _9 = Pattern_find(pat, s);
    bool _11 = _DIV__EQ___int(_9, -1);
    return _11;
}

bool Pattern_non_MINUS_match_QMARK_(PatternMatchResult* match_MINUS_res) {
    bool _26;
    int* _9 = Pattern_MatchResult_start(match_MINUS_res);
    int _10 = Int_copy(_9);
    bool _12 = Int__LT_(_10, 0);
    if (_12) {
        bool _15 = true;
        _26 = _15;
    } else {
        int* _21 = Pattern_MatchResult_end(match_MINUS_res);
        int _22 = Int_copy(_21);
        bool _24 = Int__LT_(_22, 0);
        bool _25 = _24;
        _26 = _25;
    }
    return _26;
}

Array__String Pattern_split(Pattern* p, String* s) {
    Array__String _180;
    /* let */ {
        Array__int _10 = Pattern_find_MINUS_all(p, s);
        Array__int idx = _10;
        Array__String _15 = Pattern_global_MINUS_match_MINUS_str(p, s);
        Array__String strs = _15;
        Array__int* _20 = &idx; // ref
        int _21 = Array_length__int(_20);
        int lidx = _21;
        int _26 = Int_inc(lidx);
        Array__String _27 = Array_allocate__String(_26);
        Array__String result = _27;
        Array__String* _33 = &result; // ref
        int _58;
        bool _42 = Int__GT_(lidx, 0);
        if (_42) {
            Array__int* _48 = &idx; // ref
            int* _50 = Array_unsafe_MINUS_nth__int(_48, 0);
            int _51 = Int_copy(_50);
            int _52 = _51;
            _58 = _52;
        } else {
            int _56 = String_length(s);
            int _57 = _56;
            _58 = _57;
        }
        String _59 = String_slice(s, 0, _58);
        Array_aset_MINUS_uninitialized_BANG___String(_33, 0, _59);
        /* let */ {
            int i = 0;
            Array__int* _72 = &idx; // ref
            int _73 = Array_length__int(_72);
            int _74 = Int_dec(_73);
            bool _1000011 = Int__LT_(i, _74);
            bool _1000009 = _1000011;
            while (_1000009) {
                /* let */ {
                    Array__String* _83 = &strs; // ref
                    String* _85 = Array_unsafe_MINUS_nth__String(_83, i);
                    int _86 = String_length(_85);
                    int plen = _86;
                    Array__String* _91 = &result; // ref
                    int _94 = Int_inc(i);
                    Array__int* _102 = &idx; // ref
                    int* _104 = Array_unsafe_MINUS_nth__int(_102, i);
                    int _105 = Int_copy(_104);
                    int _107 = Int__PLUS_(_105, plen);
                    Array__int* _112 = &idx; // ref
                    int _115 = Int_inc(i);
                    int* _116 = Array_unsafe_MINUS_nth__int(_112, _115);
                    int _117 = Int_copy(_116);
                    String _118 = String_slice(s, _107, _117);
                    Array_aset_MINUS_uninitialized_BANG___String(_91, _94, _118);
                }
                int _1000017 = Int__PLUS_(i, 1);
                i = _1000017;  // Int = Int
                Array__int* _72 = &idx; // ref
                int _73 = Array_length__int(_72);
                int _74 = Int_dec(_73);
                bool _1000011 = Int__LT_(i, _74);
                _1000009 = _1000011;
            }
        }
        bool _135 = Int__GT_(lidx, 0);
        if (_135) {
            /* let */ {
                Array__String* _143 = &strs; // ref
                int _146 = Int_dec(lidx);
                String* _147 = Array_unsafe_MINUS_nth__String(_143, _146);
                int _148 = String_length(_147);
                int plen = _148;
                Array__String* _153 = &result; // ref
                Array__int* _162 = &idx; // ref
                int _165 = Int_dec(lidx);
                int* _166 = Array_unsafe_MINUS_nth__int(_162, _165);
                int _167 = Int_copy(_166);
                int _169 = Int__PLUS_(_167, plen);
                String _170 = String_suffix(s, _169);
                Array_aset_MINUS_uninitialized_BANG___String(_153, lidx, _170);
            }
        } else {
            /* () */
        }
        Array__String _179 = result;
        _180 = _179;
        Array_delete__String(strs);
        Array_delete__int(idx);
    }
    return _180;
}

Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty_copy(Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* pRef) {
    Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'data' : (Ref String <r19>) */
    return copy;
}

void Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty_delete(Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* p) {
    /* Ignore non-managed member 'data' : (Ref String <r19>) */
}

 bool Pointer_eq__CChar(CChar *p1, CChar *p2) { return p1 == p2; }
 bool Pointer_eq__FILE(FILE *p1, FILE *p2) { return p1 == p2; }
bool Random_gen_MINUS_seed_MINUS_at_MINUS_startup_QMARK_() {
    return Random__;
}

double Random_random() {
    double _11 = Double__MUL_(Random_s, Random_a);
    double _13 = Double__PLUS_(_11, Random_c);
    double _15 = Double_mod(_13, Random_m);
    Random_s = _15;  // Double = Double
    double _20 = Double__DIV_(Random_s, Random_m);
    double _21 = _20;
    return _21;
}

void Random_seed() {
    Uint64 _7 = System_nanotime();
    double _8 = Double_from_MINUS_uint64(_7);
    Random_s = _8;  // Double = Double
}

void Random_seed_MINUS_from(double new_MINUS_seed) {
    Random_s = new_MINUS_seed;  // Double = Double
}

bool RefBool__EQ_(bool* a, bool* b) {
    bool _8 = Bool_copy(a);
    bool _11 = Bool_copy(b);
    bool _12 = Bool__EQ_(_8, _11);
    return _12;
}

Result__Uint16_Array__uint8_t Result_Error__Array__uint8_t_Uint16(Array__uint8_t member0) {
  Result__Uint16_Array__uint8_t instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__Uint16_Array__uint8_t_Error_tag;
    return instance;
}

Result__Uint32_Array__uint8_t Result_Error__Array__uint8_t_Uint32(Array__uint8_t member0) {
  Result__Uint32_Array__uint8_t instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__Uint32_Array__uint8_t_Error_tag;
    return instance;
}

Result__Uint64_Array__uint8_t Result_Error__Array__uint8_t_Uint64(Array__uint8_t member0) {
  Result__Uint64_Array__uint8_t instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__Uint64_Array__uint8_t_Error_tag;
    return instance;
}

Result__Char_String Result_Error__String_Char(String member0) {
  Result__Char_String instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__Char_String_Error_tag;
    return instance;
}

Result__FILE_MUL__String Result_Error__String_FILE_MUL_(String member0) {
  Result__FILE_MUL__String instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__FILE_MUL__String_Error_tag;
    return instance;
}

Result__String_String Result_Error__String_String(String member0) {
  Result__String_String instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__String_String_Error_tag;
    return instance;
}

Result__bool_String Result_Error__String_bool(String member0) {
  Result__bool_String instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__bool_String_Error_tag;
    return instance;
}

Result__Array__Uint16_int Result_Error__int_Array__Uint16(int member0) {
  Result__Array__Uint16_int instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__Array__Uint16_int_Error_tag;
    return instance;
}

Result__Array__Uint32_int Result_Error__int_Array__Uint32(int member0) {
  Result__Array__Uint32_int instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__Array__Uint32_int_Error_tag;
    return instance;
}

Result__Array__Uint64_int Result_Error__int_Array__Uint64(int member0) {
  Result__Array__Uint64_int instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__Array__Uint64_int_Error_tag;
    return instance;
}

Result__Array__Uint16_int Result_Success__Array__Uint16_int(Array__Uint16 member0) {
  Result__Array__Uint16_int instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__Array__Uint16_int_Success_tag;
    return instance;
}

Result__Array__Uint32_int Result_Success__Array__Uint32_int(Array__Uint32 member0) {
  Result__Array__Uint32_int instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__Array__Uint32_int_Success_tag;
    return instance;
}

Result__Array__Uint64_int Result_Success__Array__Uint64_int(Array__Uint64 member0) {
  Result__Array__Uint64_int instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__Array__Uint64_int_Success_tag;
    return instance;
}

Result__Char_String Result_Success__Char_String(Char member0) {
  Result__Char_String instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__Char_String_Success_tag;
    return instance;
}

Result__FILE_MUL__String Result_Success__FILE_MUL__String(FILE* member0) {
  Result__FILE_MUL__String instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__FILE_MUL__String_Success_tag;
    return instance;
}

Result__String_String Result_Success__String_String(String member0) {
  Result__String_String instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__String_String_Success_tag;
    return instance;
}

Result__Uint16_Array__uint8_t Result_Success__Uint16_Array__uint8_t(Uint16 member0) {
  Result__Uint16_Array__uint8_t instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__Uint16_Array__uint8_t_Success_tag;
    return instance;
}

Result__Uint32_Array__uint8_t Result_Success__Uint32_Array__uint8_t(Uint32 member0) {
  Result__Uint32_Array__uint8_t instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__Uint32_Array__uint8_t_Success_tag;
    return instance;
}

Result__Uint64_Array__uint8_t Result_Success__Uint64_Array__uint8_t(Uint64 member0) {
  Result__Uint64_Array__uint8_t instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__Uint64_Array__uint8_t_Success_tag;
    return instance;
}

Result__bool_String Result_Success__bool_String(bool member0) {
  Result__bool_String instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__bool_String_Success_tag;
    return instance;
}

Result__Uint16_Array__uint8_t Result_copy__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* pRef) {
    Result__Uint16_Array__uint8_t copy = *pRef;
    if(pRef->_tag == Result__Uint16_Array__uint8_t_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : Uint16 */
    }

    else if(pRef->_tag == Result__Uint16_Array__uint8_t_Error_tag) {
    copy.u.Error.member0 = Array_copy__uint8_t(&(pRef->u.Error.member0));
    }

    return copy;
}

Result__Uint32_Array__uint8_t Result_copy__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* pRef) {
    Result__Uint32_Array__uint8_t copy = *pRef;
    if(pRef->_tag == Result__Uint32_Array__uint8_t_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : Uint32 */
    }

    else if(pRef->_tag == Result__Uint32_Array__uint8_t_Error_tag) {
    copy.u.Error.member0 = Array_copy__uint8_t(&(pRef->u.Error.member0));
    }

    return copy;
}

Result__Uint64_Array__uint8_t Result_copy__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* pRef) {
    Result__Uint64_Array__uint8_t copy = *pRef;
    if(pRef->_tag == Result__Uint64_Array__uint8_t_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : Uint64 */
    }

    else if(pRef->_tag == Result__Uint64_Array__uint8_t_Error_tag) {
    copy.u.Error.member0 = Array_copy__uint8_t(&(pRef->u.Error.member0));
    }

    return copy;
}

void Result_delete__Array__Uint16_int(Result__Array__Uint16_int p) {
  if(p._tag == Result__Array__Uint16_int_Success_tag) {
    Array_delete__Uint16(p.u.Success.member0);
  }
  else if(p._tag == Result__Array__Uint16_int_Error_tag) {
    /* Ignore non-managed member 'u.Error.member0' : Int */
  }

}

void Result_delete__Array__Uint32_int(Result__Array__Uint32_int p) {
  if(p._tag == Result__Array__Uint32_int_Success_tag) {
    Array_delete__Uint32(p.u.Success.member0);
  }
  else if(p._tag == Result__Array__Uint32_int_Error_tag) {
    /* Ignore non-managed member 'u.Error.member0' : Int */
  }

}

void Result_delete__Array__Uint64_int(Result__Array__Uint64_int p) {
  if(p._tag == Result__Array__Uint64_int_Success_tag) {
    Array_delete__Uint64(p.u.Success.member0);
  }
  else if(p._tag == Result__Array__Uint64_int_Error_tag) {
    /* Ignore non-managed member 'u.Error.member0' : Int */
  }

}

void Result_delete__Char_String(Result__Char_String p) {
  if(p._tag == Result__Char_String_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : Char */
  }
  else if(p._tag == Result__Char_String_Error_tag) {
    String_delete(p.u.Error.member0);
  }

}

void Result_delete__FILE_MUL__String(Result__FILE_MUL__String p) {
  if(p._tag == Result__FILE_MUL__String_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : (Ptr FILE) */
  }
  else if(p._tag == Result__FILE_MUL__String_Error_tag) {
    String_delete(p.u.Error.member0);
  }

}

void Result_delete__String_String(Result__String_String p) {
  if(p._tag == Result__String_String_Success_tag) {
    String_delete(p.u.Success.member0);
  }
  else if(p._tag == Result__String_String_Error_tag) {
    String_delete(p.u.Error.member0);
  }

}

void Result_delete__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t p) {
  if(p._tag == Result__Uint16_Array__uint8_t_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : Uint16 */
  }
  else if(p._tag == Result__Uint16_Array__uint8_t_Error_tag) {
    Array_delete__uint8_t(p.u.Error.member0);
  }

}

void Result_delete__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t p) {
  if(p._tag == Result__Uint32_Array__uint8_t_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : Uint32 */
  }
  else if(p._tag == Result__Uint32_Array__uint8_t_Error_tag) {
    Array_delete__uint8_t(p.u.Error.member0);
  }

}

void Result_delete__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t p) {
  if(p._tag == Result__Uint64_Array__uint8_t_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : Uint64 */
  }
  else if(p._tag == Result__Uint64_Array__uint8_t_Error_tag) {
    Array_delete__uint8_t(p.u.Error.member0);
  }

}

void Result_delete__bool_String(Result__bool_String p) {
  if(p._tag == Result__bool_String_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : Bool */
  }
  else if(p._tag == Result__bool_String_Error_tag) {
    String_delete(p.u.Error.member0);
  }

}

bool Result_error_QMARK___FILE_MUL__String(Result__FILE_MUL__String* a) {
    bool _14;
    if(a->_tag == Result__FILE_MUL__String_Error_tag) {
        Result__FILE_MUL__String* _5_temp = a;
        String* wildcard_7 = &_5_temp->u.Error.member0;
        // Case expr:
        _14 = true;
    }
    else if(a->_tag == Result__FILE_MUL__String_Success_tag) {
        Result__FILE_MUL__String* _5_temp = a;
        FILE** wildcard_11 = &_5_temp->u.Success.member0;
        // Case expr:
        _14 = false;
    }
    else UNHANDLED("Result.carp", 98);
    return _14;
}

bool Result_error_QMARK___Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* a) {
    bool _14;
    if(a->_tag == Result__Uint16_Array__uint8_t_Error_tag) {
        Result__Uint16_Array__uint8_t* _5_temp = a;
        Array__uint8_t* wildcard_7 = &_5_temp->u.Error.member0;
        // Case expr:
        _14 = true;
    }
    else if(a->_tag == Result__Uint16_Array__uint8_t_Success_tag) {
        Result__Uint16_Array__uint8_t* _5_temp = a;
        Uint16* wildcard_11 = &_5_temp->u.Success.member0;
        // Case expr:
        _14 = false;
    }
    else UNHANDLED("Result.carp", 98);
    return _14;
}

bool Result_error_QMARK___Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* a) {
    bool _14;
    if(a->_tag == Result__Uint32_Array__uint8_t_Error_tag) {
        Result__Uint32_Array__uint8_t* _5_temp = a;
        Array__uint8_t* wildcard_7 = &_5_temp->u.Error.member0;
        // Case expr:
        _14 = true;
    }
    else if(a->_tag == Result__Uint32_Array__uint8_t_Success_tag) {
        Result__Uint32_Array__uint8_t* _5_temp = a;
        Uint32* wildcard_11 = &_5_temp->u.Success.member0;
        // Case expr:
        _14 = false;
    }
    else UNHANDLED("Result.carp", 98);
    return _14;
}

bool Result_error_QMARK___Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* a) {
    bool _14;
    if(a->_tag == Result__Uint64_Array__uint8_t_Error_tag) {
        Result__Uint64_Array__uint8_t* _5_temp = a;
        Array__uint8_t* wildcard_7 = &_5_temp->u.Error.member0;
        // Case expr:
        _14 = true;
    }
    else if(a->_tag == Result__Uint64_Array__uint8_t_Success_tag) {
        Result__Uint64_Array__uint8_t* _5_temp = a;
        Uint64* wildcard_11 = &_5_temp->u.Success.member0;
        // Case expr:
        _14 = false;
    }
    else UNHANDLED("Result.carp", 98);
    return _14;
}

Array__uint8_t Result_from_MINUS_error__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t a, Array__uint8_t dflt) {
    Array__uint8_t _15;
    if(a._tag == Result__Uint16_Array__uint8_t_Success_tag) {
        Result__Uint16_Array__uint8_t _6_temp = a;
        Uint16 wildcard_8 = _6_temp.u.Success.member0;
        // Case expr:
        _15 = dflt;
    }
    else if(a._tag == Result__Uint16_Array__uint8_t_Error_tag) {
        Result__Uint16_Array__uint8_t _6_temp = a;
        Array__uint8_t x = _6_temp.u.Error.member0;
        // Case expr:
        _15 = x;
        Array_delete__uint8_t(dflt);
    }
    else UNHANDLED("Result.carp", 74);
    return _15;
}

Array__uint8_t Result_from_MINUS_error__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t a, Array__uint8_t dflt) {
    Array__uint8_t _15;
    if(a._tag == Result__Uint32_Array__uint8_t_Success_tag) {
        Result__Uint32_Array__uint8_t _6_temp = a;
        Uint32 wildcard_8 = _6_temp.u.Success.member0;
        // Case expr:
        _15 = dflt;
    }
    else if(a._tag == Result__Uint32_Array__uint8_t_Error_tag) {
        Result__Uint32_Array__uint8_t _6_temp = a;
        Array__uint8_t x = _6_temp.u.Error.member0;
        // Case expr:
        _15 = x;
        Array_delete__uint8_t(dflt);
    }
    else UNHANDLED("Result.carp", 74);
    return _15;
}

Array__uint8_t Result_from_MINUS_error__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t a, Array__uint8_t dflt) {
    Array__uint8_t _15;
    if(a._tag == Result__Uint64_Array__uint8_t_Success_tag) {
        Result__Uint64_Array__uint8_t _6_temp = a;
        Uint64 wildcard_8 = _6_temp.u.Success.member0;
        // Case expr:
        _15 = dflt;
    }
    else if(a._tag == Result__Uint64_Array__uint8_t_Error_tag) {
        Result__Uint64_Array__uint8_t _6_temp = a;
        Array__uint8_t x = _6_temp.u.Error.member0;
        // Case expr:
        _15 = x;
        Array_delete__uint8_t(dflt);
    }
    else UNHANDLED("Result.carp", 74);
    return _15;
}

bool Result_success_QMARK___Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* a) {
    bool _14;
    if(a->_tag == Result__Uint16_Array__uint8_t_Error_tag) {
        Result__Uint16_Array__uint8_t* _5_temp = a;
        Array__uint8_t* wildcard_7 = &_5_temp->u.Error.member0;
        // Case expr:
        _14 = false;
    }
    else if(a->_tag == Result__Uint16_Array__uint8_t_Success_tag) {
        Result__Uint16_Array__uint8_t* _5_temp = a;
        Uint16* wildcard_11 = &_5_temp->u.Success.member0;
        // Case expr:
        _14 = true;
    }
    else UNHANDLED("Result.carp", 90);
    return _14;
}

bool Result_success_QMARK___Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* a) {
    bool _14;
    if(a->_tag == Result__Uint32_Array__uint8_t_Error_tag) {
        Result__Uint32_Array__uint8_t* _5_temp = a;
        Array__uint8_t* wildcard_7 = &_5_temp->u.Error.member0;
        // Case expr:
        _14 = false;
    }
    else if(a->_tag == Result__Uint32_Array__uint8_t_Success_tag) {
        Result__Uint32_Array__uint8_t* _5_temp = a;
        Uint32* wildcard_11 = &_5_temp->u.Success.member0;
        // Case expr:
        _14 = true;
    }
    else UNHANDLED("Result.carp", 90);
    return _14;
}

bool Result_success_QMARK___Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* a) {
    bool _14;
    if(a->_tag == Result__Uint64_Array__uint8_t_Error_tag) {
        Result__Uint64_Array__uint8_t* _5_temp = a;
        Array__uint8_t* wildcard_7 = &_5_temp->u.Error.member0;
        // Case expr:
        _14 = false;
    }
    else if(a->_tag == Result__Uint64_Array__uint8_t_Success_tag) {
        Result__Uint64_Array__uint8_t* _5_temp = a;
        Uint64* wildcard_11 = &_5_temp->u.Success.member0;
        // Case expr:
        _14 = true;
    }
    else UNHANDLED("Result.carp", 90);
    return _14;
}

String Result_unsafe_MINUS_from_MINUS_error__FILE_MUL__String(Result__FILE_MUL__String a) {
    String _10;
    if(a._tag == Result__FILE_MUL__String_Error_tag) {
        Result__FILE_MUL__String _5_temp = a;
        String x = _5_temp.u.Error.member0;
        // Case expr:
        _10 = x;
    }
    else UNHANDLED("Result.carp", 69);
    return _10;
}

FILE* Result_unsafe_MINUS_from_MINUS_success__FILE_MUL__String(Result__FILE_MUL__String a) {
    FILE* _10;
    if(a._tag == Result__FILE_MUL__String_Success_tag) {
        Result__FILE_MUL__String _5_temp = a;
        FILE* x = _5_temp.u.Success.member0;
        // Case expr:
        _10 = x;
    }
    else UNHANDLED("Result.carp", 58);
    return _10;
}

Uint16 Result_unwrap_MINUS_or_MINUS_zero__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t a) {
    Uint16 _15;
    if(a._tag == Result__Uint16_Array__uint8_t_Success_tag) {
        Result__Uint16_Array__uint8_t _5_temp = a;
        Uint16 x = _5_temp.u.Success.member0;
        // Case expr:
        _15 = x;
    }
    else if(a._tag == Result__Uint16_Array__uint8_t_Error_tag) {
        Result__Uint16_Array__uint8_t _5_temp = a;
        Array__uint8_t wildcard_11 = _5_temp.u.Error.member0;
        // Case expr:
        Uint16 _14 = Uint16_zero();
        _15 = _14;
        Array_delete__uint8_t(wildcard_11);
    }
    else UNHANDLED("Result.carp", 38);
    return _15;
}

Uint32 Result_unwrap_MINUS_or_MINUS_zero__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t a) {
    Uint32 _15;
    if(a._tag == Result__Uint32_Array__uint8_t_Success_tag) {
        Result__Uint32_Array__uint8_t _5_temp = a;
        Uint32 x = _5_temp.u.Success.member0;
        // Case expr:
        _15 = x;
    }
    else if(a._tag == Result__Uint32_Array__uint8_t_Error_tag) {
        Result__Uint32_Array__uint8_t _5_temp = a;
        Array__uint8_t wildcard_11 = _5_temp.u.Error.member0;
        // Case expr:
        Uint32 _14 = Uint32_zero();
        _15 = _14;
        Array_delete__uint8_t(wildcard_11);
    }
    else UNHANDLED("Result.carp", 38);
    return _15;
}

Uint64 Result_unwrap_MINUS_or_MINUS_zero__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t a) {
    Uint64 _15;
    if(a._tag == Result__Uint64_Array__uint8_t_Success_tag) {
        Result__Uint64_Array__uint8_t _5_temp = a;
        Uint64 x = _5_temp.u.Success.member0;
        // Case expr:
        _15 = x;
    }
    else if(a._tag == Result__Uint64_Array__uint8_t_Error_tag) {
        Result__Uint64_Array__uint8_t _5_temp = a;
        Array__uint8_t wildcard_11 = _5_temp.u.Error.member0;
        // Case expr:
        Uint64 _14 = Uint64_zero();
        _15 = _14;
        Array_delete__uint8_t(wildcard_11);
    }
    else UNHANDLED("Result.carp", 38);
    return _15;
}

uint8_t String__Lambda_ascii_MINUS_to_MINUS_lower_14_env(uint8_t c) {
    uint8_t _13 = tolower(c);
    return _13;
}

uint8_t String__Lambda_ascii_MINUS_to_MINUS_upper_14_env(uint8_t c) {
    uint8_t _13 = toupper(c);
    return _13;
}

bool String__Lambda_words_14_env(String* s) {
    bool _12 = String_empty_QMARK_(s);
    bool _13 = not(_12);
    return _13;
}

bool String_allocated_QMARK_(String* s) {
    CChar* _8 = String_cstr(s);
    bool _9 = null_QMARK___CChar(_8);
    bool _10 = not(_9);
    return _10;
}

bool String_alpha_QMARK_(String* s) {
    static String _5 = "^[\\u\\l]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

bool String_alphanum_QMARK_(String* s) {
    static String _5 = "^[\\w]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

String String_ascii_MINUS_to_MINUS_lower(String* s) {
    // This lambda captures 0 variables: 
    Lambda _14 = {
      .callback = (void*)String__Lambda_ascii_MINUS_to_MINUS_lower_14_env,
      .env = NULL,
      .delete = (void*)NULL,
      .copy = (void*)NULL
    };
    Lambda* _15 = &_14; // ref
    Array__uint8_t _18 = String_to_MINUS_bytes(s);
    Array__uint8_t _19 = Array_endo_MINUS_map__uint8_t(_15, _18);
    Array__uint8_t* _20 = &_19; // ref
    String _21 = String_from_MINUS_bytes(_20);
    Array_delete__uint8_t(_19);
    Function_delete__uint8_t_uint8_t(_14);
    return _21;
}

String String_ascii_MINUS_to_MINUS_upper(String* s) {
    // This lambda captures 0 variables: 
    Lambda _14 = {
      .callback = (void*)String__Lambda_ascii_MINUS_to_MINUS_upper_14_env,
      .env = NULL,
      .delete = (void*)NULL,
      .copy = (void*)NULL
    };
    Lambda* _15 = &_14; // ref
    Array__uint8_t _18 = String_to_MINUS_bytes(s);
    Array__uint8_t _19 = Array_endo_MINUS_map__uint8_t(_15, _18);
    Array__uint8_t* _20 = &_19; // ref
    String _21 = String_from_MINUS_bytes(_20);
    Array_delete__uint8_t(_19);
    Function_delete__uint8_t_uint8_t(_14);
    return _21;
}

String String_chomp(String* s) {
    static String _5 = "\\r$";
    String *_5_ref = &_5;
    static String _8 = "\\n$";
    String *_8_ref = &_8;
    static String _10 = "";
    String *_10_ref = &_10;
    String _12 = Pattern_substitute(_8_ref, s, _10_ref, 1);
    String* _13 = &_12; // ref
    static String _14 = "";
    String *_14_ref = &_14;
    String _16 = Pattern_substitute(_5_ref, _13, _14_ref, 1);
    String_delete(_12);
    return _16;
}

String String_collapse_MINUS_whitespace(String* s) {
    static String _5 = "\\s+";
    String *_5_ref = &_5;
    static String _7 = " ";
    String *_7_ref = &_7;
    String _9 = Pattern_substitute(_5_ref, s, _7_ref, -1);
    return _9;
}

String String_concat(Array__String* strings) {
    String _70;
    /* let */ {
        int j = 0;
        int _10 = Array_length__String(strings);
        int lstrings = _10;
        int _15 = String_sum_MINUS_length(strings);
        String _17 = String_allocate(_15, 32/*' '*/);
        String result = _17;
        /* let */ {
            int i = 0;
            bool _1000008 = Int__LT_(i, lstrings);
            bool _1000006 = _1000008;
            while (_1000006) {
                /* let */ {
                    String* _35 = Array_unsafe_MINUS_nth__String(strings, i);
                    String* str = _35;
                    int _39 = String_length(str);
                    int len = _39;
                    String* _45 = &result; // ref
                    String_string_MINUS_set_MINUS_at_BANG_(_45, j, str);
                    int _54 = Int__PLUS_(j, len);
                    j = _54;  // Int = Int
                }
                int _1000016 = Int__PLUS_(i, 1);
                i = _1000016;  // Int = Int
                bool _1000008 = Int__LT_(i, lstrings);
                _1000006 = _1000008;
            }
        }
        String _69 = result;
        _70 = _69;
    }
    return _70;
}

bool String_contains_MINUS_string_QMARK_(String* s, String* needle) {
    int _9 = String_index_MINUS_of_MINUS_string(s, needle);
    bool _11 = Int__GT_(_9, -1);
    return _11;
}

bool String_contains_QMARK_(String* s, Char c) {
    int _9 = String_index_MINUS_of(s, c);
    bool _11 = Int__GT_(_9, -1);
    return _11;
}

int String_count_MINUS_char(String* s, Char c) {
    int _54;
    /* let */ {
        int n = 0;
        /* let */ {
            int i = 0;
            int _19 = String_length(s);
            bool _1000008 = Int__LT_(i, _19);
            bool _1000006 = _1000008;
            while (_1000006) {
                Char _28 = String_char_MINUS_at(s, i);
                bool _29 = Char__EQ_(c, _28);
                if (_29) {
                    int _35 = Int_inc(n);
                    n = _35;  // Int = Int
                } else {
                    /* () */
                }
                int _1000017 = Int__PLUS_(i, 1);
                i = _1000017;  // Int = Int
                int _19 = String_length(s);
                bool _1000008 = Int__LT_(i, _19);
                _1000006 = _1000008;
            }
        }
        int _53 = n;
        _54 = _53;
    }
    return _54;
}

bool String_empty_QMARK_(String* s) {
    int _7 = String_length(s);
    bool _9 = Int__EQ_(_7, 0);
    return _9;
}

bool String_ends_MINUS_with_QMARK_(String* s, String* sub) {
    bool _38;
    /* let */ {
        int _9 = String_length(s);
        int ls = _9;
        int _13 = String_length(sub);
        int lsub = _13;
        bool _37;
        bool _19 = _GT__EQ___int(ls, lsub);
        if (_19) {
            int _29 = Int__MINUS_(ls, lsub);
            String _30 = String_suffix(s, _29);
            String* _31 = &_30; // ref
            bool _32 = String__EQ_(sub, _31);
            bool _33 = _32;
            String_delete(_30);
            _37 = _33;
        } else {
            bool _36 = false;
            _37 = _36;
        }
        _38 = _37;
    }
    return _38;
}

int String_hash(String* k) {
    int _50;
    /* let */ {
        int h = 5381;
        /* let */ {
            int x = 0;
            int _18 = String_length(k);
            bool _1000008 = Int__LT_(x, _18);
            bool _1000006 = _1000008;
            while (_1000006) {
                int _27 = Int__MUL_(h, 33);
                Char _32 = String_char_MINUS_at(k, x);
                int _33 = Char_to_MINUS_int(_32);
                int _34 = Int__PLUS_(_27, _33);
                h = _34;  // Int = Int
                int _1000014 = Int__PLUS_(x, 1);
                x = _1000014;  // Int = Int
                int _18 = String_length(k);
                bool _1000008 = Int__LT_(x, _18);
                _1000006 = _1000008;
            }
        }
        int _48 = Int_abs(h);
        int _49 = _48;
        _50 = _49;
    }
    return _50;
}

Char String_head(String* s) {
    Char _7 = String_char_MINUS_at(s, 0);
    return _7;
}

bool String_hex_QMARK_(String* s) {
    static String _5 = "^[\\x]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

bool String_in_QMARK_(String* s, String* sub) {
    Pattern _9 = Pattern_init(sub);
    Pattern* _10 = &_9; // ref
    bool _12 = Pattern_matches_QMARK_(_10, s);
    Pattern_delete(_9);
    return _12;
}

int String_index_MINUS_of(String* s, Char c) {
    Array _9 = { .len = 1, .capacity = 1, .data = CARP_MALLOC(sizeof(Char) * 1) };
    ((Char*)_9.data)[0] = c;
    Array__Char* _10 = &_9; // ref
    int _12 = String_index_MINUS_of_MINUS_any_MINUS_from(s, _10, -1);
    Array_delete__Char(_9);
    return _12;
}

int String_index_MINUS_of_MINUS_from(String* s, Char c, int i) {
    Array _10 = { .len = 1, .capacity = 1, .data = CARP_MALLOC(sizeof(Char) * 1) };
    ((Char*)_10.data)[0] = c;
    Array__Char* _11 = &_10; // ref
    int _13 = String_index_MINUS_of_MINUS_any_MINUS_from(s, _11, i);
    Array_delete__Char(_10);
    return _13;
}

String String_join(String* sep, Array__String* strings) {
    String _116;
    /* let */ {
        int j = 0;
        int _11 = Array_length__String(strings);
        int lstrings = _11;
        int _18 = Int__MINUS_(lstrings, 1);
        int _19 = max__int(0, _18);
        int num_MINUS_seps = _19;
        int _23 = String_length(sep);
        int sep_MINUS_length = _23;
        int _28 = Int__MUL_(num_MINUS_seps, sep_MINUS_length);
        int seps_MINUS_size = _28;
        int _35 = String_sum_MINUS_length(strings);
        int _36 = Int__PLUS_(seps_MINUS_size, _35);
        String _38 = String_allocate(_36, 32/*' '*/);
        String result = _38;
        /* let */ {
            int i = 0;
            bool _1000008 = Int__LT_(i, lstrings);
            bool _1000006 = _1000008;
            while (_1000006) {
                /* let */ {
                    String* _56 = Array_unsafe_MINUS_nth__String(strings, i);
                    String* str = _56;
                    int _60 = String_length(str);
                    int len = _60;
                    bool _67 = Int__GT_(i, 0);
                    if (_67) {
                        String* _72 = &result; // ref
                        String_string_MINUS_set_MINUS_at_BANG_(_72, j, sep);
                        int _81 = Int__PLUS_(j, sep_MINUS_length);
                        j = _81;  // Int = Int
                    } else {
                        /* () */
                    }
                    String* _91 = &result; // ref
                    String_string_MINUS_set_MINUS_at_BANG_(_91, j, str);
                    int _100 = Int__PLUS_(j, len);
                    j = _100;  // Int = Int
                }
                int _1000020 = Int__PLUS_(i, 1);
                i = _1000020;  // Int = Int
                bool _1000008 = Int__LT_(i, lstrings);
                _1000006 = _1000008;
            }
        }
        String _115 = result;
        _116 = _115;
    }
    return _116;
}

String String_join_MINUS_with_MINUS_char(Char sep, Array__String* strings) {
    String _107;
    /* let */ {
        int j = 0;
        int _11 = Array_length__String(strings);
        int lstrings = _11;
        int _18 = Int__MINUS_(lstrings, 1);
        int _19 = max__int(0, _18);
        int sep_MINUS_length = _19;
        int _26 = String_sum_MINUS_length(strings);
        int _27 = Int__PLUS_(sep_MINUS_length, _26);
        String _29 = String_allocate(_27, 32/*' '*/);
        String result = _29;
        /* let */ {
            int i = 0;
            bool _1000008 = Int__LT_(i, lstrings);
            bool _1000006 = _1000008;
            while (_1000006) {
                /* let */ {
                    String* _47 = Array_unsafe_MINUS_nth__String(strings, i);
                    String* str = _47;
                    int _51 = String_length(str);
                    int len = _51;
                    bool _58 = Int__GT_(i, 0);
                    if (_58) {
                        String* _63 = &result; // ref
                        String_string_MINUS_set_BANG_(_63, j, sep);
                        int _72 = Int__PLUS_(j, 1);
                        j = _72;  // Int = Int
                    } else {
                        /* () */
                    }
                    String* _82 = &result; // ref
                    String_string_MINUS_set_MINUS_at_BANG_(_82, j, str);
                    int _91 = Int__PLUS_(j, len);
                    j = _91;  // Int = Int
                }
                int _1000020 = Int__PLUS_(i, 1);
                i = _1000020;  // Int = Int
                bool _1000008 = Int__LT_(i, lstrings);
                _1000006 = _1000008;
            }
        }
        String _106 = result;
        _107 = _106;
    }
    return _107;
}

Array__String String_lines(String* s) {
    Array _8 = { .len = 1, .capacity = 1, .data = CARP_MALLOC(sizeof(Char) * 1) };
    ((Char*)_8.data)[0] = '\n';
    Array__Char* _9 = &_8; // ref
    Array__String _10 = String_split_MINUS_by(s, _9);
    Array_delete__Char(_8);
    return _10;
}

bool String_lower_QMARK_(String* s) {
    static String _5 = "^[\\l\\s\\p]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

bool String_num_QMARK_(String* s) {
    static String _5 = "^[0-9]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

String String_pad_MINUS_left(int len, Char pad, String* s) {
    String _33;
    /* let */ {
        int _14 = String_length(s);
        int _15 = Int__MINUS_(len, _14);
        int _16 = max__int(0, _15);
        int x = _16;
        Char* _26 = &pad; // ref
        Array__Char _27 = Array_replicate__Char(x, _26);
        Array__Char* _28 = &_27; // ref
        String _29 = String_from_MINUS_chars(_28);
        String* _30 = &_29; // ref
        String _32 = String_append(_30, s);
        _33 = _32;
        Array_delete__Char(_27);
        String_delete(_29);
    }
    return _33;
}

String String_pad_MINUS_right(int len, Char pad, String* s) {
    String _33;
    /* let */ {
        int _14 = String_length(s);
        int _15 = Int__MINUS_(len, _14);
        int _16 = max__int(0, _15);
        int x = _16;
        Char* _27 = &pad; // ref
        Array__Char _28 = Array_replicate__Char(x, _27);
        Array__Char* _29 = &_28; // ref
        String _30 = String_from_MINUS_chars(_29);
        String* _31 = &_30; // ref
        String _32 = String_append(s, _31);
        _33 = _32;
        Array_delete__Char(_28);
        String_delete(_30);
    }
    return _33;
}

String String_prefix(String* s, int a) {
    Array__Char _11 = String_chars(s);
    Array__Char* _12 = &_11; // ref
    Array__Char _14 = Array_prefix__Array__Char(_12, a);
    Array__Char* _15 = &_14; // ref
    String _16 = String_from_MINUS_chars(_15);
    Array_delete__Char(_11);
    Array_delete__Char(_14);
    return _16;
}

String String_random_MINUS_sized(int n) {
    Lambda _9 = { .callback = (void*)Char_random, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Char.random (LookupGlobal CarpLand AFunction)
    Lambda* _10 = &_9; // ref
    Array__Char _11 = Array_repeat__Char(n, _10);
    Array__Char* _12 = &_11; // ref
    String _13 = String_from_MINUS_chars(_12);
    Array_delete__Char(_11);
    return _13;
}

String String_repeat(int n, String* inpt) {
    String _52;
    /* let */ {
        int _9 = String_length(inpt);
        int l = _9;
        int _15 = Int__MUL_(n, l);
        String _17 = String_allocate(_15, 48/*'0'*/);
        String str = _17;
        /* let */ {
            int i = 0;
            bool _1000008 = Int__LT_(i, n);
            bool _1000006 = _1000008;
            while (_1000006) {
                String* _33 = &str; // ref
                int _37 = Int__MUL_(i, l);
                String_string_MINUS_set_MINUS_at_BANG_(_33, _37, inpt);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                bool _1000008 = Int__LT_(i, n);
                _1000006 = _1000008;
            }
        }
        String _51 = str;
        _52 = _51;
    }
    return _52;
}

String String_reverse(String* s) {
    Array__Char _9 = String_chars(s);
    Array__Char _10 = Array_reverse__Char(_9);
    Array__Char* _11 = &_10; // ref
    String _12 = String_from_MINUS_chars(_11);
    Array_delete__Char(_10);
    return _12;
}

String String_slice(String* s, int a, int b) {
    Array__Char _12 = String_chars(s);
    Array__Char* _13 = &_12; // ref
    Array__Char _16 = Array_slice__Char(_13, a, b);
    Array__Char* _17 = &_16; // ref
    String _18 = String_from_MINUS_chars(_17);
    Array_delete__Char(_12);
    Array_delete__Char(_16);
    return _18;
}

Array__String String_split_MINUS_by(String* s, Array__Char* separators) {
    Array__String _62;
    /* let */ {
        Array _7 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(String) * 0) };
        Array__String result = _7;
        int start = 0;
        int _15 = String_index_MINUS_of_MINUS_any_MINUS_from(s, separators, -1);
        int idx = _15;
        bool _22 = _DIV__EQ___int(idx, -1);
        bool _50 = _22;
        while (_50) {
            String _32 = String_byte_MINUS_slice(s, start, idx);
            Array__String _33 = Array_push_MINUS_back__String(result, _32);
            result = _33;  // (Array String) = (Array String)
            int _39 = Int_inc(idx);
            start = _39;  // Int = Int
            int _47 = String_index_MINUS_of_MINUS_any_MINUS_from(s, separators, idx);
            idx = _47;  // Int = Int
            bool _22 = _DIV__EQ___int(idx, -1);
            _50 = _22;
        }
        int _58 = String_length(s);
        String _59 = String_byte_MINUS_slice(s, start, _58);
        Array__String _60 = Array_push_MINUS_back__String(result, _59);
        Array__String _61 = _60;
        _62 = _61;
    }
    return _62;
}

bool String_starts_MINUS_with_QMARK_(String* s, String* sub) {
    bool _33;
    /* let */ {
        int _9 = String_length(sub);
        int ls = _9;
        bool _32;
        int _15 = String_length(s);
        bool _17 = _GT__EQ___int(_15, ls);
        if (_17) {
            String _25 = String_prefix(s, ls);
            String* _26 = &_25; // ref
            bool _27 = String__EQ_(sub, _26);
            bool _28 = _27;
            String_delete(_25);
            _32 = _28;
        } else {
            bool _31 = false;
            _32 = _31;
        }
        _33 = _32;
    }
    return _33;
}

String String_suffix(String* s, int b) {
    Array__Char _11 = String_chars(s);
    Array__Char* _12 = &_11; // ref
    Array__Char _14 = Array_suffix__Char(_12, b);
    Array__Char* _15 = &_14; // ref
    String _16 = String_from_MINUS_chars(_15);
    Array_delete__Char(_11);
    Array_delete__Char(_14);
    return _16;
}

int String_sum_MINUS_length(Array__String* strings) {
    int _47;
    /* let */ {
        int sum = 0;
        int _10 = Array_length__String(strings);
        int lstrings = _10;
        /* let */ {
            int i = 0;
            bool _1000008 = Int__LT_(i, lstrings);
            bool _1000006 = _1000008;
            while (_1000006) {
                String* _31 = Array_unsafe_MINUS_nth__String(strings, i);
                int _32 = String_length(_31);
                int _33 = Int__PLUS_(sum, _32);
                sum = _33;  // Int = Int
                int _1000014 = Int__PLUS_(i, 1);
                i = _1000014;  // Int = Int
                bool _1000008 = Int__LT_(i, lstrings);
                _1000006 = _1000008;
            }
        }
        int _46 = sum;
        _47 = _46;
    }
    return _47;
}

String String_trim(String* s) {
    String _8 = String_trim_MINUS_right(s);
    String* _9 = &_8; // ref
    String _10 = String_trim_MINUS_left(_9);
    String_delete(_8);
    return _10;
}

String String_trim_MINUS_left(String* s) {
    static String _5 = "^\\s+";
    String *_5_ref = &_5;
    static String _7 = "";
    String *_7_ref = &_7;
    String _9 = Pattern_substitute(_5_ref, s, _7_ref, 1);
    return _9;
}

String String_trim_MINUS_right(String* s) {
    static String _5 = "\\s+$";
    String *_5_ref = &_5;
    static String _7 = "";
    String *_7_ref = &_7;
    String _9 = Pattern_substitute(_5_ref, s, _7_ref, 1);
    return _9;
}

bool String_upper_QMARK_(String* s) {
    static String _5 = "^[\\u\\s\\p]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

Array__String String_words(String* s) {
    // This lambda captures 0 variables: 
    Lambda _14 = {
      .callback = (void*)String__Lambda_words_14_env,
      .env = NULL,
      .delete = (void*)NULL,
      .copy = (void*)NULL
    };
    Lambda* _15 = &_14; // ref
    Array _22 = { .len = 3, .capacity = 3, .data = CARP_MALLOC(sizeof(Char) * 3) };
    ((Char*)_22.data)[0] = '\t';
    ((Char*)_22.data)[1] = 32/*' '*/;
    ((Char*)_22.data)[2] = '\n';
    Array__Char* _23 = &_22; // ref
    Array__String _24 = String_split_MINUS_by(s, _23);
    Array__String _25 = Array_endo_MINUS_filter__String(_15, _24);
    Array_delete__Char(_22);
    Function_delete__String_MUL__bool(_14);
    return _25;
}

String String_zero() {
    static String _4 = "";
    String *_4_ref = &_4;
    String _5 = String_copy(_4_ref);
    return _5;
}

bool StringCopy__LT_(String a, String b) {
    String* _8 = &a; // ref
    String* _11 = &b; // ref
    bool _12 = String__LT_(_8, _11);
    String_delete(a);
    String_delete(b);
    return _12;
}

bool StringCopy__EQ_(String a, String b) {
    String* _8 = &a; // ref
    String* _11 = &b; // ref
    bool _12 = String__EQ_(_8, _11);
    String_delete(a);
    String_delete(b);
    return _12;
}

bool StringCopy__GT_(String a, String b) {
    String* _8 = &a; // ref
    String* _11 = &b; // ref
    bool _12 = String__GT_(_8, _11);
    String_delete(a);
    String_delete(b);
    return _12;
}

String StringCopy_prn(String s) {
    String _9 = s; // From the 'the' function.
    String* _10 = &_9; // ref
    String _11 = String_prn(_10);
    String_delete(_9);
    return _11;
}

String StringCopy_str(String s) {
    String _9 = s; // From the 'the' function.
    String* _10 = &_9; // ref
    String _11 = String_str(_10);
    String_delete(_9);
    return _11;
}

String System_error_MINUS_text() {
    String _5 = System_strerror(errno);
    return _5;
}

String System_strerror(int error_MINUS_no) {
    CChar* _7 = strerror(error_MINUS_no);
    String _8 = String_from_MINUS_cstr(_7);
    return _8;
}

Uint16 Uint16_blit(Uint16 x) {
    Uint16 _7 = x; // From the 'the' function.
    return _7;
}

int Uint16_hash(Uint16* k) {
    Uint16 _8 = Uint16_copy(k);
    Long _9 = Uint16_to_MINUS_long(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

String Uint16_prn(Uint16 a) {
    String _6 = Uint16_str(a);
    return _6;
}

Uint16 Uint16_zero() {
    Uint16 _5 = Uint16_from_MINUS_long(0l);
    return _5;
}

bool Uint16Extra__EQ_(Uint16* a, Uint16* b) {
    Uint16 _8 = Uint16_copy(a);
    Uint16 _11 = Uint16_copy(b);
    bool _12 = Uint16__EQ_(_8, _11);
    return _12;
}

String Uint16Extra_prn(Uint16* a) {
    Uint16 _7 = Uint16_copy(a);
    String _8 = Uint16_prn(_7);
    return _8;
}

String Uint16Extra_str(Uint16* a) {
    Uint16 _7 = Uint16_copy(a);
    String _8 = Uint16_str(_7);
    return _8;
}

Uint32 Uint32_blit(Uint32 x) {
    Uint32 _7 = x; // From the 'the' function.
    return _7;
}

int Uint32_hash(Uint32* k) {
    Uint32 _8 = Uint32_copy(k);
    Long _9 = Uint32_to_MINUS_long(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

String Uint32_prn(Uint32 a) {
    String _6 = Uint32_str(a);
    return _6;
}

Uint32 Uint32_zero() {
    Uint32 _5 = Uint32_from_MINUS_long(0l);
    return _5;
}

bool Uint32Extra__EQ_(Uint32* a, Uint32* b) {
    Uint32 _8 = Uint32_copy(a);
    Uint32 _11 = Uint32_copy(b);
    bool _12 = Uint32__EQ_(_8, _11);
    return _12;
}

String Uint32Extra_prn(Uint32* a) {
    Uint32 _7 = Uint32_copy(a);
    String _8 = Uint32_prn(_7);
    return _8;
}

String Uint32Extra_str(Uint32* a) {
    Uint32 _7 = Uint32_copy(a);
    String _8 = Uint32_str(_7);
    return _8;
}

Uint64 Uint64_blit(Uint64 x) {
    Uint64 _7 = x; // From the 'the' function.
    return _7;
}

int Uint64_hash(Uint64* k) {
    Uint64 _8 = Uint64_copy(k);
    Long _9 = Uint64_to_MINUS_long(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

String Uint64_prn(Uint64 a) {
    String _6 = Uint64_str(a);
    return _6;
}

Uint64 Uint64_zero() {
    Uint64 _5 = Uint64_from_MINUS_long(0l);
    return _5;
}

bool Uint64Extra__EQ_(Uint64* a, Uint64* b) {
    Uint64 _8 = Uint64_copy(a);
    Uint64 _11 = Uint64_copy(b);
    bool _12 = Uint64__EQ_(_8, _11);
    return _12;
}

String Uint64Extra_prn(Uint64* a) {
    Uint64 _7 = Uint64_copy(a);
    String _8 = Uint64_prn(_7);
    return _8;
}

String Uint64Extra_str(Uint64* a) {
    Uint64 _7 = Uint64_copy(a);
    String _8 = Uint64_str(_7);
    return _8;
}

Uint8 Uint8_blit(Uint8 x) {
    Uint8 _7 = x; // From the 'the' function.
    return _7;
}

int Uint8_hash(Uint8* k) {
    Uint8 _8 = Uint8_copy(k);
    Long _9 = Uint8_to_MINUS_long(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

String Uint8_prn(Uint8 a) {
    String _6 = Uint8_str(a);
    return _6;
}

Uint8 Uint8_zero() {
    Uint8 _5 = Uint8_from_MINUS_long(0l);
    return _5;
}

bool Uint8Extra__EQ_(Uint8* a, Uint8* b) {
    Uint8 _8 = Uint8_copy(a);
    Uint8 _11 = Uint8_copy(b);
    bool _12 = Uint8__EQ_(_8, _11);
    return _12;
}

String Uint8Extra_prn(Uint8* a) {
    Uint8 _7 = Uint8_copy(a);
    String _8 = Uint8_prn(_7);
    return _8;
}

String Uint8Extra_str(Uint8* a) {
    Uint8 _7 = Uint8_copy(a);
    String _8 = Uint8_str(_7);
    return _8;
}

bool Unit__EQ_() {
    return true;
}

void Unit_copy() {
    /* () */
}

String Unit_prn() {
    static String _5 = "()";
    String *_5_ref = &_5;
    String _6 = String_copy(_5_ref);
    return _6;
}

void Unit_zero() {
    /* () */
}

bool UnitRef__EQ_() {
    return true;
}

int id__int(int x) {
    return x;
}

int max__int(int a, int b) {
    int _16;
    bool _9 = Int__GT_(a, b);
    if (_9) {
        int _12 = a;
        _16 = _12;
    } else {
        int _15 = b;
        _16 = _15;
    }
    return _16;
}

int min__int(int a, int b) {
    int _16;
    bool _9 = Int__LT_(a, b);
    if (_9) {
        int _12 = a;
        _16 = _12;
    } else {
        int _15 = b;
        _16 = _15;
    }
    return _16;
}

bool not(bool a) {
    bool _6 = Bool_not(a);
    return _6;
}

bool null_QMARK___CChar(CChar* p) {
    CChar* _11 = p; // From the 'the' function.
    bool _12 = Pointer_eq__CChar(NULL, _11);
    return _12;
}

bool null_QMARK___FILE(FILE* p) {
    FILE* _11 = p; // From the 'the' function.
    bool _12 = Pointer_eq__FILE(NULL, _11);
    return _12;
}

