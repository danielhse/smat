# 1 "CMakeCUDACompilerId.cu"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
# 1
#pragma GCC diagnostic push
# 1
#pragma GCC diagnostic ignored "-Wunused-variable"
# 1
#pragma GCC diagnostic ignored "-Wunused-function"
# 1
static char __nv_inited_managed_rt = 0; static void **__nv_fatbinhandle_for_managed_rt; static void __nv_save_fatbinhandle_for_managed_rt(void **in){__nv_fatbinhandle_for_managed_rt = in;} static char __nv_init_managed_rt_with_module(void **); static inline void __nv_init_managed_rt(void) { __nv_inited_managed_rt = (__nv_inited_managed_rt ? __nv_inited_managed_rt                 : __nv_init_managed_rt_with_module(__nv_fatbinhandle_for_managed_rt));}
# 1
#pragma GCC diagnostic pop
# 1
#pragma GCC diagnostic ignored "-Wunused-variable"

# 1
#define __nv_is_extended_device_lambda_closure_type(X) false
#define __nv_is_extended_host_device_lambda_closure_type(X) false
#define __nv_is_extended_device_lambda_with_preserved_return_type(X) false
#if defined(__nv_is_extended_device_lambda_closure_type) && defined(__nv_is_extended_host_device_lambda_closure_type)&& defined(__nv_is_extended_device_lambda_with_preserved_return_type)
#endif

# 1
# 61 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
#pragma GCC diagnostic push
# 64
#pragma GCC diagnostic ignored "-Wunused-function"
# 30 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/bits/types.h" 3
typedef unsigned char __u_char; 
# 31
typedef unsigned short __u_short; 
# 32
typedef unsigned __u_int; 
# 33
typedef unsigned long __u_long; 
# 36
typedef signed char __int8_t; 
# 37
typedef unsigned char __uint8_t; 
# 38
typedef signed short __int16_t; 
# 39
typedef unsigned short __uint16_t; 
# 40
typedef signed int __int32_t; 
# 41
typedef unsigned __uint32_t; 
# 43
typedef signed long __int64_t; 
# 44
typedef unsigned long __uint64_t; 
# 52
typedef long __quad_t; 
# 53
typedef unsigned long __u_quad_t; 
# 133 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/bits/types.h" 3
typedef unsigned long __dev_t; 
# 134
typedef unsigned __uid_t; 
# 135
typedef unsigned __gid_t; 
# 136
typedef unsigned long __ino_t; 
# 137
typedef unsigned long __ino64_t; 
# 138
typedef unsigned __mode_t; 
# 139
typedef unsigned long __nlink_t; 
# 140
typedef long __off_t; 
# 141
typedef long __off64_t; 
# 142
typedef int __pid_t; 
# 143
typedef struct { int __val[2]; } __fsid_t; 
# 144
typedef long __clock_t; 
# 145
typedef unsigned long __rlim_t; 
# 146
typedef unsigned long __rlim64_t; 
# 147
typedef unsigned __id_t; 
# 148
typedef long __time_t; 
# 149
typedef unsigned __useconds_t; 
# 150
typedef long __suseconds_t; 
# 152
typedef int __daddr_t; 
# 153
typedef int __key_t; 
# 156
typedef int __clockid_t; 
# 159
typedef void *__timer_t; 
# 162
typedef long __blksize_t; 
# 167
typedef long __blkcnt_t; 
# 168
typedef long __blkcnt64_t; 
# 171
typedef unsigned long __fsblkcnt_t; 
# 172
typedef unsigned long __fsblkcnt64_t; 
# 175
typedef unsigned long __fsfilcnt_t; 
# 176
typedef unsigned long __fsfilcnt64_t; 
# 179
typedef long __fsword_t; 
# 181
typedef long __ssize_t; 
# 184
typedef long __syscall_slong_t; 
# 186
typedef unsigned long __syscall_ulong_t; 
# 190
typedef __off64_t __loff_t; 
# 191
typedef __quad_t *__qaddr_t; 
# 192
typedef char *__caddr_t; 
# 195
typedef long __intptr_t; 
# 198
typedef unsigned __socklen_t; 
# 29 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/ctype.h" 3
extern "C" {
# 45 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/bits/byteswap.h" 3
static inline unsigned __bswap_32(unsigned __bsx) 
# 46
{ 
# 47
return __builtin_bswap32(__bsx); 
# 48
} 
# 109 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/bits/byteswap.h" 3
static inline __uint64_t __bswap_64(__uint64_t __bsx) 
# 110
{ 
# 111
return __builtin_bswap64(__bsx); 
# 112
} 
# 48 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/ctype.h" 3
enum { 
# 49
_ISupper = ((0 < 8) ? (1 << 0) << 8 : ((1 << 0) >> 8)), 
# 50
_ISlower = ((1 < 8) ? (1 << 1) << 8 : ((1 << 1) >> 8)), 
# 51
_ISalpha = ((2 < 8) ? (1 << 2) << 8 : ((1 << 2) >> 8)), 
# 52
_ISdigit = ((3 < 8) ? (1 << 3) << 8 : ((1 << 3) >> 8)), 
# 53
_ISxdigit = ((4 < 8) ? (1 << 4) << 8 : ((1 << 4) >> 8)), 
# 54
_ISspace = ((5 < 8) ? (1 << 5) << 8 : ((1 << 5) >> 8)), 
# 55
_ISprint = ((6 < 8) ? (1 << 6) << 8 : ((1 << 6) >> 8)), 
# 56
_ISgraph = ((7 < 8) ? (1 << 7) << 8 : ((1 << 7) >> 8)), 
# 57
_ISblank = ((8 < 8) ? (1 << 8) << 8 : ((1 << 8) >> 8)), 
# 58
_IScntrl, 
# 59
_ISpunct = ((10 < 8) ? (1 << 10) << 8 : ((1 << 10) >> 8)), 
# 60
_ISalnum = ((11 < 8) ? (1 << 11) << 8 : ((1 << 11) >> 8))
# 61
}; 
# 80 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/ctype.h" 3
extern const unsigned short **__ctype_b_loc() throw()
# 81
 __attribute((const)); 
# 82
extern const __int32_t **__ctype_tolower_loc() throw()
# 83
 __attribute((const)); 
# 84
extern const __int32_t **__ctype_toupper_loc() throw()
# 85
 __attribute((const)); 
# 111 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/ctype.h" 3
extern int isalnum(int) throw(); 
# 112
extern int isalpha(int) throw(); 
# 113
extern int iscntrl(int) throw(); 
# 114
extern int isdigit(int) throw(); 
# 115
extern int islower(int) throw(); 
# 116
extern int isgraph(int) throw(); 
# 117
extern int isprint(int) throw(); 
# 118
extern int ispunct(int) throw(); 
# 119
extern int isspace(int) throw(); 
# 120
extern int isupper(int) throw(); 
# 121
extern int isxdigit(int) throw(); 
# 125
extern int tolower(int __c) throw(); 
# 128
extern int toupper(int __c) throw(); 
# 137
extern int isblank(int) throw(); 
# 144
extern int isctype(int __c, int __mask) throw(); 
# 151
extern int isascii(int __c) throw(); 
# 155
extern int toascii(int __c) throw(); 
# 159
extern int _toupper(int) throw(); 
# 160
extern int _tolower(int) throw(); 
# 39 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/xlocale.h" 3
typedef 
# 27
struct __locale_struct { 
# 30
struct __locale_data *__locales[13]; 
# 33
const unsigned short *__ctype_b; 
# 34
const int *__ctype_tolower; 
# 35
const int *__ctype_toupper; 
# 38
const char *__names[13]; 
# 39
} *__locale_t; 
# 42
typedef __locale_t locale_t; 
# 272 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/ctype.h" 3
extern int isalnum_l(int, __locale_t) throw(); 
# 273
extern int isalpha_l(int, __locale_t) throw(); 
# 274
extern int iscntrl_l(int, __locale_t) throw(); 
# 275
extern int isdigit_l(int, __locale_t) throw(); 
# 276
extern int islower_l(int, __locale_t) throw(); 
# 277
extern int isgraph_l(int, __locale_t) throw(); 
# 278
extern int isprint_l(int, __locale_t) throw(); 
# 279
extern int ispunct_l(int, __locale_t) throw(); 
# 280
extern int isspace_l(int, __locale_t) throw(); 
# 281
extern int isupper_l(int, __locale_t) throw(); 
# 282
extern int isxdigit_l(int, __locale_t) throw(); 
# 284
extern int isblank_l(int, __locale_t) throw(); 
# 288
extern int __tolower_l(int __c, __locale_t __l) throw(); 
# 289
extern int tolower_l(int __c, __locale_t __l) throw(); 
# 292
extern int __toupper_l(int __c, __locale_t __l) throw(); 
# 293
extern int toupper_l(int __c, __locale_t __l) throw(); 
# 348 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/ctype.h" 3
}
# 68 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/device_types.h"
#if 0
# 68
enum cudaRoundMode { 
# 70
cudaRoundNearest, 
# 71
cudaRoundZero, 
# 72
cudaRoundPosInf, 
# 73
cudaRoundMinInf
# 74
}; 
#endif
# 104 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 104
struct char1 { 
# 106
signed char x; 
# 107
}; 
#endif
# 109 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 109
struct uchar1 { 
# 111
unsigned char x; 
# 112
}; 
#endif
# 115 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 115
struct __attribute((aligned(2))) char2 { 
# 117
signed char x, y; 
# 118
}; 
#endif
# 120 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 120
struct __attribute((aligned(2))) uchar2 { 
# 122
unsigned char x, y; 
# 123
}; 
#endif
# 125 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 125
struct char3 { 
# 127
signed char x, y, z; 
# 128
}; 
#endif
# 130 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 130
struct uchar3 { 
# 132
unsigned char x, y, z; 
# 133
}; 
#endif
# 135 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 135
struct __attribute((aligned(4))) char4 { 
# 137
signed char x, y, z, w; 
# 138
}; 
#endif
# 140 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 140
struct __attribute((aligned(4))) uchar4 { 
# 142
unsigned char x, y, z, w; 
# 143
}; 
#endif
# 145 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 145
struct short1 { 
# 147
short x; 
# 148
}; 
#endif
# 150 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 150
struct ushort1 { 
# 152
unsigned short x; 
# 153
}; 
#endif
# 155 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 155
struct __attribute((aligned(4))) short2 { 
# 157
short x, y; 
# 158
}; 
#endif
# 160 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 160
struct __attribute((aligned(4))) ushort2 { 
# 162
unsigned short x, y; 
# 163
}; 
#endif
# 165 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 165
struct short3 { 
# 167
short x, y, z; 
# 168
}; 
#endif
# 170 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 170
struct ushort3 { 
# 172
unsigned short x, y, z; 
# 173
}; 
#endif
# 175 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 175
struct __attribute((aligned(8))) short4 { short x; short y; short z; short w; }; 
#endif
# 176 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 176
struct __attribute((aligned(8))) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; }; 
#endif
# 178 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 178
struct int1 { 
# 180
int x; 
# 181
}; 
#endif
# 183 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 183
struct uint1 { 
# 185
unsigned x; 
# 186
}; 
#endif
# 188 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 188
struct __attribute((aligned(8))) int2 { int x; int y; }; 
#endif
# 189 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 189
struct __attribute((aligned(8))) uint2 { unsigned x; unsigned y; }; 
#endif
# 191 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 191
struct int3 { 
# 193
int x, y, z; 
# 194
}; 
#endif
# 196 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 196
struct uint3 { 
# 198
unsigned x, y, z; 
# 199
}; 
#endif
# 201 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 201
struct __attribute((aligned(16))) int4 { 
# 203
int x, y, z, w; 
# 204
}; 
#endif
# 206 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 206
struct __attribute((aligned(16))) uint4 { 
# 208
unsigned x, y, z, w; 
# 209
}; 
#endif
# 211 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 211
struct long1 { 
# 213
long x; 
# 214
}; 
#endif
# 216 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 216
struct ulong1 { 
# 218
unsigned long x; 
# 219
}; 
#endif
# 226 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 226
struct __attribute((aligned((2) * sizeof(long)))) long2 { 
# 228
long x, y; 
# 229
}; 
#endif
# 231 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 231
struct __attribute((aligned((2) * sizeof(unsigned long)))) ulong2 { 
# 233
unsigned long x, y; 
# 234
}; 
#endif
# 238 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 238
struct long3 { 
# 240
long x, y, z; 
# 241
}; 
#endif
# 243 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 243
struct ulong3 { 
# 245
unsigned long x, y, z; 
# 246
}; 
#endif
# 248 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 248
struct __attribute((aligned(16))) long4 { 
# 250
long x, y, z, w; 
# 251
}; 
#endif
# 253 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 253
struct __attribute((aligned(16))) ulong4 { 
# 255
unsigned long x, y, z, w; 
# 256
}; 
#endif
# 258 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 258
struct float1 { 
# 260
float x; 
# 261
}; 
#endif
# 280 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 280
struct __attribute((aligned(8))) float2 { float x; float y; }; 
#endif
# 285 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 285
struct float3 { 
# 287
float x, y, z; 
# 288
}; 
#endif
# 290 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 290
struct __attribute((aligned(16))) float4 { 
# 292
float x, y, z, w; 
# 293
}; 
#endif
# 295 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 295
struct longlong1 { 
# 297
long long x; 
# 298
}; 
#endif
# 300 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 300
struct ulonglong1 { 
# 302
unsigned long long x; 
# 303
}; 
#endif
# 305 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 305
struct __attribute((aligned(16))) longlong2 { 
# 307
long long x, y; 
# 308
}; 
#endif
# 310 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 310
struct __attribute((aligned(16))) ulonglong2 { 
# 312
unsigned long long x, y; 
# 313
}; 
#endif
# 315 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 315
struct longlong3 { 
# 317
long long x, y, z; 
# 318
}; 
#endif
# 320 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 320
struct ulonglong3 { 
# 322
unsigned long long x, y, z; 
# 323
}; 
#endif
# 325 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 325
struct __attribute((aligned(16))) longlong4 { 
# 327
long long x, y, z, w; 
# 328
}; 
#endif
# 330 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 330
struct __attribute((aligned(16))) ulonglong4 { 
# 332
unsigned long long x, y, z, w; 
# 333
}; 
#endif
# 335 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 335
struct double1 { 
# 337
double x; 
# 338
}; 
#endif
# 340 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 340
struct __attribute((aligned(16))) double2 { 
# 342
double x, y; 
# 343
}; 
#endif
# 345 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 345
struct double3 { 
# 347
double x, y, z; 
# 348
}; 
#endif
# 350 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 350
struct __attribute((aligned(16))) double4 { 
# 352
double x, y, z, w; 
# 353
}; 
#endif
# 367 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef char1 
# 367
char1; 
#endif
# 368 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef uchar1 
# 368
uchar1; 
#endif
# 369 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef char2 
# 369
char2; 
#endif
# 370 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef uchar2 
# 370
uchar2; 
#endif
# 371 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef char3 
# 371
char3; 
#endif
# 372 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef uchar3 
# 372
uchar3; 
#endif
# 373 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef char4 
# 373
char4; 
#endif
# 374 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef uchar4 
# 374
uchar4; 
#endif
# 375 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef short1 
# 375
short1; 
#endif
# 376 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef ushort1 
# 376
ushort1; 
#endif
# 377 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef short2 
# 377
short2; 
#endif
# 378 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef ushort2 
# 378
ushort2; 
#endif
# 379 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef short3 
# 379
short3; 
#endif
# 380 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef ushort3 
# 380
ushort3; 
#endif
# 381 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef short4 
# 381
short4; 
#endif
# 382 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef ushort4 
# 382
ushort4; 
#endif
# 383 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef int1 
# 383
int1; 
#endif
# 384 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef uint1 
# 384
uint1; 
#endif
# 385 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef int2 
# 385
int2; 
#endif
# 386 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef uint2 
# 386
uint2; 
#endif
# 387 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef int3 
# 387
int3; 
#endif
# 388 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef uint3 
# 388
uint3; 
#endif
# 389 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef int4 
# 389
int4; 
#endif
# 390 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef uint4 
# 390
uint4; 
#endif
# 391 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef long1 
# 391
long1; 
#endif
# 392 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef ulong1 
# 392
ulong1; 
#endif
# 393 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef long2 
# 393
long2; 
#endif
# 394 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef ulong2 
# 394
ulong2; 
#endif
# 395 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef long3 
# 395
long3; 
#endif
# 396 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef ulong3 
# 396
ulong3; 
#endif
# 397 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef long4 
# 397
long4; 
#endif
# 398 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef ulong4 
# 398
ulong4; 
#endif
# 399 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef float1 
# 399
float1; 
#endif
# 400 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef float2 
# 400
float2; 
#endif
# 401 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef float3 
# 401
float3; 
#endif
# 402 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef float4 
# 402
float4; 
#endif
# 403 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef longlong1 
# 403
longlong1; 
#endif
# 404 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef ulonglong1 
# 404
ulonglong1; 
#endif
# 405 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef longlong2 
# 405
longlong2; 
#endif
# 406 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef ulonglong2 
# 406
ulonglong2; 
#endif
# 407 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef longlong3 
# 407
longlong3; 
#endif
# 408 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef ulonglong3 
# 408
ulonglong3; 
#endif
# 409 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef longlong4 
# 409
longlong4; 
#endif
# 410 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef ulonglong4 
# 410
ulonglong4; 
#endif
# 411 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef double1 
# 411
double1; 
#endif
# 412 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef double2 
# 412
double2; 
#endif
# 413 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef double3 
# 413
double3; 
#endif
# 414 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef double4 
# 414
double4; 
#endif
# 426 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
# 426
struct dim3 { 
# 428
unsigned x, y, z; 
# 440
}; 
#endif
# 442 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_types.h"
#if 0
typedef dim3 
# 442
dim3; 
#endif
# 145 "/data/homezvol3/hsud8/.conda/envs/smat/lib/gcc/x86_64-conda-linux-gnu/12.3.0/include/stddef.h" 3
typedef long ptrdiff_t; 
# 214 "/data/homezvol3/hsud8/.conda/envs/smat/lib/gcc/x86_64-conda-linux-gnu/12.3.0/include/stddef.h" 3
typedef unsigned long size_t; 
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
# 435 "/data/homezvol3/hsud8/.conda/envs/smat/lib/gcc/x86_64-conda-linux-gnu/12.3.0/include/stddef.h" 3
typedef 
# 424 "/data/homezvol3/hsud8/.conda/envs/smat/lib/gcc/x86_64-conda-linux-gnu/12.3.0/include/stddef.h" 3
struct { 
# 425
long long __max_align_ll __attribute((__aligned__(__alignof__(long long)))); 
# 426
long double __max_align_ld __attribute((__aligned__(__alignof__(long double)))); 
# 435 "/data/homezvol3/hsud8/.conda/envs/smat/lib/gcc/x86_64-conda-linux-gnu/12.3.0/include/stddef.h" 3
} max_align_t; 
# 442
typedef __decltype((nullptr)) nullptr_t; 
# 203 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 203
enum cudaError { 
# 210
cudaSuccess, 
# 216
cudaErrorInvalidValue, 
# 222
cudaErrorMemoryAllocation, 
# 228
cudaErrorInitializationError, 
# 235
cudaErrorCudartUnloading, 
# 242
cudaErrorProfilerDisabled, 
# 250
cudaErrorProfilerNotInitialized, 
# 257
cudaErrorProfilerAlreadyStarted, 
# 264
cudaErrorProfilerAlreadyStopped, 
# 272
cudaErrorInvalidConfiguration, 
# 278
cudaErrorInvalidPitchValue = 12, 
# 284
cudaErrorInvalidSymbol, 
# 292
cudaErrorInvalidHostPointer = 16, 
# 300
cudaErrorInvalidDevicePointer, 
# 305
cudaErrorInvalidTexture, 
# 311
cudaErrorInvalidTextureBinding, 
# 318
cudaErrorInvalidChannelDescriptor, 
# 324
cudaErrorInvalidMemcpyDirection, 
# 334 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
cudaErrorAddressOfConstant, 
# 343 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
cudaErrorTextureFetchFailed, 
# 352 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
cudaErrorTextureNotBound, 
# 361 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
cudaErrorSynchronizationError, 
# 366
cudaErrorInvalidFilterSetting, 
# 372
cudaErrorInvalidNormSetting, 
# 380
cudaErrorMixedDeviceExecution, 
# 388
cudaErrorNotYetImplemented = 31, 
# 397 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
cudaErrorMemoryValueTooLarge, 
# 403
cudaErrorStubLibrary = 34, 
# 410
cudaErrorInsufficientDriver, 
# 417
cudaErrorCallRequiresNewerDriver, 
# 423
cudaErrorInvalidSurface, 
# 429
cudaErrorDuplicateVariableName = 43, 
# 435
cudaErrorDuplicateTextureName, 
# 441
cudaErrorDuplicateSurfaceName, 
# 451 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
cudaErrorDevicesUnavailable, 
# 464 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
cudaErrorIncompatibleDriverContext = 49, 
# 470
cudaErrorMissingConfiguration = 52, 
# 479 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
cudaErrorPriorLaunchFailure, 
# 485
cudaErrorLaunchMaxDepthExceeded = 65, 
# 493
cudaErrorLaunchFileScopedTex, 
# 501
cudaErrorLaunchFileScopedSurf, 
# 517 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
cudaErrorSyncDepthExceeded, 
# 529 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
cudaErrorLaunchPendingCountExceeded, 
# 535
cudaErrorInvalidDeviceFunction = 98, 
# 541
cudaErrorNoDevice = 100, 
# 548
cudaErrorInvalidDevice, 
# 553
cudaErrorDeviceNotLicensed, 
# 562 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
cudaErrorSoftwareValidityNotEstablished, 
# 567
cudaErrorStartupFailure = 127, 
# 572
cudaErrorInvalidKernelImage = 200, 
# 582 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
cudaErrorDeviceUninitialized, 
# 587
cudaErrorMapBufferObjectFailed = 205, 
# 592
cudaErrorUnmapBufferObjectFailed, 
# 598
cudaErrorArrayIsMapped, 
# 603
cudaErrorAlreadyMapped, 
# 611
cudaErrorNoKernelImageForDevice, 
# 616
cudaErrorAlreadyAcquired, 
# 621
cudaErrorNotMapped, 
# 627
cudaErrorNotMappedAsArray, 
# 633
cudaErrorNotMappedAsPointer, 
# 639
cudaErrorECCUncorrectable, 
# 645
cudaErrorUnsupportedLimit, 
# 651
cudaErrorDeviceAlreadyInUse, 
# 657
cudaErrorPeerAccessUnsupported, 
# 663
cudaErrorInvalidPtx, 
# 668
cudaErrorInvalidGraphicsContext, 
# 674
cudaErrorNvlinkUncorrectable, 
# 681
cudaErrorJitCompilerNotFound, 
# 688
cudaErrorUnsupportedPtxVersion, 
# 695
cudaErrorJitCompilationDisabled, 
# 700
cudaErrorUnsupportedExecAffinity, 
# 706
cudaErrorUnsupportedDevSideSync, 
# 711
cudaErrorInvalidSource = 300, 
# 716
cudaErrorFileNotFound, 
# 721
cudaErrorSharedObjectSymbolNotFound, 
# 726
cudaErrorSharedObjectInitFailed, 
# 731
cudaErrorOperatingSystem, 
# 738
cudaErrorInvalidResourceHandle = 400, 
# 744
cudaErrorIllegalState, 
# 752
cudaErrorLossyQuery, 
# 759
cudaErrorSymbolNotFound = 500, 
# 767
cudaErrorNotReady = 600, 
# 775
cudaErrorIllegalAddress = 700, 
# 784 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
cudaErrorLaunchOutOfResources, 
# 795 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
cudaErrorLaunchTimeout, 
# 801
cudaErrorLaunchIncompatibleTexturing, 
# 808
cudaErrorPeerAccessAlreadyEnabled, 
# 815
cudaErrorPeerAccessNotEnabled, 
# 828 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
cudaErrorSetOnActiveProcess = 708, 
# 835
cudaErrorContextIsDestroyed, 
# 842
cudaErrorAssert, 
# 849
cudaErrorTooManyPeers, 
# 855
cudaErrorHostMemoryAlreadyRegistered, 
# 861
cudaErrorHostMemoryNotRegistered, 
# 870 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
cudaErrorHardwareStackError, 
# 878
cudaErrorIllegalInstruction, 
# 887 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
cudaErrorMisalignedAddress, 
# 898 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
cudaErrorInvalidAddressSpace, 
# 906
cudaErrorInvalidPc, 
# 917 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
cudaErrorLaunchFailure, 
# 926 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
cudaErrorCooperativeLaunchTooLarge, 
# 931
cudaErrorNotPermitted = 800, 
# 937
cudaErrorNotSupported, 
# 946 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
cudaErrorSystemNotReady, 
# 953
cudaErrorSystemDriverMismatch, 
# 962 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
cudaErrorCompatNotSupportedOnDevice, 
# 967
cudaErrorMpsConnectionFailed, 
# 972
cudaErrorMpsRpcFailure, 
# 978
cudaErrorMpsServerNotReady, 
# 983
cudaErrorMpsMaxClientsReached, 
# 988
cudaErrorMpsMaxConnectionsReached, 
# 993
cudaErrorMpsClientTerminated, 
# 998
cudaErrorCdpNotSupported, 
# 1003
cudaErrorCdpVersionMismatch, 
# 1008
cudaErrorStreamCaptureUnsupported = 900, 
# 1014
cudaErrorStreamCaptureInvalidated, 
# 1020
cudaErrorStreamCaptureMerge, 
# 1025
cudaErrorStreamCaptureUnmatched, 
# 1031
cudaErrorStreamCaptureUnjoined, 
# 1038
cudaErrorStreamCaptureIsolation, 
# 1044
cudaErrorStreamCaptureImplicit, 
# 1050
cudaErrorCapturedEvent, 
# 1057
cudaErrorStreamCaptureWrongThread, 
# 1062
cudaErrorTimeout, 
# 1068
cudaErrorGraphExecUpdateFailure, 
# 1078 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
cudaErrorExternalDevice, 
# 1084
cudaErrorInvalidClusterSize, 
# 1089
cudaErrorUnknown = 999, 
# 1097
cudaErrorApiFailureBase = 10000
# 1098
}; 
#endif
# 1103 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1103
enum cudaChannelFormatKind { 
# 1105
cudaChannelFormatKindSigned, 
# 1106
cudaChannelFormatKindUnsigned, 
# 1107
cudaChannelFormatKindFloat, 
# 1108
cudaChannelFormatKindNone, 
# 1109
cudaChannelFormatKindNV12, 
# 1110
cudaChannelFormatKindUnsignedNormalized8X1, 
# 1111
cudaChannelFormatKindUnsignedNormalized8X2, 
# 1112
cudaChannelFormatKindUnsignedNormalized8X4, 
# 1113
cudaChannelFormatKindUnsignedNormalized16X1, 
# 1114
cudaChannelFormatKindUnsignedNormalized16X2, 
# 1115
cudaChannelFormatKindUnsignedNormalized16X4, 
# 1116
cudaChannelFormatKindSignedNormalized8X1, 
# 1117
cudaChannelFormatKindSignedNormalized8X2, 
# 1118
cudaChannelFormatKindSignedNormalized8X4, 
# 1119
cudaChannelFormatKindSignedNormalized16X1, 
# 1120
cudaChannelFormatKindSignedNormalized16X2, 
# 1121
cudaChannelFormatKindSignedNormalized16X4, 
# 1122
cudaChannelFormatKindUnsignedBlockCompressed1, 
# 1123
cudaChannelFormatKindUnsignedBlockCompressed1SRGB, 
# 1124
cudaChannelFormatKindUnsignedBlockCompressed2, 
# 1125
cudaChannelFormatKindUnsignedBlockCompressed2SRGB, 
# 1126
cudaChannelFormatKindUnsignedBlockCompressed3, 
# 1127
cudaChannelFormatKindUnsignedBlockCompressed3SRGB, 
# 1128
cudaChannelFormatKindUnsignedBlockCompressed4, 
# 1129
cudaChannelFormatKindSignedBlockCompressed4, 
# 1130
cudaChannelFormatKindUnsignedBlockCompressed5, 
# 1131
cudaChannelFormatKindSignedBlockCompressed5, 
# 1132
cudaChannelFormatKindUnsignedBlockCompressed6H, 
# 1133
cudaChannelFormatKindSignedBlockCompressed6H, 
# 1134
cudaChannelFormatKindUnsignedBlockCompressed7, 
# 1135
cudaChannelFormatKindUnsignedBlockCompressed7SRGB
# 1136
}; 
#endif
# 1141 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1141
struct cudaChannelFormatDesc { 
# 1143
int x; 
# 1144
int y; 
# 1145
int z; 
# 1146
int w; 
# 1147
cudaChannelFormatKind f; 
# 1148
}; 
#endif
# 1153 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
typedef struct cudaArray *cudaArray_t; 
# 1158
typedef const cudaArray *cudaArray_const_t; 
# 1160
struct cudaArray; 
# 1165
typedef struct cudaMipmappedArray *cudaMipmappedArray_t; 
# 1170
typedef const cudaMipmappedArray *cudaMipmappedArray_const_t; 
# 1172
struct cudaMipmappedArray; 
# 1182 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1182
struct cudaArraySparseProperties { 
# 1183
struct { 
# 1184
unsigned width; 
# 1185
unsigned height; 
# 1186
unsigned depth; 
# 1187
} tileExtent; 
# 1188
unsigned miptailFirstLevel; 
# 1189
unsigned long long miptailSize; 
# 1190
unsigned flags; 
# 1191
unsigned reserved[4]; 
# 1192
}; 
#endif
# 1197 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1197
struct cudaArrayMemoryRequirements { 
# 1198
size_t size; 
# 1199
size_t alignment; 
# 1200
unsigned reserved[4]; 
# 1201
}; 
#endif
# 1206 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1206
enum cudaMemoryType { 
# 1208
cudaMemoryTypeUnregistered, 
# 1209
cudaMemoryTypeHost, 
# 1210
cudaMemoryTypeDevice, 
# 1211
cudaMemoryTypeManaged
# 1212
}; 
#endif
# 1217 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1217
enum cudaMemcpyKind { 
# 1219
cudaMemcpyHostToHost, 
# 1220
cudaMemcpyHostToDevice, 
# 1221
cudaMemcpyDeviceToHost, 
# 1222
cudaMemcpyDeviceToDevice, 
# 1223
cudaMemcpyDefault
# 1224
}; 
#endif
# 1231 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1231
struct cudaPitchedPtr { 
# 1233
void *ptr; 
# 1234
size_t pitch; 
# 1235
size_t xsize; 
# 1236
size_t ysize; 
# 1237
}; 
#endif
# 1244 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1244
struct cudaExtent { 
# 1246
size_t width; 
# 1247
size_t height; 
# 1248
size_t depth; 
# 1249
}; 
#endif
# 1256 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1256
struct cudaPos { 
# 1258
size_t x; 
# 1259
size_t y; 
# 1260
size_t z; 
# 1261
}; 
#endif
# 1266 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1266
struct cudaMemcpy3DParms { 
# 1268
cudaArray_t srcArray; 
# 1269
cudaPos srcPos; 
# 1270
cudaPitchedPtr srcPtr; 
# 1272
cudaArray_t dstArray; 
# 1273
cudaPos dstPos; 
# 1274
cudaPitchedPtr dstPtr; 
# 1276
cudaExtent extent; 
# 1277
cudaMemcpyKind kind; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 1278
}; 
#endif
# 1283 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1283
struct cudaMemcpyNodeParams { 
# 1284
int flags; 
# 1285
int reserved[3]; 
# 1286
cudaMemcpy3DParms copyParams; 
# 1287
}; 
#endif
# 1292 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1292
struct cudaMemcpy3DPeerParms { 
# 1294
cudaArray_t srcArray; 
# 1295
cudaPos srcPos; 
# 1296
cudaPitchedPtr srcPtr; 
# 1297
int srcDevice; 
# 1299
cudaArray_t dstArray; 
# 1300
cudaPos dstPos; 
# 1301
cudaPitchedPtr dstPtr; 
# 1302
int dstDevice; 
# 1304
cudaExtent extent; 
# 1305
}; 
#endif
# 1310 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1310
struct cudaMemsetParams { 
# 1311
void *dst; 
# 1312
size_t pitch; 
# 1313
unsigned value; 
# 1314
unsigned elementSize; 
# 1315
size_t width; 
# 1316
size_t height; 
# 1317
}; 
#endif
# 1322 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1322
struct cudaMemsetParamsV2 { 
# 1323
void *dst; 
# 1324
size_t pitch; 
# 1325
unsigned value; 
# 1326
unsigned elementSize; 
# 1327
size_t width; 
# 1328
size_t height; 
# 1329
}; 
#endif
# 1334 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1334
enum cudaAccessProperty { 
# 1335
cudaAccessPropertyNormal, 
# 1336
cudaAccessPropertyStreaming, 
# 1337
cudaAccessPropertyPersisting
# 1338
}; 
#endif
# 1351 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1351
struct cudaAccessPolicyWindow { 
# 1352
void *base_ptr; 
# 1353
size_t num_bytes; 
# 1354
float hitRatio; 
# 1355
cudaAccessProperty hitProp; 
# 1356
cudaAccessProperty missProp; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 1357
}; 
#endif
# 1369 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
typedef void (*cudaHostFn_t)(void * userData); 
# 1374
#if 0
# 1374
struct cudaHostNodeParams { 
# 1375
cudaHostFn_t fn; 
# 1376
void *userData; 
# 1377
}; 
#endif
# 1382 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1382
struct cudaHostNodeParamsV2 { 
# 1383
cudaHostFn_t fn; 
# 1384
void *userData; 
# 1385
}; 
#endif
# 1390 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1390
enum cudaStreamCaptureStatus { 
# 1391
cudaStreamCaptureStatusNone, 
# 1392
cudaStreamCaptureStatusActive, 
# 1393
cudaStreamCaptureStatusInvalidated
# 1395
}; 
#endif
# 1401 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1401
enum cudaStreamCaptureMode { 
# 1402
cudaStreamCaptureModeGlobal, 
# 1403
cudaStreamCaptureModeThreadLocal, 
# 1404
cudaStreamCaptureModeRelaxed
# 1405
}; 
#endif
# 1407 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1407
enum cudaSynchronizationPolicy { 
# 1408
cudaSyncPolicyAuto = 1, 
# 1409
cudaSyncPolicySpin, 
# 1410
cudaSyncPolicyYield, 
# 1411
cudaSyncPolicyBlockingSync
# 1412
}; 
#endif
# 1417 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1417
enum cudaClusterSchedulingPolicy { 
# 1418
cudaClusterSchedulingPolicyDefault, 
# 1419
cudaClusterSchedulingPolicySpread, 
# 1420
cudaClusterSchedulingPolicyLoadBalancing
# 1421
}; 
#endif
# 1426 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1426
enum cudaStreamUpdateCaptureDependenciesFlags { 
# 1427
cudaStreamAddCaptureDependencies, 
# 1428
cudaStreamSetCaptureDependencies
# 1429
}; 
#endif
# 1434 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1434
enum cudaUserObjectFlags { 
# 1435
cudaUserObjectNoDestructorSync = 1
# 1436
}; 
#endif
# 1441 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1441
enum cudaUserObjectRetainFlags { 
# 1442
cudaGraphUserObjectMove = 1
# 1443
}; 
#endif
# 1448 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
struct cudaGraphicsResource; 
# 1453
#if 0
# 1453
enum cudaGraphicsRegisterFlags { 
# 1455
cudaGraphicsRegisterFlagsNone, 
# 1456
cudaGraphicsRegisterFlagsReadOnly, 
# 1457
cudaGraphicsRegisterFlagsWriteDiscard, 
# 1458
cudaGraphicsRegisterFlagsSurfaceLoadStore = 4, 
# 1459
cudaGraphicsRegisterFlagsTextureGather = 8
# 1460
}; 
#endif
# 1465 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1465
enum cudaGraphicsMapFlags { 
# 1467
cudaGraphicsMapFlagsNone, 
# 1468
cudaGraphicsMapFlagsReadOnly, 
# 1469
cudaGraphicsMapFlagsWriteDiscard
# 1470
}; 
#endif
# 1475 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1475
enum cudaGraphicsCubeFace { 
# 1477
cudaGraphicsCubeFacePositiveX, 
# 1478
cudaGraphicsCubeFaceNegativeX, 
# 1479
cudaGraphicsCubeFacePositiveY, 
# 1480
cudaGraphicsCubeFaceNegativeY, 
# 1481
cudaGraphicsCubeFacePositiveZ, 
# 1482
cudaGraphicsCubeFaceNegativeZ
# 1483
}; 
#endif
# 1488 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1488
enum cudaResourceType { 
# 1490
cudaResourceTypeArray, 
# 1491
cudaResourceTypeMipmappedArray, 
# 1492
cudaResourceTypeLinear, 
# 1493
cudaResourceTypePitch2D
# 1494
}; 
#endif
# 1499 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1499
enum cudaResourceViewFormat { 
# 1501
cudaResViewFormatNone, 
# 1502
cudaResViewFormatUnsignedChar1, 
# 1503
cudaResViewFormatUnsignedChar2, 
# 1504
cudaResViewFormatUnsignedChar4, 
# 1505
cudaResViewFormatSignedChar1, 
# 1506
cudaResViewFormatSignedChar2, 
# 1507
cudaResViewFormatSignedChar4, 
# 1508
cudaResViewFormatUnsignedShort1, 
# 1509
cudaResViewFormatUnsignedShort2, 
# 1510
cudaResViewFormatUnsignedShort4, 
# 1511
cudaResViewFormatSignedShort1, 
# 1512
cudaResViewFormatSignedShort2, 
# 1513
cudaResViewFormatSignedShort4, 
# 1514
cudaResViewFormatUnsignedInt1, 
# 1515
cudaResViewFormatUnsignedInt2, 
# 1516
cudaResViewFormatUnsignedInt4, 
# 1517
cudaResViewFormatSignedInt1, 
# 1518
cudaResViewFormatSignedInt2, 
# 1519
cudaResViewFormatSignedInt4, 
# 1520
cudaResViewFormatHalf1, 
# 1521
cudaResViewFormatHalf2, 
# 1522
cudaResViewFormatHalf4, 
# 1523
cudaResViewFormatFloat1, 
# 1524
cudaResViewFormatFloat2, 
# 1525
cudaResViewFormatFloat4, 
# 1526
cudaResViewFormatUnsignedBlockCompressed1, 
# 1527
cudaResViewFormatUnsignedBlockCompressed2, 
# 1528
cudaResViewFormatUnsignedBlockCompressed3, 
# 1529
cudaResViewFormatUnsignedBlockCompressed4, 
# 1530
cudaResViewFormatSignedBlockCompressed4, 
# 1531
cudaResViewFormatUnsignedBlockCompressed5, 
# 1532
cudaResViewFormatSignedBlockCompressed5, 
# 1533
cudaResViewFormatUnsignedBlockCompressed6H, 
# 1534
cudaResViewFormatSignedBlockCompressed6H, 
# 1535
cudaResViewFormatUnsignedBlockCompressed7
# 1536
}; 
#endif
# 1541 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1541
struct cudaResourceDesc { 
# 1542
cudaResourceType resType; 
# 1544
union { 
# 1545
struct { 
# 1546
cudaArray_t array; 
# 1547
} array; 
# 1548
struct { 
# 1549
cudaMipmappedArray_t mipmap; 
# 1550
} mipmap; 
# 1551
struct { 
# 1552
void *devPtr; 
# 1553
cudaChannelFormatDesc desc; 
# 1554
size_t sizeInBytes; 
# 1555
} linear; 
# 1556
struct { 
# 1557
void *devPtr; 
# 1558
cudaChannelFormatDesc desc; 
# 1559
size_t width; 
# 1560
size_t height; 
# 1561
size_t pitchInBytes; 
# 1562
} pitch2D; 
# 1563
} res; 
# 1564
}; 
#endif
# 1569 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1569
struct cudaResourceViewDesc { 
# 1571
cudaResourceViewFormat format; 
# 1572
size_t width; 
# 1573
size_t height; 
# 1574
size_t depth; 
# 1575
unsigned firstMipmapLevel; 
# 1576
unsigned lastMipmapLevel; 
# 1577
unsigned firstLayer; 
# 1578
unsigned lastLayer; 
# 1579
}; 
#endif
# 1584 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1584
struct cudaPointerAttributes { 
# 1590
cudaMemoryType type; 
# 1601 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
int device; 
# 1607
void *devicePointer; 
# 1616 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
void *hostPointer; 
# 1617
}; 
#endif
# 1622 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1622
struct cudaFuncAttributes { 
# 1629
size_t sharedSizeBytes; 
# 1635
size_t constSizeBytes; 
# 1640
size_t localSizeBytes; 
# 1647
int maxThreadsPerBlock; 
# 1652
int numRegs; 
# 1659
int ptxVersion; 
# 1666
int binaryVersion; 
# 1672
int cacheModeCA; 
# 1679
int maxDynamicSharedSizeBytes; 
# 1688 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
int preferredShmemCarveout; 
# 1694
int clusterDimMustBeSet; 
# 1705 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
int requiredClusterWidth; 
# 1706
int requiredClusterHeight; 
# 1707
int requiredClusterDepth; 
# 1713
int clusterSchedulingPolicyPreference; 
# 1735 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
int nonPortableClusterSizeAllowed; 
# 1740
int reserved[16]; 
# 1741
}; 
#endif
# 1746 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1746
enum cudaFuncAttribute { 
# 1748
cudaFuncAttributeMaxDynamicSharedMemorySize = 8, 
# 1749
cudaFuncAttributePreferredSharedMemoryCarveout, 
# 1750
cudaFuncAttributeClusterDimMustBeSet, 
# 1751
cudaFuncAttributeRequiredClusterWidth, 
# 1752
cudaFuncAttributeRequiredClusterHeight, 
# 1753
cudaFuncAttributeRequiredClusterDepth, 
# 1754
cudaFuncAttributeNonPortableClusterSizeAllowed, 
# 1755
cudaFuncAttributeClusterSchedulingPolicyPreference, 
# 1756
cudaFuncAttributeMax
# 1757
}; 
#endif
# 1762 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1762
enum cudaFuncCache { 
# 1764
cudaFuncCachePreferNone, 
# 1765
cudaFuncCachePreferShared, 
# 1766
cudaFuncCachePreferL1, 
# 1767
cudaFuncCachePreferEqual
# 1768
}; 
#endif
# 1774 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1774
enum cudaSharedMemConfig { 
# 1776
cudaSharedMemBankSizeDefault, 
# 1777
cudaSharedMemBankSizeFourByte, 
# 1778
cudaSharedMemBankSizeEightByte
# 1779
}; 
#endif
# 1784 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1784
enum cudaSharedCarveout { 
# 1785
cudaSharedmemCarveoutDefault = (-1), 
# 1786
cudaSharedmemCarveoutMaxShared = 100, 
# 1787
cudaSharedmemCarveoutMaxL1 = 0
# 1788
}; 
#endif
# 1793 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1793
enum cudaComputeMode { 
# 1795
cudaComputeModeDefault, 
# 1796
cudaComputeModeExclusive, 
# 1797
cudaComputeModeProhibited, 
# 1798
cudaComputeModeExclusiveProcess
# 1799
}; 
#endif
# 1804 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1804
enum cudaLimit { 
# 1806
cudaLimitStackSize, 
# 1807
cudaLimitPrintfFifoSize, 
# 1808
cudaLimitMallocHeapSize, 
# 1809
cudaLimitDevRuntimeSyncDepth, 
# 1810
cudaLimitDevRuntimePendingLaunchCount, 
# 1811
cudaLimitMaxL2FetchGranularity, 
# 1812
cudaLimitPersistingL2CacheSize
# 1813
}; 
#endif
# 1818 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1818
enum cudaMemoryAdvise { 
# 1820
cudaMemAdviseSetReadMostly = 1, 
# 1821
cudaMemAdviseUnsetReadMostly, 
# 1822
cudaMemAdviseSetPreferredLocation, 
# 1823
cudaMemAdviseUnsetPreferredLocation, 
# 1824
cudaMemAdviseSetAccessedBy, 
# 1825
cudaMemAdviseUnsetAccessedBy
# 1826
}; 
#endif
# 1831 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1831
enum cudaMemRangeAttribute { 
# 1833
cudaMemRangeAttributeReadMostly = 1, 
# 1834
cudaMemRangeAttributePreferredLocation, 
# 1835
cudaMemRangeAttributeAccessedBy, 
# 1836
cudaMemRangeAttributeLastPrefetchLocation, 
# 1837
cudaMemRangeAttributePreferredLocationType, 
# 1838
cudaMemRangeAttributePreferredLocationId, 
# 1839
cudaMemRangeAttributeLastPrefetchLocationType, 
# 1840
cudaMemRangeAttributeLastPrefetchLocationId
# 1841
}; 
#endif
# 1846 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1846
enum cudaFlushGPUDirectRDMAWritesOptions { 
# 1847
cudaFlushGPUDirectRDMAWritesOptionHost = (1 << 0), 
# 1848
cudaFlushGPUDirectRDMAWritesOptionMemOps
# 1849
}; 
#endif
# 1854 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1854
enum cudaGPUDirectRDMAWritesOrdering { 
# 1855
cudaGPUDirectRDMAWritesOrderingNone, 
# 1856
cudaGPUDirectRDMAWritesOrderingOwner = 100, 
# 1857
cudaGPUDirectRDMAWritesOrderingAllDevices = 200
# 1858
}; 
#endif
# 1863 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1863
enum cudaFlushGPUDirectRDMAWritesScope { 
# 1864
cudaFlushGPUDirectRDMAWritesToOwner = 100, 
# 1865
cudaFlushGPUDirectRDMAWritesToAllDevices = 200
# 1866
}; 
#endif
# 1871 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1871
enum cudaFlushGPUDirectRDMAWritesTarget { 
# 1872
cudaFlushGPUDirectRDMAWritesTargetCurrentDevice
# 1873
}; 
#endif
# 1879 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 1879
enum cudaDeviceAttr { 
# 1881
cudaDevAttrMaxThreadsPerBlock = 1, 
# 1882
cudaDevAttrMaxBlockDimX, 
# 1883
cudaDevAttrMaxBlockDimY, 
# 1884
cudaDevAttrMaxBlockDimZ, 
# 1885
cudaDevAttrMaxGridDimX, 
# 1886
cudaDevAttrMaxGridDimY, 
# 1887
cudaDevAttrMaxGridDimZ, 
# 1888
cudaDevAttrMaxSharedMemoryPerBlock, 
# 1889
cudaDevAttrTotalConstantMemory, 
# 1890
cudaDevAttrWarpSize, 
# 1891
cudaDevAttrMaxPitch, 
# 1892
cudaDevAttrMaxRegistersPerBlock, 
# 1893
cudaDevAttrClockRate, 
# 1894
cudaDevAttrTextureAlignment, 
# 1895
cudaDevAttrGpuOverlap, 
# 1896
cudaDevAttrMultiProcessorCount, 
# 1897
cudaDevAttrKernelExecTimeout, 
# 1898
cudaDevAttrIntegrated, 
# 1899
cudaDevAttrCanMapHostMemory, 
# 1900
cudaDevAttrComputeMode, 
# 1901
cudaDevAttrMaxTexture1DWidth, 
# 1902
cudaDevAttrMaxTexture2DWidth, 
# 1903
cudaDevAttrMaxTexture2DHeight, 
# 1904
cudaDevAttrMaxTexture3DWidth, 
# 1905
cudaDevAttrMaxTexture3DHeight, 
# 1906
cudaDevAttrMaxTexture3DDepth, 
# 1907
cudaDevAttrMaxTexture2DLayeredWidth, 
# 1908
cudaDevAttrMaxTexture2DLayeredHeight, 
# 1909
cudaDevAttrMaxTexture2DLayeredLayers, 
# 1910
cudaDevAttrSurfaceAlignment, 
# 1911
cudaDevAttrConcurrentKernels, 
# 1912
cudaDevAttrEccEnabled, 
# 1913
cudaDevAttrPciBusId, 
# 1914
cudaDevAttrPciDeviceId, 
# 1915
cudaDevAttrTccDriver, 
# 1916
cudaDevAttrMemoryClockRate, 
# 1917
cudaDevAttrGlobalMemoryBusWidth, 
# 1918
cudaDevAttrL2CacheSize, 
# 1919
cudaDevAttrMaxThreadsPerMultiProcessor, 
# 1920
cudaDevAttrAsyncEngineCount, 
# 1921
cudaDevAttrUnifiedAddressing, 
# 1922
cudaDevAttrMaxTexture1DLayeredWidth, 
# 1923
cudaDevAttrMaxTexture1DLayeredLayers, 
# 1924
cudaDevAttrMaxTexture2DGatherWidth = 45, 
# 1925
cudaDevAttrMaxTexture2DGatherHeight, 
# 1926
cudaDevAttrMaxTexture3DWidthAlt, 
# 1927
cudaDevAttrMaxTexture3DHeightAlt, 
# 1928
cudaDevAttrMaxTexture3DDepthAlt, 
# 1929
cudaDevAttrPciDomainId, 
# 1930
cudaDevAttrTexturePitchAlignment, 
# 1931
cudaDevAttrMaxTextureCubemapWidth, 
# 1932
cudaDevAttrMaxTextureCubemapLayeredWidth, 
# 1933
cudaDevAttrMaxTextureCubemapLayeredLayers, 
# 1934
cudaDevAttrMaxSurface1DWidth, 
# 1935
cudaDevAttrMaxSurface2DWidth, 
# 1936
cudaDevAttrMaxSurface2DHeight, 
# 1937
cudaDevAttrMaxSurface3DWidth, 
# 1938
cudaDevAttrMaxSurface3DHeight, 
# 1939
cudaDevAttrMaxSurface3DDepth, 
# 1940
cudaDevAttrMaxSurface1DLayeredWidth, 
# 1941
cudaDevAttrMaxSurface1DLayeredLayers, 
# 1942
cudaDevAttrMaxSurface2DLayeredWidth, 
# 1943
cudaDevAttrMaxSurface2DLayeredHeight, 
# 1944
cudaDevAttrMaxSurface2DLayeredLayers, 
# 1945
cudaDevAttrMaxSurfaceCubemapWidth, 
# 1946
cudaDevAttrMaxSurfaceCubemapLayeredWidth, 
# 1947
cudaDevAttrMaxSurfaceCubemapLayeredLayers, 
# 1948
cudaDevAttrMaxTexture1DLinearWidth, 
# 1949
cudaDevAttrMaxTexture2DLinearWidth, 
# 1950
cudaDevAttrMaxTexture2DLinearHeight, 
# 1951
cudaDevAttrMaxTexture2DLinearPitch, 
# 1952
cudaDevAttrMaxTexture2DMipmappedWidth, 
# 1953
cudaDevAttrMaxTexture2DMipmappedHeight, 
# 1954
cudaDevAttrComputeCapabilityMajor, 
# 1955
cudaDevAttrComputeCapabilityMinor, 
# 1956
cudaDevAttrMaxTexture1DMipmappedWidth, 
# 1957
cudaDevAttrStreamPrioritiesSupported, 
# 1958
cudaDevAttrGlobalL1CacheSupported, 
# 1959
cudaDevAttrLocalL1CacheSupported, 
# 1960
cudaDevAttrMaxSharedMemoryPerMultiprocessor, 
# 1961
cudaDevAttrMaxRegistersPerMultiprocessor, 
# 1962
cudaDevAttrManagedMemory, 
# 1963
cudaDevAttrIsMultiGpuBoard, 
# 1964
cudaDevAttrMultiGpuBoardGroupID, 
# 1965
cudaDevAttrHostNativeAtomicSupported, 
# 1966
cudaDevAttrSingleToDoublePrecisionPerfRatio, 
# 1967
cudaDevAttrPageableMemoryAccess, 
# 1968
cudaDevAttrConcurrentManagedAccess, 
# 1969
cudaDevAttrComputePreemptionSupported, 
# 1970
cudaDevAttrCanUseHostPointerForRegisteredMem, 
# 1971
cudaDevAttrReserved92, 
# 1972
cudaDevAttrReserved93, 
# 1973
cudaDevAttrReserved94, 
# 1974
cudaDevAttrCooperativeLaunch, 
# 1975
cudaDevAttrCooperativeMultiDeviceLaunch, 
# 1976
cudaDevAttrMaxSharedMemoryPerBlockOptin, 
# 1977
cudaDevAttrCanFlushRemoteWrites, 
# 1978
cudaDevAttrHostRegisterSupported, 
# 1979
cudaDevAttrPageableMemoryAccessUsesHostPageTables, 
# 1980
cudaDevAttrDirectManagedMemAccessFromHost, 
# 1981
cudaDevAttrMaxBlocksPerMultiprocessor = 106, 
# 1982
cudaDevAttrMaxPersistingL2CacheSize = 108, 
# 1983
cudaDevAttrMaxAccessPolicyWindowSize, 
# 1984
cudaDevAttrReservedSharedMemoryPerBlock = 111, 
# 1985
cudaDevAttrSparseCudaArraySupported, 
# 1986
cudaDevAttrHostRegisterReadOnlySupported, 
# 1987
cudaDevAttrTimelineSemaphoreInteropSupported, 
# 1988
cudaDevAttrMaxTimelineSemaphoreInteropSupported = 114, 
# 1989
cudaDevAttrMemoryPoolsSupported, 
# 1990
cudaDevAttrGPUDirectRDMASupported, 
# 1991
cudaDevAttrGPUDirectRDMAFlushWritesOptions, 
# 1992
cudaDevAttrGPUDirectRDMAWritesOrdering, 
# 1993
cudaDevAttrMemoryPoolSupportedHandleTypes, 
# 1994
cudaDevAttrClusterLaunch, 
# 1995
cudaDevAttrDeferredMappingCudaArraySupported, 
# 1996
cudaDevAttrReserved122, 
# 1997
cudaDevAttrReserved123, 
# 1998
cudaDevAttrReserved124, 
# 1999
cudaDevAttrIpcEventSupport, 
# 2000
cudaDevAttrMemSyncDomainCount, 
# 2001
cudaDevAttrReserved127, 
# 2002
cudaDevAttrReserved128, 
# 2003
cudaDevAttrReserved129, 
# 2004
cudaDevAttrNumaConfig, 
# 2005
cudaDevAttrNumaId, 
# 2006
cudaDevAttrReserved132, 
# 2007
cudaDevAttrMpsEnabled, 
# 2008
cudaDevAttrHostNumaId, 
# 2009
cudaDevAttrMax
# 2010
}; 
#endif
# 2015 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 2015
enum cudaMemPoolAttr { 
# 2025 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
cudaMemPoolReuseFollowEventDependencies = 1, 
# 2032
cudaMemPoolReuseAllowOpportunistic, 
# 2040
cudaMemPoolReuseAllowInternalDependencies, 
# 2051 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
cudaMemPoolAttrReleaseThreshold, 
# 2057
cudaMemPoolAttrReservedMemCurrent, 
# 2064
cudaMemPoolAttrReservedMemHigh, 
# 2070
cudaMemPoolAttrUsedMemCurrent, 
# 2077
cudaMemPoolAttrUsedMemHigh
# 2078
}; 
#endif
# 2083 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 2083
enum cudaMemLocationType { 
# 2084
cudaMemLocationTypeInvalid, 
# 2085
cudaMemLocationTypeDevice, 
# 2086
cudaMemLocationTypeHost, 
# 2087
cudaMemLocationTypeHostNuma, 
# 2088
cudaMemLocationTypeHostNumaCurrent
# 2089
}; 
#endif
# 2097 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 2097
struct cudaMemLocation { 
# 2098
cudaMemLocationType type; 
# 2099
int id; 
# 2100
}; 
#endif
# 2105 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 2105
enum cudaMemAccessFlags { 
# 2106
cudaMemAccessFlagsProtNone, 
# 2107
cudaMemAccessFlagsProtRead, 
# 2108
cudaMemAccessFlagsProtReadWrite = 3
# 2109
}; 
#endif
# 2114 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 2114
struct cudaMemAccessDesc { 
# 2115
cudaMemLocation location; 
# 2116
cudaMemAccessFlags flags; 
# 2117
}; 
#endif
# 2122 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 2122
enum cudaMemAllocationType { 
# 2123
cudaMemAllocationTypeInvalid, 
# 2127
cudaMemAllocationTypePinned, 
# 2128
cudaMemAllocationTypeMax = 2147483647
# 2129
}; 
#endif
# 2134 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 2134
enum cudaMemAllocationHandleType { 
# 2135
cudaMemHandleTypeNone, 
# 2136
cudaMemHandleTypePosixFileDescriptor, 
# 2137
cudaMemHandleTypeWin32, 
# 2138
cudaMemHandleTypeWin32Kmt = 4
# 2139
}; 
#endif
# 2144 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 2144
struct cudaMemPoolProps { 
# 2145
cudaMemAllocationType allocType; 
# 2146
cudaMemAllocationHandleType handleTypes; 
# 2147
cudaMemLocation location; 
# 2154
void *win32SecurityAttributes; 
# 2155
size_t maxSize; 
# 2156
unsigned char reserved[56]; 
# 2157
}; 
#endif
# 2162 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 2162
struct cudaMemPoolPtrExportData { 
# 2163
unsigned char reserved[64]; 
# 2164
}; 
#endif
# 2169 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 2169
struct cudaMemAllocNodeParams { 
# 2174
cudaMemPoolProps poolProps; 
# 2175
const cudaMemAccessDesc *accessDescs; 
# 2176
size_t accessDescCount; 
# 2177
size_t bytesize; 
# 2178
void *dptr; 
# 2179
}; 
#endif
# 2184 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 2184
struct cudaMemAllocNodeParamsV2 { 
# 2189
cudaMemPoolProps poolProps; 
# 2190
const cudaMemAccessDesc *accessDescs; 
# 2191
size_t accessDescCount; 
# 2192
size_t bytesize; 
# 2193
void *dptr; 
# 2194
}; 
#endif
# 2199 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 2199
struct cudaMemFreeNodeParams { 
# 2200
void *dptr; 
# 2201
}; 
#endif
# 2206 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 2206
enum cudaGraphMemAttributeType { 
# 2211
cudaGraphMemAttrUsedMemCurrent, 
# 2218
cudaGraphMemAttrUsedMemHigh, 
# 2225
cudaGraphMemAttrReservedMemCurrent, 
# 2232
cudaGraphMemAttrReservedMemHigh
# 2233
}; 
#endif
# 2239 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 2239
enum cudaDeviceP2PAttr { 
# 2240
cudaDevP2PAttrPerformanceRank = 1, 
# 2241
cudaDevP2PAttrAccessSupported, 
# 2242
cudaDevP2PAttrNativeAtomicSupported, 
# 2243
cudaDevP2PAttrCudaArrayAccessSupported
# 2244
}; 
#endif
# 2251 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 2251
struct CUuuid_st { 
# 2252
char bytes[16]; 
# 2253
}; 
#endif
# 2254 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
typedef CUuuid_st 
# 2254
CUuuid; 
#endif
# 2256 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
typedef CUuuid_st 
# 2256
cudaUUID_t; 
#endif
# 2261 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 2261
struct cudaDeviceProp { 
# 2263
char name[256]; 
# 2264
cudaUUID_t uuid; 
# 2265
char luid[8]; 
# 2266
unsigned luidDeviceNodeMask; 
# 2267
size_t totalGlobalMem; 
# 2268
size_t sharedMemPerBlock; 
# 2269
int regsPerBlock; 
# 2270
int warpSize; 
# 2271
size_t memPitch; 
# 2272
int maxThreadsPerBlock; 
# 2273
int maxThreadsDim[3]; 
# 2274
int maxGridSize[3]; 
# 2275
int clockRate; 
# 2276
size_t totalConstMem; 
# 2277
int major; 
# 2278
int minor; 
# 2279
size_t textureAlignment; 
# 2280
size_t texturePitchAlignment; 
# 2281
int deviceOverlap; 
# 2282
int multiProcessorCount; 
# 2283
int kernelExecTimeoutEnabled; 
# 2284
int integrated; 
# 2285
int canMapHostMemory; 
# 2286
int computeMode; 
# 2287
int maxTexture1D; 
# 2288
int maxTexture1DMipmap; 
# 2289
int maxTexture1DLinear; 
# 2290
int maxTexture2D[2]; 
# 2291
int maxTexture2DMipmap[2]; 
# 2292
int maxTexture2DLinear[3]; 
# 2293
int maxTexture2DGather[2]; 
# 2294
int maxTexture3D[3]; 
# 2295
int maxTexture3DAlt[3]; 
# 2296
int maxTextureCubemap; 
# 2297
int maxTexture1DLayered[2]; 
# 2298
int maxTexture2DLayered[3]; 
# 2299
int maxTextureCubemapLayered[2]; 
# 2300
int maxSurface1D; 
# 2301
int maxSurface2D[2]; 
# 2302
int maxSurface3D[3]; 
# 2303
int maxSurface1DLayered[2]; 
# 2304
int maxSurface2DLayered[3]; 
# 2305
int maxSurfaceCubemap; 
# 2306
int maxSurfaceCubemapLayered[2]; 
# 2307
size_t surfaceAlignment; 
# 2308
int concurrentKernels; 
# 2309
int ECCEnabled; 
# 2310
int pciBusID; 
# 2311
int pciDeviceID; 
# 2312
int pciDomainID; 
# 2313
int tccDriver; 
# 2314
int asyncEngineCount; 
# 2315
int unifiedAddressing; 
# 2316
int memoryClockRate; 
# 2317
int memoryBusWidth; 
# 2318
int l2CacheSize; 
# 2319
int persistingL2CacheMaxSize; 
# 2320
int maxThreadsPerMultiProcessor; 
# 2321
int streamPrioritiesSupported; 
# 2322
int globalL1CacheSupported; 
# 2323
int localL1CacheSupported; 
# 2324
size_t sharedMemPerMultiprocessor; 
# 2325
int regsPerMultiprocessor; 
# 2326
int managedMemory; 
# 2327
int isMultiGpuBoard; 
# 2328
int multiGpuBoardGroupID; 
# 2329
int hostNativeAtomicSupported; 
# 2330
int singleToDoublePrecisionPerfRatio; 
# 2331
int pageableMemoryAccess; 
# 2332
int concurrentManagedAccess; 
# 2333
int computePreemptionSupported; 
# 2334
int canUseHostPointerForRegisteredMem; 
# 2335
int cooperativeLaunch; 
# 2336
int cooperativeMultiDeviceLaunch; 
# 2337
size_t sharedMemPerBlockOptin; 
# 2338
int pageableMemoryAccessUsesHostPageTables; 
# 2339
int directManagedMemAccessFromHost; 
# 2340
int maxBlocksPerMultiProcessor; 
# 2341
int accessPolicyMaxWindowSize; 
# 2342
size_t reservedSharedMemPerBlock; 
# 2343
int hostRegisterSupported; 
# 2344
int sparseCudaArraySupported; 
# 2345
int hostRegisterReadOnlySupported; 
# 2346
int timelineSemaphoreInteropSupported; 
# 2347
int memoryPoolsSupported; 
# 2348
int gpuDirectRDMASupported; 
# 2349
unsigned gpuDirectRDMAFlushWritesOptions; 
# 2350
int gpuDirectRDMAWritesOrdering; 
# 2351
unsigned memoryPoolSupportedHandleTypes; 
# 2352
int deferredMappingCudaArraySupported; 
# 2353
int ipcEventSupported; 
# 2354
int clusterLaunch; 
# 2355
int unifiedFunctionPointers; 
# 2356
int reserved2[2]; 
# 2357
int reserved1[1]; 
# 2358
int reserved[60]; 
# 2359
}; 
#endif
# 2372 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
typedef 
# 2369
struct cudaIpcEventHandle_st { 
# 2371
char reserved[64]; 
# 2372
} cudaIpcEventHandle_t; 
#endif
# 2380 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
typedef 
# 2377
struct cudaIpcMemHandle_st { 
# 2379
char reserved[64]; 
# 2380
} cudaIpcMemHandle_t; 
#endif
# 2388 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
typedef 
# 2385
struct cudaMemFabricHandle_st { 
# 2387
char reserved[64]; 
# 2388
} cudaMemFabricHandle_t; 
#endif
# 2393 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 2393
enum cudaExternalMemoryHandleType { 
# 2397
cudaExternalMemoryHandleTypeOpaqueFd = 1, 
# 2401
cudaExternalMemoryHandleTypeOpaqueWin32, 
# 2405
cudaExternalMemoryHandleTypeOpaqueWin32Kmt, 
# 2409
cudaExternalMemoryHandleTypeD3D12Heap, 
# 2413
cudaExternalMemoryHandleTypeD3D12Resource, 
# 2417
cudaExternalMemoryHandleTypeD3D11Resource, 
# 2421
cudaExternalMemoryHandleTypeD3D11ResourceKmt, 
# 2425
cudaExternalMemoryHandleTypeNvSciBuf
# 2426
}; 
#endif
# 2468 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 2468
struct cudaExternalMemoryHandleDesc { 
# 2472
cudaExternalMemoryHandleType type; 
# 2473
union { 
# 2479
int fd; 
# 2495 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
struct { 
# 2499
void *handle; 
# 2504
const void *name; 
# 2505
} win32; 
# 2510
const void *nvSciBufObject; 
# 2511
} handle; 
# 2515
unsigned long long size; 
# 2519
unsigned flags; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 2520
}; 
#endif
# 2525 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 2525
struct cudaExternalMemoryBufferDesc { 
# 2529
unsigned long long offset; 
# 2533
unsigned long long size; 
# 2537
unsigned flags; 
# 2538
}; 
#endif
# 2543 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 2543
struct cudaExternalMemoryMipmappedArrayDesc { 
# 2548
unsigned long long offset; 
# 2552
cudaChannelFormatDesc formatDesc; 
# 2556
cudaExtent extent; 
# 2561
unsigned flags; 
# 2565
unsigned numLevels; 
# 2566
}; 
#endif
# 2571 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 2571
enum cudaExternalSemaphoreHandleType { 
# 2575
cudaExternalSemaphoreHandleTypeOpaqueFd = 1, 
# 2579
cudaExternalSemaphoreHandleTypeOpaqueWin32, 
# 2583
cudaExternalSemaphoreHandleTypeOpaqueWin32Kmt, 
# 2587
cudaExternalSemaphoreHandleTypeD3D12Fence, 
# 2591
cudaExternalSemaphoreHandleTypeD3D11Fence, 
# 2595
cudaExternalSemaphoreHandleTypeNvSciSync, 
# 2599
cudaExternalSemaphoreHandleTypeKeyedMutex, 
# 2603
cudaExternalSemaphoreHandleTypeKeyedMutexKmt, 
# 2607
cudaExternalSemaphoreHandleTypeTimelineSemaphoreFd, 
# 2611
cudaExternalSemaphoreHandleTypeTimelineSemaphoreWin32
# 2612
}; 
#endif
# 2617 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 2617
struct cudaExternalSemaphoreHandleDesc { 
# 2621
cudaExternalSemaphoreHandleType type; 
# 2622
union { 
# 2629
int fd; 
# 2645 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
struct { 
# 2649
void *handle; 
# 2654
const void *name; 
# 2655
} win32; 
# 2659
const void *nvSciSyncObj; 
# 2660
} handle; 
# 2664
unsigned flags; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 2665
}; 
#endif
# 2670 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 2670
struct cudaExternalSemaphoreSignalParams_v1 { 
# 2671
struct { 
# 2675
struct { 
# 2679
unsigned long long value; 
# 2680
} fence; 
# 2681
union { 
# 2686
void *fence; 
# 2687
unsigned long long reserved; 
# 2688
} nvSciSync; 
# 2692
struct { 
# 2696
unsigned long long key; 
# 2697
} keyedMutex; 
# 2698
} params; 
# 2709 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
unsigned flags; 
# 2710
}; 
#endif
# 2715 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 2715
struct cudaExternalSemaphoreWaitParams_v1 { 
# 2716
struct { 
# 2720
struct { 
# 2724
unsigned long long value; 
# 2725
} fence; 
# 2726
union { 
# 2731
void *fence; 
# 2732
unsigned long long reserved; 
# 2733
} nvSciSync; 
# 2737
struct { 
# 2741
unsigned long long key; 
# 2745
unsigned timeoutMs; 
# 2746
} keyedMutex; 
# 2747
} params; 
# 2758 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
unsigned flags; 
# 2759
}; 
#endif
# 2764 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 2764
struct cudaExternalSemaphoreSignalParams { 
# 2765
struct { 
# 2769
struct { 
# 2773
unsigned long long value; 
# 2774
} fence; 
# 2775
union { 
# 2780
void *fence; 
# 2781
unsigned long long reserved; 
# 2782
} nvSciSync; 
# 2786
struct { 
# 2790
unsigned long long key; 
# 2791
} keyedMutex; 
# 2792
unsigned reserved[12]; 
# 2793
} params; 
# 2804 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
unsigned flags; 
# 2805
unsigned reserved[16]; 
# 2806
}; 
#endif
# 2811 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 2811
struct cudaExternalSemaphoreWaitParams { 
# 2812
struct { 
# 2816
struct { 
# 2820
unsigned long long value; 
# 2821
} fence; 
# 2822
union { 
# 2827
void *fence; 
# 2828
unsigned long long reserved; 
# 2829
} nvSciSync; 
# 2833
struct { 
# 2837
unsigned long long key; 
# 2841
unsigned timeoutMs; 
# 2842
} keyedMutex; 
# 2843
unsigned reserved[10]; 
# 2844
} params; 
# 2855 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
unsigned flags; 
# 2856
unsigned reserved[16]; 
# 2857
}; 
#endif
# 2868 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
typedef cudaError 
# 2868
cudaError_t; 
#endif
# 2873 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
typedef struct CUstream_st *
# 2873
cudaStream_t; 
#endif
# 2878 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
typedef struct CUevent_st *
# 2878
cudaEvent_t; 
#endif
# 2883 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
typedef cudaGraphicsResource *
# 2883
cudaGraphicsResource_t; 
#endif
# 2888 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
typedef struct CUexternalMemory_st *
# 2888
cudaExternalMemory_t; 
#endif
# 2893 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
typedef struct CUexternalSemaphore_st *
# 2893
cudaExternalSemaphore_t; 
#endif
# 2898 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
typedef struct CUgraph_st *
# 2898
cudaGraph_t; 
#endif
# 2903 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
typedef struct CUgraphNode_st *
# 2903
cudaGraphNode_t; 
#endif
# 2908 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
typedef struct CUuserObject_st *
# 2908
cudaUserObject_t; 
#endif
# 2913 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
typedef unsigned long long 
# 2913
cudaGraphConditionalHandle; 
#endif
# 2918 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
typedef struct CUfunc_st *
# 2918
cudaFunction_t; 
#endif
# 2923 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
typedef struct CUkern_st *
# 2923
cudaKernel_t; 
#endif
# 2928 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
typedef struct CUmemPoolHandle_st *
# 2928
cudaMemPool_t; 
#endif
# 2933 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 2933
enum cudaCGScope { 
# 2934
cudaCGScopeInvalid, 
# 2935
cudaCGScopeGrid, 
# 2936
cudaCGScopeMultiGrid
# 2937
}; 
#endif
# 2942 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 2942
struct cudaLaunchParams { 
# 2944
void *func; 
# 2945
dim3 gridDim; 
# 2946
dim3 blockDim; 
# 2947
void **args; 
# 2948
size_t sharedMem; 
# 2949
cudaStream_t stream; 
# 2950
}; 
#endif
# 2955 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 2955
struct cudaKernelNodeParams { 
# 2956
void *func; 
# 2957
dim3 gridDim; 
# 2958
dim3 blockDim; 
# 2959
unsigned sharedMemBytes; 
# 2960
void **kernelParams; 
# 2961
void **extra; 
# 2962
}; 
#endif
# 2967 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 2967
struct cudaKernelNodeParamsV2 { 
# 2968
void *func; 
# 2970
dim3 gridDim; 
# 2971
dim3 blockDim; 
# 2977
unsigned sharedMemBytes; 
# 2978
void **kernelParams; 
# 2979
void **extra; 
# 2980
}; 
#endif
# 2985 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 2985
struct cudaExternalSemaphoreSignalNodeParams { 
# 2986
cudaExternalSemaphore_t *extSemArray; 
# 2987
const cudaExternalSemaphoreSignalParams *paramsArray; 
# 2988
unsigned numExtSems; 
# 2989
}; 
#endif
# 2994 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 2994
struct cudaExternalSemaphoreSignalNodeParamsV2 { 
# 2995
cudaExternalSemaphore_t *extSemArray; 
# 2996
const cudaExternalSemaphoreSignalParams *paramsArray; 
# 2997
unsigned numExtSems; 
# 2998
}; 
#endif
# 3003 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 3003
struct cudaExternalSemaphoreWaitNodeParams { 
# 3004
cudaExternalSemaphore_t *extSemArray; 
# 3005
const cudaExternalSemaphoreWaitParams *paramsArray; 
# 3006
unsigned numExtSems; 
# 3007
}; 
#endif
# 3012 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 3012
struct cudaExternalSemaphoreWaitNodeParamsV2 { 
# 3013
cudaExternalSemaphore_t *extSemArray; 
# 3014
const cudaExternalSemaphoreWaitParams *paramsArray; 
# 3015
unsigned numExtSems; 
# 3016
}; 
#endif
# 3018 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 3018
enum cudaGraphConditionalHandleFlags { 
# 3019
cudaGraphCondAssignDefault = 1
# 3020
}; 
#endif
# 3025 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 3025
enum cudaGraphConditionalNodeType { 
# 3026
cudaGraphCondTypeIf, 
# 3027
cudaGraphCondTypeWhile
# 3028
}; 
#endif
# 3033 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 3033
struct cudaConditionalNodeParams { 
# 3034
cudaGraphConditionalHandle handle; 
# 3037
cudaGraphConditionalNodeType type; 
# 3038
unsigned size; 
# 3039
cudaGraph_t *phGraph_out; 
# 3049 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
}; 
#endif
# 3054 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 3054
enum cudaGraphNodeType { 
# 3055
cudaGraphNodeTypeKernel, 
# 3056
cudaGraphNodeTypeMemcpy, 
# 3057
cudaGraphNodeTypeMemset, 
# 3058
cudaGraphNodeTypeHost, 
# 3059
cudaGraphNodeTypeGraph, 
# 3060
cudaGraphNodeTypeEmpty, 
# 3061
cudaGraphNodeTypeWaitEvent, 
# 3062
cudaGraphNodeTypeEventRecord, 
# 3063
cudaGraphNodeTypeExtSemaphoreSignal, 
# 3064
cudaGraphNodeTypeExtSemaphoreWait, 
# 3065
cudaGraphNodeTypeMemAlloc, 
# 3066
cudaGraphNodeTypeMemFree, 
# 3067
cudaGraphNodeTypeConditional = 13, 
# 3084 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
cudaGraphNodeTypeCount
# 3085
}; 
#endif
# 3090 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 3090
struct cudaChildGraphNodeParams { 
# 3091
cudaGraph_t graph; 
# 3093
}; 
#endif
# 3098 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 3098
struct cudaEventRecordNodeParams { 
# 3099
cudaEvent_t event; 
# 3100
}; 
#endif
# 3105 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 3105
struct cudaEventWaitNodeParams { 
# 3106
cudaEvent_t event; 
# 3107
}; 
#endif
# 3112 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 3112
struct cudaGraphNodeParams { 
# 3113
cudaGraphNodeType type; 
# 3114
int reserved0[3]; 
# 3116
union { 
# 3117
long long reserved1[29]; 
# 3118
cudaKernelNodeParamsV2 kernel; 
# 3119
cudaMemcpyNodeParams memcpy; 
# 3120
cudaMemsetParamsV2 memset; 
# 3121
cudaHostNodeParamsV2 host; 
# 3122
cudaChildGraphNodeParams graph; 
# 3123
cudaEventWaitNodeParams eventWait; 
# 3124
cudaEventRecordNodeParams eventRecord; 
# 3125
cudaExternalSemaphoreSignalNodeParamsV2 extSemSignal; 
# 3126
cudaExternalSemaphoreWaitNodeParamsV2 extSemWait; 
# 3127
cudaMemAllocNodeParamsV2 alloc; 
# 3128
cudaMemFreeNodeParams free; 
# 3129
cudaConditionalNodeParams conditional; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 3130
}; 
# 3132
long long reserved2; 
# 3133
}; 
#endif
# 3145 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
typedef 
# 3138
enum cudaGraphDependencyType_enum { 
# 3139
cudaGraphDependencyTypeDefault, 
# 3140
cudaGraphDependencyTypeProgrammatic
# 3145
} cudaGraphDependencyType; 
#endif
# 3175 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
typedef 
# 3152 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
struct cudaGraphEdgeData_st { 
# 3153
unsigned char from_port; 
# 3163 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
unsigned char to_port; 
# 3170
unsigned char type; 
# 3173
unsigned char reserved[5]; 
# 3175
} cudaGraphEdgeData; 
#endif
# 3196 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
typedef struct CUgraphExec_st *cudaGraphExec_t; 
# 3201
#if 0
# 3201
enum cudaGraphExecUpdateResult { 
# 3202
cudaGraphExecUpdateSuccess, 
# 3203
cudaGraphExecUpdateError, 
# 3204
cudaGraphExecUpdateErrorTopologyChanged, 
# 3205
cudaGraphExecUpdateErrorNodeTypeChanged, 
# 3206
cudaGraphExecUpdateErrorFunctionChanged, 
# 3207
cudaGraphExecUpdateErrorParametersChanged, 
# 3208
cudaGraphExecUpdateErrorNotSupported, 
# 3209
cudaGraphExecUpdateErrorUnsupportedFunctionChange, 
# 3210
cudaGraphExecUpdateErrorAttributesChanged
# 3211
}; 
#endif
# 3222 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
typedef 
# 3216
enum cudaGraphInstantiateResult { 
# 3217
cudaGraphInstantiateSuccess, 
# 3218
cudaGraphInstantiateError, 
# 3219
cudaGraphInstantiateInvalidStructure, 
# 3220
cudaGraphInstantiateNodeOperationNotSupported, 
# 3221
cudaGraphInstantiateMultipleDevicesNotSupported
# 3222
} cudaGraphInstantiateResult; 
#endif
# 3233 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
typedef 
# 3227
struct cudaGraphInstantiateParams_st { 
# 3229
unsigned long long flags; 
# 3230
cudaStream_t uploadStream; 
# 3231
cudaGraphNode_t errNode_out; 
# 3232
cudaGraphInstantiateResult result_out; 
# 3233
} cudaGraphInstantiateParams; 
#endif
# 3255 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
typedef 
# 3238
struct cudaGraphExecUpdateResultInfo_st { 
# 3242
cudaGraphExecUpdateResult result; 
# 3249
cudaGraphNode_t errorNode; 
# 3254
cudaGraphNode_t errorFromNode; 
# 3255
} cudaGraphExecUpdateResultInfo; 
#endif
# 3261 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 3261
enum cudaGetDriverEntryPointFlags { 
# 3262
cudaEnableDefault, 
# 3263
cudaEnableLegacyStream, 
# 3264
cudaEnablePerThreadDefaultStream
# 3265
}; 
#endif
# 3270 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 3270
enum cudaDriverEntryPointQueryResult { 
# 3271
cudaDriverEntryPointSuccess, 
# 3272
cudaDriverEntryPointSymbolNotFound, 
# 3273
cudaDriverEntryPointVersionNotSufficent
# 3274
}; 
#endif
# 3279 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 3279
enum cudaGraphDebugDotFlags { 
# 3280
cudaGraphDebugDotFlagsVerbose = (1 << 0), 
# 3281
cudaGraphDebugDotFlagsKernelNodeParams = (1 << 2), 
# 3282
cudaGraphDebugDotFlagsMemcpyNodeParams = (1 << 3), 
# 3283
cudaGraphDebugDotFlagsMemsetNodeParams = (1 << 4), 
# 3284
cudaGraphDebugDotFlagsHostNodeParams = (1 << 5), 
# 3285
cudaGraphDebugDotFlagsEventNodeParams = (1 << 6), 
# 3286
cudaGraphDebugDotFlagsExtSemasSignalNodeParams = (1 << 7), 
# 3287
cudaGraphDebugDotFlagsExtSemasWaitNodeParams = (1 << 8), 
# 3288
cudaGraphDebugDotFlagsKernelNodeAttributes = (1 << 9), 
# 3289
cudaGraphDebugDotFlagsHandles = (1 << 10), 
# 3290
cudaGraphDebugDotFlagsConditionalNodeParams = (1 << 15)
# 3291
}; 
#endif
# 3296 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 3296
enum cudaGraphInstantiateFlags { 
# 3297
cudaGraphInstantiateFlagAutoFreeOnLaunch = 1, 
# 3298
cudaGraphInstantiateFlagUpload, 
# 3301
cudaGraphInstantiateFlagDeviceLaunch = 4, 
# 3304
cudaGraphInstantiateFlagUseNodePriority = 8
# 3306
}; 
#endif
# 3327 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
typedef 
# 3324
enum cudaLaunchMemSyncDomain { 
# 3325
cudaLaunchMemSyncDomainDefault, 
# 3326
cudaLaunchMemSyncDomainRemote
# 3327
} cudaLaunchMemSyncDomain; 
#endif
# 3343 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
typedef 
# 3340
struct cudaLaunchMemSyncDomainMap_st { 
# 3341
unsigned char default_; 
# 3342
unsigned char remote; 
# 3343
} cudaLaunchMemSyncDomainMap; 
#endif
# 3424 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
typedef 
# 3348 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
enum cudaLaunchAttributeID { 
# 3349
cudaLaunchAttributeIgnore, 
# 3350
cudaLaunchAttributeAccessPolicyWindow, 
# 3352
cudaLaunchAttributeCooperative, 
# 3354
cudaLaunchAttributeSynchronizationPolicy, 
# 3355
cudaLaunchAttributeClusterDimension, 
# 3357
cudaLaunchAttributeClusterSchedulingPolicyPreference, 
# 3359
cudaLaunchAttributeProgrammaticStreamSerialization, 
# 3370 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
cudaLaunchAttributeProgrammaticEvent, 
# 3396 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
cudaLaunchAttributePriority, 
# 3398
cudaLaunchAttributeMemSyncDomainMap, 
# 3400
cudaLaunchAttributeMemSyncDomain, 
# 3402
cudaLaunchAttributeLaunchCompletionEvent = 12
# 3424 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
} cudaLaunchAttributeID; 
#endif
# 3475 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
typedef 
# 3429 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
union cudaLaunchAttributeValue { 
# 3430
char pad[64]; 
# 3431
cudaAccessPolicyWindow accessPolicyWindow; 
# 3432
int cooperative; 
# 3434
cudaSynchronizationPolicy syncPolicy; 
# 3448 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
struct { 
# 3449
unsigned x; 
# 3450
unsigned y; 
# 3451
unsigned z; 
# 3452
} clusterDim; 
# 3453
cudaClusterSchedulingPolicy clusterSchedulingPolicyPreference; 
# 3456
int programmaticStreamSerializationAllowed; 
# 3458
struct { 
# 3459
cudaEvent_t event; 
# 3460
int flags; 
# 3462
int triggerAtBlockStart; 
# 3463
} programmaticEvent; 
# 3464
int priority; 
# 3465
cudaLaunchMemSyncDomainMap memSyncDomainMap; 
# 3468
cudaLaunchMemSyncDomain memSyncDomain; 
# 3470
struct { 
# 3471
cudaEvent_t event; 
# 3472
int flags; 
# 3474
} launchCompletionEvent; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 3475
} cudaLaunchAttributeValue; 
#endif
# 3484 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
typedef 
# 3480
struct cudaLaunchAttribute_st { 
# 3481
cudaLaunchAttributeID id; 
# 3482
char pad[(8) - sizeof(cudaLaunchAttributeID)]; 
# 3483
cudaLaunchAttributeValue val; 
# 3484
} cudaLaunchAttribute; 
#endif
# 3496 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
typedef 
# 3489
struct cudaLaunchConfig_st { 
# 3490
dim3 gridDim; 
# 3491
dim3 blockDim; 
# 3492
size_t dynamicSmemBytes; 
# 3493
cudaStream_t stream; 
# 3494
cudaLaunchAttribute *attrs; 
# 3495
unsigned numAttrs; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 3496
} cudaLaunchConfig_t; 
#endif
# 3518 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_types.h"
#if 0
# 3518
enum cudaDeviceNumaConfig { 
# 3519
cudaDeviceNumaConfigNone, 
# 3520
cudaDeviceNumaConfigNumaNode
# 3521
}; 
#endif
# 84 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/surface_types.h"
#if 0
# 84
enum cudaSurfaceBoundaryMode { 
# 86
cudaBoundaryModeZero, 
# 87
cudaBoundaryModeClamp, 
# 88
cudaBoundaryModeTrap
# 89
}; 
#endif
# 94 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/surface_types.h"
#if 0
# 94
enum cudaSurfaceFormatMode { 
# 96
cudaFormatModeForced, 
# 97
cudaFormatModeAuto
# 98
}; 
#endif
# 103 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/surface_types.h"
#if 0
typedef unsigned long long 
# 103
cudaSurfaceObject_t; 
#endif
# 84 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_types.h"
#if 0
# 84
enum cudaTextureAddressMode { 
# 86
cudaAddressModeWrap, 
# 87
cudaAddressModeClamp, 
# 88
cudaAddressModeMirror, 
# 89
cudaAddressModeBorder
# 90
}; 
#endif
# 95 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_types.h"
#if 0
# 95
enum cudaTextureFilterMode { 
# 97
cudaFilterModePoint, 
# 98
cudaFilterModeLinear
# 99
}; 
#endif
# 104 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_types.h"
#if 0
# 104
enum cudaTextureReadMode { 
# 106
cudaReadModeElementType, 
# 107
cudaReadModeNormalizedFloat
# 108
}; 
#endif
# 113 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_types.h"
#if 0
# 113
struct cudaTextureDesc { 
# 118
cudaTextureAddressMode addressMode[3]; 
# 122
cudaTextureFilterMode filterMode; 
# 126
cudaTextureReadMode readMode; 
# 130
int sRGB; 
# 134
float borderColor[4]; 
# 138
int normalizedCoords; 
# 142
unsigned maxAnisotropy; 
# 146
cudaTextureFilterMode mipmapFilterMode; 
# 150
float mipmapLevelBias; 
# 154
float minMipmapLevelClamp; 
# 158
float maxMipmapLevelClamp; 
# 162
int disableTrilinearOptimization; 
# 166
int seamlessCubemap; 
# 167
}; 
#endif
# 172 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_types.h"
#if 0
typedef unsigned long long 
# 172
cudaTextureObject_t; 
#endif
# 87 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/library_types.h"
typedef 
# 55
enum cudaDataType_t { 
# 57
CUDA_R_16F = 2, 
# 58
CUDA_C_16F = 6, 
# 59
CUDA_R_16BF = 14, 
# 60
CUDA_C_16BF, 
# 61
CUDA_R_32F = 0, 
# 62
CUDA_C_32F = 4, 
# 63
CUDA_R_64F = 1, 
# 64
CUDA_C_64F = 5, 
# 65
CUDA_R_4I = 16, 
# 66
CUDA_C_4I, 
# 67
CUDA_R_4U, 
# 68
CUDA_C_4U, 
# 69
CUDA_R_8I = 3, 
# 70
CUDA_C_8I = 7, 
# 71
CUDA_R_8U, 
# 72
CUDA_C_8U, 
# 73
CUDA_R_16I = 20, 
# 74
CUDA_C_16I, 
# 75
CUDA_R_16U, 
# 76
CUDA_C_16U, 
# 77
CUDA_R_32I = 10, 
# 78
CUDA_C_32I, 
# 79
CUDA_R_32U, 
# 80
CUDA_C_32U, 
# 81
CUDA_R_64I = 24, 
# 82
CUDA_C_64I, 
# 83
CUDA_R_64U, 
# 84
CUDA_C_64U, 
# 85
CUDA_R_8F_E4M3, 
# 86
CUDA_R_8F_E5M2
# 87
} cudaDataType; 
# 95
typedef 
# 90
enum libraryPropertyType_t { 
# 92
MAJOR_VERSION, 
# 93
MINOR_VERSION, 
# 94
PATCH_LEVEL
# 95
} libraryPropertyType; 
# 296 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/x86_64-conda-linux-gnu/bits/c++config.h" 3
namespace std { 
# 298
typedef unsigned long size_t; 
# 299
typedef long ptrdiff_t; 
# 302
typedef __decltype((nullptr)) nullptr_t; 
# 305
#pragma GCC visibility push ( default )
# 308
__attribute((__noreturn__, __always_inline__)) inline void 
# 309
__terminate() noexcept 
# 310
{ 
# 311
void terminate() noexcept __attribute((__noreturn__)); 
# 312
terminate(); 
# 313
} 
#pragma GCC visibility pop
}
# 329 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/x86_64-conda-linux-gnu/bits/c++config.h" 3
namespace std { 
# 331
inline namespace __cxx11 __attribute((__abi_tag__("cxx11"))) { }
# 332
}
# 333
namespace __gnu_cxx { 
# 335
inline namespace __cxx11 __attribute((__abi_tag__("cxx11"))) { }
# 336
}
# 508 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/x86_64-conda-linux-gnu/bits/c++config.h" 3
namespace std { 
# 510
#pragma GCC visibility push ( default )
# 516
constexpr bool __is_constant_evaluated() noexcept 
# 517
{ 
# 523
return __builtin_is_constant_evaluated(); 
# 527
} 
#pragma GCC visibility pop
}
# 34 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/stdlib.h" 3
extern "C" {
# 66 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/bits/waitstatus.h" 3
union wait { 
# 68
int w_status; 
# 70
struct { 
# 72
unsigned __w_termsig: 7; 
# 73
unsigned __w_coredump: 1; 
# 74
unsigned __w_retcode: 8; 
# 75
unsigned: 16; 
# 83
} __wait_terminated; 
# 85
struct { 
# 87
unsigned __w_stopval: 8; 
# 88
unsigned __w_stopsig: 8; 
# 89
unsigned: 16; 
# 96
} __wait_stopped; 
# 97
}; 
# 101 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/stdlib.h" 3
typedef 
# 98
struct { 
# 99
int quot; 
# 100
int rem; 
# 101
} div_t; 
# 109
typedef 
# 106
struct { 
# 107
long quot; 
# 108
long rem; 
# 109
} ldiv_t; 
# 121
__extension__ typedef 
# 118
struct { 
# 119
long long quot; 
# 120
long long rem; 
# 121
} lldiv_t; 
# 139 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/stdlib.h" 3
extern size_t __ctype_get_mb_cur_max() throw(); 
# 144
extern double atof(const char * __nptr) throw()
# 145
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 147
extern int atoi(const char * __nptr) throw()
# 148
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 150
extern long atol(const char * __nptr) throw()
# 151
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 157
__extension__ extern long long atoll(const char * __nptr) throw()
# 158
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 164
extern double strtod(const char *__restrict__ __nptr, char **__restrict__ __endptr) throw()
# 166
 __attribute((__nonnull__(1))); 
# 172
extern float strtof(const char *__restrict__ __nptr, char **__restrict__ __endptr) throw()
# 173
 __attribute((__nonnull__(1))); 
# 175
extern long double strtold(const char *__restrict__ __nptr, char **__restrict__ __endptr) throw()
# 177
 __attribute((__nonnull__(1))); 
# 183
extern long strtol(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 185
 __attribute((__nonnull__(1))); 
# 187
extern unsigned long strtoul(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 189
 __attribute((__nonnull__(1))); 
# 195
__extension__ extern long long strtoq(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 197
 __attribute((__nonnull__(1))); 
# 200
__extension__ extern unsigned long long strtouq(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 202
 __attribute((__nonnull__(1))); 
# 209
__extension__ extern long long strtoll(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 211
 __attribute((__nonnull__(1))); 
# 214
__extension__ extern unsigned long long strtoull(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 216
 __attribute((__nonnull__(1))); 
# 239 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/stdlib.h" 3
extern long strtol_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base, __locale_t __loc) throw()
# 241
 __attribute((__nonnull__(1, 4))); 
# 243
extern unsigned long strtoul_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base, __locale_t __loc) throw()
# 246
 __attribute((__nonnull__(1, 4))); 
# 249
__extension__ extern long long strtoll_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base, __locale_t __loc) throw()
# 252
 __attribute((__nonnull__(1, 4))); 
# 255
__extension__ extern unsigned long long strtoull_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base, __locale_t __loc) throw()
# 258
 __attribute((__nonnull__(1, 4))); 
# 260
extern double strtod_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, __locale_t __loc) throw()
# 262
 __attribute((__nonnull__(1, 3))); 
# 264
extern float strtof_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, __locale_t __loc) throw()
# 266
 __attribute((__nonnull__(1, 3))); 
# 268
extern long double strtold_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, __locale_t __loc) throw()
# 271
 __attribute((__nonnull__(1, 3))); 
# 305 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/stdlib.h" 3
extern char *l64a(long __n) throw(); 
# 308
extern long a64l(const char * __s) throw()
# 309
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 27 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/sys/types.h" 3
extern "C" {
# 33
typedef __u_char u_char; 
# 34
typedef __u_short u_short; 
# 35
typedef __u_int u_int; 
# 36
typedef __u_long u_long; 
# 37
typedef __quad_t quad_t; 
# 38
typedef __u_quad_t u_quad_t; 
# 39
typedef __fsid_t fsid_t; 
# 44
typedef __loff_t loff_t; 
# 48
typedef __ino_t ino_t; 
# 55
typedef __ino64_t ino64_t; 
# 60
typedef __dev_t dev_t; 
# 65
typedef __gid_t gid_t; 
# 70
typedef __mode_t mode_t; 
# 75
typedef __nlink_t nlink_t; 
# 80
typedef __uid_t uid_t; 
# 86
typedef __off_t off_t; 
# 93
typedef __off64_t off64_t; 
# 98
typedef __pid_t pid_t; 
# 104
typedef __id_t id_t; 
# 109
typedef __ssize_t ssize_t; 
# 115
typedef __daddr_t daddr_t; 
# 116
typedef __caddr_t caddr_t; 
# 122
typedef __key_t key_t; 
# 59 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/time.h" 3
typedef __clock_t clock_t; 
# 75 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/time.h" 3
typedef __time_t time_t; 
# 91 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/time.h" 3
typedef __clockid_t clockid_t; 
# 103 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/time.h" 3
typedef __timer_t timer_t; 
# 136 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/sys/types.h" 3
typedef __useconds_t useconds_t; 
# 140
typedef __suseconds_t suseconds_t; 
# 150 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/sys/types.h" 3
typedef unsigned long ulong; 
# 151
typedef unsigned short ushort; 
# 152
typedef unsigned uint; 
# 194 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/sys/types.h" 3
typedef signed char int8_t __attribute((__mode__(__QI__))); 
# 195
typedef short int16_t __attribute((__mode__(__HI__))); 
# 196
typedef int int32_t __attribute((__mode__(__SI__))); 
# 197
typedef long int64_t __attribute((__mode__(__DI__))); 
# 200
typedef unsigned char u_int8_t __attribute((__mode__(__QI__))); 
# 201
typedef unsigned short u_int16_t __attribute((__mode__(__HI__))); 
# 202
typedef unsigned u_int32_t __attribute((__mode__(__SI__))); 
# 203
typedef unsigned long u_int64_t __attribute((__mode__(__DI__))); 
# 205
typedef long register_t __attribute((__mode__(__word__))); 
# 23 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/bits/sigset.h" 3
typedef int __sig_atomic_t; 
# 31
typedef 
# 29
struct { 
# 30
unsigned long __val[(1024) / ((8) * sizeof(unsigned long))]; 
# 31
} __sigset_t; 
# 37 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/sys/select.h" 3
typedef __sigset_t sigset_t; 
# 120 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/time.h" 3
struct timespec { 
# 122
__time_t tv_sec; 
# 123
__syscall_slong_t tv_nsec; 
# 124
}; 
# 30 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/bits/time.h" 3
struct timeval { 
# 32
__time_t tv_sec; 
# 33
__suseconds_t tv_usec; 
# 34
}; 
# 54 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/sys/select.h" 3
typedef long __fd_mask; 
# 75 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/sys/select.h" 3
typedef 
# 65
struct { 
# 69
__fd_mask fds_bits[1024 / (8 * ((int)sizeof(__fd_mask)))]; 
# 75
} fd_set; 
# 82
typedef __fd_mask fd_mask; 
# 96 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/sys/select.h" 3
extern "C" {
# 106 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/sys/select.h" 3
extern int select(int __nfds, fd_set *__restrict__ __readfds, fd_set *__restrict__ __writefds, fd_set *__restrict__ __exceptfds, timeval *__restrict__ __timeout); 
# 118 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/sys/select.h" 3
extern int pselect(int __nfds, fd_set *__restrict__ __readfds, fd_set *__restrict__ __writefds, fd_set *__restrict__ __exceptfds, const timespec *__restrict__ __timeout, const __sigset_t *__restrict__ __sigmask); 
# 131 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/sys/select.h" 3
}
# 29 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/sys/sysmacros.h" 3
extern "C" {
# 32
__extension__ extern unsigned gnu_dev_major(unsigned long long __dev) throw()
# 33
 __attribute((const)); 
# 35
__extension__ extern unsigned gnu_dev_minor(unsigned long long __dev) throw()
# 36
 __attribute((const)); 
# 38
__extension__ extern unsigned long long gnu_dev_makedev(unsigned __major, unsigned __minor) throw()
# 40
 __attribute((const)); 
# 63 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/sys/sysmacros.h" 3
}
# 228 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/sys/types.h" 3
typedef __blksize_t blksize_t; 
# 235
typedef __blkcnt_t blkcnt_t; 
# 239
typedef __fsblkcnt_t fsblkcnt_t; 
# 243
typedef __fsfilcnt_t fsfilcnt_t; 
# 262 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/sys/types.h" 3
typedef __blkcnt64_t blkcnt64_t; 
# 263
typedef __fsblkcnt64_t fsblkcnt64_t; 
# 264
typedef __fsfilcnt64_t fsfilcnt64_t; 
# 60 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/bits/pthreadtypes.h" 3
typedef unsigned long pthread_t; 
# 63
union pthread_attr_t { 
# 65
char __size[56]; 
# 66
long __align; 
# 67
}; 
# 69
typedef pthread_attr_t pthread_attr_t; 
# 79
typedef 
# 75
struct __pthread_internal_list { 
# 77
__pthread_internal_list *__prev; 
# 78
__pthread_internal_list *__next; 
# 79
} __pthread_list_t; 
# 128 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/bits/pthreadtypes.h" 3
typedef 
# 91 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/bits/pthreadtypes.h" 3
union { 
# 92
struct __pthread_mutex_s { 
# 94
int __lock; 
# 95
unsigned __count; 
# 96
int __owner; 
# 98
unsigned __nusers; 
# 102
int __kind; 
# 104
short __spins; 
# 105
short __elision; 
# 106
__pthread_list_t __list; 
# 125 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/bits/pthreadtypes.h" 3
} __data; 
# 126
char __size[40]; 
# 127
long __align; 
# 128
} pthread_mutex_t; 
# 134
typedef 
# 131
union { 
# 132
char __size[4]; 
# 133
int __align; 
# 134
} pthread_mutexattr_t; 
# 154
typedef 
# 140
union { 
# 142
struct { 
# 143
int __lock; 
# 144
unsigned __futex; 
# 145
__extension__ unsigned long long __total_seq; 
# 146
__extension__ unsigned long long __wakeup_seq; 
# 147
__extension__ unsigned long long __woken_seq; 
# 148
void *__mutex; 
# 149
unsigned __nwaiters; 
# 150
unsigned __broadcast_seq; 
# 151
} __data; 
# 152
char __size[48]; 
# 153
__extension__ long long __align; 
# 154
} pthread_cond_t; 
# 160
typedef 
# 157
union { 
# 158
char __size[4]; 
# 159
int __align; 
# 160
} pthread_condattr_t; 
# 164
typedef unsigned pthread_key_t; 
# 168
typedef int pthread_once_t; 
# 214 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/bits/pthreadtypes.h" 3
typedef 
# 175 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/bits/pthreadtypes.h" 3
union { 
# 178
struct { 
# 179
int __lock; 
# 180
unsigned __nr_readers; 
# 181
unsigned __readers_wakeup; 
# 182
unsigned __writer_wakeup; 
# 183
unsigned __nr_readers_queued; 
# 184
unsigned __nr_writers_queued; 
# 185
int __writer; 
# 186
int __shared; 
# 187
unsigned long __pad1; 
# 188
unsigned long __pad2; 
# 191
unsigned __flags; 
# 193
} __data; 
# 212 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/bits/pthreadtypes.h" 3
char __size[56]; 
# 213
long __align; 
# 214
} pthread_rwlock_t; 
# 220
typedef 
# 217
union { 
# 218
char __size[8]; 
# 219
long __align; 
# 220
} pthread_rwlockattr_t; 
# 226
typedef volatile int pthread_spinlock_t; 
# 235
typedef 
# 232
union { 
# 233
char __size[32]; 
# 234
long __align; 
# 235
} pthread_barrier_t; 
# 241
typedef 
# 238
union { 
# 239
char __size[4]; 
# 240
int __align; 
# 241
} pthread_barrierattr_t; 
# 273 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/sys/types.h" 3
}
# 321 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/stdlib.h" 3
extern long random() throw(); 
# 324
extern void srandom(unsigned __seed) throw(); 
# 330
extern char *initstate(unsigned __seed, char * __statebuf, size_t __statelen) throw()
# 331
 __attribute((__nonnull__(2))); 
# 335
extern char *setstate(char * __statebuf) throw() __attribute((__nonnull__(1))); 
# 343
struct random_data { 
# 345
int32_t *fptr; 
# 346
int32_t *rptr; 
# 347
int32_t *state; 
# 348
int rand_type; 
# 349
int rand_deg; 
# 350
int rand_sep; 
# 351
int32_t *end_ptr; 
# 352
}; 
# 354
extern int random_r(random_data *__restrict__ __buf, int32_t *__restrict__ __result) throw()
# 355
 __attribute((__nonnull__(1, 2))); 
# 357
extern int srandom_r(unsigned __seed, random_data * __buf) throw()
# 358
 __attribute((__nonnull__(2))); 
# 360
extern int initstate_r(unsigned __seed, char *__restrict__ __statebuf, size_t __statelen, random_data *__restrict__ __buf) throw()
# 363
 __attribute((__nonnull__(2, 4))); 
# 365
extern int setstate_r(char *__restrict__ __statebuf, random_data *__restrict__ __buf) throw()
# 367
 __attribute((__nonnull__(1, 2))); 
# 374
extern int rand() throw(); 
# 376
extern void srand(unsigned __seed) throw(); 
# 381
extern int rand_r(unsigned * __seed) throw(); 
# 389
extern double drand48() throw(); 
# 390
extern double erand48(unsigned short  __xsubi[3]) throw() __attribute((__nonnull__(1))); 
# 393
extern long lrand48() throw(); 
# 394
extern long nrand48(unsigned short  __xsubi[3]) throw()
# 395
 __attribute((__nonnull__(1))); 
# 398
extern long mrand48() throw(); 
# 399
extern long jrand48(unsigned short  __xsubi[3]) throw()
# 400
 __attribute((__nonnull__(1))); 
# 403
extern void srand48(long __seedval) throw(); 
# 404
extern unsigned short *seed48(unsigned short  __seed16v[3]) throw()
# 405
 __attribute((__nonnull__(1))); 
# 406
extern void lcong48(unsigned short  __param[7]) throw() __attribute((__nonnull__(1))); 
# 412
struct drand48_data { 
# 414
unsigned short __x[3]; 
# 415
unsigned short __old_x[3]; 
# 416
unsigned short __c; 
# 417
unsigned short __init; 
# 418
unsigned long long __a; 
# 419
}; 
# 422
extern int drand48_r(drand48_data *__restrict__ __buffer, double *__restrict__ __result) throw()
# 423
 __attribute((__nonnull__(1, 2))); 
# 424
extern int erand48_r(unsigned short  __xsubi[3], drand48_data *__restrict__ __buffer, double *__restrict__ __result) throw()
# 426
 __attribute((__nonnull__(1, 2))); 
# 429
extern int lrand48_r(drand48_data *__restrict__ __buffer, long *__restrict__ __result) throw()
# 431
 __attribute((__nonnull__(1, 2))); 
# 432
extern int nrand48_r(unsigned short  __xsubi[3], drand48_data *__restrict__ __buffer, long *__restrict__ __result) throw()
# 435
 __attribute((__nonnull__(1, 2))); 
# 438
extern int mrand48_r(drand48_data *__restrict__ __buffer, long *__restrict__ __result) throw()
# 440
 __attribute((__nonnull__(1, 2))); 
# 441
extern int jrand48_r(unsigned short  __xsubi[3], drand48_data *__restrict__ __buffer, long *__restrict__ __result) throw()
# 444
 __attribute((__nonnull__(1, 2))); 
# 447
extern int srand48_r(long __seedval, drand48_data * __buffer) throw()
# 448
 __attribute((__nonnull__(2))); 
# 450
extern int seed48_r(unsigned short  __seed16v[3], drand48_data * __buffer) throw()
# 451
 __attribute((__nonnull__(1, 2))); 
# 453
extern int lcong48_r(unsigned short  __param[7], drand48_data * __buffer) throw()
# 455
 __attribute((__nonnull__(1, 2))); 
# 465
extern void *malloc(size_t __size) throw() __attribute((__malloc__)); 
# 467
extern void *calloc(size_t __nmemb, size_t __size) throw()
# 468
 __attribute((__malloc__)); 
# 479
extern void *realloc(void * __ptr, size_t __size) throw()
# 480
 __attribute((__warn_unused_result__)); 
# 482
extern void free(void * __ptr) throw(); 
# 487
extern void cfree(void * __ptr) throw(); 
# 26 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/alloca.h" 3
extern "C" {
# 32
extern void *alloca(size_t __size) throw(); 
# 38
}
# 497 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/stdlib.h" 3
extern void *valloc(size_t __size) throw() __attribute((__malloc__)); 
# 502
extern int posix_memalign(void ** __memptr, size_t __alignment, size_t __size) throw()
# 503
 __attribute((__nonnull__(1))); 
# 508
extern void *aligned_alloc(size_t __alignment, size_t __size) throw()
# 509
 __attribute((__malloc__, __alloc_size__(2))); 
# 514
extern void abort() throw() __attribute((__noreturn__)); 
# 518
extern int atexit(void (* __func)(void)) throw() __attribute((__nonnull__(1))); 
# 523
extern "C++" int at_quick_exit(void (* __func)(void)) throw() __asm__("at_quick_exit")
# 524
 __attribute((__nonnull__(1))); 
# 534
extern int on_exit(void (* __func)(int __status, void * __arg), void * __arg) throw()
# 535
 __attribute((__nonnull__(1))); 
# 542
extern void exit(int __status) throw() __attribute((__noreturn__)); 
# 548
extern void quick_exit(int __status) throw() __attribute((__noreturn__)); 
# 556
extern void _Exit(int __status) throw() __attribute((__noreturn__)); 
# 563
extern char *getenv(const char * __name) throw() __attribute((__nonnull__(1))); 
# 569
extern char *secure_getenv(const char * __name) throw()
# 570
 __attribute((__nonnull__(1))); 
# 577
extern int putenv(char * __string) throw() __attribute((__nonnull__(1))); 
# 583
extern int setenv(const char * __name, const char * __value, int __replace) throw()
# 584
 __attribute((__nonnull__(2))); 
# 587
extern int unsetenv(const char * __name) throw() __attribute((__nonnull__(1))); 
# 594
extern int clearenv() throw(); 
# 605 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/stdlib.h" 3
extern char *mktemp(char * __template) throw() __attribute((__nonnull__(1))); 
# 619 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/stdlib.h" 3
extern int mkstemp(char * __template) __attribute((__nonnull__(1))); 
# 629 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/stdlib.h" 3
extern int mkstemp64(char * __template) __attribute((__nonnull__(1))); 
# 641 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/stdlib.h" 3
extern int mkstemps(char * __template, int __suffixlen) __attribute((__nonnull__(1))); 
# 651 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/stdlib.h" 3
extern int mkstemps64(char * __template, int __suffixlen)
# 652
 __attribute((__nonnull__(1))); 
# 662 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/stdlib.h" 3
extern char *mkdtemp(char * __template) throw() __attribute((__nonnull__(1))); 
# 673 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/stdlib.h" 3
extern int mkostemp(char * __template, int __flags) __attribute((__nonnull__(1))); 
# 683 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/stdlib.h" 3
extern int mkostemp64(char * __template, int __flags) __attribute((__nonnull__(1))); 
# 693 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/stdlib.h" 3
extern int mkostemps(char * __template, int __suffixlen, int __flags)
# 694
 __attribute((__nonnull__(1))); 
# 705 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/stdlib.h" 3
extern int mkostemps64(char * __template, int __suffixlen, int __flags)
# 706
 __attribute((__nonnull__(1))); 
# 716
extern int system(const char * __command); 
# 723
extern char *canonicalize_file_name(const char * __name) throw()
# 724
 __attribute((__nonnull__(1))); 
# 733 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/stdlib.h" 3
extern char *realpath(const char *__restrict__ __name, char *__restrict__ __resolved) throw(); 
# 741
typedef int (*__compar_fn_t)(const void *, const void *); 
# 744
typedef __compar_fn_t comparison_fn_t; 
# 748
typedef int (*__compar_d_fn_t)(const void *, const void *, void *); 
# 754
extern void *bsearch(const void * __key, const void * __base, size_t __nmemb, size_t __size, __compar_fn_t __compar)
# 756
 __attribute((__nonnull__(1, 2, 5))); 
# 760
extern void qsort(void * __base, size_t __nmemb, size_t __size, __compar_fn_t __compar)
# 761
 __attribute((__nonnull__(1, 4))); 
# 763
extern void qsort_r(void * __base, size_t __nmemb, size_t __size, __compar_d_fn_t __compar, void * __arg)
# 765
 __attribute((__nonnull__(1, 4))); 
# 770
extern int abs(int __x) throw() __attribute((const)); 
# 771
extern long labs(long __x) throw() __attribute((const)); 
# 775
__extension__ extern long long llabs(long long __x) throw()
# 776
 __attribute((const)); 
# 784
extern div_t div(int __numer, int __denom) throw()
# 785
 __attribute((const)); 
# 786
extern ldiv_t ldiv(long __numer, long __denom) throw()
# 787
 __attribute((const)); 
# 792
__extension__ extern lldiv_t lldiv(long long __numer, long long __denom) throw()
# 794
 __attribute((const)); 
# 807 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/stdlib.h" 3
extern char *ecvt(double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign) throw()
# 808
 __attribute((__nonnull__(3, 4))); 
# 813
extern char *fcvt(double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign) throw()
# 814
 __attribute((__nonnull__(3, 4))); 
# 819
extern char *gcvt(double __value, int __ndigit, char * __buf) throw()
# 820
 __attribute((__nonnull__(3))); 
# 825
extern char *qecvt(long double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign) throw()
# 827
 __attribute((__nonnull__(3, 4))); 
# 828
extern char *qfcvt(long double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign) throw()
# 830
 __attribute((__nonnull__(3, 4))); 
# 831
extern char *qgcvt(long double __value, int __ndigit, char * __buf) throw()
# 832
 __attribute((__nonnull__(3))); 
# 837
extern int ecvt_r(double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign, char *__restrict__ __buf, size_t __len) throw()
# 839
 __attribute((__nonnull__(3, 4, 5))); 
# 840
extern int fcvt_r(double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign, char *__restrict__ __buf, size_t __len) throw()
# 842
 __attribute((__nonnull__(3, 4, 5))); 
# 844
extern int qecvt_r(long double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign, char *__restrict__ __buf, size_t __len) throw()
# 847
 __attribute((__nonnull__(3, 4, 5))); 
# 848
extern int qfcvt_r(long double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign, char *__restrict__ __buf, size_t __len) throw()
# 851
 __attribute((__nonnull__(3, 4, 5))); 
# 859
extern int mblen(const char * __s, size_t __n) throw(); 
# 862
extern int mbtowc(wchar_t *__restrict__ __pwc, const char *__restrict__ __s, size_t __n) throw(); 
# 866
extern int wctomb(char * __s, wchar_t __wchar) throw(); 
# 870
extern size_t mbstowcs(wchar_t *__restrict__ __pwcs, const char *__restrict__ __s, size_t __n) throw(); 
# 873
extern size_t wcstombs(char *__restrict__ __s, const wchar_t *__restrict__ __pwcs, size_t __n) throw(); 
# 884
extern int rpmatch(const char * __response) throw() __attribute((__nonnull__(1))); 
# 895 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/stdlib.h" 3
extern int getsubopt(char **__restrict__ __optionp, char *const *__restrict__ __tokens, char **__restrict__ __valuep) throw()
# 898
 __attribute((__nonnull__(1, 2, 3))); 
# 904
extern void setkey(const char * __key) throw() __attribute((__nonnull__(1))); 
# 912
extern int posix_openpt(int __oflag); 
# 920
extern int grantpt(int __fd) throw(); 
# 924
extern int unlockpt(int __fd) throw(); 
# 929
extern char *ptsname(int __fd) throw(); 
# 936
extern int ptsname_r(int __fd, char * __buf, size_t __buflen) throw()
# 937
 __attribute((__nonnull__(2))); 
# 940
extern int getpt(); 
# 947
extern int getloadavg(double  __loadavg[], int __nelem) throw()
# 948
 __attribute((__nonnull__(1))); 
# 964 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/stdlib.h" 3
}
# 46 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/std_abs.h" 3
extern "C++" {
# 48
namespace std __attribute((__visibility__("default"))) { 
# 52
using ::abs;
# 56
inline long abs(long __i) { return __builtin_labs(__i); } 
# 61
inline long long abs(long long __x) { return __builtin_llabs(__x); } 
# 71 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/std_abs.h" 3
constexpr double abs(double __x) 
# 72
{ return __builtin_fabs(__x); } 
# 75
constexpr float abs(float __x) 
# 76
{ return __builtin_fabsf(__x); } 
# 79
constexpr long double abs(long double __x) 
# 80
{ return __builtin_fabsl(__x); } 
# 85
__extension__ constexpr __int128 abs(__int128 __x) { return (__x >= (0)) ? __x : (-__x); } 
# 103 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/std_abs.h" 3
__extension__ constexpr __float128 abs(__float128 __x) 
# 104
{ return (__x < (0)) ? -__x : __x; } 
# 108
}
# 109
}
# 121 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/cstdlib" 3
extern "C++" {
# 123
namespace std __attribute((__visibility__("default"))) { 
# 127
using ::div_t;
# 128
using ::ldiv_t;
# 130
using ::abort;
# 132
using ::aligned_alloc;
# 134
using ::atexit;
# 137
using ::at_quick_exit;
# 140
using ::atof;
# 141
using ::atoi;
# 142
using ::atol;
# 143
using ::bsearch;
# 144
using ::calloc;
# 145
using ::div;
# 146
using ::exit;
# 147
using ::free;
# 148
using ::getenv;
# 149
using ::labs;
# 150
using ::ldiv;
# 151
using ::malloc;
# 153
using ::mblen;
# 154
using ::mbstowcs;
# 155
using ::mbtowc;
# 157
using ::qsort;
# 160
using ::quick_exit;
# 163
using ::rand;
# 164
using ::realloc;
# 165
using ::srand;
# 166
using ::strtod;
# 167
using ::strtol;
# 168
using ::strtoul;
# 169
using ::system;
# 171
using ::wcstombs;
# 172
using ::wctomb;
# 177
inline ldiv_t div(long __i, long __j) { return ldiv(__i, __j); } 
# 182
}
# 195 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/cstdlib" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 200
using ::lldiv_t;
# 206
using ::_Exit;
# 210
using ::llabs;
# 213
inline lldiv_t div(long long __n, long long __d) 
# 214
{ lldiv_t __q; (__q.quot) = (__n / __d); (__q.rem) = (__n % __d); return __q; } 
# 216
using ::lldiv;
# 227 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/cstdlib" 3
using ::atoll;
# 228
using ::strtoll;
# 229
using ::strtoull;
# 231
using ::strtof;
# 232
using ::strtold;
# 235
}
# 237
namespace std { 
# 240
using __gnu_cxx::lldiv_t;
# 242
using __gnu_cxx::_Exit;
# 244
using __gnu_cxx::llabs;
# 245
using __gnu_cxx::div;
# 246
using __gnu_cxx::lldiv;
# 248
using __gnu_cxx::atoll;
# 249
using __gnu_cxx::strtof;
# 250
using __gnu_cxx::strtoll;
# 251
using __gnu_cxx::strtoull;
# 252
using __gnu_cxx::strtold;
# 253
}
# 257
}
# 38 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/stdlib.h" 3
using std::abort;
# 39
using std::atexit;
# 40
using std::exit;
# 43
using std::at_quick_exit;
# 46
using std::quick_exit;
# 54
using std::abs;
# 55
using std::atof;
# 56
using std::atoi;
# 57
using std::atol;
# 58
using std::bsearch;
# 59
using std::calloc;
# 60
using std::div;
# 61
using std::free;
# 62
using std::getenv;
# 63
using std::labs;
# 64
using std::ldiv;
# 65
using std::malloc;
# 67
using std::mblen;
# 68
using std::mbstowcs;
# 69
using std::mbtowc;
# 71
using std::qsort;
# 72
using std::rand;
# 73
using std::realloc;
# 74
using std::srand;
# 75
using std::strtod;
# 76
using std::strtol;
# 77
using std::strtoul;
# 78
using std::system;
# 80
using std::wcstombs;
# 81
using std::wctomb;
# 180 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_device_runtime_api.h"
extern "C" {
# 187
__attribute__((unused)) extern cudaError_t __cudaDeviceSynchronizeDeprecationAvoidance(); 
# 236 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_device_runtime_api.h"
__attribute__((unused)) extern cudaError_t __cudaCDP2DeviceGetAttribute(int * value, cudaDeviceAttr attr, int device); 
# 237
__attribute__((unused)) extern cudaError_t __cudaCDP2DeviceGetLimit(size_t * pValue, cudaLimit limit); 
# 238
__attribute__((unused)) extern cudaError_t __cudaCDP2DeviceGetCacheConfig(cudaFuncCache * pCacheConfig); 
# 239
__attribute__((unused)) extern cudaError_t __cudaCDP2DeviceGetSharedMemConfig(cudaSharedMemConfig * pConfig); 
# 240
__attribute__((unused)) extern cudaError_t __cudaCDP2GetLastError(); 
# 241
__attribute__((unused)) extern cudaError_t __cudaCDP2PeekAtLastError(); 
# 242
__attribute__((unused)) extern const char *__cudaCDP2GetErrorString(cudaError_t error); 
# 243
__attribute__((unused)) extern const char *__cudaCDP2GetErrorName(cudaError_t error); 
# 244
__attribute__((unused)) extern cudaError_t __cudaCDP2GetDeviceCount(int * count); 
# 245
__attribute__((unused)) extern cudaError_t __cudaCDP2GetDevice(int * device); 
# 246
__attribute__((unused)) extern cudaError_t __cudaCDP2StreamCreateWithFlags(cudaStream_t * pStream, unsigned flags); 
# 247
__attribute__((unused)) extern cudaError_t __cudaCDP2StreamDestroy(cudaStream_t stream); 
# 248
__attribute__((unused)) extern cudaError_t __cudaCDP2StreamWaitEvent(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
# 249
__attribute__((unused)) extern cudaError_t __cudaCDP2StreamWaitEvent_ptsz(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
# 250
__attribute__((unused)) extern cudaError_t __cudaCDP2EventCreateWithFlags(cudaEvent_t * event, unsigned flags); 
# 251
__attribute__((unused)) extern cudaError_t __cudaCDP2EventRecord(cudaEvent_t event, cudaStream_t stream); 
# 252
__attribute__((unused)) extern cudaError_t __cudaCDP2EventRecord_ptsz(cudaEvent_t event, cudaStream_t stream); 
# 253
__attribute__((unused)) extern cudaError_t __cudaCDP2EventRecordWithFlags(cudaEvent_t event, cudaStream_t stream, unsigned flags); 
# 254
__attribute__((unused)) extern cudaError_t __cudaCDP2EventRecordWithFlags_ptsz(cudaEvent_t event, cudaStream_t stream, unsigned flags); 
# 255
__attribute__((unused)) extern cudaError_t __cudaCDP2EventDestroy(cudaEvent_t event); 
# 256
__attribute__((unused)) extern cudaError_t __cudaCDP2FuncGetAttributes(cudaFuncAttributes * attr, const void * func); 
# 257
__attribute__((unused)) extern cudaError_t __cudaCDP2Free(void * devPtr); 
# 258
__attribute__((unused)) extern cudaError_t __cudaCDP2Malloc(void ** devPtr, size_t size); 
# 259
__attribute__((unused)) extern cudaError_t __cudaCDP2MemcpyAsync(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream); 
# 260
__attribute__((unused)) extern cudaError_t __cudaCDP2MemcpyAsync_ptsz(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream); 
# 261
__attribute__((unused)) extern cudaError_t __cudaCDP2Memcpy2DAsync(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream); 
# 262
__attribute__((unused)) extern cudaError_t __cudaCDP2Memcpy2DAsync_ptsz(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream); 
# 263
__attribute__((unused)) extern cudaError_t __cudaCDP2Memcpy3DAsync(const cudaMemcpy3DParms * p, cudaStream_t stream); 
# 264
__attribute__((unused)) extern cudaError_t __cudaCDP2Memcpy3DAsync_ptsz(const cudaMemcpy3DParms * p, cudaStream_t stream); 
# 265
__attribute__((unused)) extern cudaError_t __cudaCDP2MemsetAsync(void * devPtr, int value, size_t count, cudaStream_t stream); 
# 266
__attribute__((unused)) extern cudaError_t __cudaCDP2MemsetAsync_ptsz(void * devPtr, int value, size_t count, cudaStream_t stream); 
# 267
__attribute__((unused)) extern cudaError_t __cudaCDP2Memset2DAsync(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream); 
# 268
__attribute__((unused)) extern cudaError_t __cudaCDP2Memset2DAsync_ptsz(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream); 
# 269
__attribute__((unused)) extern cudaError_t __cudaCDP2Memset3DAsync(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream); 
# 270
__attribute__((unused)) extern cudaError_t __cudaCDP2Memset3DAsync_ptsz(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream); 
# 271
__attribute__((unused)) extern cudaError_t __cudaCDP2RuntimeGetVersion(int * runtimeVersion); 
# 272
__attribute__((unused)) extern void *__cudaCDP2GetParameterBuffer(size_t alignment, size_t size); 
# 273
__attribute__((unused)) extern void *__cudaCDP2GetParameterBufferV2(void * func, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize); 
# 274
__attribute__((unused)) extern cudaError_t __cudaCDP2LaunchDevice_ptsz(void * func, void * parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream); 
# 275
__attribute__((unused)) extern cudaError_t __cudaCDP2LaunchDeviceV2_ptsz(void * parameterBuffer, cudaStream_t stream); 
# 276
__attribute__((unused)) extern cudaError_t __cudaCDP2LaunchDevice(void * func, void * parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream); 
# 277
__attribute__((unused)) extern cudaError_t __cudaCDP2LaunchDeviceV2(void * parameterBuffer, cudaStream_t stream); 
# 278
__attribute__((unused)) extern cudaError_t __cudaCDP2OccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, const void * func, int blockSize, size_t dynamicSmemSize); 
# 279
__attribute__((unused)) extern cudaError_t __cudaCDP2OccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, const void * func, int blockSize, size_t dynamicSmemSize, unsigned flags); 
# 282
extern cudaError_t cudaGraphLaunch(cudaGraphExec_t graphExec, cudaStream_t stream); 
# 301 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_device_runtime_api.h"
__attribute__((unused)) static inline cudaGraphExec_t cudaGetCurrentGraphExec() 
# 302
{int volatile ___ = 1;
# 306
::exit(___);}
#if 0
# 302
{ 
# 303
unsigned long long current_graph_exec; 
# 304
__asm__("mov.u64 %0, %%current_graph_exec;" : "=l" (current_graph_exec) :); 
# 305
return (cudaGraphExec_t)current_graph_exec; 
# 306
} 
#endif
# 324 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_device_runtime_api.h"
__attribute__((unused)) static inline void cudaTriggerProgrammaticLaunchCompletion() 
# 325
{int volatile ___ = 1;
# 327
::exit(___);}
#if 0
# 325
{ 
# 326
__asm__ volatile("griddepcontrol.launch_dependents;" : :); 
# 327
} 
#endif
# 340 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_device_runtime_api.h"
__attribute__((unused)) static inline void cudaGridDependencySynchronize() 
# 341
{int volatile ___ = 1;
# 343
::exit(___);}
#if 0
# 341
{ 
# 342
__asm__ volatile("griddepcontrol.wait;" : : : "memory"); 
# 343
} 
#endif
# 352 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_device_runtime_api.h"
__attribute__((unused)) extern void cudaGraphSetConditional(cudaGraphConditionalHandle handle, unsigned value); 
# 355
__attribute__((unused)) extern unsigned long long cudaCGGetIntrinsicHandle(cudaCGScope scope); 
# 356
__attribute__((unused)) extern cudaError_t cudaCGSynchronize(unsigned long long handle, unsigned flags); 
# 357
__attribute__((unused)) extern cudaError_t cudaCGSynchronizeGrid(unsigned long long handle, unsigned flags); 
# 358
__attribute__((unused)) extern cudaError_t cudaCGGetSize(unsigned * numThreads, unsigned * numGrids, unsigned long long handle); 
# 359
__attribute__((unused)) extern cudaError_t cudaCGGetRank(unsigned * threadRank, unsigned * gridRank, unsigned long long handle); 
# 581 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_device_runtime_api.h"
__attribute__((unused)) static inline void *cudaGetParameterBuffer(size_t alignment, size_t size) 
# 582
{int volatile ___ = 1;(void)alignment;(void)size;
# 584
::exit(___);}
#if 0
# 582
{ 
# 583
return __cudaCDP2GetParameterBuffer(alignment, size); 
# 584
} 
#endif
# 591 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_device_runtime_api.h"
__attribute__((unused)) static inline void *cudaGetParameterBufferV2(void *func, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize) 
# 592
{int volatile ___ = 1;(void)func;(void)gridDimension;(void)blockDimension;(void)sharedMemSize;
# 594
::exit(___);}
#if 0
# 592
{ 
# 593
return __cudaCDP2GetParameterBufferV2(func, gridDimension, blockDimension, sharedMemSize); 
# 594
} 
#endif
# 601 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_device_runtime_api.h"
__attribute__((unused)) static inline cudaError_t cudaLaunchDevice_ptsz(void *func, void *parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream) 
# 602
{int volatile ___ = 1;(void)func;(void)parameterBuffer;(void)gridDimension;(void)blockDimension;(void)sharedMemSize;(void)stream;
# 604
::exit(___);}
#if 0
# 602
{ 
# 603
return __cudaCDP2LaunchDevice_ptsz(func, parameterBuffer, gridDimension, blockDimension, sharedMemSize, stream); 
# 604
} 
#endif
# 606 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_device_runtime_api.h"
__attribute__((unused)) static inline cudaError_t cudaLaunchDeviceV2_ptsz(void *parameterBuffer, cudaStream_t stream) 
# 607
{int volatile ___ = 1;(void)parameterBuffer;(void)stream;
# 609
::exit(___);}
#if 0
# 607
{ 
# 608
return __cudaCDP2LaunchDeviceV2_ptsz(parameterBuffer, stream); 
# 609
} 
#endif
# 667 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_device_runtime_api.h"
__attribute__((unused)) static inline cudaError_t cudaLaunchDevice(void *func, void *parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream) 
# 668
{int volatile ___ = 1;(void)func;(void)parameterBuffer;(void)gridDimension;(void)blockDimension;(void)sharedMemSize;(void)stream;
# 670
::exit(___);}
#if 0
# 668
{ 
# 669
return __cudaCDP2LaunchDevice(func, parameterBuffer, gridDimension, blockDimension, sharedMemSize, stream); 
# 670
} 
#endif
# 672 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_device_runtime_api.h"
__attribute__((unused)) static inline cudaError_t cudaLaunchDeviceV2(void *parameterBuffer, cudaStream_t stream) 
# 673
{int volatile ___ = 1;(void)parameterBuffer;(void)stream;
# 675
::exit(___);}
#if 0
# 673
{ 
# 674
return __cudaCDP2LaunchDeviceV2(parameterBuffer, stream); 
# 675
} 
#endif
# 729 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_device_runtime_api.h"
}
# 731
template< class T> static inline cudaError_t cudaMalloc(T ** devPtr, size_t size); 
# 732
template< class T> static inline cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * attr, T * entry); 
# 733
template< class T> static inline cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, T func, int blockSize, size_t dynamicSmemSize); 
# 734
template< class T> static inline cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, T func, int blockSize, size_t dynamicSmemSize, unsigned flags); 
# 279 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern "C" {
# 319 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceReset(); 
# 341 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceSynchronize(); 
# 427 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceSetLimit(cudaLimit limit, size_t value); 
# 463 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetLimit(size_t * pValue, cudaLimit limit); 
# 486 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetTexture1DLinearMaxWidth(size_t * maxWidthInElements, const cudaChannelFormatDesc * fmtDesc, int device); 
# 520 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetCacheConfig(cudaFuncCache * pCacheConfig); 
# 557 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetStreamPriorityRange(int * leastPriority, int * greatestPriority); 
# 601 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceSetCacheConfig(cudaFuncCache cacheConfig); 
# 632 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetSharedMemConfig(cudaSharedMemConfig * pConfig); 
# 676 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceSetSharedMemConfig(cudaSharedMemConfig config); 
# 703 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetByPCIBusId(int * device, const char * pciBusId); 
# 733 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetPCIBusId(char * pciBusId, int len, int device); 
# 783 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaIpcGetEventHandle(cudaIpcEventHandle_t * handle, cudaEvent_t event); 
# 826 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaIpcOpenEventHandle(cudaEvent_t * event, cudaIpcEventHandle_t handle); 
# 870 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaIpcGetMemHandle(cudaIpcMemHandle_t * handle, void * devPtr); 
# 936 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaIpcOpenMemHandle(void ** devPtr, cudaIpcMemHandle_t handle, unsigned flags); 
# 974 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaIpcCloseMemHandle(void * devPtr); 
# 1006 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceFlushGPUDirectRDMAWrites(cudaFlushGPUDirectRDMAWritesTarget target, cudaFlushGPUDirectRDMAWritesScope scope); 
# 1049 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaThreadExit(); 
# 1075 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaThreadSynchronize(); 
# 1124 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaThreadSetLimit(cudaLimit limit, size_t value); 
# 1157 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaThreadGetLimit(size_t * pValue, cudaLimit limit); 
# 1193 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaThreadGetCacheConfig(cudaFuncCache * pCacheConfig); 
# 1240 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaThreadSetCacheConfig(cudaFuncCache cacheConfig); 
# 1305 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGetLastError(); 
# 1356 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaPeekAtLastError(); 
# 1372 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern const char *cudaGetErrorName(cudaError_t error); 
# 1388 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern const char *cudaGetErrorString(cudaError_t error); 
# 1417 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGetDeviceCount(int * count); 
# 1722 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGetDeviceProperties_v2(cudaDeviceProp * prop, int device); 
# 1924 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetAttribute(int * value, cudaDeviceAttr attr, int device); 
# 1942 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetDefaultMemPool(cudaMemPool_t * memPool, int device); 
# 1966 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceSetMemPool(int device, cudaMemPool_t memPool); 
# 1986 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetMemPool(cudaMemPool_t * memPool, int device); 
# 2048 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetNvSciSyncAttributes(void * nvSciSyncAttrList, int device, int flags); 
# 2088 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetP2PAttribute(int * value, cudaDeviceP2PAttr attr, int srcDevice, int dstDevice); 
# 2110 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaChooseDevice(int * device, const cudaDeviceProp * prop); 
# 2139 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaInitDevice(int device, unsigned deviceFlags, unsigned flags); 
# 2185 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaSetDevice(int device); 
# 2207 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGetDevice(int * device); 
# 2238 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaSetValidDevices(int * device_arr, int len); 
# 2308 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaSetDeviceFlags(unsigned flags); 
# 2353 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGetDeviceFlags(unsigned * flags); 
# 2393 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaStreamCreate(cudaStream_t * pStream); 
# 2425 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaStreamCreateWithFlags(cudaStream_t * pStream, unsigned flags); 
# 2473 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaStreamCreateWithPriority(cudaStream_t * pStream, unsigned flags, int priority); 
# 2500 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaStreamGetPriority(cudaStream_t hStream, int * priority); 
# 2525 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaStreamGetFlags(cudaStream_t hStream, unsigned * flags); 
# 2562 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaStreamGetId(cudaStream_t hStream, unsigned long long * streamId); 
# 2577 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaCtxResetPersistingL2Cache(); 
# 2597 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaStreamCopyAttributes(cudaStream_t dst, cudaStream_t src); 
# 2618 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaStreamGetAttribute(cudaStream_t hStream, cudaLaunchAttributeID attr, cudaLaunchAttributeValue * value_out); 
# 2642 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaStreamSetAttribute(cudaStream_t hStream, cudaLaunchAttributeID attr, const cudaLaunchAttributeValue * value); 
# 2676 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaStreamDestroy(cudaStream_t stream); 
# 2707 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaStreamWaitEvent(cudaStream_t stream, cudaEvent_t event, unsigned flags = 0); 
# 2715
typedef void (*cudaStreamCallback_t)(cudaStream_t stream, cudaError_t status, void * userData); 
# 2782 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaStreamAddCallback(cudaStream_t stream, cudaStreamCallback_t callback, void * userData, unsigned flags); 
# 2806 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaStreamSynchronize(cudaStream_t stream); 
# 2831 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaStreamQuery(cudaStream_t stream); 
# 2915 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaStreamAttachMemAsync(cudaStream_t stream, void * devPtr, size_t length = 0, unsigned flags = 4); 
# 2954 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaStreamBeginCapture(cudaStream_t stream, cudaStreamCaptureMode mode); 
# 2995 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaStreamBeginCaptureToGraph(cudaStream_t stream, cudaGraph_t graph, const cudaGraphNode_t * dependencies, const cudaGraphEdgeData * dependencyData, size_t numDependencies, cudaStreamCaptureMode mode); 
# 3046 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaThreadExchangeStreamCaptureMode(cudaStreamCaptureMode * mode); 
# 3075 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaStreamEndCapture(cudaStream_t stream, cudaGraph_t * pGraph); 
# 3113 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaStreamIsCapturing(cudaStream_t stream, cudaStreamCaptureStatus * pCaptureStatus); 
# 3162 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaStreamGetCaptureInfo_v2(cudaStream_t stream, cudaStreamCaptureStatus * captureStatus_out, unsigned long long * id_out = 0, cudaGraph_t * graph_out = 0, const cudaGraphNode_t ** dependencies_out = 0, size_t * numDependencies_out = 0); 
# 3221 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaStreamGetCaptureInfo_v3(cudaStream_t stream, cudaStreamCaptureStatus * captureStatus_out, unsigned long long * id_out = 0, cudaGraph_t * graph_out = 0, const cudaGraphNode_t ** dependencies_out = 0, const cudaGraphEdgeData ** edgeData_out = 0, size_t * numDependencies_out = 0); 
# 3261 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaStreamUpdateCaptureDependencies(cudaStream_t stream, cudaGraphNode_t * dependencies, size_t numDependencies, unsigned flags = 0); 
# 3296 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaStreamUpdateCaptureDependencies_v2(cudaStream_t stream, cudaGraphNode_t * dependencies, const cudaGraphEdgeData * dependencyData, size_t numDependencies, unsigned flags = 0); 
# 3333 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaEventCreate(cudaEvent_t * event); 
# 3370 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaEventCreateWithFlags(cudaEvent_t * event, unsigned flags); 
# 3411 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaEventRecord(cudaEvent_t event, cudaStream_t stream = 0); 
# 3459 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaEventRecordWithFlags(cudaEvent_t event, cudaStream_t stream = 0, unsigned flags = 0); 
# 3492 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaEventQuery(cudaEvent_t event); 
# 3523 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaEventSynchronize(cudaEvent_t event); 
# 3553 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaEventDestroy(cudaEvent_t event); 
# 3598 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaEventElapsedTime(float * ms, cudaEvent_t start, cudaEvent_t end); 
# 3779 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaImportExternalMemory(cudaExternalMemory_t * extMem_out, const cudaExternalMemoryHandleDesc * memHandleDesc); 
# 3834 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaExternalMemoryGetMappedBuffer(void ** devPtr, cudaExternalMemory_t extMem, const cudaExternalMemoryBufferDesc * bufferDesc); 
# 3894 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaExternalMemoryGetMappedMipmappedArray(cudaMipmappedArray_t * mipmap, cudaExternalMemory_t extMem, const cudaExternalMemoryMipmappedArrayDesc * mipmapDesc); 
# 3918 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaDestroyExternalMemory(cudaExternalMemory_t extMem); 
# 4072 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaImportExternalSemaphore(cudaExternalSemaphore_t * extSem_out, const cudaExternalSemaphoreHandleDesc * semHandleDesc); 
# 4155 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaSignalExternalSemaphoresAsync_v2(const cudaExternalSemaphore_t * extSemArray, const cudaExternalSemaphoreSignalParams * paramsArray, unsigned numExtSems, cudaStream_t stream = 0); 
# 4231 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaWaitExternalSemaphoresAsync_v2(const cudaExternalSemaphore_t * extSemArray, const cudaExternalSemaphoreWaitParams * paramsArray, unsigned numExtSems, cudaStream_t stream = 0); 
# 4254 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaDestroyExternalSemaphore(cudaExternalSemaphore_t extSem); 
# 4321 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaLaunchKernel(const void * func, dim3 gridDim, dim3 blockDim, void ** args, size_t sharedMem, cudaStream_t stream); 
# 4383 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaLaunchKernelExC(const cudaLaunchConfig_t * config, const void * func, void ** args); 
# 4440 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaLaunchCooperativeKernel(const void * func, dim3 gridDim, dim3 blockDim, void ** args, size_t sharedMem, cudaStream_t stream); 
# 4541 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaLaunchCooperativeKernelMultiDevice(cudaLaunchParams * launchParamsList, unsigned numDevices, unsigned flags = 0); 
# 4586 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaFuncSetCacheConfig(const void * func, cudaFuncCache cacheConfig); 
# 4641 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaFuncSetSharedMemConfig(const void * func, cudaSharedMemConfig config); 
# 4674 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * attr, const void * func); 
# 4711 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaFuncSetAttribute(const void * func, cudaFuncAttribute attr, int value); 
# 4735 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaFuncGetName(const char ** name, const void * func); 
# 4759 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaSetDoubleForDevice(double * d); 
# 4783 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaSetDoubleForHost(double * d); 
# 4849 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaLaunchHostFunc(cudaStream_t stream, cudaHostFn_t fn, void * userData); 
# 4906 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, const void * func, int blockSize, size_t dynamicSMemSize); 
# 4935 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaOccupancyAvailableDynamicSMemPerBlock(size_t * dynamicSmemSize, const void * func, int numBlocks, int blockSize); 
# 4980 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, const void * func, int blockSize, size_t dynamicSMemSize, unsigned flags); 
# 5015 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaOccupancyMaxPotentialClusterSize(int * clusterSize, const void * func, const cudaLaunchConfig_t * launchConfig); 
# 5054 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaOccupancyMaxActiveClusters(int * numClusters, const void * func, const cudaLaunchConfig_t * launchConfig); 
# 5174 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMallocManaged(void ** devPtr, size_t size, unsigned flags = 1); 
# 5207 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMalloc(void ** devPtr, size_t size); 
# 5244 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMallocHost(void ** ptr, size_t size); 
# 5287 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMallocPitch(void ** devPtr, size_t * pitch, size_t width, size_t height); 
# 5339 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMallocArray(cudaArray_t * array, const cudaChannelFormatDesc * desc, size_t width, size_t height = 0, unsigned flags = 0); 
# 5377 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaFree(void * devPtr); 
# 5400 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaFreeHost(void * ptr); 
# 5423 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaFreeArray(cudaArray_t array); 
# 5446 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaFreeMipmappedArray(cudaMipmappedArray_t mipmappedArray); 
# 5512 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaHostAlloc(void ** pHost, size_t size, unsigned flags); 
# 5609 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaHostRegister(void * ptr, size_t size, unsigned flags); 
# 5632 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaHostUnregister(void * ptr); 
# 5677 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaHostGetDevicePointer(void ** pDevice, void * pHost, unsigned flags); 
# 5699 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaHostGetFlags(unsigned * pFlags, void * pHost); 
# 5738 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMalloc3D(cudaPitchedPtr * pitchedDevPtr, cudaExtent extent); 
# 5883 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMalloc3DArray(cudaArray_t * array, const cudaChannelFormatDesc * desc, cudaExtent extent, unsigned flags = 0); 
# 6028 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMallocMipmappedArray(cudaMipmappedArray_t * mipmappedArray, const cudaChannelFormatDesc * desc, cudaExtent extent, unsigned numLevels, unsigned flags = 0); 
# 6061 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGetMipmappedArrayLevel(cudaArray_t * levelArray, cudaMipmappedArray_const_t mipmappedArray, unsigned level); 
# 6166 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy3D(const cudaMemcpy3DParms * p); 
# 6198 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy3DPeer(const cudaMemcpy3DPeerParms * p); 
# 6316 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms * p, cudaStream_t stream = 0); 
# 6343 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy3DPeerAsync(const cudaMemcpy3DPeerParms * p, cudaStream_t stream = 0); 
# 6377 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemGetInfo(size_t * free, size_t * total); 
# 6403 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaArrayGetInfo(cudaChannelFormatDesc * desc, cudaExtent * extent, unsigned * flags, cudaArray_t array); 
# 6432 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaArrayGetPlane(cudaArray_t * pPlaneArray, cudaArray_t hArray, unsigned planeIdx); 
# 6455 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaArrayGetMemoryRequirements(cudaArrayMemoryRequirements * memoryRequirements, cudaArray_t array, int device); 
# 6479 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMipmappedArrayGetMemoryRequirements(cudaArrayMemoryRequirements * memoryRequirements, cudaMipmappedArray_t mipmap, int device); 
# 6507 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaArrayGetSparseProperties(cudaArraySparseProperties * sparseProperties, cudaArray_t array); 
# 6537 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMipmappedArrayGetSparseProperties(cudaArraySparseProperties * sparseProperties, cudaMipmappedArray_t mipmap); 
# 6582 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy(void * dst, const void * src, size_t count, cudaMemcpyKind kind); 
# 6617 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyPeer(void * dst, int dstDevice, const void * src, int srcDevice, size_t count); 
# 6666 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2D(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind); 
# 6716 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2DToArray(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind); 
# 6766 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2DFromArray(void * dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, cudaMemcpyKind kind); 
# 6813 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2DArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t width, size_t height, cudaMemcpyKind kind = cudaMemcpyDeviceToDevice); 
# 6856 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyToSymbol(const void * symbol, const void * src, size_t count, size_t offset = 0, cudaMemcpyKind kind = cudaMemcpyHostToDevice); 
# 6899 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyFromSymbol(void * dst, const void * symbol, size_t count, size_t offset = 0, cudaMemcpyKind kind = cudaMemcpyDeviceToHost); 
# 6956 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyAsync(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 6991 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyPeerAsync(void * dst, int dstDevice, const void * src, int srcDevice, size_t count, cudaStream_t stream = 0); 
# 7054 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2DAsync(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 7112 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2DToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 7169 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2DFromArrayAsync(void * dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 7220 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyToSymbolAsync(const void * symbol, const void * src, size_t count, size_t offset, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 7271 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyFromSymbolAsync(void * dst, const void * symbol, size_t count, size_t offset, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 7300 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemset(void * devPtr, int value, size_t count); 
# 7334 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemset2D(void * devPtr, size_t pitch, int value, size_t width, size_t height); 
# 7380 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemset3D(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent); 
# 7416 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemsetAsync(void * devPtr, int value, size_t count, cudaStream_t stream = 0); 
# 7457 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemset2DAsync(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream = 0); 
# 7510 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemset3DAsync(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream = 0); 
# 7538 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGetSymbolAddress(void ** devPtr, const void * symbol); 
# 7565 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGetSymbolSize(size_t * size, const void * symbol); 
# 7635 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemPrefetchAsync(const void * devPtr, size_t count, int dstDevice, cudaStream_t stream = 0); 
# 7637
extern cudaError_t cudaMemPrefetchAsync_v2(const void * devPtr, size_t count, cudaMemLocation location, unsigned flags, cudaStream_t stream = 0); 
# 7751 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemAdvise(const void * devPtr, size_t count, cudaMemoryAdvise advice, int device); 
# 7874 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemAdvise_v2(const void * devPtr, size_t count, cudaMemoryAdvise advice, cudaMemLocation location); 
# 7956 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemRangeGetAttribute(void * data, size_t dataSize, cudaMemRangeAttribute attribute, const void * devPtr, size_t count); 
# 7999 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemRangeGetAttributes(void ** data, size_t * dataSizes, cudaMemRangeAttribute * attributes, size_t numAttributes, const void * devPtr, size_t count); 
# 8059 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaMemcpyToArray(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t count, cudaMemcpyKind kind); 
# 8101 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaMemcpyFromArray(void * dst, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t count, cudaMemcpyKind kind); 
# 8144 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaMemcpyArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t count, cudaMemcpyKind kind = cudaMemcpyDeviceToDevice); 
# 8195 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaMemcpyToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 8245 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaMemcpyFromArrayAsync(void * dst, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 8314 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMallocAsync(void ** devPtr, size_t size, cudaStream_t hStream); 
# 8340 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaFreeAsync(void * devPtr, cudaStream_t hStream); 
# 8365 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemPoolTrimTo(cudaMemPool_t memPool, size_t minBytesToKeep); 
# 8409 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemPoolSetAttribute(cudaMemPool_t memPool, cudaMemPoolAttr attr, void * value); 
# 8457 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemPoolGetAttribute(cudaMemPool_t memPool, cudaMemPoolAttr attr, void * value); 
# 8472 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemPoolSetAccess(cudaMemPool_t memPool, const cudaMemAccessDesc * descList, size_t count); 
# 8485 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemPoolGetAccess(cudaMemAccessFlags * flags, cudaMemPool_t memPool, cudaMemLocation * location); 
# 8512 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemPoolCreate(cudaMemPool_t * memPool, const cudaMemPoolProps * poolProps); 
# 8534 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemPoolDestroy(cudaMemPool_t memPool); 
# 8570 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMallocFromPoolAsync(void ** ptr, size_t size, cudaMemPool_t memPool, cudaStream_t stream); 
# 8595 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemPoolExportToShareableHandle(void * shareableHandle, cudaMemPool_t memPool, cudaMemAllocationHandleType handleType, unsigned flags); 
# 8622 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemPoolImportFromShareableHandle(cudaMemPool_t * memPool, void * shareableHandle, cudaMemAllocationHandleType handleType, unsigned flags); 
# 8645 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemPoolExportPointer(cudaMemPoolPtrExportData * exportData, void * ptr); 
# 8674 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaMemPoolImportPointer(void ** ptr, cudaMemPool_t memPool, cudaMemPoolPtrExportData * exportData); 
# 8827 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaPointerGetAttributes(cudaPointerAttributes * attributes, const void * ptr); 
# 8868 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceCanAccessPeer(int * canAccessPeer, int device, int peerDevice); 
# 8910 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceEnablePeerAccess(int peerDevice, unsigned flags); 
# 8932 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceDisablePeerAccess(int peerDevice); 
# 8996 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsUnregisterResource(cudaGraphicsResource_t resource); 
# 9031 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t resource, unsigned flags); 
# 9070 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsMapResources(int count, cudaGraphicsResource_t * resources, cudaStream_t stream = 0); 
# 9105 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsUnmapResources(int count, cudaGraphicsResource_t * resources, cudaStream_t stream = 0); 
# 9137 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsResourceGetMappedPointer(void ** devPtr, size_t * size, cudaGraphicsResource_t resource); 
# 9175 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsSubResourceGetMappedArray(cudaArray_t * array, cudaGraphicsResource_t resource, unsigned arrayIndex, unsigned mipLevel); 
# 9204 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsResourceGetMappedMipmappedArray(cudaMipmappedArray_t * mipmappedArray, cudaGraphicsResource_t resource); 
# 9239 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGetChannelDesc(cudaChannelFormatDesc * desc, cudaArray_const_t array); 
# 9269 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaChannelFormatDesc cudaCreateChannelDesc(int x, int y, int z, int w, cudaChannelFormatKind f); 
# 9493 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaCreateTextureObject(cudaTextureObject_t * pTexObject, const cudaResourceDesc * pResDesc, const cudaTextureDesc * pTexDesc, const cudaResourceViewDesc * pResViewDesc); 
# 9513 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaDestroyTextureObject(cudaTextureObject_t texObject); 
# 9533 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGetTextureObjectResourceDesc(cudaResourceDesc * pResDesc, cudaTextureObject_t texObject); 
# 9553 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGetTextureObjectTextureDesc(cudaTextureDesc * pTexDesc, cudaTextureObject_t texObject); 
# 9574 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGetTextureObjectResourceViewDesc(cudaResourceViewDesc * pResViewDesc, cudaTextureObject_t texObject); 
# 9619 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaCreateSurfaceObject(cudaSurfaceObject_t * pSurfObject, const cudaResourceDesc * pResDesc); 
# 9639 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaDestroySurfaceObject(cudaSurfaceObject_t surfObject); 
# 9658 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGetSurfaceObjectResourceDesc(cudaResourceDesc * pResDesc, cudaSurfaceObject_t surfObject); 
# 9692 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaDriverGetVersion(int * driverVersion); 
# 9721 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaRuntimeGetVersion(int * runtimeVersion); 
# 9768 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphCreate(cudaGraph_t * pGraph, unsigned flags); 
# 9866 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddKernelNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaKernelNodeParams * pNodeParams); 
# 9899 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphKernelNodeGetParams(cudaGraphNode_t node, cudaKernelNodeParams * pNodeParams); 
# 9925 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphKernelNodeSetParams(cudaGraphNode_t node, const cudaKernelNodeParams * pNodeParams); 
# 9945 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphKernelNodeCopyAttributes(cudaGraphNode_t hSrc, cudaGraphNode_t hDst); 
# 9968 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphKernelNodeGetAttribute(cudaGraphNode_t hNode, cudaLaunchAttributeID attr, cudaLaunchAttributeValue * value_out); 
# 9992 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphKernelNodeSetAttribute(cudaGraphNode_t hNode, cudaLaunchAttributeID attr, const cudaLaunchAttributeValue * value); 
# 10043 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddMemcpyNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaMemcpy3DParms * pCopyParams); 
# 10102 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddMemcpyNodeToSymbol(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const void * symbol, const void * src, size_t count, size_t offset, cudaMemcpyKind kind); 
# 10171 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddMemcpyNodeFromSymbol(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, void * dst, const void * symbol, size_t count, size_t offset, cudaMemcpyKind kind); 
# 10239 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddMemcpyNode1D(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, void * dst, const void * src, size_t count, cudaMemcpyKind kind); 
# 10271 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphMemcpyNodeGetParams(cudaGraphNode_t node, cudaMemcpy3DParms * pNodeParams); 
# 10298 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphMemcpyNodeSetParams(cudaGraphNode_t node, const cudaMemcpy3DParms * pNodeParams); 
# 10337 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphMemcpyNodeSetParamsToSymbol(cudaGraphNode_t node, const void * symbol, const void * src, size_t count, size_t offset, cudaMemcpyKind kind); 
# 10383 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphMemcpyNodeSetParamsFromSymbol(cudaGraphNode_t node, void * dst, const void * symbol, size_t count, size_t offset, cudaMemcpyKind kind); 
# 10429 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphMemcpyNodeSetParams1D(cudaGraphNode_t node, void * dst, const void * src, size_t count, cudaMemcpyKind kind); 
# 10477 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddMemsetNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaMemsetParams * pMemsetParams); 
# 10500 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphMemsetNodeGetParams(cudaGraphNode_t node, cudaMemsetParams * pNodeParams); 
# 10524 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphMemsetNodeSetParams(cudaGraphNode_t node, const cudaMemsetParams * pNodeParams); 
# 10566 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddHostNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaHostNodeParams * pNodeParams); 
# 10589 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphHostNodeGetParams(cudaGraphNode_t node, cudaHostNodeParams * pNodeParams); 
# 10613 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphHostNodeSetParams(cudaGraphNode_t node, const cudaHostNodeParams * pNodeParams); 
# 10654 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddChildGraphNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, cudaGraph_t childGraph); 
# 10681 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphChildGraphNodeGetGraph(cudaGraphNode_t node, cudaGraph_t * pGraph); 
# 10719 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddEmptyNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies); 
# 10763 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddEventRecordNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, cudaEvent_t event); 
# 10790 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphEventRecordNodeGetEvent(cudaGraphNode_t node, cudaEvent_t * event_out); 
# 10818 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphEventRecordNodeSetEvent(cudaGraphNode_t node, cudaEvent_t event); 
# 10865 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddEventWaitNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, cudaEvent_t event); 
# 10892 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphEventWaitNodeGetEvent(cudaGraphNode_t node, cudaEvent_t * event_out); 
# 10920 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphEventWaitNodeSetEvent(cudaGraphNode_t node, cudaEvent_t event); 
# 10970 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddExternalSemaphoresSignalNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaExternalSemaphoreSignalNodeParams * nodeParams); 
# 11003 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExternalSemaphoresSignalNodeGetParams(cudaGraphNode_t hNode, cudaExternalSemaphoreSignalNodeParams * params_out); 
# 11031 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExternalSemaphoresSignalNodeSetParams(cudaGraphNode_t hNode, const cudaExternalSemaphoreSignalNodeParams * nodeParams); 
# 11081 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddExternalSemaphoresWaitNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaExternalSemaphoreWaitNodeParams * nodeParams); 
# 11114 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExternalSemaphoresWaitNodeGetParams(cudaGraphNode_t hNode, cudaExternalSemaphoreWaitNodeParams * params_out); 
# 11142 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExternalSemaphoresWaitNodeSetParams(cudaGraphNode_t hNode, const cudaExternalSemaphoreWaitNodeParams * nodeParams); 
# 11220 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddMemAllocNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, cudaMemAllocNodeParams * nodeParams); 
# 11247 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphMemAllocNodeGetParams(cudaGraphNode_t node, cudaMemAllocNodeParams * params_out); 
# 11308 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddMemFreeNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, void * dptr); 
# 11332 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphMemFreeNodeGetParams(cudaGraphNode_t node, void * dptr_out); 
# 11360 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGraphMemTrim(int device); 
# 11397 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetGraphMemAttribute(int device, cudaGraphMemAttributeType attr, void * value); 
# 11431 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceSetGraphMemAttribute(int device, cudaGraphMemAttributeType attr, void * value); 
# 11459 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphClone(cudaGraph_t * pGraphClone, cudaGraph_t originalGraph); 
# 11487 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphNodeFindInClone(cudaGraphNode_t * pNode, cudaGraphNode_t originalNode, cudaGraph_t clonedGraph); 
# 11518 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphNodeGetType(cudaGraphNode_t node, cudaGraphNodeType * pType); 
# 11549 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphGetNodes(cudaGraph_t graph, cudaGraphNode_t * nodes, size_t * numNodes); 
# 11580 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphGetRootNodes(cudaGraph_t graph, cudaGraphNode_t * pRootNodes, size_t * pNumRootNodes); 
# 11614 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphGetEdges(cudaGraph_t graph, cudaGraphNode_t * from, cudaGraphNode_t * to, size_t * numEdges); 
# 11654 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphGetEdges_v2(cudaGraph_t graph, cudaGraphNode_t * from, cudaGraphNode_t * to, cudaGraphEdgeData * edgeData, size_t * numEdges); 
# 11685 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphNodeGetDependencies(cudaGraphNode_t node, cudaGraphNode_t * pDependencies, size_t * pNumDependencies); 
# 11722 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphNodeGetDependencies_v2(cudaGraphNode_t node, cudaGraphNode_t * pDependencies, cudaGraphEdgeData * edgeData, size_t * pNumDependencies); 
# 11754 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphNodeGetDependentNodes(cudaGraphNode_t node, cudaGraphNode_t * pDependentNodes, size_t * pNumDependentNodes); 
# 11792 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphNodeGetDependentNodes_v2(cudaGraphNode_t node, cudaGraphNode_t * pDependentNodes, cudaGraphEdgeData * edgeData, size_t * pNumDependentNodes); 
# 11823 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddDependencies(cudaGraph_t graph, const cudaGraphNode_t * from, const cudaGraphNode_t * to, size_t numDependencies); 
# 11855 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddDependencies_v2(cudaGraph_t graph, const cudaGraphNode_t * from, const cudaGraphNode_t * to, const cudaGraphEdgeData * edgeData, size_t numDependencies); 
# 11886 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphRemoveDependencies(cudaGraph_t graph, const cudaGraphNode_t * from, const cudaGraphNode_t * to, size_t numDependencies); 
# 11921 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphRemoveDependencies_v2(cudaGraph_t graph, const cudaGraphNode_t * from, const cudaGraphNode_t * to, const cudaGraphEdgeData * edgeData, size_t numDependencies); 
# 11951 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphDestroyNode(cudaGraphNode_t node); 
# 12021 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphInstantiate(cudaGraphExec_t * pGraphExec, cudaGraph_t graph, unsigned long long flags = 0); 
# 12093 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphInstantiateWithFlags(cudaGraphExec_t * pGraphExec, cudaGraph_t graph, unsigned long long flags = 0); 
# 12199 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphInstantiateWithParams(cudaGraphExec_t * pGraphExec, cudaGraph_t graph, cudaGraphInstantiateParams * instantiateParams); 
# 12224 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecGetFlags(cudaGraphExec_t graphExec, unsigned long long * flags); 
# 12276 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecKernelNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaKernelNodeParams * pNodeParams); 
# 12327 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecMemcpyNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaMemcpy3DParms * pNodeParams); 
# 12382 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecMemcpyNodeSetParamsToSymbol(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const void * symbol, const void * src, size_t count, size_t offset, cudaMemcpyKind kind); 
# 12445 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecMemcpyNodeSetParamsFromSymbol(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, void * dst, const void * symbol, size_t count, size_t offset, cudaMemcpyKind kind); 
# 12506 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecMemcpyNodeSetParams1D(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, void * dst, const void * src, size_t count, cudaMemcpyKind kind); 
# 12561 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecMemsetNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaMemsetParams * pNodeParams); 
# 12601 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecHostNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaHostNodeParams * pNodeParams); 
# 12648 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecChildGraphNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, cudaGraph_t childGraph); 
# 12693 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecEventRecordNodeSetEvent(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, cudaEvent_t event); 
# 12738 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecEventWaitNodeSetEvent(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, cudaEvent_t event); 
# 12786 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecExternalSemaphoresSignalNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, const cudaExternalSemaphoreSignalNodeParams * nodeParams); 
# 12834 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecExternalSemaphoresWaitNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, const cudaExternalSemaphoreWaitNodeParams * nodeParams); 
# 12874 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphNodeSetEnabled(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, unsigned isEnabled); 
# 12908 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphNodeGetEnabled(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, unsigned * isEnabled); 
# 12997 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecUpdate(cudaGraphExec_t hGraphExec, cudaGraph_t hGraph, cudaGraphExecUpdateResultInfo * resultInfo); 
# 13022 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphUpload(cudaGraphExec_t graphExec, cudaStream_t stream); 
# 13053 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphLaunch(cudaGraphExec_t graphExec, cudaStream_t stream); 
# 13076 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecDestroy(cudaGraphExec_t graphExec); 
# 13097 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphDestroy(cudaGraph_t graph); 
# 13116 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphDebugDotPrint(cudaGraph_t graph, const char * path, unsigned flags); 
# 13152 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaUserObjectCreate(cudaUserObject_t * object_out, void * ptr, cudaHostFn_t destroy, unsigned initialRefcount, unsigned flags); 
# 13176 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaUserObjectRetain(cudaUserObject_t object, unsigned count = 1); 
# 13204 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaUserObjectRelease(cudaUserObject_t object, unsigned count = 1); 
# 13232 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphRetainUserObject(cudaGraph_t graph, cudaUserObject_t object, unsigned count = 1, unsigned flags = 0); 
# 13257 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphReleaseUserObject(cudaGraph_t graph, cudaUserObject_t object, unsigned count = 1); 
# 13299 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, cudaGraphNodeParams * nodeParams); 
# 13343 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddNode_v2(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, const cudaGraphEdgeData * dependencyData, size_t numDependencies, cudaGraphNodeParams * nodeParams); 
# 13372 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphNodeSetParams(cudaGraphNode_t node, cudaGraphNodeParams * nodeParams); 
# 13421 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecNodeSetParams(cudaGraphExec_t graphExec, cudaGraphNode_t node, cudaGraphNodeParams * nodeParams); 
# 13445 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGraphConditionalHandleCreate(cudaGraphConditionalHandle * pHandle_out, cudaGraph_t graph, unsigned defaultLaunchValue = 0, unsigned flags = 0); 
# 13523 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGetDriverEntryPoint(const char * symbol, void ** funcPtr, unsigned long long flags, cudaDriverEntryPointQueryResult * driverStatus = 0); 
# 13531 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGetExportTable(const void ** ppExportTable, const cudaUUID_t * pExportTableId); 
# 13710 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGetFuncBySymbol(cudaFunction_t * functionPtr, const void * symbolPtr); 
# 13726 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
extern cudaError_t cudaGetKernel(cudaKernel_t * kernelPtr, const void * entryFuncAddr); 
# 13896 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime_api.h"
}
# 117 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/channel_descriptor.h"
template< class T> inline cudaChannelFormatDesc cudaCreateChannelDesc() 
# 118
{ 
# 119
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone); 
# 120
} 
# 122
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf() 
# 123
{ 
# 124
int e = (((int)sizeof(unsigned short)) * 8); 
# 126
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 127
} 
# 129
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf1() 
# 130
{ 
# 131
int e = (((int)sizeof(unsigned short)) * 8); 
# 133
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 134
} 
# 136
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf2() 
# 137
{ 
# 138
int e = (((int)sizeof(unsigned short)) * 8); 
# 140
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
# 141
} 
# 143
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf4() 
# 144
{ 
# 145
int e = (((int)sizeof(unsigned short)) * 8); 
# 147
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
# 148
} 
# 150
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char> () 
# 151
{ 
# 152
int e = (((int)sizeof(char)) * 8); 
# 157
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 159
} 
# 161
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> () 
# 162
{ 
# 163
int e = (((int)sizeof(signed char)) * 8); 
# 165
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 166
} 
# 168
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> () 
# 169
{ 
# 170
int e = (((int)sizeof(unsigned char)) * 8); 
# 172
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 173
} 
# 175
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> () 
# 176
{ 
# 177
int e = (((int)sizeof(signed char)) * 8); 
# 179
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 180
} 
# 182
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> () 
# 183
{ 
# 184
int e = (((int)sizeof(unsigned char)) * 8); 
# 186
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 187
} 
# 189
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> () 
# 190
{ 
# 191
int e = (((int)sizeof(signed char)) * 8); 
# 193
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
# 194
} 
# 196
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> () 
# 197
{ 
# 198
int e = (((int)sizeof(unsigned char)) * 8); 
# 200
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
# 201
} 
# 203
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> () 
# 204
{ 
# 205
int e = (((int)sizeof(signed char)) * 8); 
# 207
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
# 208
} 
# 210
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> () 
# 211
{ 
# 212
int e = (((int)sizeof(unsigned char)) * 8); 
# 214
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
# 215
} 
# 217
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short> () 
# 218
{ 
# 219
int e = (((int)sizeof(short)) * 8); 
# 221
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 222
} 
# 224
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> () 
# 225
{ 
# 226
int e = (((int)sizeof(unsigned short)) * 8); 
# 228
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 229
} 
# 231
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> () 
# 232
{ 
# 233
int e = (((int)sizeof(short)) * 8); 
# 235
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 236
} 
# 238
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> () 
# 239
{ 
# 240
int e = (((int)sizeof(unsigned short)) * 8); 
# 242
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 243
} 
# 245
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> () 
# 246
{ 
# 247
int e = (((int)sizeof(short)) * 8); 
# 249
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
# 250
} 
# 252
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> () 
# 253
{ 
# 254
int e = (((int)sizeof(unsigned short)) * 8); 
# 256
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
# 257
} 
# 259
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> () 
# 260
{ 
# 261
int e = (((int)sizeof(short)) * 8); 
# 263
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
# 264
} 
# 266
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> () 
# 267
{ 
# 268
int e = (((int)sizeof(unsigned short)) * 8); 
# 270
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
# 271
} 
# 273
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int> () 
# 274
{ 
# 275
int e = (((int)sizeof(int)) * 8); 
# 277
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 278
} 
# 280
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> () 
# 281
{ 
# 282
int e = (((int)sizeof(unsigned)) * 8); 
# 284
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 285
} 
# 287
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> () 
# 288
{ 
# 289
int e = (((int)sizeof(int)) * 8); 
# 291
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 292
} 
# 294
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> () 
# 295
{ 
# 296
int e = (((int)sizeof(unsigned)) * 8); 
# 298
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 299
} 
# 301
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> () 
# 302
{ 
# 303
int e = (((int)sizeof(int)) * 8); 
# 305
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
# 306
} 
# 308
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> () 
# 309
{ 
# 310
int e = (((int)sizeof(unsigned)) * 8); 
# 312
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
# 313
} 
# 315
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> () 
# 316
{ 
# 317
int e = (((int)sizeof(int)) * 8); 
# 319
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
# 320
} 
# 322
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> () 
# 323
{ 
# 324
int e = (((int)sizeof(unsigned)) * 8); 
# 326
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
# 327
} 
# 389 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float> () 
# 390
{ 
# 391
int e = (((int)sizeof(float)) * 8); 
# 393
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 394
} 
# 396
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> () 
# 397
{ 
# 398
int e = (((int)sizeof(float)) * 8); 
# 400
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 401
} 
# 403
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> () 
# 404
{ 
# 405
int e = (((int)sizeof(float)) * 8); 
# 407
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
# 408
} 
# 410
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> () 
# 411
{ 
# 412
int e = (((int)sizeof(float)) * 8); 
# 414
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
# 415
} 
# 417
static inline cudaChannelFormatDesc cudaCreateChannelDescNV12() 
# 418
{ 
# 419
int e = (((int)sizeof(char)) * 8); 
# 421
return cudaCreateChannelDesc(e, e, e, 0, cudaChannelFormatKindNV12); 
# 422
} 
# 424
template< cudaChannelFormatKind > inline cudaChannelFormatDesc cudaCreateChannelDesc() 
# 425
{ 
# 426
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone); 
# 427
} 
# 430
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedNormalized8X1> () 
# 431
{ 
# 432
return cudaCreateChannelDesc(8, 0, 0, 0, cudaChannelFormatKindSignedNormalized8X1); 
# 433
} 
# 435
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedNormalized8X2> () 
# 436
{ 
# 437
return cudaCreateChannelDesc(8, 8, 0, 0, cudaChannelFormatKindSignedNormalized8X2); 
# 438
} 
# 440
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedNormalized8X4> () 
# 441
{ 
# 442
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindSignedNormalized8X4); 
# 443
} 
# 446
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedNormalized8X1> () 
# 447
{ 
# 448
return cudaCreateChannelDesc(8, 0, 0, 0, cudaChannelFormatKindUnsignedNormalized8X1); 
# 449
} 
# 451
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedNormalized8X2> () 
# 452
{ 
# 453
return cudaCreateChannelDesc(8, 8, 0, 0, cudaChannelFormatKindUnsignedNormalized8X2); 
# 454
} 
# 456
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedNormalized8X4> () 
# 457
{ 
# 458
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedNormalized8X4); 
# 459
} 
# 462
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedNormalized16X1> () 
# 463
{ 
# 464
return cudaCreateChannelDesc(16, 0, 0, 0, cudaChannelFormatKindSignedNormalized16X1); 
# 465
} 
# 467
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedNormalized16X2> () 
# 468
{ 
# 469
return cudaCreateChannelDesc(16, 16, 0, 0, cudaChannelFormatKindSignedNormalized16X2); 
# 470
} 
# 472
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedNormalized16X4> () 
# 473
{ 
# 474
return cudaCreateChannelDesc(16, 16, 16, 16, cudaChannelFormatKindSignedNormalized16X4); 
# 475
} 
# 478
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedNormalized16X1> () 
# 479
{ 
# 480
return cudaCreateChannelDesc(16, 0, 0, 0, cudaChannelFormatKindUnsignedNormalized16X1); 
# 481
} 
# 483
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedNormalized16X2> () 
# 484
{ 
# 485
return cudaCreateChannelDesc(16, 16, 0, 0, cudaChannelFormatKindUnsignedNormalized16X2); 
# 486
} 
# 488
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedNormalized16X4> () 
# 489
{ 
# 490
return cudaCreateChannelDesc(16, 16, 16, 16, cudaChannelFormatKindUnsignedNormalized16X4); 
# 491
} 
# 494
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindNV12> () 
# 495
{ 
# 496
return cudaCreateChannelDesc(8, 8, 8, 0, cudaChannelFormatKindNV12); 
# 497
} 
# 500
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed1> () 
# 501
{ 
# 502
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed1); 
# 503
} 
# 506
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed1SRGB> () 
# 507
{ 
# 508
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed1SRGB); 
# 509
} 
# 512
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed2> () 
# 513
{ 
# 514
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed2); 
# 515
} 
# 518
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed2SRGB> () 
# 519
{ 
# 520
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed2SRGB); 
# 521
} 
# 524
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed3> () 
# 525
{ 
# 526
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed3); 
# 527
} 
# 530
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed3SRGB> () 
# 531
{ 
# 532
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed3SRGB); 
# 533
} 
# 536
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed4> () 
# 537
{ 
# 538
return cudaCreateChannelDesc(8, 0, 0, 0, cudaChannelFormatKindUnsignedBlockCompressed4); 
# 539
} 
# 542
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedBlockCompressed4> () 
# 543
{ 
# 544
return cudaCreateChannelDesc(8, 0, 0, 0, cudaChannelFormatKindSignedBlockCompressed4); 
# 545
} 
# 548
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed5> () 
# 549
{ 
# 550
return cudaCreateChannelDesc(8, 8, 0, 0, cudaChannelFormatKindUnsignedBlockCompressed5); 
# 551
} 
# 554
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedBlockCompressed5> () 
# 555
{ 
# 556
return cudaCreateChannelDesc(8, 8, 0, 0, cudaChannelFormatKindSignedBlockCompressed5); 
# 557
} 
# 560
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed6H> () 
# 561
{ 
# 562
return cudaCreateChannelDesc(16, 16, 16, 0, cudaChannelFormatKindUnsignedBlockCompressed6H); 
# 563
} 
# 566
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedBlockCompressed6H> () 
# 567
{ 
# 568
return cudaCreateChannelDesc(16, 16, 16, 0, cudaChannelFormatKindSignedBlockCompressed6H); 
# 569
} 
# 572
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed7> () 
# 573
{ 
# 574
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed7); 
# 575
} 
# 578
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed7SRGB> () 
# 579
{ 
# 580
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed7SRGB); 
# 581
} 
# 79 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_functions.h"
static inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz) 
# 80
{ 
# 81
cudaPitchedPtr s; 
# 83
(s.ptr) = d; 
# 84
(s.pitch) = p; 
# 85
(s.xsize) = xsz; 
# 86
(s.ysize) = ysz; 
# 88
return s; 
# 89
} 
# 106 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_functions.h"
static inline cudaPos make_cudaPos(size_t x, size_t y, size_t z) 
# 107
{ 
# 108
cudaPos p; 
# 110
(p.x) = x; 
# 111
(p.y) = y; 
# 112
(p.z) = z; 
# 114
return p; 
# 115
} 
# 132 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/driver_functions.h"
static inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d) 
# 133
{ 
# 134
cudaExtent e; 
# 136
(e.width) = w; 
# 137
(e.height) = h; 
# 138
(e.depth) = d; 
# 140
return e; 
# 141
} 
# 77 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_functions.h"
static inline char1 make_char1(signed char x); 
# 79
static inline uchar1 make_uchar1(unsigned char x); 
# 81
static inline char2 make_char2(signed char x, signed char y); 
# 83
static inline uchar2 make_uchar2(unsigned char x, unsigned char y); 
# 85
static inline char3 make_char3(signed char x, signed char y, signed char z); 
# 87
static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z); 
# 89
static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w); 
# 91
static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w); 
# 93
static inline short1 make_short1(short x); 
# 95
static inline ushort1 make_ushort1(unsigned short x); 
# 97
static inline short2 make_short2(short x, short y); 
# 99
static inline ushort2 make_ushort2(unsigned short x, unsigned short y); 
# 101
static inline short3 make_short3(short x, short y, short z); 
# 103
static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z); 
# 105
static inline short4 make_short4(short x, short y, short z, short w); 
# 107
static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w); 
# 109
static inline int1 make_int1(int x); 
# 111
static inline uint1 make_uint1(unsigned x); 
# 113
static inline int2 make_int2(int x, int y); 
# 115
static inline uint2 make_uint2(unsigned x, unsigned y); 
# 117
static inline int3 make_int3(int x, int y, int z); 
# 119
static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z); 
# 121
static inline int4 make_int4(int x, int y, int z, int w); 
# 123
static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w); 
# 125
static inline long1 make_long1(long x); 
# 127
static inline ulong1 make_ulong1(unsigned long x); 
# 129
static inline long2 make_long2(long x, long y); 
# 131
static inline ulong2 make_ulong2(unsigned long x, unsigned long y); 
# 133
static inline long3 make_long3(long x, long y, long z); 
# 135
static inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z); 
# 137
static inline long4 make_long4(long x, long y, long z, long w); 
# 139
static inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w); 
# 141
static inline float1 make_float1(float x); 
# 143
static inline float2 make_float2(float x, float y); 
# 145
static inline float3 make_float3(float x, float y, float z); 
# 147
static inline float4 make_float4(float x, float y, float z, float w); 
# 149
static inline longlong1 make_longlong1(long long x); 
# 151
static inline ulonglong1 make_ulonglong1(unsigned long long x); 
# 153
static inline longlong2 make_longlong2(long long x, long long y); 
# 155
static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y); 
# 157
static inline longlong3 make_longlong3(long long x, long long y, long long z); 
# 159
static inline ulonglong3 make_ulonglong3(unsigned long long x, unsigned long long y, unsigned long long z); 
# 161
static inline longlong4 make_longlong4(long long x, long long y, long long z, long long w); 
# 163
static inline ulonglong4 make_ulonglong4(unsigned long long x, unsigned long long y, unsigned long long z, unsigned long long w); 
# 165
static inline double1 make_double1(double x); 
# 167
static inline double2 make_double2(double x, double y); 
# 169
static inline double3 make_double3(double x, double y, double z); 
# 171
static inline double4 make_double4(double x, double y, double z, double w); 
# 73 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/vector_functions.hpp"
static inline char1 make_char1(signed char x) 
# 74
{ 
# 75
char1 t; (t.x) = x; return t; 
# 76
} 
# 78
static inline uchar1 make_uchar1(unsigned char x) 
# 79
{ 
# 80
uchar1 t; (t.x) = x; return t; 
# 81
} 
# 83
static inline char2 make_char2(signed char x, signed char y) 
# 84
{ 
# 85
char2 t; (t.x) = x; (t.y) = y; return t; 
# 86
} 
# 88
static inline uchar2 make_uchar2(unsigned char x, unsigned char y) 
# 89
{ 
# 90
uchar2 t; (t.x) = x; (t.y) = y; return t; 
# 91
} 
# 93
static inline char3 make_char3(signed char x, signed char y, signed char z) 
# 94
{ 
# 95
char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 96
} 
# 98
static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z) 
# 99
{ 
# 100
uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 101
} 
# 103
static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w) 
# 104
{ 
# 105
char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 106
} 
# 108
static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w) 
# 109
{ 
# 110
uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 111
} 
# 113
static inline short1 make_short1(short x) 
# 114
{ 
# 115
short1 t; (t.x) = x; return t; 
# 116
} 
# 118
static inline ushort1 make_ushort1(unsigned short x) 
# 119
{ 
# 120
ushort1 t; (t.x) = x; return t; 
# 121
} 
# 123
static inline short2 make_short2(short x, short y) 
# 124
{ 
# 125
short2 t; (t.x) = x; (t.y) = y; return t; 
# 126
} 
# 128
static inline ushort2 make_ushort2(unsigned short x, unsigned short y) 
# 129
{ 
# 130
ushort2 t; (t.x) = x; (t.y) = y; return t; 
# 131
} 
# 133
static inline short3 make_short3(short x, short y, short z) 
# 134
{ 
# 135
short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 136
} 
# 138
static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z) 
# 139
{ 
# 140
ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 141
} 
# 143
static inline short4 make_short4(short x, short y, short z, short w) 
# 144
{ 
# 145
short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 146
} 
# 148
static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w) 
# 149
{ 
# 150
ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 151
} 
# 153
static inline int1 make_int1(int x) 
# 154
{ 
# 155
int1 t; (t.x) = x; return t; 
# 156
} 
# 158
static inline uint1 make_uint1(unsigned x) 
# 159
{ 
# 160
uint1 t; (t.x) = x; return t; 
# 161
} 
# 163
static inline int2 make_int2(int x, int y) 
# 164
{ 
# 165
int2 t; (t.x) = x; (t.y) = y; return t; 
# 166
} 
# 168
static inline uint2 make_uint2(unsigned x, unsigned y) 
# 169
{ 
# 170
uint2 t; (t.x) = x; (t.y) = y; return t; 
# 171
} 
# 173
static inline int3 make_int3(int x, int y, int z) 
# 174
{ 
# 175
int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 176
} 
# 178
static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z) 
# 179
{ 
# 180
uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 181
} 
# 183
static inline int4 make_int4(int x, int y, int z, int w) 
# 184
{ 
# 185
int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 186
} 
# 188
static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w) 
# 189
{ 
# 190
uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 191
} 
# 193
static inline long1 make_long1(long x) 
# 194
{ 
# 195
long1 t; (t.x) = x; return t; 
# 196
} 
# 198
static inline ulong1 make_ulong1(unsigned long x) 
# 199
{ 
# 200
ulong1 t; (t.x) = x; return t; 
# 201
} 
# 203
static inline long2 make_long2(long x, long y) 
# 204
{ 
# 205
long2 t; (t.x) = x; (t.y) = y; return t; 
# 206
} 
# 208
static inline ulong2 make_ulong2(unsigned long x, unsigned long y) 
# 209
{ 
# 210
ulong2 t; (t.x) = x; (t.y) = y; return t; 
# 211
} 
# 213
static inline long3 make_long3(long x, long y, long z) 
# 214
{ 
# 215
long3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 216
} 
# 218
static inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z) 
# 219
{ 
# 220
ulong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 221
} 
# 223
static inline long4 make_long4(long x, long y, long z, long w) 
# 224
{ 
# 225
long4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 226
} 
# 228
static inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w) 
# 229
{ 
# 230
ulong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 231
} 
# 233
static inline float1 make_float1(float x) 
# 234
{ 
# 235
float1 t; (t.x) = x; return t; 
# 236
} 
# 238
static inline float2 make_float2(float x, float y) 
# 239
{ 
# 240
float2 t; (t.x) = x; (t.y) = y; return t; 
# 241
} 
# 243
static inline float3 make_float3(float x, float y, float z) 
# 244
{ 
# 245
float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 246
} 
# 248
static inline float4 make_float4(float x, float y, float z, float w) 
# 249
{ 
# 250
float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 251
} 
# 253
static inline longlong1 make_longlong1(long long x) 
# 254
{ 
# 255
longlong1 t; (t.x) = x; return t; 
# 256
} 
# 258
static inline ulonglong1 make_ulonglong1(unsigned long long x) 
# 259
{ 
# 260
ulonglong1 t; (t.x) = x; return t; 
# 261
} 
# 263
static inline longlong2 make_longlong2(long long x, long long y) 
# 264
{ 
# 265
longlong2 t; (t.x) = x; (t.y) = y; return t; 
# 266
} 
# 268
static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y) 
# 269
{ 
# 270
ulonglong2 t; (t.x) = x; (t.y) = y; return t; 
# 271
} 
# 273
static inline longlong3 make_longlong3(long long x, long long y, long long z) 
# 274
{ 
# 275
longlong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 276
} 
# 278
static inline ulonglong3 make_ulonglong3(unsigned long long x, unsigned long long y, unsigned long long z) 
# 279
{ 
# 280
ulonglong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 281
} 
# 283
static inline longlong4 make_longlong4(long long x, long long y, long long z, long long w) 
# 284
{ 
# 285
longlong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 286
} 
# 288
static inline ulonglong4 make_ulonglong4(unsigned long long x, unsigned long long y, unsigned long long z, unsigned long long w) 
# 289
{ 
# 290
ulonglong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 291
} 
# 293
static inline double1 make_double1(double x) 
# 294
{ 
# 295
double1 t; (t.x) = x; return t; 
# 296
} 
# 298
static inline double2 make_double2(double x, double y) 
# 299
{ 
# 300
double2 t; (t.x) = x; (t.y) = y; return t; 
# 301
} 
# 303
static inline double3 make_double3(double x, double y, double z) 
# 304
{ 
# 305
double3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 306
} 
# 308
static inline double4 make_double4(double x, double y, double z, double w) 
# 309
{ 
# 310
double4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 311
} 
# 27 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/string.h" 3
extern "C" {
# 42 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/string.h" 3
extern void *memcpy(void *__restrict__ __dest, const void *__restrict__ __src, size_t __n) throw()
# 43
 __attribute((__nonnull__(1, 2))); 
# 46
extern void *memmove(void * __dest, const void * __src, size_t __n) throw()
# 47
 __attribute((__nonnull__(1, 2))); 
# 54
extern void *memccpy(void *__restrict__ __dest, const void *__restrict__ __src, int __c, size_t __n) throw()
# 56
 __attribute((__nonnull__(1, 2))); 
# 62
extern void *memset(void * __s, int __c, size_t __n) throw() __attribute((__nonnull__(1))); 
# 65
extern int memcmp(const void * __s1, const void * __s2, size_t __n) throw()
# 66
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 70
extern "C++" {
# 72
extern void *memchr(void * __s, int __c, size_t __n) throw() __asm__("memchr")
# 73
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 74
extern const void *memchr(const void * __s, int __c, size_t __n) throw() __asm__("memchr")
# 75
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 90 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/string.h" 3
}
# 101
extern "C++" void *rawmemchr(void * __s, int __c) throw() __asm__("rawmemchr")
# 102
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 103
extern "C++" const void *rawmemchr(const void * __s, int __c) throw() __asm__("rawmemchr")
# 104
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 112
extern "C++" void *memrchr(void * __s, int __c, size_t __n) throw() __asm__("memrchr")
# 113
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 114
extern "C++" const void *memrchr(const void * __s, int __c, size_t __n) throw() __asm__("memrchr")
# 115
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 125
extern char *strcpy(char *__restrict__ __dest, const char *__restrict__ __src) throw()
# 126
 __attribute((__nonnull__(1, 2))); 
# 128
extern char *strncpy(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 130
 __attribute((__nonnull__(1, 2))); 
# 133
extern char *strcat(char *__restrict__ __dest, const char *__restrict__ __src) throw()
# 134
 __attribute((__nonnull__(1, 2))); 
# 136
extern char *strncat(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 137
 __attribute((__nonnull__(1, 2))); 
# 140
extern int strcmp(const char * __s1, const char * __s2) throw()
# 141
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 143
extern int strncmp(const char * __s1, const char * __s2, size_t __n) throw()
# 144
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 147
extern int strcoll(const char * __s1, const char * __s2) throw()
# 148
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 150
extern size_t strxfrm(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 152
 __attribute((__nonnull__(2))); 
# 162 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/string.h" 3
extern int strcoll_l(const char * __s1, const char * __s2, __locale_t __l) throw()
# 163
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 3))); 
# 165
extern size_t strxfrm_l(char * __dest, const char * __src, size_t __n, __locale_t __l) throw()
# 166
 __attribute((__nonnull__(2, 4))); 
# 172
extern char *strdup(const char * __s) throw()
# 173
 __attribute((__malloc__)) __attribute((__nonnull__(1))); 
# 180
extern char *strndup(const char * __string, size_t __n) throw()
# 181
 __attribute((__malloc__)) __attribute((__nonnull__(1))); 
# 210 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/string.h" 3
extern "C++" {
# 212
extern char *strchr(char * __s, int __c) throw() __asm__("strchr")
# 213
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 214
extern const char *strchr(const char * __s, int __c) throw() __asm__("strchr")
# 215
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 230 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/string.h" 3
}
# 237
extern "C++" {
# 239
extern char *strrchr(char * __s, int __c) throw() __asm__("strrchr")
# 240
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 241
extern const char *strrchr(const char * __s, int __c) throw() __asm__("strrchr")
# 242
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 257 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/string.h" 3
}
# 268
extern "C++" char *strchrnul(char * __s, int __c) throw() __asm__("strchrnul")
# 269
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 270
extern "C++" const char *strchrnul(const char * __s, int __c) throw() __asm__("strchrnul")
# 271
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 281
extern size_t strcspn(const char * __s, const char * __reject) throw()
# 282
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 285
extern size_t strspn(const char * __s, const char * __accept) throw()
# 286
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 289
extern "C++" {
# 291
extern char *strpbrk(char * __s, const char * __accept) throw() __asm__("strpbrk")
# 292
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 293
extern const char *strpbrk(const char * __s, const char * __accept) throw() __asm__("strpbrk")
# 294
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 309 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/string.h" 3
}
# 316
extern "C++" {
# 318
extern char *strstr(char * __haystack, const char * __needle) throw() __asm__("strstr")
# 319
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 320
extern const char *strstr(const char * __haystack, const char * __needle) throw() __asm__("strstr")
# 321
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 336 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/string.h" 3
}
# 344
extern char *strtok(char *__restrict__ __s, const char *__restrict__ __delim) throw()
# 345
 __attribute((__nonnull__(2))); 
# 350
extern char *__strtok_r(char *__restrict__ __s, const char *__restrict__ __delim, char **__restrict__ __save_ptr) throw()
# 353
 __attribute((__nonnull__(2, 3))); 
# 355
extern char *strtok_r(char *__restrict__ __s, const char *__restrict__ __delim, char **__restrict__ __save_ptr) throw()
# 357
 __attribute((__nonnull__(2, 3))); 
# 363
extern "C++" char *strcasestr(char * __haystack, const char * __needle) throw() __asm__("strcasestr")
# 364
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 365
extern "C++" const char *strcasestr(const char * __haystack, const char * __needle) throw() __asm__("strcasestr")
# 367
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 378 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/string.h" 3
extern void *memmem(const void * __haystack, size_t __haystacklen, const void * __needle, size_t __needlelen) throw()
# 380
 __attribute((__pure__)) __attribute((__nonnull__(1, 3))); 
# 384
extern void *__mempcpy(void *__restrict__ __dest, const void *__restrict__ __src, size_t __n) throw()
# 386
 __attribute((__nonnull__(1, 2))); 
# 387
extern void *mempcpy(void *__restrict__ __dest, const void *__restrict__ __src, size_t __n) throw()
# 389
 __attribute((__nonnull__(1, 2))); 
# 395
extern size_t strlen(const char * __s) throw()
# 396
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 402
extern size_t strnlen(const char * __string, size_t __maxlen) throw()
# 403
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 409
extern char *strerror(int __errnum) throw(); 
# 434 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/string.h" 3
extern char *strerror_r(int __errnum, char * __buf, size_t __buflen) throw()
# 435
 __attribute((__nonnull__(2))); 
# 441
extern char *strerror_l(int __errnum, __locale_t __l) throw(); 
# 447
extern void __bzero(void * __s, size_t __n) throw() __attribute((__nonnull__(1))); 
# 451
extern void bcopy(const void * __src, void * __dest, size_t __n) throw()
# 452
 __attribute((__nonnull__(1, 2))); 
# 455
extern void bzero(void * __s, size_t __n) throw() __attribute((__nonnull__(1))); 
# 458
extern int bcmp(const void * __s1, const void * __s2, size_t __n) throw()
# 459
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 463
extern "C++" {
# 465
extern char *index(char * __s, int __c) throw() __asm__("index")
# 466
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 467
extern const char *index(const char * __s, int __c) throw() __asm__("index")
# 468
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 483 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/string.h" 3
}
# 491
extern "C++" {
# 493
extern char *rindex(char * __s, int __c) throw() __asm__("rindex")
# 494
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 495
extern const char *rindex(const char * __s, int __c) throw() __asm__("rindex")
# 496
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 511 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/string.h" 3
}
# 519
extern int ffs(int __i) throw() __attribute((const)); 
# 524
extern int ffsl(long __l) throw() __attribute((const)); 
# 526
__extension__ extern int ffsll(long long __ll) throw()
# 527
 __attribute((const)); 
# 532
extern int strcasecmp(const char * __s1, const char * __s2) throw()
# 533
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 536
extern int strncasecmp(const char * __s1, const char * __s2, size_t __n) throw()
# 537
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 543
extern int strcasecmp_l(const char * __s1, const char * __s2, __locale_t __loc) throw()
# 545
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 3))); 
# 547
extern int strncasecmp_l(const char * __s1, const char * __s2, size_t __n, __locale_t __loc) throw()
# 549
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 4))); 
# 555
extern char *strsep(char **__restrict__ __stringp, const char *__restrict__ __delim) throw()
# 557
 __attribute((__nonnull__(1, 2))); 
# 562
extern char *strsignal(int __sig) throw(); 
# 565
extern char *__stpcpy(char *__restrict__ __dest, const char *__restrict__ __src) throw()
# 566
 __attribute((__nonnull__(1, 2))); 
# 567
extern char *stpcpy(char *__restrict__ __dest, const char *__restrict__ __src) throw()
# 568
 __attribute((__nonnull__(1, 2))); 
# 572
extern char *__stpncpy(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 574
 __attribute((__nonnull__(1, 2))); 
# 575
extern char *stpncpy(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 577
 __attribute((__nonnull__(1, 2))); 
# 582
extern int strverscmp(const char * __s1, const char * __s2) throw()
# 583
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 586
extern char *strfry(char * __string) throw() __attribute((__nonnull__(1))); 
# 589
extern void *memfrob(void * __s, size_t __n) throw() __attribute((__nonnull__(1))); 
# 597
extern "C++" char *basename(char * __filename) throw() __asm__("basename")
# 598
 __attribute((__nonnull__(1))); 
# 599
extern "C++" const char *basename(const char * __filename) throw() __asm__("basename")
# 600
 __attribute((__nonnull__(1))); 
# 642 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/string.h" 3
}
# 29 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/time.h" 3
extern "C" {
# 25 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/bits/timex.h" 3
struct timex { 
# 27
unsigned modes; 
# 28
__syscall_slong_t offset; 
# 29
__syscall_slong_t freq; 
# 30
__syscall_slong_t maxerror; 
# 31
__syscall_slong_t esterror; 
# 32
int status; 
# 33
__syscall_slong_t constant; 
# 34
__syscall_slong_t precision; 
# 35
__syscall_slong_t tolerance; 
# 36
timeval time; 
# 37
__syscall_slong_t tick; 
# 38
__syscall_slong_t ppsfreq; 
# 39
__syscall_slong_t jitter; 
# 40
int shift; 
# 41
__syscall_slong_t stabil; 
# 42
__syscall_slong_t jitcnt; 
# 43
__syscall_slong_t calcnt; 
# 44
__syscall_slong_t errcnt; 
# 45
__syscall_slong_t stbcnt; 
# 47
int tai; 
# 50
int: 32; int: 32; int: 32; int: 32; 
# 51
int: 32; int: 32; int: 32; int: 32; 
# 52
int: 32; int: 32; int: 32; 
# 53
}; 
# 90 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/bits/time.h" 3
extern "C" {
# 93
extern int clock_adjtime(__clockid_t __clock_id, timex * __utx) throw(); 
# 95
}
# 133 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/time.h" 3
struct tm { 
# 135
int tm_sec; 
# 136
int tm_min; 
# 137
int tm_hour; 
# 138
int tm_mday; 
# 139
int tm_mon; 
# 140
int tm_year; 
# 141
int tm_wday; 
# 142
int tm_yday; 
# 143
int tm_isdst; 
# 146
long tm_gmtoff; 
# 147
const char *tm_zone; 
# 152
}; 
# 161
struct itimerspec { 
# 163
timespec it_interval; 
# 164
timespec it_value; 
# 165
}; 
# 168
struct sigevent; 
# 189 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/time.h" 3
extern clock_t clock() throw(); 
# 192
extern time_t time(time_t * __timer) throw(); 
# 195
extern double difftime(time_t __time1, time_t __time0) throw()
# 196
 __attribute((const)); 
# 199
extern time_t mktime(tm * __tp) throw(); 
# 205
extern size_t strftime(char *__restrict__ __s, size_t __maxsize, const char *__restrict__ __format, const tm *__restrict__ __tp) throw(); 
# 213
extern char *strptime(const char *__restrict__ __s, const char *__restrict__ __fmt, tm * __tp) throw(); 
# 223
extern size_t strftime_l(char *__restrict__ __s, size_t __maxsize, const char *__restrict__ __format, const tm *__restrict__ __tp, __locale_t __loc) throw(); 
# 230
extern char *strptime_l(const char *__restrict__ __s, const char *__restrict__ __fmt, tm * __tp, __locale_t __loc) throw(); 
# 239
extern tm *gmtime(const time_t * __timer) throw(); 
# 243
extern tm *localtime(const time_t * __timer) throw(); 
# 249
extern tm *gmtime_r(const time_t *__restrict__ __timer, tm *__restrict__ __tp) throw(); 
# 254
extern tm *localtime_r(const time_t *__restrict__ __timer, tm *__restrict__ __tp) throw(); 
# 261
extern char *asctime(const tm * __tp) throw(); 
# 264
extern char *ctime(const time_t * __timer) throw(); 
# 272
extern char *asctime_r(const tm *__restrict__ __tp, char *__restrict__ __buf) throw(); 
# 276
extern char *ctime_r(const time_t *__restrict__ __timer, char *__restrict__ __buf) throw(); 
# 282
extern char *__tzname[2]; 
# 283
extern int __daylight; 
# 284
extern long __timezone; 
# 289
extern char *tzname[2]; 
# 293
extern void tzset() throw(); 
# 297
extern int daylight; 
# 298
extern long timezone; 
# 304
extern int stime(const time_t * __when) throw(); 
# 319 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/time.h" 3
extern time_t timegm(tm * __tp) throw(); 
# 322
extern time_t timelocal(tm * __tp) throw(); 
# 325
extern int dysize(int __year) throw() __attribute((const)); 
# 334 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/time.h" 3
extern int nanosleep(const timespec * __requested_time, timespec * __remaining); 
# 339
extern int clock_getres(clockid_t __clock_id, timespec * __res) throw(); 
# 342
extern int clock_gettime(clockid_t __clock_id, timespec * __tp) throw(); 
# 345
extern int clock_settime(clockid_t __clock_id, const timespec * __tp) throw(); 
# 353
extern int clock_nanosleep(clockid_t __clock_id, int __flags, const timespec * __req, timespec * __rem); 
# 358
extern int clock_getcpuclockid(pid_t __pid, clockid_t * __clock_id) throw(); 
# 363
extern int timer_create(clockid_t __clock_id, sigevent *__restrict__ __evp, timer_t *__restrict__ __timerid) throw(); 
# 368
extern int timer_delete(timer_t __timerid) throw(); 
# 371
extern int timer_settime(timer_t __timerid, int __flags, const itimerspec *__restrict__ __value, itimerspec *__restrict__ __ovalue) throw(); 
# 376
extern int timer_gettime(timer_t __timerid, itimerspec * __value) throw(); 
# 380
extern int timer_getoverrun(timer_t __timerid) throw(); 
# 386
extern int timespec_get(timespec * __ts, int __base) throw()
# 387
 __attribute((__nonnull__(1))); 
# 403 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/time.h" 3
extern int getdate_err; 
# 412 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/time.h" 3
extern tm *getdate(const char * __string); 
# 426 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/time.h" 3
extern int getdate_r(const char *__restrict__ __string, tm *__restrict__ __resbufp); 
# 430
}
# 88 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/common_functions.h"
extern "C" {
# 91
extern clock_t clock() throw(); 
# 96 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/common_functions.h"
extern void *memset(void *, int, size_t) throw(); 
# 97 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/common_functions.h"
extern void *memcpy(void *, const void *, size_t) throw(); 
# 99 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/common_functions.h"
}
# 124 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern "C" {
# 222 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern int abs(int a) throw(); 
# 230 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern long labs(long a) throw(); 
# 238 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern long long llabs(long long a) throw(); 
# 288 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double fabs(double x) throw(); 
# 331 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float fabsf(float x) throw(); 
# 341 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern inline int min(const int a, const int b); 
# 348
extern inline unsigned umin(const unsigned a, const unsigned b); 
# 355
extern inline long long llmin(const long long a, const long long b); 
# 362
extern inline unsigned long long ullmin(const unsigned long long a, const unsigned long long b); 
# 383 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float fminf(float x, float y) throw(); 
# 403 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double fmin(double x, double y) throw(); 
# 416 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern inline int max(const int a, const int b); 
# 424
extern inline unsigned umax(const unsigned a, const unsigned b); 
# 431
extern inline long long llmax(const long long a, const long long b); 
# 438
extern inline unsigned long long ullmax(const unsigned long long a, const unsigned long long b); 
# 459 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float fmaxf(float x, float y) throw(); 
# 479 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double fmax(double, double) throw(); 
# 523 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double sin(double x) throw(); 
# 556 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double cos(double x) throw(); 
# 575 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern void sincos(double x, double * sptr, double * cptr) throw(); 
# 591 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern void sincosf(float x, float * sptr, float * cptr) throw(); 
# 636 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double tan(double x) throw(); 
# 705 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double sqrt(double x) throw(); 
# 777 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double rsqrt(double x); 
# 847 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float rsqrtf(float x); 
# 903 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double log2(double x) throw(); 
# 968 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double exp2(double x) throw(); 
# 1033 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float exp2f(float x) throw(); 
# 1100 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double exp10(double x) throw(); 
# 1163 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float exp10f(float x) throw(); 
# 1256 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double expm1(double x) throw(); 
# 1348 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float expm1f(float x) throw(); 
# 1404 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float log2f(float x) throw(); 
# 1458 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double log10(double x) throw(); 
# 1528 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double log(double x) throw(); 
# 1624 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double log1p(double x) throw(); 
# 1723 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float log1pf(float x) throw(); 
# 1787 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double floor(double x) throw(); 
# 1866 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double exp(double x) throw(); 
# 1907 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double cosh(double x) throw(); 
# 1957 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double sinh(double x) throw(); 
# 2007 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double tanh(double x) throw(); 
# 2062 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double acosh(double x) throw(); 
# 2120 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float acoshf(float x) throw(); 
# 2173 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double asinh(double x) throw(); 
# 2226 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float asinhf(float x) throw(); 
# 2280 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double atanh(double x) throw(); 
# 2334 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float atanhf(float x) throw(); 
# 2383 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double ldexp(double x, int exp) throw(); 
# 2429 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float ldexpf(float x, int exp) throw(); 
# 2481 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double logb(double x) throw(); 
# 2536 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float logbf(float x) throw(); 
# 2576 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern int ilogb(double x) throw(); 
# 2616 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern int ilogbf(float x) throw(); 
# 2692 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double scalbn(double x, int n) throw(); 
# 2768 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float scalbnf(float x, int n) throw(); 
# 2844 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double scalbln(double x, long n) throw(); 
# 2920 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float scalblnf(float x, long n) throw(); 
# 2997 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double frexp(double x, int * nptr) throw(); 
# 3071 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float frexpf(float x, int * nptr) throw(); 
# 3123 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double round(double x) throw(); 
# 3178 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float roundf(float x) throw(); 
# 3196 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern long lround(double x) throw(); 
# 3214 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern long lroundf(float x) throw(); 
# 3232 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern long long llround(double x) throw(); 
# 3250 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern long long llroundf(float x) throw(); 
# 3378 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float rintf(float x) throw(); 
# 3395 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern long lrint(double x) throw(); 
# 3412 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern long lrintf(float x) throw(); 
# 3429 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern long long llrint(double x) throw(); 
# 3446 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern long long llrintf(float x) throw(); 
# 3499 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double nearbyint(double x) throw(); 
# 3552 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float nearbyintf(float x) throw(); 
# 3614 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double ceil(double x) throw(); 
# 3664 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double trunc(double x) throw(); 
# 3717 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float truncf(float x) throw(); 
# 3743 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double fdim(double x, double y) throw(); 
# 3769 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float fdimf(float x, float y) throw(); 
# 4069 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double atan2(double y, double x) throw(); 
# 4140 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double atan(double x) throw(); 
# 4163 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double acos(double x) throw(); 
# 4214 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double asin(double x) throw(); 
# 4282 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double hypot(double x, double y) throw(); 
# 4405 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float hypotf(float x, float y) throw(); 
# 5191 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double cbrt(double x) throw(); 
# 5277 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float cbrtf(float x) throw(); 
# 5332 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double rcbrt(double x); 
# 5382 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float rcbrtf(float x); 
# 5442 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double sinpi(double x); 
# 5502 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float sinpif(float x); 
# 5554 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double cospi(double x); 
# 5606 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float cospif(float x); 
# 5636 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern void sincospi(double x, double * sptr, double * cptr); 
# 5666 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern void sincospif(float x, float * sptr, float * cptr); 
# 5999 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double pow(double x, double y) throw(); 
# 6055 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double modf(double x, double * iptr) throw(); 
# 6114 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double fmod(double x, double y) throw(); 
# 6210 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double remainder(double x, double y) throw(); 
# 6309 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float remainderf(float x, float y) throw(); 
# 6381 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double remquo(double x, double y, int * quo) throw(); 
# 6453 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float remquof(float x, float y, int * quo) throw(); 
# 6494 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double j0(double x) throw(); 
# 6536 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float j0f(float x) throw(); 
# 6605 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double j1(double x) throw(); 
# 6674 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float j1f(float x) throw(); 
# 6717 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double jn(int n, double x) throw(); 
# 6760 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float jnf(int n, float x) throw(); 
# 6821 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double y0(double x) throw(); 
# 6882 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float y0f(float x) throw(); 
# 6943 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double y1(double x) throw(); 
# 7004 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float y1f(float x) throw(); 
# 7067 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double yn(int n, double x) throw(); 
# 7130 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float ynf(int n, float x) throw(); 
# 7319 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double erf(double x) throw(); 
# 7401 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float erff(float x) throw(); 
# 7473 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double erfinv(double x); 
# 7538 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float erfinvf(float x); 
# 7577 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double erfc(double x) throw(); 
# 7615 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float erfcf(float x) throw(); 
# 7732 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double lgamma(double x) throw(); 
# 7794 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double erfcinv(double x); 
# 7849 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float erfcinvf(float x); 
# 7917 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double normcdfinv(double x); 
# 7985 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float normcdfinvf(float x); 
# 8028 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double normcdf(double x); 
# 8071 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float normcdff(float x); 
# 8135 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double erfcx(double x); 
# 8199 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float erfcxf(float x); 
# 8318 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float lgammaf(float x) throw(); 
# 8416 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double tgamma(double x) throw(); 
# 8514 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float tgammaf(float x) throw(); 
# 8527 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double copysign(double x, double y) throw(); 
# 8540 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float copysignf(float x, float y) throw(); 
# 8559 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double nextafter(double x, double y) throw(); 
# 8578 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float nextafterf(float x, float y) throw(); 
# 8594 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double nan(const char * tagp) throw(); 
# 8610 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float nanf(const char * tagp) throw(); 
# 8617 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern int __isinff(float) throw(); 
# 8618 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern int __isnanf(float) throw(); 
# 8628 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern int __finite(double) throw(); 
# 8629 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern int __finitef(float) throw(); 
# 8630 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern int __signbit(double) throw(); 
# 8631 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern int __isnan(double) throw(); 
# 8632 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern int __isinf(double) throw(); 
# 8635 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern int __signbitf(float) throw(); 
# 8794 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern double fma(double x, double y, double z) throw(); 
# 8952 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float fmaf(float x, float y, float z) throw(); 
# 8963 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern int __signbitl(long double) throw(); 
# 8969 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern int __finitel(long double) throw(); 
# 8970 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern int __isinfl(long double) throw(); 
# 8971 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern int __isnanl(long double) throw(); 
# 9021 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float acosf(float x) throw(); 
# 9080 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float asinf(float x) throw(); 
# 9160 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float atanf(float x) throw(); 
# 9457 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float atan2f(float y, float x) throw(); 
# 9491 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float cosf(float x) throw(); 
# 9533 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float sinf(float x) throw(); 
# 9575 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float tanf(float x) throw(); 
# 9616 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float coshf(float x) throw(); 
# 9666 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float sinhf(float x) throw(); 
# 9716 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float tanhf(float x) throw(); 
# 9768 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float logf(float x) throw(); 
# 9848 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float expf(float x) throw(); 
# 9900 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float log10f(float x) throw(); 
# 9955 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float modff(float x, float * iptr) throw(); 
# 10285 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float powf(float x, float y) throw(); 
# 10354 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float sqrtf(float x) throw(); 
# 10413 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float ceilf(float x) throw(); 
# 10474 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float floorf(float x) throw(); 
# 10532 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern float fmodf(float x, float y) throw(); 
# 10547 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
}
# 67 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/cpp_type_traits.h" 3
extern "C++" {
# 69
namespace std __attribute((__visibility__("default"))) { 
# 73
struct __true_type { }; 
# 74
struct __false_type { }; 
# 76
template< bool > 
# 77
struct __truth_type { 
# 78
typedef __false_type __type; }; 
# 81
template<> struct __truth_type< true>  { 
# 82
typedef __true_type __type; }; 
# 86
template< class _Sp, class _Tp> 
# 87
struct __traitor { 
# 89
enum { __value = ((bool)_Sp::__value) || ((bool)_Tp::__value)}; 
# 90
typedef typename __truth_type< __value> ::__type __type; 
# 91
}; 
# 94
template< class , class > 
# 95
struct __are_same { 
# 97
enum { __value}; 
# 98
typedef __false_type __type; 
# 99
}; 
# 101
template< class _Tp> 
# 102
struct __are_same< _Tp, _Tp>  { 
# 104
enum { __value = 1}; 
# 105
typedef __true_type __type; 
# 106
}; 
# 109
template< class _Tp> 
# 110
struct __is_void { 
# 112
enum { __value}; 
# 113
typedef __false_type __type; 
# 114
}; 
# 117
template<> struct __is_void< void>  { 
# 119
enum { __value = 1}; 
# 120
typedef __true_type __type; 
# 121
}; 
# 126
template< class _Tp> 
# 127
struct __is_integer { 
# 129
enum { __value}; 
# 130
typedef __false_type __type; 
# 131
}; 
# 138
template<> struct __is_integer< bool>  { 
# 140
enum { __value = 1}; 
# 141
typedef __true_type __type; 
# 142
}; 
# 145
template<> struct __is_integer< char>  { 
# 147
enum { __value = 1}; 
# 148
typedef __true_type __type; 
# 149
}; 
# 152
template<> struct __is_integer< signed char>  { 
# 154
enum { __value = 1}; 
# 155
typedef __true_type __type; 
# 156
}; 
# 159
template<> struct __is_integer< unsigned char>  { 
# 161
enum { __value = 1}; 
# 162
typedef __true_type __type; 
# 163
}; 
# 167
template<> struct __is_integer< wchar_t>  { 
# 169
enum { __value = 1}; 
# 170
typedef __true_type __type; 
# 171
}; 
# 185 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/cpp_type_traits.h" 3
template<> struct __is_integer< char16_t>  { 
# 187
enum { __value = 1}; 
# 188
typedef __true_type __type; 
# 189
}; 
# 192
template<> struct __is_integer< char32_t>  { 
# 194
enum { __value = 1}; 
# 195
typedef __true_type __type; 
# 196
}; 
# 200
template<> struct __is_integer< short>  { 
# 202
enum { __value = 1}; 
# 203
typedef __true_type __type; 
# 204
}; 
# 207
template<> struct __is_integer< unsigned short>  { 
# 209
enum { __value = 1}; 
# 210
typedef __true_type __type; 
# 211
}; 
# 214
template<> struct __is_integer< int>  { 
# 216
enum { __value = 1}; 
# 217
typedef __true_type __type; 
# 218
}; 
# 221
template<> struct __is_integer< unsigned>  { 
# 223
enum { __value = 1}; 
# 224
typedef __true_type __type; 
# 225
}; 
# 228
template<> struct __is_integer< long>  { 
# 230
enum { __value = 1}; 
# 231
typedef __true_type __type; 
# 232
}; 
# 235
template<> struct __is_integer< unsigned long>  { 
# 237
enum { __value = 1}; 
# 238
typedef __true_type __type; 
# 239
}; 
# 242
template<> struct __is_integer< long long>  { 
# 244
enum { __value = 1}; 
# 245
typedef __true_type __type; 
# 246
}; 
# 249
template<> struct __is_integer< unsigned long long>  { 
# 251
enum { __value = 1}; 
# 252
typedef __true_type __type; 
# 253
}; 
# 272 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/cpp_type_traits.h" 3
template<> struct __is_integer< __int128>  { enum { __value = 1}; typedef __true_type __type; }; template<> struct __is_integer< unsigned __int128>  { enum { __value = 1}; typedef __true_type __type; }; 
# 289 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/cpp_type_traits.h" 3
template< class _Tp> 
# 290
struct __is_floating { 
# 292
enum { __value}; 
# 293
typedef __false_type __type; 
# 294
}; 
# 298
template<> struct __is_floating< float>  { 
# 300
enum { __value = 1}; 
# 301
typedef __true_type __type; 
# 302
}; 
# 305
template<> struct __is_floating< double>  { 
# 307
enum { __value = 1}; 
# 308
typedef __true_type __type; 
# 309
}; 
# 312
template<> struct __is_floating< long double>  { 
# 314
enum { __value = 1}; 
# 315
typedef __true_type __type; 
# 316
}; 
# 321
template< class _Tp> 
# 322
struct __is_pointer { 
# 324
enum { __value}; 
# 325
typedef __false_type __type; 
# 326
}; 
# 328
template< class _Tp> 
# 329
struct __is_pointer< _Tp *>  { 
# 331
enum { __value = 1}; 
# 332
typedef __true_type __type; 
# 333
}; 
# 338
template< class _Tp> 
# 339
struct __is_arithmetic : public __traitor< __is_integer< _Tp> , __is_floating< _Tp> >  { 
# 341
}; 
# 346
template< class _Tp> 
# 347
struct __is_scalar : public __traitor< __is_arithmetic< _Tp> , __is_pointer< _Tp> >  { 
# 349
}; 
# 354
template< class _Tp> 
# 355
struct __is_char { 
# 357
enum { __value}; 
# 358
typedef __false_type __type; 
# 359
}; 
# 362
template<> struct __is_char< char>  { 
# 364
enum { __value = 1}; 
# 365
typedef __true_type __type; 
# 366
}; 
# 370
template<> struct __is_char< wchar_t>  { 
# 372
enum { __value = 1}; 
# 373
typedef __true_type __type; 
# 374
}; 
# 377
template< class _Tp> 
# 378
struct __is_byte { 
# 380
enum { __value}; 
# 381
typedef __false_type __type; 
# 382
}; 
# 385
template<> struct __is_byte< char>  { 
# 387
enum { __value = 1}; 
# 388
typedef __true_type __type; 
# 389
}; 
# 392
template<> struct __is_byte< signed char>  { 
# 394
enum { __value = 1}; 
# 395
typedef __true_type __type; 
# 396
}; 
# 399
template<> struct __is_byte< unsigned char>  { 
# 401
enum { __value = 1}; 
# 402
typedef __true_type __type; 
# 403
}; 
# 406
enum class byte: unsigned char; 
# 409
template<> struct __is_byte< byte>  { 
# 411
enum { __value = 1}; 
# 412
typedef __true_type __type; 
# 413
}; 
# 425 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/cpp_type_traits.h" 3
template< class > struct iterator_traits; 
# 428
template< class _Tp> 
# 429
struct __is_nonvolatile_trivially_copyable { 
# 431
enum { __value = __is_trivially_copyable(_Tp)}; 
# 432
}; 
# 437
template< class _Tp> 
# 438
struct __is_nonvolatile_trivially_copyable< volatile _Tp>  { 
# 440
enum { __value}; 
# 441
}; 
# 444
template< class _OutputIter, class _InputIter> 
# 445
struct __memcpyable { 
# 447
enum { __value}; 
# 448
}; 
# 450
template< class _Tp> 
# 451
struct __memcpyable< _Tp *, _Tp *>  : public __is_nonvolatile_trivially_copyable< _Tp>  { 
# 453
}; 
# 455
template< class _Tp> 
# 456
struct __memcpyable< _Tp *, const _Tp *>  : public __is_nonvolatile_trivially_copyable< _Tp>  { 
# 458
}; 
# 465
template< class _Iter1, class _Iter2> 
# 466
struct __memcmpable { 
# 468
enum { __value}; 
# 469
}; 
# 472
template< class _Tp> 
# 473
struct __memcmpable< _Tp *, _Tp *>  : public __is_nonvolatile_trivially_copyable< _Tp>  { 
# 475
}; 
# 477
template< class _Tp> 
# 478
struct __memcmpable< const _Tp *, _Tp *>  : public __is_nonvolatile_trivially_copyable< _Tp>  { 
# 480
}; 
# 482
template< class _Tp> 
# 483
struct __memcmpable< _Tp *, const _Tp *>  : public __is_nonvolatile_trivially_copyable< _Tp>  { 
# 485
}; 
# 493
template< class _Tp, bool _TreatAsBytes = __is_byte< _Tp> ::__value> 
# 500
struct __is_memcmp_ordered { 
# 502
static const bool __value = (((_Tp)(-1)) > ((_Tp)1)); 
# 503
}; 
# 505
template< class _Tp> 
# 506
struct __is_memcmp_ordered< _Tp, false>  { 
# 508
static const bool __value = false; 
# 509
}; 
# 512
template< class _Tp, class _Up, bool  = sizeof(_Tp) == sizeof(_Up)> 
# 513
struct __is_memcmp_ordered_with { 
# 515
static const bool __value = (__is_memcmp_ordered< _Tp> ::__value && __is_memcmp_ordered< _Up> ::__value); 
# 517
}; 
# 519
template< class _Tp, class _Up> 
# 520
struct __is_memcmp_ordered_with< _Tp, _Up, false>  { 
# 522
static const bool __value = false; 
# 523
}; 
# 535 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/cpp_type_traits.h" 3
template<> struct __is_memcmp_ordered_with< byte, byte, true>  { 
# 536
static constexpr inline bool __value = true; }; 
# 538
template< class _Tp, bool _SameSize> 
# 539
struct __is_memcmp_ordered_with< _Tp, byte, _SameSize>  { 
# 540
static constexpr inline bool __value = false; }; 
# 542
template< class _Up, bool _SameSize> 
# 543
struct __is_memcmp_ordered_with< byte, _Up, _SameSize>  { 
# 544
static constexpr inline bool __value = false; }; 
# 550
template< class _Tp> 
# 551
struct __is_move_iterator { 
# 553
enum { __value}; 
# 554
typedef __false_type __type; 
# 555
}; 
# 559
template< class _Iterator> inline _Iterator 
# 562
__miter_base(_Iterator __it) 
# 563
{ return __it; } 
# 566
}
# 567
}
# 37 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/ext/type_traits.h" 3
extern "C++" {
# 39
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 44
template< bool , class > 
# 45
struct __enable_if { 
# 46
}; 
# 48
template< class _Tp> 
# 49
struct __enable_if< true, _Tp>  { 
# 50
typedef _Tp __type; }; 
# 54
template< bool _Cond, class _Iftrue, class _Iffalse> 
# 55
struct __conditional_type { 
# 56
typedef _Iftrue __type; }; 
# 58
template< class _Iftrue, class _Iffalse> 
# 59
struct __conditional_type< false, _Iftrue, _Iffalse>  { 
# 60
typedef _Iffalse __type; }; 
# 64
template< class _Tp> 
# 65
struct __add_unsigned { 
# 68
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp>  __if_type; 
# 71
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type; 
# 72
}; 
# 75
template<> struct __add_unsigned< char>  { 
# 76
typedef unsigned char __type; }; 
# 79
template<> struct __add_unsigned< signed char>  { 
# 80
typedef unsigned char __type; }; 
# 83
template<> struct __add_unsigned< short>  { 
# 84
typedef unsigned short __type; }; 
# 87
template<> struct __add_unsigned< int>  { 
# 88
typedef unsigned __type; }; 
# 91
template<> struct __add_unsigned< long>  { 
# 92
typedef unsigned long __type; }; 
# 95
template<> struct __add_unsigned< long long>  { 
# 96
typedef unsigned long long __type; }; 
# 100
template<> struct __add_unsigned< bool> ; 
# 103
template<> struct __add_unsigned< wchar_t> ; 
# 107
template< class _Tp> 
# 108
struct __remove_unsigned { 
# 111
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp>  __if_type; 
# 114
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type; 
# 115
}; 
# 118
template<> struct __remove_unsigned< char>  { 
# 119
typedef signed char __type; }; 
# 122
template<> struct __remove_unsigned< unsigned char>  { 
# 123
typedef signed char __type; }; 
# 126
template<> struct __remove_unsigned< unsigned short>  { 
# 127
typedef short __type; }; 
# 130
template<> struct __remove_unsigned< unsigned>  { 
# 131
typedef int __type; }; 
# 134
template<> struct __remove_unsigned< unsigned long>  { 
# 135
typedef long __type; }; 
# 138
template<> struct __remove_unsigned< unsigned long long>  { 
# 139
typedef long long __type; }; 
# 143
template<> struct __remove_unsigned< bool> ; 
# 146
template<> struct __remove_unsigned< wchar_t> ; 
# 150
template< class _Type> constexpr bool 
# 153
__is_null_pointer(_Type *__ptr) 
# 154
{ return __ptr == 0; } 
# 156
template< class _Type> constexpr bool 
# 159
__is_null_pointer(_Type) 
# 160
{ return false; } 
# 164
constexpr bool __is_null_pointer(std::nullptr_t) 
# 165
{ return true; } 
# 170
template< class _Tp, bool  = std::template __is_integer< _Tp> ::__value> 
# 171
struct __promote { 
# 172
typedef double __type; }; 
# 177
template< class _Tp> 
# 178
struct __promote< _Tp, false>  { 
# 179
}; 
# 182
template<> struct __promote< long double>  { 
# 183
typedef long double __type; }; 
# 186
template<> struct __promote< double>  { 
# 187
typedef double __type; }; 
# 190
template<> struct __promote< float>  { 
# 191
typedef float __type; }; 
# 195
template< class ..._Tp> using __promoted_t = __decltype(((((typename __promote< _Tp> ::__type)0) + ... ))); 
# 200
template< class _Tp, class _Up> using __promote_2 = __promote< __promoted_t< _Tp, _Up> > ; 
# 203
template< class _Tp, class _Up, class _Vp> using __promote_3 = __promote< __promoted_t< _Tp, _Up, _Vp> > ; 
# 206
template< class _Tp, class _Up, class _Vp, class _Wp> using __promote_4 = __promote< __promoted_t< _Tp, _Up, _Vp, _Wp> > ; 
# 240 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/ext/type_traits.h" 3
}
# 241
}
# 29 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/math.h" 3
extern "C" {
# 28 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/bits/mathdef.h" 3
typedef float float_t; 
# 29
typedef double double_t; 
# 54 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/bits/mathcalls.h" 3
extern double acos(double __x) throw(); extern double __acos(double __x) throw(); 
# 56
extern double asin(double __x) throw(); extern double __asin(double __x) throw(); 
# 58
extern double atan(double __x) throw(); extern double __atan(double __x) throw(); 
# 60
extern double atan2(double __y, double __x) throw(); extern double __atan2(double __y, double __x) throw(); 
# 63
extern double cos(double __x) throw(); extern double __cos(double __x) throw(); 
# 65
extern double sin(double __x) throw(); extern double __sin(double __x) throw(); 
# 67
extern double tan(double __x) throw(); extern double __tan(double __x) throw(); 
# 72
extern double cosh(double __x) throw(); extern double __cosh(double __x) throw(); 
# 74
extern double sinh(double __x) throw(); extern double __sinh(double __x) throw(); 
# 76
extern double tanh(double __x) throw(); extern double __tanh(double __x) throw(); 
# 81
extern void sincos(double __x, double * __sinx, double * __cosx) throw(); extern void __sincos(double __x, double * __sinx, double * __cosx) throw(); 
# 88
extern double acosh(double __x) throw(); extern double __acosh(double __x) throw(); 
# 90
extern double asinh(double __x) throw(); extern double __asinh(double __x) throw(); 
# 92
extern double atanh(double __x) throw(); extern double __atanh(double __x) throw(); 
# 100
extern double exp(double __x) throw(); extern double __exp(double __x) throw(); 
# 103
extern double frexp(double __x, int * __exponent) throw(); extern double __frexp(double __x, int * __exponent) throw(); 
# 106
extern double ldexp(double __x, int __exponent) throw(); extern double __ldexp(double __x, int __exponent) throw(); 
# 109
extern double log(double __x) throw(); extern double __log(double __x) throw(); 
# 112
extern double log10(double __x) throw(); extern double __log10(double __x) throw(); 
# 115
extern double modf(double __x, double * __iptr) throw(); extern double __modf(double __x, double * __iptr) throw()
# 116
 __attribute((__nonnull__(2))); 
# 121
extern double exp10(double __x) throw(); extern double __exp10(double __x) throw(); 
# 123
extern double pow10(double __x) throw(); extern double __pow10(double __x) throw(); 
# 129
extern double expm1(double __x) throw(); extern double __expm1(double __x) throw(); 
# 132
extern double log1p(double __x) throw(); extern double __log1p(double __x) throw(); 
# 135
extern double logb(double __x) throw(); extern double __logb(double __x) throw(); 
# 142
extern double exp2(double __x) throw(); extern double __exp2(double __x) throw(); 
# 145
extern double log2(double __x) throw(); extern double __log2(double __x) throw(); 
# 154
extern double pow(double __x, double __y) throw(); extern double __pow(double __x, double __y) throw(); 
# 157
extern double sqrt(double __x) throw(); extern double __sqrt(double __x) throw(); 
# 163
extern double hypot(double __x, double __y) throw(); extern double __hypot(double __x, double __y) throw(); 
# 170
extern double cbrt(double __x) throw(); extern double __cbrt(double __x) throw(); 
# 179
extern double ceil(double __x) throw() __attribute((const)); extern double __ceil(double __x) throw() __attribute((const)); 
# 182
extern double fabs(double __x) throw() __attribute((const)); extern double __fabs(double __x) throw() __attribute((const)); 
# 185
extern double floor(double __x) throw() __attribute((const)); extern double __floor(double __x) throw() __attribute((const)); 
# 188
extern double fmod(double __x, double __y) throw(); extern double __fmod(double __x, double __y) throw(); 
# 193
extern int __isinf(double __value) throw() __attribute((const)); 
# 196
extern int __finite(double __value) throw() __attribute((const)); 
# 202
extern int isinf(double __value) throw() __attribute((const)); 
# 205
extern int finite(double __value) throw() __attribute((const)); 
# 208
extern double drem(double __x, double __y) throw(); extern double __drem(double __x, double __y) throw(); 
# 212
extern double significand(double __x) throw(); extern double __significand(double __x) throw(); 
# 218
extern double copysign(double __x, double __y) throw() __attribute((const)); extern double __copysign(double __x, double __y) throw() __attribute((const)); 
# 225
extern double nan(const char * __tagb) throw() __attribute((const)); extern double __nan(const char * __tagb) throw() __attribute((const)); 
# 231
extern int __isnan(double __value) throw() __attribute((const)); 
# 235
extern int isnan(double __value) throw() __attribute((const)); 
# 238
extern double j0(double) throw(); extern double __j0(double) throw(); 
# 239
extern double j1(double) throw(); extern double __j1(double) throw(); 
# 240
extern double jn(int, double) throw(); extern double __jn(int, double) throw(); 
# 241
extern double y0(double) throw(); extern double __y0(double) throw(); 
# 242
extern double y1(double) throw(); extern double __y1(double) throw(); 
# 243
extern double yn(int, double) throw(); extern double __yn(int, double) throw(); 
# 250
extern double erf(double) throw(); extern double __erf(double) throw(); 
# 251
extern double erfc(double) throw(); extern double __erfc(double) throw(); 
# 252
extern double lgamma(double) throw(); extern double __lgamma(double) throw(); 
# 259
extern double tgamma(double) throw(); extern double __tgamma(double) throw(); 
# 265
extern double gamma(double) throw(); extern double __gamma(double) throw(); 
# 272
extern double lgamma_r(double, int * __signgamp) throw(); extern double __lgamma_r(double, int * __signgamp) throw(); 
# 280
extern double rint(double __x) throw(); extern double __rint(double __x) throw(); 
# 283
extern double nextafter(double __x, double __y) throw() __attribute((const)); extern double __nextafter(double __x, double __y) throw() __attribute((const)); 
# 285
extern double nexttoward(double __x, long double __y) throw() __attribute((const)); extern double __nexttoward(double __x, long double __y) throw() __attribute((const)); 
# 289
extern double remainder(double __x, double __y) throw(); extern double __remainder(double __x, double __y) throw(); 
# 293
extern double scalbn(double __x, int __n) throw(); extern double __scalbn(double __x, int __n) throw(); 
# 297
extern int ilogb(double __x) throw(); extern int __ilogb(double __x) throw(); 
# 302
extern double scalbln(double __x, long __n) throw(); extern double __scalbln(double __x, long __n) throw(); 
# 306
extern double nearbyint(double __x) throw(); extern double __nearbyint(double __x) throw(); 
# 310
extern double round(double __x) throw() __attribute((const)); extern double __round(double __x) throw() __attribute((const)); 
# 314
extern double trunc(double __x) throw() __attribute((const)); extern double __trunc(double __x) throw() __attribute((const)); 
# 319
extern double remquo(double __x, double __y, int * __quo) throw(); extern double __remquo(double __x, double __y, int * __quo) throw(); 
# 326
extern long lrint(double __x) throw(); extern long __lrint(double __x) throw(); 
# 327
extern long long llrint(double __x) throw(); extern long long __llrint(double __x) throw(); 
# 331
extern long lround(double __x) throw(); extern long __lround(double __x) throw(); 
# 332
extern long long llround(double __x) throw(); extern long long __llround(double __x) throw(); 
# 336
extern double fdim(double __x, double __y) throw(); extern double __fdim(double __x, double __y) throw(); 
# 339
extern double fmax(double __x, double __y) throw() __attribute((const)); extern double __fmax(double __x, double __y) throw() __attribute((const)); 
# 342
extern double fmin(double __x, double __y) throw() __attribute((const)); extern double __fmin(double __x, double __y) throw() __attribute((const)); 
# 346
extern int __fpclassify(double __value) throw()
# 347
 __attribute((const)); 
# 350
extern int __signbit(double __value) throw()
# 351
 __attribute((const)); 
# 355
extern double fma(double __x, double __y, double __z) throw(); extern double __fma(double __x, double __y, double __z) throw(); 
# 364
extern double scalb(double __x, double __n) throw(); extern double __scalb(double __x, double __n) throw(); 
# 54 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/bits/mathcalls.h" 3
extern float acosf(float __x) throw(); extern float __acosf(float __x) throw(); 
# 56
extern float asinf(float __x) throw(); extern float __asinf(float __x) throw(); 
# 58
extern float atanf(float __x) throw(); extern float __atanf(float __x) throw(); 
# 60
extern float atan2f(float __y, float __x) throw(); extern float __atan2f(float __y, float __x) throw(); 
# 63
extern float cosf(float __x) throw(); 
# 65
extern float sinf(float __x) throw(); 
# 67
extern float tanf(float __x) throw(); 
# 72
extern float coshf(float __x) throw(); extern float __coshf(float __x) throw(); 
# 74
extern float sinhf(float __x) throw(); extern float __sinhf(float __x) throw(); 
# 76
extern float tanhf(float __x) throw(); extern float __tanhf(float __x) throw(); 
# 81
extern void sincosf(float __x, float * __sinx, float * __cosx) throw(); 
# 88
extern float acoshf(float __x) throw(); extern float __acoshf(float __x) throw(); 
# 90
extern float asinhf(float __x) throw(); extern float __asinhf(float __x) throw(); 
# 92
extern float atanhf(float __x) throw(); extern float __atanhf(float __x) throw(); 
# 100
extern float expf(float __x) throw(); 
# 103
extern float frexpf(float __x, int * __exponent) throw(); extern float __frexpf(float __x, int * __exponent) throw(); 
# 106
extern float ldexpf(float __x, int __exponent) throw(); extern float __ldexpf(float __x, int __exponent) throw(); 
# 109
extern float logf(float __x) throw(); 
# 112
extern float log10f(float __x) throw(); 
# 115
extern float modff(float __x, float * __iptr) throw(); extern float __modff(float __x, float * __iptr) throw()
# 116
 __attribute((__nonnull__(2))); 
# 121
extern float exp10f(float __x) throw(); 
# 123
extern float pow10f(float __x) throw(); extern float __pow10f(float __x) throw(); 
# 129
extern float expm1f(float __x) throw(); extern float __expm1f(float __x) throw(); 
# 132
extern float log1pf(float __x) throw(); extern float __log1pf(float __x) throw(); 
# 135
extern float logbf(float __x) throw(); extern float __logbf(float __x) throw(); 
# 142
extern float exp2f(float __x) throw(); extern float __exp2f(float __x) throw(); 
# 145
extern float log2f(float __x) throw(); 
# 154
extern float powf(float __x, float __y) throw(); 
# 157
extern float sqrtf(float __x) throw(); extern float __sqrtf(float __x) throw(); 
# 163
extern float hypotf(float __x, float __y) throw(); extern float __hypotf(float __x, float __y) throw(); 
# 170
extern float cbrtf(float __x) throw(); extern float __cbrtf(float __x) throw(); 
# 179
extern float ceilf(float __x) throw() __attribute((const)); extern float __ceilf(float __x) throw() __attribute((const)); 
# 182
extern float fabsf(float __x) throw() __attribute((const)); extern float __fabsf(float __x) throw() __attribute((const)); 
# 185
extern float floorf(float __x) throw() __attribute((const)); extern float __floorf(float __x) throw() __attribute((const)); 
# 188
extern float fmodf(float __x, float __y) throw(); extern float __fmodf(float __x, float __y) throw(); 
# 193
extern int __isinff(float __value) throw() __attribute((const)); 
# 196
extern int __finitef(float __value) throw() __attribute((const)); 
# 202
extern int isinff(float __value) throw() __attribute((const)); 
# 205
extern int finitef(float __value) throw() __attribute((const)); 
# 208
extern float dremf(float __x, float __y) throw(); extern float __dremf(float __x, float __y) throw(); 
# 212
extern float significandf(float __x) throw(); extern float __significandf(float __x) throw(); 
# 218
extern float copysignf(float __x, float __y) throw() __attribute((const)); extern float __copysignf(float __x, float __y) throw() __attribute((const)); 
# 225
extern float nanf(const char * __tagb) throw() __attribute((const)); extern float __nanf(const char * __tagb) throw() __attribute((const)); 
# 231
extern int __isnanf(float __value) throw() __attribute((const)); 
# 235
extern int isnanf(float __value) throw() __attribute((const)); 
# 238
extern float j0f(float) throw(); extern float __j0f(float) throw(); 
# 239
extern float j1f(float) throw(); extern float __j1f(float) throw(); 
# 240
extern float jnf(int, float) throw(); extern float __jnf(int, float) throw(); 
# 241
extern float y0f(float) throw(); extern float __y0f(float) throw(); 
# 242
extern float y1f(float) throw(); extern float __y1f(float) throw(); 
# 243
extern float ynf(int, float) throw(); extern float __ynf(int, float) throw(); 
# 250
extern float erff(float) throw(); extern float __erff(float) throw(); 
# 251
extern float erfcf(float) throw(); extern float __erfcf(float) throw(); 
# 252
extern float lgammaf(float) throw(); extern float __lgammaf(float) throw(); 
# 259
extern float tgammaf(float) throw(); extern float __tgammaf(float) throw(); 
# 265
extern float gammaf(float) throw(); extern float __gammaf(float) throw(); 
# 272
extern float lgammaf_r(float, int * __signgamp) throw(); extern float __lgammaf_r(float, int * __signgamp) throw(); 
# 280
extern float rintf(float __x) throw(); extern float __rintf(float __x) throw(); 
# 283
extern float nextafterf(float __x, float __y) throw() __attribute((const)); extern float __nextafterf(float __x, float __y) throw() __attribute((const)); 
# 285
extern float nexttowardf(float __x, long double __y) throw() __attribute((const)); extern float __nexttowardf(float __x, long double __y) throw() __attribute((const)); 
# 289
extern float remainderf(float __x, float __y) throw(); extern float __remainderf(float __x, float __y) throw(); 
# 293
extern float scalbnf(float __x, int __n) throw(); extern float __scalbnf(float __x, int __n) throw(); 
# 297
extern int ilogbf(float __x) throw(); extern int __ilogbf(float __x) throw(); 
# 302
extern float scalblnf(float __x, long __n) throw(); extern float __scalblnf(float __x, long __n) throw(); 
# 306
extern float nearbyintf(float __x) throw(); extern float __nearbyintf(float __x) throw(); 
# 310
extern float roundf(float __x) throw() __attribute((const)); extern float __roundf(float __x) throw() __attribute((const)); 
# 314
extern float truncf(float __x) throw() __attribute((const)); extern float __truncf(float __x) throw() __attribute((const)); 
# 319
extern float remquof(float __x, float __y, int * __quo) throw(); extern float __remquof(float __x, float __y, int * __quo) throw(); 
# 326
extern long lrintf(float __x) throw(); extern long __lrintf(float __x) throw(); 
# 327
extern long long llrintf(float __x) throw(); extern long long __llrintf(float __x) throw(); 
# 331
extern long lroundf(float __x) throw(); extern long __lroundf(float __x) throw(); 
# 332
extern long long llroundf(float __x) throw(); extern long long __llroundf(float __x) throw(); 
# 336
extern float fdimf(float __x, float __y) throw(); extern float __fdimf(float __x, float __y) throw(); 
# 339
extern float fmaxf(float __x, float __y) throw() __attribute((const)); extern float __fmaxf(float __x, float __y) throw() __attribute((const)); 
# 342
extern float fminf(float __x, float __y) throw() __attribute((const)); extern float __fminf(float __x, float __y) throw() __attribute((const)); 
# 346
extern int __fpclassifyf(float __value) throw()
# 347
 __attribute((const)); 
# 350
extern int __signbitf(float __value) throw()
# 351
 __attribute((const)); 
# 355
extern float fmaf(float __x, float __y, float __z) throw(); extern float __fmaf(float __x, float __y, float __z) throw(); 
# 364
extern float scalbf(float __x, float __n) throw(); extern float __scalbf(float __x, float __n) throw(); 
# 54 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/bits/mathcalls.h" 3
extern long double acosl(long double __x) throw(); extern long double __acosl(long double __x) throw(); 
# 56
extern long double asinl(long double __x) throw(); extern long double __asinl(long double __x) throw(); 
# 58
extern long double atanl(long double __x) throw(); extern long double __atanl(long double __x) throw(); 
# 60
extern long double atan2l(long double __y, long double __x) throw(); extern long double __atan2l(long double __y, long double __x) throw(); 
# 63
extern long double cosl(long double __x) throw(); extern long double __cosl(long double __x) throw(); 
# 65
extern long double sinl(long double __x) throw(); extern long double __sinl(long double __x) throw(); 
# 67
extern long double tanl(long double __x) throw(); extern long double __tanl(long double __x) throw(); 
# 72
extern long double coshl(long double __x) throw(); extern long double __coshl(long double __x) throw(); 
# 74
extern long double sinhl(long double __x) throw(); extern long double __sinhl(long double __x) throw(); 
# 76
extern long double tanhl(long double __x) throw(); extern long double __tanhl(long double __x) throw(); 
# 81
extern void sincosl(long double __x, long double * __sinx, long double * __cosx) throw(); extern void __sincosl(long double __x, long double * __sinx, long double * __cosx) throw(); 
# 88
extern long double acoshl(long double __x) throw(); extern long double __acoshl(long double __x) throw(); 
# 90
extern long double asinhl(long double __x) throw(); extern long double __asinhl(long double __x) throw(); 
# 92
extern long double atanhl(long double __x) throw(); extern long double __atanhl(long double __x) throw(); 
# 100
extern long double expl(long double __x) throw(); extern long double __expl(long double __x) throw(); 
# 103
extern long double frexpl(long double __x, int * __exponent) throw(); extern long double __frexpl(long double __x, int * __exponent) throw(); 
# 106
extern long double ldexpl(long double __x, int __exponent) throw(); extern long double __ldexpl(long double __x, int __exponent) throw(); 
# 109
extern long double logl(long double __x) throw(); extern long double __logl(long double __x) throw(); 
# 112
extern long double log10l(long double __x) throw(); extern long double __log10l(long double __x) throw(); 
# 115
extern long double modfl(long double __x, long double * __iptr) throw(); extern long double __modfl(long double __x, long double * __iptr) throw()
# 116
 __attribute((__nonnull__(2))); 
# 121
extern long double exp10l(long double __x) throw(); extern long double __exp10l(long double __x) throw(); 
# 123
extern long double pow10l(long double __x) throw(); extern long double __pow10l(long double __x) throw(); 
# 129
extern long double expm1l(long double __x) throw(); extern long double __expm1l(long double __x) throw(); 
# 132
extern long double log1pl(long double __x) throw(); extern long double __log1pl(long double __x) throw(); 
# 135
extern long double logbl(long double __x) throw(); extern long double __logbl(long double __x) throw(); 
# 142
extern long double exp2l(long double __x) throw(); extern long double __exp2l(long double __x) throw(); 
# 145
extern long double log2l(long double __x) throw(); extern long double __log2l(long double __x) throw(); 
# 154
extern long double powl(long double __x, long double __y) throw(); extern long double __powl(long double __x, long double __y) throw(); 
# 157
extern long double sqrtl(long double __x) throw(); extern long double __sqrtl(long double __x) throw(); 
# 163
extern long double hypotl(long double __x, long double __y) throw(); extern long double __hypotl(long double __x, long double __y) throw(); 
# 170
extern long double cbrtl(long double __x) throw(); extern long double __cbrtl(long double __x) throw(); 
# 179
extern long double ceill(long double __x) throw() __attribute((const)); extern long double __ceill(long double __x) throw() __attribute((const)); 
# 182
extern long double fabsl(long double __x) throw() __attribute((const)); extern long double __fabsl(long double __x) throw() __attribute((const)); 
# 185
extern long double floorl(long double __x) throw() __attribute((const)); extern long double __floorl(long double __x) throw() __attribute((const)); 
# 188
extern long double fmodl(long double __x, long double __y) throw(); extern long double __fmodl(long double __x, long double __y) throw(); 
# 193
extern int __isinfl(long double __value) throw() __attribute((const)); 
# 196
extern int __finitel(long double __value) throw() __attribute((const)); 
# 202
extern int isinfl(long double __value) throw() __attribute((const)); 
# 205
extern int finitel(long double __value) throw() __attribute((const)); 
# 208
extern long double dreml(long double __x, long double __y) throw(); extern long double __dreml(long double __x, long double __y) throw(); 
# 212
extern long double significandl(long double __x) throw(); extern long double __significandl(long double __x) throw(); 
# 218
extern long double copysignl(long double __x, long double __y) throw() __attribute((const)); extern long double __copysignl(long double __x, long double __y) throw() __attribute((const)); 
# 225
extern long double nanl(const char * __tagb) throw() __attribute((const)); extern long double __nanl(const char * __tagb) throw() __attribute((const)); 
# 231
extern int __isnanl(long double __value) throw() __attribute((const)); 
# 235
extern int isnanl(long double __value) throw() __attribute((const)); 
# 238
extern long double j0l(long double) throw(); extern long double __j0l(long double) throw(); 
# 239
extern long double j1l(long double) throw(); extern long double __j1l(long double) throw(); 
# 240
extern long double jnl(int, long double) throw(); extern long double __jnl(int, long double) throw(); 
# 241
extern long double y0l(long double) throw(); extern long double __y0l(long double) throw(); 
# 242
extern long double y1l(long double) throw(); extern long double __y1l(long double) throw(); 
# 243
extern long double ynl(int, long double) throw(); extern long double __ynl(int, long double) throw(); 
# 250
extern long double erfl(long double) throw(); extern long double __erfl(long double) throw(); 
# 251
extern long double erfcl(long double) throw(); extern long double __erfcl(long double) throw(); 
# 252
extern long double lgammal(long double) throw(); extern long double __lgammal(long double) throw(); 
# 259
extern long double tgammal(long double) throw(); extern long double __tgammal(long double) throw(); 
# 265
extern long double gammal(long double) throw(); extern long double __gammal(long double) throw(); 
# 272
extern long double lgammal_r(long double, int * __signgamp) throw(); extern long double __lgammal_r(long double, int * __signgamp) throw(); 
# 280
extern long double rintl(long double __x) throw(); extern long double __rintl(long double __x) throw(); 
# 283
extern long double nextafterl(long double __x, long double __y) throw() __attribute((const)); extern long double __nextafterl(long double __x, long double __y) throw() __attribute((const)); 
# 285
extern long double nexttowardl(long double __x, long double __y) throw() __attribute((const)); extern long double __nexttowardl(long double __x, long double __y) throw() __attribute((const)); 
# 289
extern long double remainderl(long double __x, long double __y) throw(); extern long double __remainderl(long double __x, long double __y) throw(); 
# 293
extern long double scalbnl(long double __x, int __n) throw(); extern long double __scalbnl(long double __x, int __n) throw(); 
# 297
extern int ilogbl(long double __x) throw(); extern int __ilogbl(long double __x) throw(); 
# 302
extern long double scalblnl(long double __x, long __n) throw(); extern long double __scalblnl(long double __x, long __n) throw(); 
# 306
extern long double nearbyintl(long double __x) throw(); extern long double __nearbyintl(long double __x) throw(); 
# 310
extern long double roundl(long double __x) throw() __attribute((const)); extern long double __roundl(long double __x) throw() __attribute((const)); 
# 314
extern long double truncl(long double __x) throw() __attribute((const)); extern long double __truncl(long double __x) throw() __attribute((const)); 
# 319
extern long double remquol(long double __x, long double __y, int * __quo) throw(); extern long double __remquol(long double __x, long double __y, int * __quo) throw(); 
# 326
extern long lrintl(long double __x) throw(); extern long __lrintl(long double __x) throw(); 
# 327
extern long long llrintl(long double __x) throw(); extern long long __llrintl(long double __x) throw(); 
# 331
extern long lroundl(long double __x) throw(); extern long __lroundl(long double __x) throw(); 
# 332
extern long long llroundl(long double __x) throw(); extern long long __llroundl(long double __x) throw(); 
# 336
extern long double fdiml(long double __x, long double __y) throw(); extern long double __fdiml(long double __x, long double __y) throw(); 
# 339
extern long double fmaxl(long double __x, long double __y) throw() __attribute((const)); extern long double __fmaxl(long double __x, long double __y) throw() __attribute((const)); 
# 342
extern long double fminl(long double __x, long double __y) throw() __attribute((const)); extern long double __fminl(long double __x, long double __y) throw() __attribute((const)); 
# 346
extern int __fpclassifyl(long double __value) throw()
# 347
 __attribute((const)); 
# 350
extern int __signbitl(long double __value) throw()
# 351
 __attribute((const)); 
# 355
extern long double fmal(long double __x, long double __y, long double __z) throw(); extern long double __fmal(long double __x, long double __y, long double __z) throw(); 
# 364
extern long double scalbl(long double __x, long double __n) throw(); extern long double __scalbl(long double __x, long double __n) throw(); 
# 149 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/math.h" 3
extern int signgam; 
# 191 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/math.h" 3
enum { 
# 192
FP_NAN, 
# 195
FP_INFINITE, 
# 198
FP_ZERO, 
# 201
FP_SUBNORMAL, 
# 204
FP_NORMAL
# 207
}; 
# 295 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/math.h" 3
typedef 
# 289
enum { 
# 290
_IEEE_ = (-1), 
# 291
_SVID_ = 0, 
# 292
_XOPEN_, 
# 293
_POSIX_, 
# 294
_ISOC_
# 295
} _LIB_VERSION_TYPE; 
# 300
extern _LIB_VERSION_TYPE _LIB_VERSION; 
# 311 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/math.h" 3
struct __exception { 
# 316
int type; 
# 317
char *name; 
# 318
double arg1; 
# 319
double arg2; 
# 320
double retval; 
# 321
}; 
# 324
extern int matherr(__exception * __exc) throw(); 
# 475 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/sysroot/usr/include/math.h" 3
}
# 77 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/cmath" 3
extern "C++" {
# 79
namespace std __attribute((__visibility__("default"))) { 
# 83
using ::acos;
# 87
constexpr float acos(float __x) 
# 88
{ return __builtin_acosf(__x); } 
# 91
constexpr long double acos(long double __x) 
# 92
{ return __builtin_acosl(__x); } 
# 95
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 99
acos(_Tp __x) 
# 100
{ return __builtin_acos(__x); } 
# 102
using ::asin;
# 106
constexpr float asin(float __x) 
# 107
{ return __builtin_asinf(__x); } 
# 110
constexpr long double asin(long double __x) 
# 111
{ return __builtin_asinl(__x); } 
# 114
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 118
asin(_Tp __x) 
# 119
{ return __builtin_asin(__x); } 
# 121
using ::atan;
# 125
constexpr float atan(float __x) 
# 126
{ return __builtin_atanf(__x); } 
# 129
constexpr long double atan(long double __x) 
# 130
{ return __builtin_atanl(__x); } 
# 133
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 137
atan(_Tp __x) 
# 138
{ return __builtin_atan(__x); } 
# 140
using ::atan2;
# 144
constexpr float atan2(float __y, float __x) 
# 145
{ return __builtin_atan2f(__y, __x); } 
# 148
constexpr long double atan2(long double __y, long double __x) 
# 149
{ return __builtin_atan2l(__y, __x); } 
# 152
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 155
atan2(_Tp __y, _Up __x) 
# 156
{ 
# 157
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 158
return atan2((__type)__y, (__type)__x); 
# 159
} 
# 161
using ::ceil;
# 165
constexpr float ceil(float __x) 
# 166
{ return __builtin_ceilf(__x); } 
# 169
constexpr long double ceil(long double __x) 
# 170
{ return __builtin_ceill(__x); } 
# 173
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 177
ceil(_Tp __x) 
# 178
{ return __builtin_ceil(__x); } 
# 180
using ::cos;
# 184
constexpr float cos(float __x) 
# 185
{ return __builtin_cosf(__x); } 
# 188
constexpr long double cos(long double __x) 
# 189
{ return __builtin_cosl(__x); } 
# 192
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 196
cos(_Tp __x) 
# 197
{ return __builtin_cos(__x); } 
# 199
using ::cosh;
# 203
constexpr float cosh(float __x) 
# 204
{ return __builtin_coshf(__x); } 
# 207
constexpr long double cosh(long double __x) 
# 208
{ return __builtin_coshl(__x); } 
# 211
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 215
cosh(_Tp __x) 
# 216
{ return __builtin_cosh(__x); } 
# 218
using ::exp;
# 222
constexpr float exp(float __x) 
# 223
{ return __builtin_expf(__x); } 
# 226
constexpr long double exp(long double __x) 
# 227
{ return __builtin_expl(__x); } 
# 230
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 234
exp(_Tp __x) 
# 235
{ return __builtin_exp(__x); } 
# 237
using ::fabs;
# 241
constexpr float fabs(float __x) 
# 242
{ return __builtin_fabsf(__x); } 
# 245
constexpr long double fabs(long double __x) 
# 246
{ return __builtin_fabsl(__x); } 
# 249
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 253
fabs(_Tp __x) 
# 254
{ return __builtin_fabs(__x); } 
# 256
using ::floor;
# 260
constexpr float floor(float __x) 
# 261
{ return __builtin_floorf(__x); } 
# 264
constexpr long double floor(long double __x) 
# 265
{ return __builtin_floorl(__x); } 
# 268
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 272
floor(_Tp __x) 
# 273
{ return __builtin_floor(__x); } 
# 275
using ::fmod;
# 279
constexpr float fmod(float __x, float __y) 
# 280
{ return __builtin_fmodf(__x, __y); } 
# 283
constexpr long double fmod(long double __x, long double __y) 
# 284
{ return __builtin_fmodl(__x, __y); } 
# 287
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 290
fmod(_Tp __x, _Up __y) 
# 291
{ 
# 292
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 293
return fmod((__type)__x, (__type)__y); 
# 294
} 
# 296
using ::frexp;
# 300
inline float frexp(float __x, int *__exp) 
# 301
{ return __builtin_frexpf(__x, __exp); } 
# 304
inline long double frexp(long double __x, int *__exp) 
# 305
{ return __builtin_frexpl(__x, __exp); } 
# 308
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 312
frexp(_Tp __x, int *__exp) 
# 313
{ return __builtin_frexp(__x, __exp); } 
# 315
using ::ldexp;
# 319
constexpr float ldexp(float __x, int __exp) 
# 320
{ return __builtin_ldexpf(__x, __exp); } 
# 323
constexpr long double ldexp(long double __x, int __exp) 
# 324
{ return __builtin_ldexpl(__x, __exp); } 
# 327
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 331
ldexp(_Tp __x, int __exp) 
# 332
{ return __builtin_ldexp(__x, __exp); } 
# 334
using ::log;
# 338
constexpr float log(float __x) 
# 339
{ return __builtin_logf(__x); } 
# 342
constexpr long double log(long double __x) 
# 343
{ return __builtin_logl(__x); } 
# 346
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 350
log(_Tp __x) 
# 351
{ return __builtin_log(__x); } 
# 353
using ::log10;
# 357
constexpr float log10(float __x) 
# 358
{ return __builtin_log10f(__x); } 
# 361
constexpr long double log10(long double __x) 
# 362
{ return __builtin_log10l(__x); } 
# 365
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 369
log10(_Tp __x) 
# 370
{ return __builtin_log10(__x); } 
# 372
using ::modf;
# 376
inline float modf(float __x, float *__iptr) 
# 377
{ return __builtin_modff(__x, __iptr); } 
# 380
inline long double modf(long double __x, long double *__iptr) 
# 381
{ return __builtin_modfl(__x, __iptr); } 
# 384
using ::pow;
# 388
constexpr float pow(float __x, float __y) 
# 389
{ return __builtin_powf(__x, __y); } 
# 392
constexpr long double pow(long double __x, long double __y) 
# 393
{ return __builtin_powl(__x, __y); } 
# 412 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/cmath" 3
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 415
pow(_Tp __x, _Up __y) 
# 416
{ 
# 417
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 418
return pow((__type)__x, (__type)__y); 
# 419
} 
# 421
using ::sin;
# 425
constexpr float sin(float __x) 
# 426
{ return __builtin_sinf(__x); } 
# 429
constexpr long double sin(long double __x) 
# 430
{ return __builtin_sinl(__x); } 
# 433
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 437
sin(_Tp __x) 
# 438
{ return __builtin_sin(__x); } 
# 440
using ::sinh;
# 444
constexpr float sinh(float __x) 
# 445
{ return __builtin_sinhf(__x); } 
# 448
constexpr long double sinh(long double __x) 
# 449
{ return __builtin_sinhl(__x); } 
# 452
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 456
sinh(_Tp __x) 
# 457
{ return __builtin_sinh(__x); } 
# 459
using ::sqrt;
# 463
constexpr float sqrt(float __x) 
# 464
{ return __builtin_sqrtf(__x); } 
# 467
constexpr long double sqrt(long double __x) 
# 468
{ return __builtin_sqrtl(__x); } 
# 471
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 475
sqrt(_Tp __x) 
# 476
{ return __builtin_sqrt(__x); } 
# 478
using ::tan;
# 482
constexpr float tan(float __x) 
# 483
{ return __builtin_tanf(__x); } 
# 486
constexpr long double tan(long double __x) 
# 487
{ return __builtin_tanl(__x); } 
# 490
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 494
tan(_Tp __x) 
# 495
{ return __builtin_tan(__x); } 
# 497
using ::tanh;
# 501
constexpr float tanh(float __x) 
# 502
{ return __builtin_tanhf(__x); } 
# 505
constexpr long double tanh(long double __x) 
# 506
{ return __builtin_tanhl(__x); } 
# 509
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 513
tanh(_Tp __x) 
# 514
{ return __builtin_tanh(__x); } 
# 537 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/cmath" 3
constexpr int fpclassify(float __x) 
# 538
{ return __builtin_fpclassify(0, 1, 4, 3, 2, __x); 
# 539
} 
# 542
constexpr int fpclassify(double __x) 
# 543
{ return __builtin_fpclassify(0, 1, 4, 3, 2, __x); 
# 544
} 
# 547
constexpr int fpclassify(long double __x) 
# 548
{ return __builtin_fpclassify(0, 1, 4, 3, 2, __x); 
# 549
} 
# 553
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, int> ::__type 
# 556
fpclassify(_Tp __x) 
# 557
{ return (__x != 0) ? 4 : 2; } 
# 562
constexpr bool isfinite(float __x) 
# 563
{ return __builtin_isfinite(__x); } 
# 566
constexpr bool isfinite(double __x) 
# 567
{ return __builtin_isfinite(__x); } 
# 570
constexpr bool isfinite(long double __x) 
# 571
{ return __builtin_isfinite(__x); } 
# 575
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, bool> ::__type 
# 578
isfinite(_Tp __x) 
# 579
{ return true; } 
# 584
constexpr bool isinf(float __x) 
# 585
{ return __builtin_isinf(__x); } 
# 589
using ::isinf;
# 597
constexpr bool isinf(long double __x) 
# 598
{ return __builtin_isinf(__x); } 
# 602
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, bool> ::__type 
# 605
isinf(_Tp __x) 
# 606
{ return false; } 
# 611
constexpr bool isnan(float __x) 
# 612
{ return __builtin_isnan(__x); } 
# 616
using ::isnan;
# 624
constexpr bool isnan(long double __x) 
# 625
{ return __builtin_isnan(__x); } 
# 629
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, bool> ::__type 
# 632
isnan(_Tp __x) 
# 633
{ return false; } 
# 638
constexpr bool isnormal(float __x) 
# 639
{ return __builtin_isnormal(__x); } 
# 642
constexpr bool isnormal(double __x) 
# 643
{ return __builtin_isnormal(__x); } 
# 646
constexpr bool isnormal(long double __x) 
# 647
{ return __builtin_isnormal(__x); } 
# 651
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, bool> ::__type 
# 654
isnormal(_Tp __x) 
# 655
{ return (__x != 0) ? true : false; } 
# 661
constexpr bool signbit(float __x) 
# 662
{ return __builtin_signbit(__x); } 
# 665
constexpr bool signbit(double __x) 
# 666
{ return __builtin_signbit(__x); } 
# 669
constexpr bool signbit(long double __x) 
# 670
{ return __builtin_signbit(__x); } 
# 674
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, bool> ::__type 
# 677
signbit(_Tp __x) 
# 678
{ return (__x < 0) ? true : false; } 
# 683
constexpr bool isgreater(float __x, float __y) 
# 684
{ return __builtin_isgreater(__x, __y); } 
# 687
constexpr bool isgreater(double __x, double __y) 
# 688
{ return __builtin_isgreater(__x, __y); } 
# 691
constexpr bool isgreater(long double __x, long double __y) 
# 692
{ return __builtin_isgreater(__x, __y); } 
# 696
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value && __is_arithmetic< _Up> ::__value, bool> ::__type 
# 700
isgreater(_Tp __x, _Up __y) 
# 701
{ 
# 702
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 703
return __builtin_isgreater((__type)__x, (__type)__y); 
# 704
} 
# 709
constexpr bool isgreaterequal(float __x, float __y) 
# 710
{ return __builtin_isgreaterequal(__x, __y); } 
# 713
constexpr bool isgreaterequal(double __x, double __y) 
# 714
{ return __builtin_isgreaterequal(__x, __y); } 
# 717
constexpr bool isgreaterequal(long double __x, long double __y) 
# 718
{ return __builtin_isgreaterequal(__x, __y); } 
# 722
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value && __is_arithmetic< _Up> ::__value, bool> ::__type 
# 726
isgreaterequal(_Tp __x, _Up __y) 
# 727
{ 
# 728
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 729
return __builtin_isgreaterequal((__type)__x, (__type)__y); 
# 730
} 
# 735
constexpr bool isless(float __x, float __y) 
# 736
{ return __builtin_isless(__x, __y); } 
# 739
constexpr bool isless(double __x, double __y) 
# 740
{ return __builtin_isless(__x, __y); } 
# 743
constexpr bool isless(long double __x, long double __y) 
# 744
{ return __builtin_isless(__x, __y); } 
# 748
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value && __is_arithmetic< _Up> ::__value, bool> ::__type 
# 752
isless(_Tp __x, _Up __y) 
# 753
{ 
# 754
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 755
return __builtin_isless((__type)__x, (__type)__y); 
# 756
} 
# 761
constexpr bool islessequal(float __x, float __y) 
# 762
{ return __builtin_islessequal(__x, __y); } 
# 765
constexpr bool islessequal(double __x, double __y) 
# 766
{ return __builtin_islessequal(__x, __y); } 
# 769
constexpr bool islessequal(long double __x, long double __y) 
# 770
{ return __builtin_islessequal(__x, __y); } 
# 774
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value && __is_arithmetic< _Up> ::__value, bool> ::__type 
# 778
islessequal(_Tp __x, _Up __y) 
# 779
{ 
# 780
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 781
return __builtin_islessequal((__type)__x, (__type)__y); 
# 782
} 
# 787
constexpr bool islessgreater(float __x, float __y) 
# 788
{ return __builtin_islessgreater(__x, __y); } 
# 791
constexpr bool islessgreater(double __x, double __y) 
# 792
{ return __builtin_islessgreater(__x, __y); } 
# 795
constexpr bool islessgreater(long double __x, long double __y) 
# 796
{ return __builtin_islessgreater(__x, __y); } 
# 800
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value && __is_arithmetic< _Up> ::__value, bool> ::__type 
# 804
islessgreater(_Tp __x, _Up __y) 
# 805
{ 
# 806
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 807
return __builtin_islessgreater((__type)__x, (__type)__y); 
# 808
} 
# 813
constexpr bool isunordered(float __x, float __y) 
# 814
{ return __builtin_isunordered(__x, __y); } 
# 817
constexpr bool isunordered(double __x, double __y) 
# 818
{ return __builtin_isunordered(__x, __y); } 
# 821
constexpr bool isunordered(long double __x, long double __y) 
# 822
{ return __builtin_isunordered(__x, __y); } 
# 826
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value && __is_arithmetic< _Up> ::__value, bool> ::__type 
# 830
isunordered(_Tp __x, _Up __y) 
# 831
{ 
# 832
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 833
return __builtin_isunordered((__type)__x, (__type)__y); 
# 834
} 
# 1065 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/cmath" 3
using ::double_t;
# 1066
using ::float_t;
# 1069
using ::acosh;
# 1070
using ::acoshf;
# 1071
using ::acoshl;
# 1073
using ::asinh;
# 1074
using ::asinhf;
# 1075
using ::asinhl;
# 1077
using ::atanh;
# 1078
using ::atanhf;
# 1079
using ::atanhl;
# 1081
using ::cbrt;
# 1082
using ::cbrtf;
# 1083
using ::cbrtl;
# 1085
using ::copysign;
# 1086
using ::copysignf;
# 1087
using ::copysignl;
# 1089
using ::erf;
# 1090
using ::erff;
# 1091
using ::erfl;
# 1093
using ::erfc;
# 1094
using ::erfcf;
# 1095
using ::erfcl;
# 1097
using ::exp2;
# 1098
using ::exp2f;
# 1099
using ::exp2l;
# 1101
using ::expm1;
# 1102
using ::expm1f;
# 1103
using ::expm1l;
# 1105
using ::fdim;
# 1106
using ::fdimf;
# 1107
using ::fdiml;
# 1109
using ::fma;
# 1110
using ::fmaf;
# 1111
using ::fmal;
# 1113
using ::fmax;
# 1114
using ::fmaxf;
# 1115
using ::fmaxl;
# 1117
using ::fmin;
# 1118
using ::fminf;
# 1119
using ::fminl;
# 1121
using ::hypot;
# 1122
using ::hypotf;
# 1123
using ::hypotl;
# 1125
using ::ilogb;
# 1126
using ::ilogbf;
# 1127
using ::ilogbl;
# 1129
using ::lgamma;
# 1130
using ::lgammaf;
# 1131
using ::lgammal;
# 1134
using ::llrint;
# 1135
using ::llrintf;
# 1136
using ::llrintl;
# 1138
using ::llround;
# 1139
using ::llroundf;
# 1140
using ::llroundl;
# 1143
using ::log1p;
# 1144
using ::log1pf;
# 1145
using ::log1pl;
# 1147
using ::log2;
# 1148
using ::log2f;
# 1149
using ::log2l;
# 1151
using ::logb;
# 1152
using ::logbf;
# 1153
using ::logbl;
# 1155
using ::lrint;
# 1156
using ::lrintf;
# 1157
using ::lrintl;
# 1159
using ::lround;
# 1160
using ::lroundf;
# 1161
using ::lroundl;
# 1163
using ::nan;
# 1164
using ::nanf;
# 1165
using ::nanl;
# 1167
using ::nearbyint;
# 1168
using ::nearbyintf;
# 1169
using ::nearbyintl;
# 1171
using ::nextafter;
# 1172
using ::nextafterf;
# 1173
using ::nextafterl;
# 1175
using ::nexttoward;
# 1176
using ::nexttowardf;
# 1177
using ::nexttowardl;
# 1179
using ::remainder;
# 1180
using ::remainderf;
# 1181
using ::remainderl;
# 1183
using ::remquo;
# 1184
using ::remquof;
# 1185
using ::remquol;
# 1187
using ::rint;
# 1188
using ::rintf;
# 1189
using ::rintl;
# 1191
using ::round;
# 1192
using ::roundf;
# 1193
using ::roundl;
# 1195
using ::scalbln;
# 1196
using ::scalblnf;
# 1197
using ::scalblnl;
# 1199
using ::scalbn;
# 1200
using ::scalbnf;
# 1201
using ::scalbnl;
# 1203
using ::tgamma;
# 1204
using ::tgammaf;
# 1205
using ::tgammal;
# 1207
using ::trunc;
# 1208
using ::truncf;
# 1209
using ::truncl;
# 1214
constexpr float acosh(float __x) 
# 1215
{ return __builtin_acoshf(__x); } 
# 1218
constexpr long double acosh(long double __x) 
# 1219
{ return __builtin_acoshl(__x); } 
# 1223
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1226
acosh(_Tp __x) 
# 1227
{ return __builtin_acosh(__x); } 
# 1232
constexpr float asinh(float __x) 
# 1233
{ return __builtin_asinhf(__x); } 
# 1236
constexpr long double asinh(long double __x) 
# 1237
{ return __builtin_asinhl(__x); } 
# 1241
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1244
asinh(_Tp __x) 
# 1245
{ return __builtin_asinh(__x); } 
# 1250
constexpr float atanh(float __x) 
# 1251
{ return __builtin_atanhf(__x); } 
# 1254
constexpr long double atanh(long double __x) 
# 1255
{ return __builtin_atanhl(__x); } 
# 1259
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1262
atanh(_Tp __x) 
# 1263
{ return __builtin_atanh(__x); } 
# 1268
constexpr float cbrt(float __x) 
# 1269
{ return __builtin_cbrtf(__x); } 
# 1272
constexpr long double cbrt(long double __x) 
# 1273
{ return __builtin_cbrtl(__x); } 
# 1277
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1280
cbrt(_Tp __x) 
# 1281
{ return __builtin_cbrt(__x); } 
# 1286
constexpr float copysign(float __x, float __y) 
# 1287
{ return __builtin_copysignf(__x, __y); } 
# 1290
constexpr long double copysign(long double __x, long double __y) 
# 1291
{ return __builtin_copysignl(__x, __y); } 
# 1295
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 1297
copysign(_Tp __x, _Up __y) 
# 1298
{ 
# 1299
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 1300
return copysign((__type)__x, (__type)__y); 
# 1301
} 
# 1306
constexpr float erf(float __x) 
# 1307
{ return __builtin_erff(__x); } 
# 1310
constexpr long double erf(long double __x) 
# 1311
{ return __builtin_erfl(__x); } 
# 1315
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1318
erf(_Tp __x) 
# 1319
{ return __builtin_erf(__x); } 
# 1324
constexpr float erfc(float __x) 
# 1325
{ return __builtin_erfcf(__x); } 
# 1328
constexpr long double erfc(long double __x) 
# 1329
{ return __builtin_erfcl(__x); } 
# 1333
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1336
erfc(_Tp __x) 
# 1337
{ return __builtin_erfc(__x); } 
# 1342
constexpr float exp2(float __x) 
# 1343
{ return __builtin_exp2f(__x); } 
# 1346
constexpr long double exp2(long double __x) 
# 1347
{ return __builtin_exp2l(__x); } 
# 1351
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1354
exp2(_Tp __x) 
# 1355
{ return __builtin_exp2(__x); } 
# 1360
constexpr float expm1(float __x) 
# 1361
{ return __builtin_expm1f(__x); } 
# 1364
constexpr long double expm1(long double __x) 
# 1365
{ return __builtin_expm1l(__x); } 
# 1369
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1372
expm1(_Tp __x) 
# 1373
{ return __builtin_expm1(__x); } 
# 1378
constexpr float fdim(float __x, float __y) 
# 1379
{ return __builtin_fdimf(__x, __y); } 
# 1382
constexpr long double fdim(long double __x, long double __y) 
# 1383
{ return __builtin_fdiml(__x, __y); } 
# 1387
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 1389
fdim(_Tp __x, _Up __y) 
# 1390
{ 
# 1391
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 1392
return fdim((__type)__x, (__type)__y); 
# 1393
} 
# 1398
constexpr float fma(float __x, float __y, float __z) 
# 1399
{ return __builtin_fmaf(__x, __y, __z); } 
# 1402
constexpr long double fma(long double __x, long double __y, long double __z) 
# 1403
{ return __builtin_fmal(__x, __y, __z); } 
# 1407
template< class _Tp, class _Up, class _Vp> constexpr typename __gnu_cxx::__promote_3< _Tp, _Up, _Vp> ::__type 
# 1409
fma(_Tp __x, _Up __y, _Vp __z) 
# 1410
{ 
# 1411
typedef typename __gnu_cxx::__promote_3< _Tp, _Up, _Vp> ::__type __type; 
# 1412
return fma((__type)__x, (__type)__y, (__type)__z); 
# 1413
} 
# 1418
constexpr float fmax(float __x, float __y) 
# 1419
{ return __builtin_fmaxf(__x, __y); } 
# 1422
constexpr long double fmax(long double __x, long double __y) 
# 1423
{ return __builtin_fmaxl(__x, __y); } 
# 1427
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 1429
fmax(_Tp __x, _Up __y) 
# 1430
{ 
# 1431
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 1432
return fmax((__type)__x, (__type)__y); 
# 1433
} 
# 1438
constexpr float fmin(float __x, float __y) 
# 1439
{ return __builtin_fminf(__x, __y); } 
# 1442
constexpr long double fmin(long double __x, long double __y) 
# 1443
{ return __builtin_fminl(__x, __y); } 
# 1447
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 1449
fmin(_Tp __x, _Up __y) 
# 1450
{ 
# 1451
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 1452
return fmin((__type)__x, (__type)__y); 
# 1453
} 
# 1458
constexpr float hypot(float __x, float __y) 
# 1459
{ return __builtin_hypotf(__x, __y); } 
# 1462
constexpr long double hypot(long double __x, long double __y) 
# 1463
{ return __builtin_hypotl(__x, __y); } 
# 1467
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 1469
hypot(_Tp __x, _Up __y) 
# 1470
{ 
# 1471
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 1472
return hypot((__type)__x, (__type)__y); 
# 1473
} 
# 1478
constexpr int ilogb(float __x) 
# 1479
{ return __builtin_ilogbf(__x); } 
# 1482
constexpr int ilogb(long double __x) 
# 1483
{ return __builtin_ilogbl(__x); } 
# 1487
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, int> ::__type 
# 1491
ilogb(_Tp __x) 
# 1492
{ return __builtin_ilogb(__x); } 
# 1497
constexpr float lgamma(float __x) 
# 1498
{ return __builtin_lgammaf(__x); } 
# 1501
constexpr long double lgamma(long double __x) 
# 1502
{ return __builtin_lgammal(__x); } 
# 1506
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1509
lgamma(_Tp __x) 
# 1510
{ return __builtin_lgamma(__x); } 
# 1515
constexpr long long llrint(float __x) 
# 1516
{ return __builtin_llrintf(__x); } 
# 1519
constexpr long long llrint(long double __x) 
# 1520
{ return __builtin_llrintl(__x); } 
# 1524
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, long long> ::__type 
# 1527
llrint(_Tp __x) 
# 1528
{ return __builtin_llrint(__x); } 
# 1533
constexpr long long llround(float __x) 
# 1534
{ return __builtin_llroundf(__x); } 
# 1537
constexpr long long llround(long double __x) 
# 1538
{ return __builtin_llroundl(__x); } 
# 1542
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, long long> ::__type 
# 1545
llround(_Tp __x) 
# 1546
{ return __builtin_llround(__x); } 
# 1551
constexpr float log1p(float __x) 
# 1552
{ return __builtin_log1pf(__x); } 
# 1555
constexpr long double log1p(long double __x) 
# 1556
{ return __builtin_log1pl(__x); } 
# 1560
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1563
log1p(_Tp __x) 
# 1564
{ return __builtin_log1p(__x); } 
# 1570
constexpr float log2(float __x) 
# 1571
{ return __builtin_log2f(__x); } 
# 1574
constexpr long double log2(long double __x) 
# 1575
{ return __builtin_log2l(__x); } 
# 1579
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1582
log2(_Tp __x) 
# 1583
{ return __builtin_log2(__x); } 
# 1588
constexpr float logb(float __x) 
# 1589
{ return __builtin_logbf(__x); } 
# 1592
constexpr long double logb(long double __x) 
# 1593
{ return __builtin_logbl(__x); } 
# 1597
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1600
logb(_Tp __x) 
# 1601
{ return __builtin_logb(__x); } 
# 1606
constexpr long lrint(float __x) 
# 1607
{ return __builtin_lrintf(__x); } 
# 1610
constexpr long lrint(long double __x) 
# 1611
{ return __builtin_lrintl(__x); } 
# 1615
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, long> ::__type 
# 1618
lrint(_Tp __x) 
# 1619
{ return __builtin_lrint(__x); } 
# 1624
constexpr long lround(float __x) 
# 1625
{ return __builtin_lroundf(__x); } 
# 1628
constexpr long lround(long double __x) 
# 1629
{ return __builtin_lroundl(__x); } 
# 1633
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, long> ::__type 
# 1636
lround(_Tp __x) 
# 1637
{ return __builtin_lround(__x); } 
# 1642
constexpr float nearbyint(float __x) 
# 1643
{ return __builtin_nearbyintf(__x); } 
# 1646
constexpr long double nearbyint(long double __x) 
# 1647
{ return __builtin_nearbyintl(__x); } 
# 1651
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1654
nearbyint(_Tp __x) 
# 1655
{ return __builtin_nearbyint(__x); } 
# 1660
constexpr float nextafter(float __x, float __y) 
# 1661
{ return __builtin_nextafterf(__x, __y); } 
# 1664
constexpr long double nextafter(long double __x, long double __y) 
# 1665
{ return __builtin_nextafterl(__x, __y); } 
# 1669
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 1671
nextafter(_Tp __x, _Up __y) 
# 1672
{ 
# 1673
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 1674
return nextafter((__type)__x, (__type)__y); 
# 1675
} 
# 1680
constexpr float nexttoward(float __x, long double __y) 
# 1681
{ return __builtin_nexttowardf(__x, __y); } 
# 1684
constexpr long double nexttoward(long double __x, long double __y) 
# 1685
{ return __builtin_nexttowardl(__x, __y); } 
# 1689
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1692
nexttoward(_Tp __x, long double __y) 
# 1693
{ return __builtin_nexttoward(__x, __y); } 
# 1698
constexpr float remainder(float __x, float __y) 
# 1699
{ return __builtin_remainderf(__x, __y); } 
# 1702
constexpr long double remainder(long double __x, long double __y) 
# 1703
{ return __builtin_remainderl(__x, __y); } 
# 1707
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 1709
remainder(_Tp __x, _Up __y) 
# 1710
{ 
# 1711
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 1712
return remainder((__type)__x, (__type)__y); 
# 1713
} 
# 1718
inline float remquo(float __x, float __y, int *__pquo) 
# 1719
{ return __builtin_remquof(__x, __y, __pquo); } 
# 1722
inline long double remquo(long double __x, long double __y, int *__pquo) 
# 1723
{ return __builtin_remquol(__x, __y, __pquo); } 
# 1727
template< class _Tp, class _Up> inline typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 1729
remquo(_Tp __x, _Up __y, int *__pquo) 
# 1730
{ 
# 1731
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 1732
return remquo((__type)__x, (__type)__y, __pquo); 
# 1733
} 
# 1738
constexpr float rint(float __x) 
# 1739
{ return __builtin_rintf(__x); } 
# 1742
constexpr long double rint(long double __x) 
# 1743
{ return __builtin_rintl(__x); } 
# 1747
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1750
rint(_Tp __x) 
# 1751
{ return __builtin_rint(__x); } 
# 1756
constexpr float round(float __x) 
# 1757
{ return __builtin_roundf(__x); } 
# 1760
constexpr long double round(long double __x) 
# 1761
{ return __builtin_roundl(__x); } 
# 1765
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1768
round(_Tp __x) 
# 1769
{ return __builtin_round(__x); } 
# 1774
constexpr float scalbln(float __x, long __ex) 
# 1775
{ return __builtin_scalblnf(__x, __ex); } 
# 1778
constexpr long double scalbln(long double __x, long __ex) 
# 1779
{ return __builtin_scalblnl(__x, __ex); } 
# 1783
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1786
scalbln(_Tp __x, long __ex) 
# 1787
{ return __builtin_scalbln(__x, __ex); } 
# 1792
constexpr float scalbn(float __x, int __ex) 
# 1793
{ return __builtin_scalbnf(__x, __ex); } 
# 1796
constexpr long double scalbn(long double __x, int __ex) 
# 1797
{ return __builtin_scalbnl(__x, __ex); } 
# 1801
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1804
scalbn(_Tp __x, int __ex) 
# 1805
{ return __builtin_scalbn(__x, __ex); } 
# 1810
constexpr float tgamma(float __x) 
# 1811
{ return __builtin_tgammaf(__x); } 
# 1814
constexpr long double tgamma(long double __x) 
# 1815
{ return __builtin_tgammal(__x); } 
# 1819
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1822
tgamma(_Tp __x) 
# 1823
{ return __builtin_tgamma(__x); } 
# 1828
constexpr float trunc(float __x) 
# 1829
{ return __builtin_truncf(__x); } 
# 1832
constexpr long double trunc(long double __x) 
# 1833
{ return __builtin_truncl(__x); } 
# 1837
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1840
trunc(_Tp __x) 
# 1841
{ return __builtin_trunc(__x); } 
# 1852 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/cmath" 3
template< class _Tp> inline _Tp 
# 1854
__hypot3(_Tp __x, _Tp __y, _Tp __z) 
# 1855
{ 
# 1856
__x = std::abs(__x); 
# 1857
__y = std::abs(__y); 
# 1858
__z = std::abs(__z); 
# 1859
if (_Tp __a = (__x < __y) ? (__y < __z) ? __z : __y : ((__x < __z) ? __z : __x)) { 
# 1860
return __a * std::sqrt((((__x / __a) * (__x / __a)) + ((__y / __a) * (__y / __a))) + ((__z / __a) * (__z / __a))); } else { 
# 1864
return {}; }  
# 1865
} 
# 1868
inline float hypot(float __x, float __y, float __z) 
# 1869
{ return std::__hypot3< float> (__x, __y, __z); } 
# 1872
inline double hypot(double __x, double __y, double __z) 
# 1873
{ return std::__hypot3< double> (__x, __y, __z); } 
# 1876
inline long double hypot(long double __x, long double __y, long double __z) 
# 1877
{ return std::__hypot3< long double> (__x, __y, __z); } 
# 1879
template< class _Tp, class _Up, class _Vp> __gnu_cxx::__promoted_t< _Tp, _Up, _Vp>  
# 1881
hypot(_Tp __x, _Up __y, _Vp __z) 
# 1882
{ 
# 1883
using __type = __gnu_cxx::__promoted_t< _Tp, _Up, _Vp> ; 
# 1884
return std::__hypot3< __gnu_cxx::__promoted_t< _Tp, _Up, _Vp> > (__x, __y, __z); 
# 1885
} 
# 1932 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/cmath" 3
}
# 33 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
#pragma GCC visibility push ( default )
# 42 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/functexcept.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 48
void __throw_bad_exception() __attribute((__noreturn__)); 
# 52
void __throw_bad_alloc() __attribute((__noreturn__)); 
# 55
void __throw_bad_array_new_length() __attribute((__noreturn__)); 
# 59
void __throw_bad_cast() __attribute((__noreturn__)); 
# 62
void __throw_bad_typeid() __attribute((__noreturn__)); 
# 66
void __throw_logic_error(const char *) __attribute((__noreturn__)); 
# 69
void __throw_domain_error(const char *) __attribute((__noreturn__)); 
# 72
void __throw_invalid_argument(const char *) __attribute((__noreturn__)); 
# 75
void __throw_length_error(const char *) __attribute((__noreturn__)); 
# 78
void __throw_out_of_range(const char *) __attribute((__noreturn__)); 
# 81
void __throw_out_of_range_fmt(const char *, ...) __attribute((__noreturn__))
# 82
 __attribute((__format__(__gnu_printf__, 1, 2))); 
# 85
void __throw_runtime_error(const char *) __attribute((__noreturn__)); 
# 88
void __throw_range_error(const char *) __attribute((__noreturn__)); 
# 91
void __throw_overflow_error(const char *) __attribute((__noreturn__)); 
# 94
void __throw_underflow_error(const char *) __attribute((__noreturn__)); 
# 98
void __throw_ios_failure(const char *) __attribute((__noreturn__)); 
# 101
void __throw_ios_failure(const char *, int) __attribute((__noreturn__)); 
# 105
void __throw_system_error(int) __attribute((__noreturn__)); 
# 109
void __throw_future_error(int) __attribute((__noreturn__)); 
# 113
void __throw_bad_function_call() __attribute((__noreturn__)); 
# 116
}
# 37 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/ext/numeric_traits.h" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 50 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/ext/numeric_traits.h" 3
template< class _Tp> 
# 51
struct __is_integer_nonstrict : public std::__is_integer< _Tp>  { 
# 54
using std::__is_integer< _Tp> ::__value;
# 57
enum { __width = (__value) ? sizeof(_Tp) * (8) : (0)}; 
# 58
}; 
# 60
template< class _Value> 
# 61
struct __numeric_traits_integer { 
# 64
static_assert((__is_integer_nonstrict< _Value> ::__value), "invalid specialization");
# 70
static const bool __is_signed = (((_Value)(-1)) < 0); 
# 71
static const int __digits = (__is_integer_nonstrict< _Value> ::__width - __is_signed); 
# 75
static const _Value __max = (__is_signed ? (((((_Value)1) << (__digits - 1)) - 1) << 1) + 1 : (~((_Value)0))); 
# 78
static const _Value __min = (__is_signed ? (-__max) - 1 : ((_Value)0)); 
# 79
}; 
# 81
template< class _Value> const _Value __numeric_traits_integer< _Value> ::__min; 
# 84
template< class _Value> const _Value __numeric_traits_integer< _Value> ::__max; 
# 87
template< class _Value> const bool __numeric_traits_integer< _Value> ::__is_signed; 
# 90
template< class _Value> const int __numeric_traits_integer< _Value> ::__digits; 
# 137 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/ext/numeric_traits.h" 3
template< class _Tp> using __int_traits = __numeric_traits_integer< _Tp> ; 
# 157 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/ext/numeric_traits.h" 3
template< class _Value> 
# 158
struct __numeric_traits_floating { 
# 161
static const int __max_digits10 = ((2) + ((((std::template __are_same< _Value, float> ::__value) ? 24 : ((std::template __are_same< _Value, double> ::__value) ? 53 : 64)) * 643L) / (2136))); 
# 164
static const bool __is_signed = true; 
# 165
static const int __digits10 = ((std::template __are_same< _Value, float> ::__value) ? 6 : ((std::template __are_same< _Value, double> ::__value) ? 15 : 18)); 
# 166
static const int __max_exponent10 = ((std::template __are_same< _Value, float> ::__value) ? 38 : ((std::template __are_same< _Value, double> ::__value) ? 308 : 4932)); 
# 167
}; 
# 169
template< class _Value> const int __numeric_traits_floating< _Value> ::__max_digits10; 
# 172
template< class _Value> const bool __numeric_traits_floating< _Value> ::__is_signed; 
# 175
template< class _Value> const int __numeric_traits_floating< _Value> ::__digits10; 
# 178
template< class _Value> const int __numeric_traits_floating< _Value> ::__max_exponent10; 
# 186
template< class _Value> 
# 187
struct __numeric_traits : public __numeric_traits_integer< _Value>  { 
# 189
}; 
# 192
template<> struct __numeric_traits< float>  : public __numeric_traits_floating< float>  { 
# 194
}; 
# 197
template<> struct __numeric_traits< double>  : public __numeric_traits_floating< double>  { 
# 199
}; 
# 202
template<> struct __numeric_traits< long double>  : public __numeric_traits_floating< long double>  { 
# 204
}; 
# 239 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/ext/numeric_traits.h" 3
}
# 40 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/type_traits" 3
namespace std __attribute((__visibility__("default"))) { 
# 44
template< class _Tp> class reference_wrapper; 
# 61 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/type_traits" 3
template< class _Tp, _Tp __v> 
# 62
struct integral_constant { 
# 64
static constexpr inline _Tp value = (__v); 
# 65
typedef _Tp value_type; 
# 66
typedef integral_constant type; 
# 67
constexpr operator value_type() const noexcept { return value; } 
# 72
constexpr value_type operator()() const noexcept { return value; } 
# 74
}; 
# 82
using true_type = integral_constant< bool, true> ; 
# 85
using false_type = integral_constant< bool, false> ; 
# 89
template< bool __v> using __bool_constant = integral_constant< bool, __v> ; 
# 97
template< bool __v> using bool_constant = integral_constant< bool, __v> ; 
# 103
template< bool > 
# 104
struct __conditional { 
# 106
template< class _Tp, class > using type = _Tp; 
# 108
}; 
# 111
template<> struct __conditional< false>  { 
# 113
template< class , class _Up> using type = _Up; 
# 115
}; 
# 118
template< bool _Cond, class _If, class _Else> using __conditional_t = typename __conditional< _Cond> ::template type< _If, _Else> ; 
# 123
template< class _Type> 
# 124
struct __type_identity { 
# 125
using type = _Type; }; 
# 127
template< class _Tp> using __type_identity_t = typename __type_identity< _Tp> ::type; 
# 130
template< class ...> struct __or_; 
# 134
template<> struct __or_< >  : public false_type { 
# 136
}; 
# 138
template< class _B1> 
# 139
struct __or_< _B1>  : public _B1 { 
# 141
}; 
# 143
template< class _B1, class _B2> 
# 144
struct __or_< _B1, _B2>  : public __conditional_t< _B1::value, _B1, _B2>  { 
# 146
}; 
# 148
template< class _B1, class _B2, class _B3, class ..._Bn> 
# 149
struct __or_< _B1, _B2, _B3, _Bn...>  : public __conditional_t< _B1::value, _B1, std::__or_< _B2, _B3, _Bn...> >  { 
# 151
}; 
# 153
template< class ...> struct __and_; 
# 157
template<> struct __and_< >  : public true_type { 
# 159
}; 
# 161
template< class _B1> 
# 162
struct __and_< _B1>  : public _B1 { 
# 164
}; 
# 166
template< class _B1, class _B2> 
# 167
struct __and_< _B1, _B2>  : public __conditional_t< _B1::value, _B2, _B1>  { 
# 169
}; 
# 171
template< class _B1, class _B2, class _B3, class ..._Bn> 
# 172
struct __and_< _B1, _B2, _B3, _Bn...>  : public __conditional_t< _B1::value, std::__and_< _B2, _B3, _Bn...> , _B1>  { 
# 174
}; 
# 176
template< class _Pp> 
# 177
struct __not_ : public __bool_constant< !((bool)_Pp::value)>  { 
# 179
}; 
# 185
template< class ..._Bn> constexpr bool 
# 186
__or_v = (__or_< _Bn...> ::value); 
# 187
template< class ..._Bn> constexpr bool 
# 188
__and_v = (__and_< _Bn...> ::value); 
# 193
template< class ..._Bn> 
# 194
struct conjunction : public __and_< _Bn...>  { 
# 196
}; 
# 198
template< class ..._Bn> 
# 199
struct disjunction : public __or_< _Bn...>  { 
# 201
}; 
# 203
template< class _Pp> 
# 204
struct negation : public __not_< _Pp>  { 
# 206
}; 
# 211
template< class ..._Bn> constexpr bool 
# 212
conjunction_v = (conjunction< _Bn...> ::value); 
# 214
template< class ..._Bn> constexpr bool 
# 215
disjunction_v = (disjunction< _Bn...> ::value); 
# 217
template< class _Pp> constexpr bool 
# 218
negation_v = (negation< _Pp> ::value); 
# 224
template< class > struct is_reference; 
# 226
template< class > struct is_function; 
# 228
template< class > struct is_void; 
# 230
template< class > struct remove_cv; 
# 232
template< class > struct is_const; 
# 236
template< class > struct __is_array_unknown_bounds; 
# 242
template< class _Tp, size_t  = sizeof(_Tp)> constexpr true_type 
# 243
__is_complete_or_unbounded(__type_identity< _Tp> ) 
# 244
{ return {}; } 
# 246
template< class _TypeIdentity, class 
# 247
_NestedType = typename _TypeIdentity::type> constexpr typename __or_< is_reference< _NestedType> , is_function< _NestedType> , is_void< _NestedType> , __is_array_unknown_bounds< _NestedType> > ::type 
# 253
__is_complete_or_unbounded(_TypeIdentity) 
# 254
{ return {}; } 
# 261
template< class _Tp> 
# 262
struct __success_type { 
# 263
typedef _Tp type; }; 
# 265
struct __failure_type { 
# 266
}; 
# 269
template< class _Tp> using __remove_cv_t = typename remove_cv< _Tp> ::type; 
# 274
template< class > 
# 275
struct __is_void_helper : public false_type { 
# 276
}; 
# 279
template<> struct __is_void_helper< void>  : public true_type { 
# 280
}; 
# 284
template< class _Tp> 
# 285
struct is_void : public __is_void_helper< __remove_cv_t< _Tp> > ::type { 
# 287
}; 
# 290
template< class > 
# 291
struct __is_integral_helper : public false_type { 
# 292
}; 
# 295
template<> struct __is_integral_helper< bool>  : public true_type { 
# 296
}; 
# 299
template<> struct __is_integral_helper< char>  : public true_type { 
# 300
}; 
# 303
template<> struct __is_integral_helper< signed char>  : public true_type { 
# 304
}; 
# 307
template<> struct __is_integral_helper< unsigned char>  : public true_type { 
# 308
}; 
# 314
template<> struct __is_integral_helper< wchar_t>  : public true_type { 
# 315
}; 
# 324
template<> struct __is_integral_helper< char16_t>  : public true_type { 
# 325
}; 
# 328
template<> struct __is_integral_helper< char32_t>  : public true_type { 
# 329
}; 
# 332
template<> struct __is_integral_helper< short>  : public true_type { 
# 333
}; 
# 336
template<> struct __is_integral_helper< unsigned short>  : public true_type { 
# 337
}; 
# 340
template<> struct __is_integral_helper< int>  : public true_type { 
# 341
}; 
# 344
template<> struct __is_integral_helper< unsigned>  : public true_type { 
# 345
}; 
# 348
template<> struct __is_integral_helper< long>  : public true_type { 
# 349
}; 
# 352
template<> struct __is_integral_helper< unsigned long>  : public true_type { 
# 353
}; 
# 356
template<> struct __is_integral_helper< long long>  : public true_type { 
# 357
}; 
# 360
template<> struct __is_integral_helper< unsigned long long>  : public true_type { 
# 361
}; 
# 368
template<> struct __is_integral_helper< __int128>  : public true_type { 
# 369
}; 
# 373
template<> struct __is_integral_helper< unsigned __int128>  : public true_type { 
# 374
}; 
# 412 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/type_traits" 3
template< class _Tp> 
# 413
struct is_integral : public __is_integral_helper< __remove_cv_t< _Tp> > ::type { 
# 415
}; 
# 418
template< class > 
# 419
struct __is_floating_point_helper : public false_type { 
# 420
}; 
# 423
template<> struct __is_floating_point_helper< float>  : public true_type { 
# 424
}; 
# 427
template<> struct __is_floating_point_helper< double>  : public true_type { 
# 428
}; 
# 431
template<> struct __is_floating_point_helper< long double>  : public true_type { 
# 432
}; 
# 436
template<> struct __is_floating_point_helper< __float128>  : public true_type { 
# 437
}; 
# 442
template< class _Tp> 
# 443
struct is_floating_point : public __is_floating_point_helper< __remove_cv_t< _Tp> > ::type { 
# 445
}; 
# 448
template< class > 
# 449
struct is_array : public false_type { 
# 450
}; 
# 452
template< class _Tp, size_t _Size> 
# 453
struct is_array< _Tp [_Size]>  : public true_type { 
# 454
}; 
# 456
template< class _Tp> 
# 457
struct is_array< _Tp []>  : public true_type { 
# 458
}; 
# 460
template< class > 
# 461
struct __is_pointer_helper : public false_type { 
# 462
}; 
# 464
template< class _Tp> 
# 465
struct __is_pointer_helper< _Tp *>  : public true_type { 
# 466
}; 
# 469
template< class _Tp> 
# 470
struct is_pointer : public __is_pointer_helper< __remove_cv_t< _Tp> > ::type { 
# 472
}; 
# 475
template< class > 
# 476
struct is_lvalue_reference : public false_type { 
# 477
}; 
# 479
template< class _Tp> 
# 480
struct is_lvalue_reference< _Tp &>  : public true_type { 
# 481
}; 
# 484
template< class > 
# 485
struct is_rvalue_reference : public false_type { 
# 486
}; 
# 488
template< class _Tp> 
# 489
struct is_rvalue_reference< _Tp &&>  : public true_type { 
# 490
}; 
# 492
template< class > 
# 493
struct __is_member_object_pointer_helper : public false_type { 
# 494
}; 
# 496
template< class _Tp, class _Cp> 
# 497
struct __is_member_object_pointer_helper< _Tp (_Cp::*)>  : public __not_< is_function< _Tp> > ::type { 
# 498
}; 
# 501
template< class _Tp> 
# 502
struct is_member_object_pointer : public __is_member_object_pointer_helper< __remove_cv_t< _Tp> > ::type { 
# 504
}; 
# 506
template< class > 
# 507
struct __is_member_function_pointer_helper : public false_type { 
# 508
}; 
# 510
template< class _Tp, class _Cp> 
# 511
struct __is_member_function_pointer_helper< _Tp (_Cp::*)>  : public is_function< _Tp> ::type { 
# 512
}; 
# 515
template< class _Tp> 
# 516
struct is_member_function_pointer : public __is_member_function_pointer_helper< __remove_cv_t< _Tp> > ::type { 
# 518
}; 
# 521
template< class _Tp> 
# 522
struct is_enum : public integral_constant< bool, __is_enum(_Tp)>  { 
# 524
}; 
# 527
template< class _Tp> 
# 528
struct is_union : public integral_constant< bool, __is_union(_Tp)>  { 
# 530
}; 
# 533
template< class _Tp> 
# 534
struct is_class : public integral_constant< bool, __is_class(_Tp)>  { 
# 536
}; 
# 539
template< class _Tp> 
# 540
struct is_function : public __bool_constant< !is_const< const _Tp> ::value>  { 
# 541
}; 
# 543
template< class _Tp> 
# 544
struct is_function< _Tp &>  : public false_type { 
# 545
}; 
# 547
template< class _Tp> 
# 548
struct is_function< _Tp &&>  : public false_type { 
# 549
}; 
# 553
template< class > 
# 554
struct __is_null_pointer_helper : public false_type { 
# 555
}; 
# 558
template<> struct __is_null_pointer_helper< __decltype((nullptr))>  : public true_type { 
# 559
}; 
# 562
template< class _Tp> 
# 563
struct is_null_pointer : public __is_null_pointer_helper< __remove_cv_t< _Tp> > ::type { 
# 565
}; 
# 569
template< class _Tp> 
# 570
struct __is_nullptr_t : public is_null_pointer< _Tp>  { 
# 572
} __attribute((__deprecated__("use \'std::is_null_pointer\' instead"))); 
# 577
template< class _Tp> 
# 578
struct is_reference : public __or_< is_lvalue_reference< _Tp> , is_rvalue_reference< _Tp> > ::type { 
# 581
}; 
# 584
template< class _Tp> 
# 585
struct is_arithmetic : public __or_< is_integral< _Tp> , is_floating_point< _Tp> > ::type { 
# 587
}; 
# 590
template< class _Tp> 
# 591
struct is_fundamental : public __or_< is_arithmetic< _Tp> , is_void< _Tp> , is_null_pointer< _Tp> > ::type { 
# 594
}; 
# 597
template< class _Tp> 
# 598
struct is_object : public __not_< __or_< is_function< _Tp> , is_reference< _Tp> , is_void< _Tp> > > ::type { 
# 601
}; 
# 603
template< class > struct is_member_pointer; 
# 607
template< class _Tp> 
# 608
struct is_scalar : public __or_< is_arithmetic< _Tp> , is_enum< _Tp> , is_pointer< _Tp> , is_member_pointer< _Tp> , is_null_pointer< _Tp> > ::type { 
# 611
}; 
# 614
template< class _Tp> 
# 615
struct is_compound : public __not_< is_fundamental< _Tp> > ::type { 
# 616
}; 
# 619
template< class _Tp> 
# 620
struct __is_member_pointer_helper : public false_type { 
# 621
}; 
# 623
template< class _Tp, class _Cp> 
# 624
struct __is_member_pointer_helper< _Tp (_Cp::*)>  : public true_type { 
# 625
}; 
# 629
template< class _Tp> 
# 630
struct is_member_pointer : public __is_member_pointer_helper< __remove_cv_t< _Tp> > ::type { 
# 632
}; 
# 634
template< class , class > struct is_same; 
# 638
template< class _Tp, class ..._Types> using __is_one_of = __or_< is_same< _Tp, _Types> ...> ; 
# 643
template< class _Tp> using __is_signed_integer = __is_one_of< __remove_cv_t< _Tp> , signed char, signed short, signed int, signed long, signed long long, signed __int128> ; 
# 663 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/type_traits" 3
template< class _Tp> using __is_unsigned_integer = __is_one_of< __remove_cv_t< _Tp> , unsigned char, unsigned short, unsigned, unsigned long, unsigned long long, unsigned __int128> ; 
# 682 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/type_traits" 3
template< class _Tp> using __is_standard_integer = __or_< __is_signed_integer< _Tp> , __is_unsigned_integer< _Tp> > ; 
# 687
template< class ...> using __void_t = void; 
# 691
template< class _Tp, class  = void> 
# 692
struct __is_referenceable : public false_type { 
# 694
}; 
# 696
template< class _Tp> 
# 697
struct __is_referenceable< _Tp, __void_t< _Tp &> >  : public true_type { 
# 699
}; 
# 705
template< class > 
# 706
struct is_const : public false_type { 
# 707
}; 
# 709
template< class _Tp> 
# 710
struct is_const< const _Tp>  : public true_type { 
# 711
}; 
# 714
template< class > 
# 715
struct is_volatile : public false_type { 
# 716
}; 
# 718
template< class _Tp> 
# 719
struct is_volatile< volatile _Tp>  : public true_type { 
# 720
}; 
# 723
template< class _Tp> 
# 724
struct is_trivial : public integral_constant< bool, __is_trivial(_Tp)>  { 
# 727
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 729
}; 
# 732
template< class _Tp> 
# 733
struct is_trivially_copyable : public integral_constant< bool, __is_trivially_copyable(_Tp)>  { 
# 736
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 738
}; 
# 741
template< class _Tp> 
# 742
struct is_standard_layout : public integral_constant< bool, __is_standard_layout(_Tp)>  { 
# 745
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 747
}; 
# 754
template< class _Tp> 
# 757
struct is_pod : public integral_constant< bool, __is_pod(_Tp)>  { 
# 760
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 762
}; 
# 768
template< class _Tp> 
# 771
struct
# 770
 [[__deprecated__]] is_literal_type : public integral_constant< bool, __is_literal_type(_Tp)>  { 
# 774
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 776
}; 
# 779
template< class _Tp> 
# 780
struct is_empty : public integral_constant< bool, __is_empty(_Tp)>  { 
# 782
}; 
# 785
template< class _Tp> 
# 786
struct is_polymorphic : public integral_constant< bool, __is_polymorphic(_Tp)>  { 
# 788
}; 
# 794
template< class _Tp> 
# 795
struct is_final : public integral_constant< bool, __is_final(_Tp)>  { 
# 797
}; 
# 801
template< class _Tp> 
# 802
struct is_abstract : public integral_constant< bool, __is_abstract(_Tp)>  { 
# 804
}; 
# 807
template< class _Tp, bool 
# 808
 = is_arithmetic< _Tp> ::value> 
# 809
struct __is_signed_helper : public false_type { 
# 810
}; 
# 812
template< class _Tp> 
# 813
struct __is_signed_helper< _Tp, true>  : public integral_constant< bool, ((_Tp)(-1)) < ((_Tp)0)>  { 
# 815
}; 
# 819
template< class _Tp> 
# 820
struct is_signed : public __is_signed_helper< _Tp> ::type { 
# 822
}; 
# 825
template< class _Tp> 
# 826
struct is_unsigned : public __and_< is_arithmetic< _Tp> , __not_< is_signed< _Tp> > >  { 
# 828
}; 
# 831
template< class _Tp, class _Up = _Tp &&> _Up __declval(int); 
# 835
template< class _Tp> _Tp __declval(long); 
# 840
template< class _Tp> auto declval() noexcept->__decltype((__declval< _Tp> (0))); 
# 843
template< class , unsigned  = 0U> struct extent; 
# 846
template< class > struct remove_all_extents; 
# 850
template< class _Tp> 
# 851
struct __is_array_known_bounds : public integral_constant< bool, (extent< _Tp> ::value > 0)>  { 
# 853
}; 
# 855
template< class _Tp> 
# 856
struct __is_array_unknown_bounds : public __and_< is_array< _Tp> , __not_< extent< _Tp> > >  { 
# 858
}; 
# 867 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/type_traits" 3
struct __do_is_destructible_impl { 
# 869
template< class _Tp, class  = __decltype((declval< _Tp &> ().~_Tp()))> static true_type __test(int); 
# 872
template< class > static false_type __test(...); 
# 874
}; 
# 876
template< class _Tp> 
# 877
struct __is_destructible_impl : public __do_is_destructible_impl { 
# 880
typedef __decltype((__test< _Tp> (0))) type; 
# 881
}; 
# 883
template< class _Tp, bool 
# 884
 = __or_< is_void< _Tp> , __is_array_unknown_bounds< _Tp> , is_function< _Tp> > ::value, bool 
# 887
 = __or_< is_reference< _Tp> , is_scalar< _Tp> > ::value> struct __is_destructible_safe; 
# 890
template< class _Tp> 
# 891
struct __is_destructible_safe< _Tp, false, false>  : public __is_destructible_impl< typename remove_all_extents< _Tp> ::type> ::type { 
# 894
}; 
# 896
template< class _Tp> 
# 897
struct __is_destructible_safe< _Tp, true, false>  : public false_type { 
# 898
}; 
# 900
template< class _Tp> 
# 901
struct __is_destructible_safe< _Tp, false, true>  : public true_type { 
# 902
}; 
# 906
template< class _Tp> 
# 907
struct is_destructible : public __is_destructible_safe< _Tp> ::type { 
# 910
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 912
}; 
# 920
struct __do_is_nt_destructible_impl { 
# 922
template< class _Tp> static __bool_constant< noexcept(declval< _Tp &> ().~_Tp())>  __test(int); 
# 926
template< class > static false_type __test(...); 
# 928
}; 
# 930
template< class _Tp> 
# 931
struct __is_nt_destructible_impl : public __do_is_nt_destructible_impl { 
# 934
typedef __decltype((__test< _Tp> (0))) type; 
# 935
}; 
# 937
template< class _Tp, bool 
# 938
 = __or_< is_void< _Tp> , __is_array_unknown_bounds< _Tp> , is_function< _Tp> > ::value, bool 
# 941
 = __or_< is_reference< _Tp> , is_scalar< _Tp> > ::value> struct __is_nt_destructible_safe; 
# 944
template< class _Tp> 
# 945
struct __is_nt_destructible_safe< _Tp, false, false>  : public __is_nt_destructible_impl< typename remove_all_extents< _Tp> ::type> ::type { 
# 948
}; 
# 950
template< class _Tp> 
# 951
struct __is_nt_destructible_safe< _Tp, true, false>  : public false_type { 
# 952
}; 
# 954
template< class _Tp> 
# 955
struct __is_nt_destructible_safe< _Tp, false, true>  : public true_type { 
# 956
}; 
# 960
template< class _Tp> 
# 961
struct is_nothrow_destructible : public __is_nt_destructible_safe< _Tp> ::type { 
# 964
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 966
}; 
# 969
template< class _Tp, class ..._Args> 
# 970
struct __is_constructible_impl : public __bool_constant< __is_constructible(_Tp, _Args...)>  { 
# 972
}; 
# 976
template< class _Tp, class ..._Args> 
# 977
struct is_constructible : public __is_constructible_impl< _Tp, _Args...>  { 
# 980
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 982
}; 
# 985
template< class _Tp> 
# 986
struct is_default_constructible : public __is_constructible_impl< _Tp> ::type { 
# 989
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 991
}; 
# 994
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_copy_constructible_impl; 
# 997
template< class _Tp> 
# 998
struct __is_copy_constructible_impl< _Tp, false>  : public false_type { 
# 999
}; 
# 1001
template< class _Tp> 
# 1002
struct __is_copy_constructible_impl< _Tp, true>  : public __is_constructible_impl< _Tp, const _Tp &>  { 
# 1004
}; 
# 1008
template< class _Tp> 
# 1009
struct is_copy_constructible : public __is_copy_constructible_impl< _Tp>  { 
# 1012
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1014
}; 
# 1017
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_move_constructible_impl; 
# 1020
template< class _Tp> 
# 1021
struct __is_move_constructible_impl< _Tp, false>  : public false_type { 
# 1022
}; 
# 1024
template< class _Tp> 
# 1025
struct __is_move_constructible_impl< _Tp, true>  : public __is_constructible_impl< _Tp, _Tp &&>  { 
# 1027
}; 
# 1031
template< class _Tp> 
# 1032
struct is_move_constructible : public __is_move_constructible_impl< _Tp>  { 
# 1035
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1037
}; 
# 1040
template< class _Tp, class ..._Args> using __is_nothrow_constructible_impl = __bool_constant< __is_nothrow_constructible(_Tp, _Args...)> ; 
# 1046
template< class _Tp, class ..._Args> 
# 1047
struct is_nothrow_constructible : public __is_nothrow_constructible_impl< _Tp, _Args...> ::type { 
# 1050
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1052
}; 
# 1055
template< class _Tp> 
# 1056
struct is_nothrow_default_constructible : public __bool_constant< __is_nothrow_constructible(_Tp)>  { 
# 1059
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1061
}; 
# 1064
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_nothrow_copy_constructible_impl; 
# 1067
template< class _Tp> 
# 1068
struct __is_nothrow_copy_constructible_impl< _Tp, false>  : public false_type { 
# 1069
}; 
# 1071
template< class _Tp> 
# 1072
struct __is_nothrow_copy_constructible_impl< _Tp, true>  : public __is_nothrow_constructible_impl< _Tp, const _Tp &>  { 
# 1074
}; 
# 1078
template< class _Tp> 
# 1079
struct is_nothrow_copy_constructible : public __is_nothrow_copy_constructible_impl< _Tp> ::type { 
# 1082
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1084
}; 
# 1087
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_nothrow_move_constructible_impl; 
# 1090
template< class _Tp> 
# 1091
struct __is_nothrow_move_constructible_impl< _Tp, false>  : public false_type { 
# 1092
}; 
# 1094
template< class _Tp> 
# 1095
struct __is_nothrow_move_constructible_impl< _Tp, true>  : public __is_nothrow_constructible_impl< _Tp, _Tp &&>  { 
# 1097
}; 
# 1101
template< class _Tp> 
# 1102
struct is_nothrow_move_constructible : public __is_nothrow_move_constructible_impl< _Tp> ::type { 
# 1105
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1107
}; 
# 1110
template< class _Tp, class _Up> 
# 1111
struct is_assignable : public __bool_constant< __is_assignable(_Tp, _Up)>  { 
# 1114
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1116
}; 
# 1118
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_copy_assignable_impl; 
# 1121
template< class _Tp> 
# 1122
struct __is_copy_assignable_impl< _Tp, false>  : public false_type { 
# 1123
}; 
# 1125
template< class _Tp> 
# 1126
struct __is_copy_assignable_impl< _Tp, true>  : public __bool_constant< __is_assignable(_Tp &, const _Tp &)>  { 
# 1128
}; 
# 1131
template< class _Tp> 
# 1132
struct is_copy_assignable : public __is_copy_assignable_impl< _Tp> ::type { 
# 1135
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1137
}; 
# 1139
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_move_assignable_impl; 
# 1142
template< class _Tp> 
# 1143
struct __is_move_assignable_impl< _Tp, false>  : public false_type { 
# 1144
}; 
# 1146
template< class _Tp> 
# 1147
struct __is_move_assignable_impl< _Tp, true>  : public __bool_constant< __is_assignable(_Tp &, _Tp &&)>  { 
# 1149
}; 
# 1152
template< class _Tp> 
# 1153
struct is_move_assignable : public __is_move_assignable_impl< _Tp> ::type { 
# 1156
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1158
}; 
# 1160
template< class _Tp, class _Up> using __is_nothrow_assignable_impl = __bool_constant< __is_nothrow_assignable(_Tp, _Up)> ; 
# 1165
template< class _Tp, class _Up> 
# 1166
struct is_nothrow_assignable : public __is_nothrow_assignable_impl< _Tp, _Up>  { 
# 1169
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1171
}; 
# 1173
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_nt_copy_assignable_impl; 
# 1176
template< class _Tp> 
# 1177
struct __is_nt_copy_assignable_impl< _Tp, false>  : public false_type { 
# 1178
}; 
# 1180
template< class _Tp> 
# 1181
struct __is_nt_copy_assignable_impl< _Tp, true>  : public __is_nothrow_assignable_impl< _Tp &, const _Tp &>  { 
# 1183
}; 
# 1186
template< class _Tp> 
# 1187
struct is_nothrow_copy_assignable : public __is_nt_copy_assignable_impl< _Tp>  { 
# 1190
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1192
}; 
# 1194
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_nt_move_assignable_impl; 
# 1197
template< class _Tp> 
# 1198
struct __is_nt_move_assignable_impl< _Tp, false>  : public false_type { 
# 1199
}; 
# 1201
template< class _Tp> 
# 1202
struct __is_nt_move_assignable_impl< _Tp, true>  : public __is_nothrow_assignable_impl< _Tp &, _Tp &&>  { 
# 1204
}; 
# 1207
template< class _Tp> 
# 1208
struct is_nothrow_move_assignable : public __is_nt_move_assignable_impl< _Tp>  { 
# 1211
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1213
}; 
# 1216
template< class _Tp, class ..._Args> 
# 1217
struct is_trivially_constructible : public __bool_constant< __is_trivially_constructible(_Tp, _Args...)>  { 
# 1220
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1222
}; 
# 1225
template< class _Tp> 
# 1226
struct is_trivially_default_constructible : public __bool_constant< __is_trivially_constructible(_Tp)>  { 
# 1229
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1231
}; 
# 1233
struct __do_is_implicitly_default_constructible_impl { 
# 1235
template< class _Tp> static void __helper(const _Tp &); 
# 1238
template< class _Tp> static true_type __test(const _Tp &, __decltype((__helper< const _Tp &> ({}))) * = 0); 
# 1242
static false_type __test(...); 
# 1243
}; 
# 1245
template< class _Tp> 
# 1246
struct __is_implicitly_default_constructible_impl : public __do_is_implicitly_default_constructible_impl { 
# 1249
typedef __decltype((__test(declval< _Tp> ()))) type; 
# 1250
}; 
# 1252
template< class _Tp> 
# 1253
struct __is_implicitly_default_constructible_safe : public __is_implicitly_default_constructible_impl< _Tp> ::type { 
# 1255
}; 
# 1257
template< class _Tp> 
# 1258
struct __is_implicitly_default_constructible : public __and_< __is_constructible_impl< _Tp> , __is_implicitly_default_constructible_safe< _Tp> >  { 
# 1261
}; 
# 1263
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_trivially_copy_constructible_impl; 
# 1266
template< class _Tp> 
# 1267
struct __is_trivially_copy_constructible_impl< _Tp, false>  : public false_type { 
# 1268
}; 
# 1270
template< class _Tp> 
# 1271
struct __is_trivially_copy_constructible_impl< _Tp, true>  : public __and_< __is_copy_constructible_impl< _Tp> , integral_constant< bool, __is_trivially_constructible(_Tp, const _Tp &)> >  { 
# 1275
}; 
# 1278
template< class _Tp> 
# 1279
struct is_trivially_copy_constructible : public __is_trivially_copy_constructible_impl< _Tp>  { 
# 1282
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1284
}; 
# 1286
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_trivially_move_constructible_impl; 
# 1289
template< class _Tp> 
# 1290
struct __is_trivially_move_constructible_impl< _Tp, false>  : public false_type { 
# 1291
}; 
# 1293
template< class _Tp> 
# 1294
struct __is_trivially_move_constructible_impl< _Tp, true>  : public __and_< __is_move_constructible_impl< _Tp> , integral_constant< bool, __is_trivially_constructible(_Tp, _Tp &&)> >  { 
# 1298
}; 
# 1301
template< class _Tp> 
# 1302
struct is_trivially_move_constructible : public __is_trivially_move_constructible_impl< _Tp>  { 
# 1305
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1307
}; 
# 1310
template< class _Tp, class _Up> 
# 1311
struct is_trivially_assignable : public __bool_constant< __is_trivially_assignable(_Tp, _Up)>  { 
# 1314
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1316
}; 
# 1318
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_trivially_copy_assignable_impl; 
# 1321
template< class _Tp> 
# 1322
struct __is_trivially_copy_assignable_impl< _Tp, false>  : public false_type { 
# 1323
}; 
# 1325
template< class _Tp> 
# 1326
struct __is_trivially_copy_assignable_impl< _Tp, true>  : public __bool_constant< __is_trivially_assignable(_Tp &, const _Tp &)>  { 
# 1328
}; 
# 1331
template< class _Tp> 
# 1332
struct is_trivially_copy_assignable : public __is_trivially_copy_assignable_impl< _Tp>  { 
# 1335
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1337
}; 
# 1339
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_trivially_move_assignable_impl; 
# 1342
template< class _Tp> 
# 1343
struct __is_trivially_move_assignable_impl< _Tp, false>  : public false_type { 
# 1344
}; 
# 1346
template< class _Tp> 
# 1347
struct __is_trivially_move_assignable_impl< _Tp, true>  : public __bool_constant< __is_trivially_assignable(_Tp &, _Tp &&)>  { 
# 1349
}; 
# 1352
template< class _Tp> 
# 1353
struct is_trivially_move_assignable : public __is_trivially_move_assignable_impl< _Tp>  { 
# 1356
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1358
}; 
# 1361
template< class _Tp> 
# 1362
struct is_trivially_destructible : public __and_< __is_destructible_safe< _Tp> , __bool_constant< __has_trivial_destructor(_Tp)> >  { 
# 1366
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1368
}; 
# 1372
template< class _Tp> 
# 1373
struct has_virtual_destructor : public integral_constant< bool, __has_virtual_destructor(_Tp)>  { 
# 1376
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1378
}; 
# 1384
template< class _Tp> 
# 1385
struct alignment_of : public integral_constant< unsigned long, __alignof__(_Tp)>  { 
# 1388
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1390
}; 
# 1393
template< class > 
# 1394
struct rank : public integral_constant< unsigned long, 0UL>  { 
# 1395
}; 
# 1397
template< class _Tp, size_t _Size> 
# 1398
struct rank< _Tp [_Size]>  : public integral_constant< unsigned long, 1 + std::rank< _Tp> ::value>  { 
# 1399
}; 
# 1401
template< class _Tp> 
# 1402
struct rank< _Tp []>  : public integral_constant< unsigned long, 1 + std::rank< _Tp> ::value>  { 
# 1403
}; 
# 1406
template< class , unsigned _Uint> 
# 1407
struct extent : public integral_constant< unsigned long, 0UL>  { 
# 1408
}; 
# 1410
template< class _Tp, unsigned _Uint, size_t _Size> 
# 1411
struct extent< _Tp [_Size], _Uint>  : public integral_constant< unsigned long, (_Uint == (0)) ? _Size : std::extent< _Tp, _Uint - (1)> ::value>  { 
# 1415
}; 
# 1417
template< class _Tp, unsigned _Uint> 
# 1418
struct extent< _Tp [], _Uint>  : public integral_constant< unsigned long, (_Uint == (0)) ? 0 : std::extent< _Tp, _Uint - (1)> ::value>  { 
# 1422
}; 
# 1428
template< class _Tp, class _Up> 
# 1429
struct is_same : public integral_constant< bool, __is_same(_Tp, _Up)>  { 
# 1435
}; 
# 1445 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/type_traits" 3
template< class _Base, class _Derived> 
# 1446
struct is_base_of : public integral_constant< bool, __is_base_of(_Base, _Derived)>  { 
# 1448
}; 
# 1450
template< class _From, class _To, bool 
# 1451
 = __or_< is_void< _From> , is_function< _To> , is_array< _To> > ::value> 
# 1453
struct __is_convertible_helper { 
# 1455
typedef typename is_void< _To> ::type type; 
# 1456
}; 
# 1458
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wctor-dtor-privacy"
template< class _From, class _To> 
# 1461
class __is_convertible_helper< _From, _To, false>  { 
# 1463
template< class _To1> static void __test_aux(_To1) noexcept; 
# 1466
template< class _From1, class _To1, class 
# 1467
 = __decltype((__test_aux< _To1> (std::declval< _From1> ())))> static true_type 
# 1466
__test(int); 
# 1471
template< class , class > static false_type __test(...); 
# 1476
public: typedef __decltype((__test< _From, _To> (0))) type; 
# 1477
}; 
#pragma GCC diagnostic pop
# 1481
template< class _From, class _To> 
# 1482
struct is_convertible : public __is_convertible_helper< _From, _To> ::type { 
# 1484
}; 
# 1487
template< class _ToElementType, class _FromElementType> using __is_array_convertible = is_convertible< _FromElementType (*)[], _ToElementType (*)[]> ; 
# 1491
template< class _From, class _To, bool 
# 1492
 = __or_< is_void< _From> , is_function< _To> , is_array< _To> > ::value> 
# 1494
struct __is_nt_convertible_helper : public is_void< _To>  { 
# 1496
}; 
# 1498
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wctor-dtor-privacy"
template< class _From, class _To> 
# 1501
class __is_nt_convertible_helper< _From, _To, false>  { 
# 1503
template< class _To1> static void __test_aux(_To1) noexcept; 
# 1506
template< class _From1, class _To1> static __bool_constant< noexcept(__test_aux< _To1> (std::declval< _From1> ()))>  __test(int); 
# 1511
template< class , class > static false_type __test(...); 
# 1516
public: using type = __decltype((__test< _From, _To> (0))); 
# 1517
}; 
#pragma GCC diagnostic pop
# 1537 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/type_traits" 3
template< class _Tp> 
# 1538
struct remove_const { 
# 1539
typedef _Tp type; }; 
# 1541
template< class _Tp> 
# 1542
struct remove_const< const _Tp>  { 
# 1543
typedef _Tp type; }; 
# 1546
template< class _Tp> 
# 1547
struct remove_volatile { 
# 1548
typedef _Tp type; }; 
# 1550
template< class _Tp> 
# 1551
struct remove_volatile< volatile _Tp>  { 
# 1552
typedef _Tp type; }; 
# 1555
template< class _Tp> 
# 1556
struct remove_cv { 
# 1557
using type = _Tp; }; 
# 1559
template< class _Tp> 
# 1560
struct remove_cv< const _Tp>  { 
# 1561
using type = _Tp; }; 
# 1563
template< class _Tp> 
# 1564
struct remove_cv< volatile _Tp>  { 
# 1565
using type = _Tp; }; 
# 1567
template< class _Tp> 
# 1568
struct remove_cv< const volatile _Tp>  { 
# 1569
using type = _Tp; }; 
# 1572
template< class _Tp> 
# 1573
struct add_const { 
# 1574
typedef const _Tp type; }; 
# 1577
template< class _Tp> 
# 1578
struct add_volatile { 
# 1579
typedef volatile _Tp type; }; 
# 1582
template< class _Tp> 
# 1583
struct add_cv { 
# 1586
typedef typename add_const< typename add_volatile< _Tp> ::type> ::type type; 
# 1587
}; 
# 1594
template< class _Tp> using remove_const_t = typename remove_const< _Tp> ::type; 
# 1598
template< class _Tp> using remove_volatile_t = typename remove_volatile< _Tp> ::type; 
# 1602
template< class _Tp> using remove_cv_t = typename remove_cv< _Tp> ::type; 
# 1606
template< class _Tp> using add_const_t = typename add_const< _Tp> ::type; 
# 1610
template< class _Tp> using add_volatile_t = typename add_volatile< _Tp> ::type; 
# 1614
template< class _Tp> using add_cv_t = typename add_cv< _Tp> ::type; 
# 1621
template< class _Tp> 
# 1622
struct remove_reference { 
# 1623
typedef _Tp type; }; 
# 1625
template< class _Tp> 
# 1626
struct remove_reference< _Tp &>  { 
# 1627
typedef _Tp type; }; 
# 1629
template< class _Tp> 
# 1630
struct remove_reference< _Tp &&>  { 
# 1631
typedef _Tp type; }; 
# 1633
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> 
# 1634
struct __add_lvalue_reference_helper { 
# 1635
typedef _Tp type; }; 
# 1637
template< class _Tp> 
# 1638
struct __add_lvalue_reference_helper< _Tp, true>  { 
# 1639
typedef _Tp &type; }; 
# 1642
template< class _Tp> 
# 1643
struct add_lvalue_reference : public __add_lvalue_reference_helper< _Tp>  { 
# 1645
}; 
# 1647
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> 
# 1648
struct __add_rvalue_reference_helper { 
# 1649
typedef _Tp type; }; 
# 1651
template< class _Tp> 
# 1652
struct __add_rvalue_reference_helper< _Tp, true>  { 
# 1653
typedef _Tp &&type; }; 
# 1656
template< class _Tp> 
# 1657
struct add_rvalue_reference : public __add_rvalue_reference_helper< _Tp>  { 
# 1659
}; 
# 1663
template< class _Tp> using remove_reference_t = typename remove_reference< _Tp> ::type; 
# 1667
template< class _Tp> using add_lvalue_reference_t = typename add_lvalue_reference< _Tp> ::type; 
# 1671
template< class _Tp> using add_rvalue_reference_t = typename add_rvalue_reference< _Tp> ::type; 
# 1680
template< class _Unqualified, bool _IsConst, bool _IsVol> struct __cv_selector; 
# 1683
template< class _Unqualified> 
# 1684
struct __cv_selector< _Unqualified, false, false>  { 
# 1685
typedef _Unqualified __type; }; 
# 1687
template< class _Unqualified> 
# 1688
struct __cv_selector< _Unqualified, false, true>  { 
# 1689
typedef volatile _Unqualified __type; }; 
# 1691
template< class _Unqualified> 
# 1692
struct __cv_selector< _Unqualified, true, false>  { 
# 1693
typedef const _Unqualified __type; }; 
# 1695
template< class _Unqualified> 
# 1696
struct __cv_selector< _Unqualified, true, true>  { 
# 1697
typedef const volatile _Unqualified __type; }; 
# 1699
template< class _Qualified, class _Unqualified, bool 
# 1700
_IsConst = is_const< _Qualified> ::value, bool 
# 1701
_IsVol = is_volatile< _Qualified> ::value> 
# 1702
class __match_cv_qualifiers { 
# 1704
typedef __cv_selector< _Unqualified, _IsConst, _IsVol>  __match; 
# 1707
public: typedef typename __cv_selector< _Unqualified, _IsConst, _IsVol> ::__type __type; 
# 1708
}; 
# 1711
template< class _Tp> 
# 1712
struct __make_unsigned { 
# 1713
typedef _Tp __type; }; 
# 1716
template<> struct __make_unsigned< char>  { 
# 1717
typedef unsigned char __type; }; 
# 1720
template<> struct __make_unsigned< signed char>  { 
# 1721
typedef unsigned char __type; }; 
# 1724
template<> struct __make_unsigned< short>  { 
# 1725
typedef unsigned short __type; }; 
# 1728
template<> struct __make_unsigned< int>  { 
# 1729
typedef unsigned __type; }; 
# 1732
template<> struct __make_unsigned< long>  { 
# 1733
typedef unsigned long __type; }; 
# 1736
template<> struct __make_unsigned< long long>  { 
# 1737
typedef unsigned long long __type; }; 
# 1742
template<> struct __make_unsigned< __int128>  { 
# 1743
typedef unsigned __int128 __type; }; 
# 1765 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/type_traits" 3
template< class _Tp, bool 
# 1766
_IsInt = is_integral< _Tp> ::value, bool 
# 1767
_IsEnum = is_enum< _Tp> ::value> class __make_unsigned_selector; 
# 1770
template< class _Tp> 
# 1771
class __make_unsigned_selector< _Tp, true, false>  { 
# 1773
using __unsigned_type = typename __make_unsigned< __remove_cv_t< _Tp> > ::__type; 
# 1777
public: using __type = typename __match_cv_qualifiers< _Tp, __unsigned_type> ::__type; 
# 1779
}; 
# 1781
class __make_unsigned_selector_base { 
# 1784
protected: template< class ...> struct _List { }; 
# 1786
template< class _Tp, class ..._Up> 
# 1787
struct _List< _Tp, _Up...>  : public __make_unsigned_selector_base::_List< _Up...>  { 
# 1788
static constexpr inline std::size_t __size = sizeof(_Tp); }; 
# 1790
template< size_t _Sz, class _Tp, bool  = _Sz <= _Tp::__size> struct __select; 
# 1793
template< size_t _Sz, class _Uint, class ..._UInts> 
# 1794
struct __select< _Sz, _List< _Uint, _UInts...> , true>  { 
# 1795
using __type = _Uint; }; 
# 1797
template< size_t _Sz, class _Uint, class ..._UInts> 
# 1798
struct __select< _Sz, _List< _Uint, _UInts...> , false>  : public __make_unsigned_selector_base::__select< _Sz, _List< _UInts...> >  { 
# 1800
}; 
# 1801
}; 
# 1804
template< class _Tp> 
# 1805
class __make_unsigned_selector< _Tp, false, true>  : private __make_unsigned_selector_base { 
# 1809
using _UInts = _List< unsigned char, unsigned short, unsigned, unsigned long, unsigned long long> ; 
# 1812
using __unsigned_type = typename __select< sizeof(_Tp), _List< unsigned char, unsigned short, unsigned, unsigned long, unsigned long long> > ::__type; 
# 1815
public: using __type = typename __match_cv_qualifiers< _Tp, __unsigned_type> ::__type; 
# 1817
}; 
# 1824
template<> struct __make_unsigned< wchar_t>  { 
# 1826
using __type = __make_unsigned_selector< wchar_t, false, true> ::__type; 
# 1828
}; 
# 1840 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/type_traits" 3
template<> struct __make_unsigned< char16_t>  { 
# 1842
using __type = __make_unsigned_selector< char16_t, false, true> ::__type; 
# 1844
}; 
# 1847
template<> struct __make_unsigned< char32_t>  { 
# 1849
using __type = __make_unsigned_selector< char32_t, false, true> ::__type; 
# 1851
}; 
# 1858
template< class _Tp> 
# 1859
struct make_unsigned { 
# 1860
typedef typename __make_unsigned_selector< _Tp> ::__type type; }; 
# 1864
template<> struct make_unsigned< bool> ; 
# 1869
template< class _Tp> 
# 1870
struct __make_signed { 
# 1871
typedef _Tp __type; }; 
# 1874
template<> struct __make_signed< char>  { 
# 1875
typedef signed char __type; }; 
# 1878
template<> struct __make_signed< unsigned char>  { 
# 1879
typedef signed char __type; }; 
# 1882
template<> struct __make_signed< unsigned short>  { 
# 1883
typedef signed short __type; }; 
# 1886
template<> struct __make_signed< unsigned>  { 
# 1887
typedef signed int __type; }; 
# 1890
template<> struct __make_signed< unsigned long>  { 
# 1891
typedef signed long __type; }; 
# 1894
template<> struct __make_signed< unsigned long long>  { 
# 1895
typedef signed long long __type; }; 
# 1900
template<> struct __make_signed< unsigned __int128>  { 
# 1901
typedef __int128 __type; }; 
# 1923 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/type_traits" 3
template< class _Tp, bool 
# 1924
_IsInt = is_integral< _Tp> ::value, bool 
# 1925
_IsEnum = is_enum< _Tp> ::value> class __make_signed_selector; 
# 1928
template< class _Tp> 
# 1929
class __make_signed_selector< _Tp, true, false>  { 
# 1931
using __signed_type = typename __make_signed< __remove_cv_t< _Tp> > ::__type; 
# 1935
public: using __type = typename __match_cv_qualifiers< _Tp, __signed_type> ::__type; 
# 1937
}; 
# 1940
template< class _Tp> 
# 1941
class __make_signed_selector< _Tp, false, true>  { 
# 1943
typedef typename __make_unsigned_selector< _Tp> ::__type __unsigned_type; 
# 1946
public: typedef typename std::__make_signed_selector< __unsigned_type> ::__type __type; 
# 1947
}; 
# 1954
template<> struct __make_signed< wchar_t>  { 
# 1956
using __type = __make_signed_selector< wchar_t, false, true> ::__type; 
# 1958
}; 
# 1970 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/type_traits" 3
template<> struct __make_signed< char16_t>  { 
# 1972
using __type = __make_signed_selector< char16_t, false, true> ::__type; 
# 1974
}; 
# 1977
template<> struct __make_signed< char32_t>  { 
# 1979
using __type = __make_signed_selector< char32_t, false, true> ::__type; 
# 1981
}; 
# 1988
template< class _Tp> 
# 1989
struct make_signed { 
# 1990
typedef typename __make_signed_selector< _Tp> ::__type type; }; 
# 1994
template<> struct make_signed< bool> ; 
# 1998
template< class _Tp> using make_signed_t = typename make_signed< _Tp> ::type; 
# 2002
template< class _Tp> using make_unsigned_t = typename make_unsigned< _Tp> ::type; 
# 2009
template< class _Tp> 
# 2010
struct remove_extent { 
# 2011
typedef _Tp type; }; 
# 2013
template< class _Tp, size_t _Size> 
# 2014
struct remove_extent< _Tp [_Size]>  { 
# 2015
typedef _Tp type; }; 
# 2017
template< class _Tp> 
# 2018
struct remove_extent< _Tp []>  { 
# 2019
typedef _Tp type; }; 
# 2022
template< class _Tp> 
# 2023
struct remove_all_extents { 
# 2024
typedef _Tp type; }; 
# 2026
template< class _Tp, size_t _Size> 
# 2027
struct remove_all_extents< _Tp [_Size]>  { 
# 2028
typedef typename std::remove_all_extents< _Tp> ::type type; }; 
# 2030
template< class _Tp> 
# 2031
struct remove_all_extents< _Tp []>  { 
# 2032
typedef typename std::remove_all_extents< _Tp> ::type type; }; 
# 2036
template< class _Tp> using remove_extent_t = typename remove_extent< _Tp> ::type; 
# 2040
template< class _Tp> using remove_all_extents_t = typename remove_all_extents< _Tp> ::type; 
# 2046
template< class _Tp, class > 
# 2047
struct __remove_pointer_helper { 
# 2048
typedef _Tp type; }; 
# 2050
template< class _Tp, class _Up> 
# 2051
struct __remove_pointer_helper< _Tp, _Up *>  { 
# 2052
typedef _Up type; }; 
# 2055
template< class _Tp> 
# 2056
struct remove_pointer : public __remove_pointer_helper< _Tp, __remove_cv_t< _Tp> >  { 
# 2058
}; 
# 2060
template< class _Tp, bool  = __or_< __is_referenceable< _Tp> , is_void< _Tp> > ::value> 
# 2062
struct __add_pointer_helper { 
# 2063
typedef _Tp type; }; 
# 2065
template< class _Tp> 
# 2066
struct __add_pointer_helper< _Tp, true>  { 
# 2067
typedef typename remove_reference< _Tp> ::type *type; }; 
# 2070
template< class _Tp> 
# 2071
struct add_pointer : public __add_pointer_helper< _Tp>  { 
# 2073
}; 
# 2077
template< class _Tp> using remove_pointer_t = typename remove_pointer< _Tp> ::type; 
# 2081
template< class _Tp> using add_pointer_t = typename add_pointer< _Tp> ::type; 
# 2085
template< size_t _Len> 
# 2086
struct __aligned_storage_msa { 
# 2088
union __type { 
# 2090
unsigned char __data[_Len]; 
# 2091
struct __attribute((__aligned__)) { } __align; 
# 2092
}; 
# 2093
}; 
# 2105 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/type_traits" 3
template< size_t _Len, size_t _Align = __alignof__(typename __aligned_storage_msa< _Len> ::__type)> 
# 2107
struct aligned_storage { 
# 2109
union type { 
# 2111
unsigned char __data[_Len]; 
# 2112
struct __attribute((__aligned__(_Align))) { } __align; 
# 2113
}; 
# 2114
}; 
# 2116
template< class ..._Types> 
# 2117
struct __strictest_alignment { 
# 2119
static const size_t _S_alignment = (0); 
# 2120
static const size_t _S_size = (0); 
# 2121
}; 
# 2123
template< class _Tp, class ..._Types> 
# 2124
struct __strictest_alignment< _Tp, _Types...>  { 
# 2126
static const size_t _S_alignment = ((__alignof__(_Tp) > __strictest_alignment< _Types...> ::_S_alignment) ? __alignof__(_Tp) : __strictest_alignment< _Types...> ::_S_alignment); 
# 2129
static const size_t _S_size = ((sizeof(_Tp) > __strictest_alignment< _Types...> ::_S_size) ? sizeof(_Tp) : __strictest_alignment< _Types...> ::_S_size); 
# 2132
}; 
# 2144 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/type_traits" 3
template< size_t _Len, class ..._Types> 
# 2145
struct aligned_union { 
# 2148
static_assert((sizeof...(_Types) != (0)), "At least one type is required");
# 2150
private: using __strictest = __strictest_alignment< _Types...> ; 
# 2151
static const size_t _S_len = ((_Len > __strictest::_S_size) ? _Len : __strictest::_S_size); 
# 2155
public: static const size_t alignment_value = (__strictest::_S_alignment); 
# 2157
typedef typename aligned_storage< _S_len, alignment_value> ::type type; 
# 2158
}; 
# 2160
template< size_t _Len, class ..._Types> const size_t aligned_union< _Len, _Types...> ::alignment_value; 
# 2167
template< class _Up, bool 
# 2168
_IsArray = is_array< _Up> ::value, bool 
# 2169
_IsFunction = is_function< _Up> ::value> struct __decay_selector; 
# 2173
template< class _Up> 
# 2174
struct __decay_selector< _Up, false, false>  { 
# 2175
typedef __remove_cv_t< _Up>  __type; }; 
# 2177
template< class _Up> 
# 2178
struct __decay_selector< _Up, true, false>  { 
# 2179
typedef typename remove_extent< _Up> ::type *__type; }; 
# 2181
template< class _Up> 
# 2182
struct __decay_selector< _Up, false, true>  { 
# 2183
typedef typename add_pointer< _Up> ::type __type; }; 
# 2187
template< class _Tp> 
# 2188
class decay { 
# 2190
typedef typename remove_reference< _Tp> ::type __remove_type; 
# 2193
public: typedef typename __decay_selector< __remove_type> ::__type type; 
# 2194
}; 
# 2199
template< class _Tp> 
# 2200
struct __strip_reference_wrapper { 
# 2202
typedef _Tp __type; 
# 2203
}; 
# 2205
template< class _Tp> 
# 2206
struct __strip_reference_wrapper< reference_wrapper< _Tp> >  { 
# 2208
typedef _Tp &__type; 
# 2209
}; 
# 2212
template< class _Tp> using __decay_t = typename decay< _Tp> ::type; 
# 2215
template< class _Tp> using __decay_and_strip = __strip_reference_wrapper< __decay_t< _Tp> > ; 
# 2221
template< bool , class _Tp = void> 
# 2222
struct enable_if { 
# 2223
}; 
# 2226
template< class _Tp> 
# 2227
struct enable_if< true, _Tp>  { 
# 2228
typedef _Tp type; }; 
# 2233
template< bool _Cond, class _Tp = void> using __enable_if_t = typename enable_if< _Cond, _Tp> ::type; 
# 2237
template< class ..._Cond> using _Require = __enable_if_t< __and_< _Cond...> ::value> ; 
# 2241
template< class _Tp> using __remove_cvref_t = typename remove_cv< typename remove_reference< _Tp> ::type> ::type; 
# 2248
template< bool _Cond, class _Iftrue, class _Iffalse> 
# 2249
struct conditional { 
# 2250
typedef _Iftrue type; }; 
# 2253
template< class _Iftrue, class _Iffalse> 
# 2254
struct conditional< false, _Iftrue, _Iffalse>  { 
# 2255
typedef _Iffalse type; }; 
# 2258
template< class ..._Tp> struct common_type; 
# 2264
struct __do_common_type_impl { 
# 2266
template< class _Tp, class _Up> using __cond_t = __decltype((true ? std::declval< _Tp> () : std::declval< _Up> ())); 
# 2272
template< class _Tp, class _Up> static __success_type< __decay_t< __cond_t< _Tp, _Up> > >  _S_test(int); 
# 2284 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/type_traits" 3
template< class , class > static __failure_type _S_test_2(...); 
# 2288
template< class _Tp, class _Up> static __decltype((_S_test_2< _Tp, _Up> (0))) _S_test(...); 
# 2291
}; 
# 2295
template<> struct common_type< >  { 
# 2296
}; 
# 2299
template< class _Tp0> 
# 2300
struct common_type< _Tp0>  : public std::common_type< _Tp0, _Tp0>  { 
# 2302
}; 
# 2305
template< class _Tp1, class _Tp2, class 
# 2306
_Dp1 = __decay_t< _Tp1> , class _Dp2 = __decay_t< _Tp2> > 
# 2307
struct __common_type_impl { 
# 2311
using type = common_type< _Dp1, _Dp2> ; 
# 2312
}; 
# 2314
template< class _Tp1, class _Tp2> 
# 2315
struct __common_type_impl< _Tp1, _Tp2, _Tp1, _Tp2>  : private __do_common_type_impl { 
# 2320
using type = __decltype((_S_test< _Tp1, _Tp2> (0))); 
# 2321
}; 
# 2324
template< class _Tp1, class _Tp2> 
# 2325
struct common_type< _Tp1, _Tp2>  : public __common_type_impl< _Tp1, _Tp2> ::type { 
# 2327
}; 
# 2329
template< class ...> 
# 2330
struct __common_type_pack { 
# 2331
}; 
# 2333
template< class , class , class  = void> struct __common_type_fold; 
# 2337
template< class _Tp1, class _Tp2, class ..._Rp> 
# 2338
struct common_type< _Tp1, _Tp2, _Rp...>  : public __common_type_fold< std::common_type< _Tp1, _Tp2> , __common_type_pack< _Rp...> >  { 
# 2341
}; 
# 2346
template< class _CTp, class ..._Rp> 
# 2347
struct __common_type_fold< _CTp, __common_type_pack< _Rp...> , __void_t< typename _CTp::type> >  : public common_type< typename _CTp::type, _Rp...>  { 
# 2350
}; 
# 2353
template< class _CTp, class _Rp> 
# 2354
struct __common_type_fold< _CTp, _Rp, void>  { 
# 2355
}; 
# 2357
template< class _Tp, bool  = is_enum< _Tp> ::value> 
# 2358
struct __underlying_type_impl { 
# 2360
using type = __underlying_type(_Tp); 
# 2361
}; 
# 2363
template< class _Tp> 
# 2364
struct __underlying_type_impl< _Tp, false>  { 
# 2365
}; 
# 2369
template< class _Tp> 
# 2370
struct underlying_type : public __underlying_type_impl< _Tp>  { 
# 2372
}; 
# 2375
template< class _Tp> 
# 2376
struct __declval_protector { 
# 2378
static const bool __stop = false; 
# 2379
}; 
# 2386
template< class _Tp> auto 
# 2387
declval() noexcept->__decltype((__declval< _Tp> (0))) 
# 2388
{ 
# 2389
static_assert((__declval_protector< _Tp> ::__stop), "declval() must not be used!");
# 2391
return __declval< _Tp> (0); 
# 2392
} 
# 2395
template< class _Signature> struct result_of; 
# 2403
struct __invoke_memfun_ref { }; 
# 2404
struct __invoke_memfun_deref { }; 
# 2405
struct __invoke_memobj_ref { }; 
# 2406
struct __invoke_memobj_deref { }; 
# 2407
struct __invoke_other { }; 
# 2410
template< class _Tp, class _Tag> 
# 2411
struct __result_of_success : public __success_type< _Tp>  { 
# 2412
using __invoke_type = _Tag; }; 
# 2415
struct __result_of_memfun_ref_impl { 
# 2417
template< class _Fp, class _Tp1, class ..._Args> static __result_of_success< __decltype(((std::declval< _Tp1> ().*std::declval< _Fp> ())(std::declval< _Args> ()...))), __invoke_memfun_ref>  _S_test(int); 
# 2422
template< class ...> static __failure_type _S_test(...); 
# 2424
}; 
# 2426
template< class _MemPtr, class _Arg, class ..._Args> 
# 2427
struct __result_of_memfun_ref : private __result_of_memfun_ref_impl { 
# 2430
typedef __decltype((_S_test< _MemPtr, _Arg, _Args...> (0))) type; 
# 2431
}; 
# 2434
struct __result_of_memfun_deref_impl { 
# 2436
template< class _Fp, class _Tp1, class ..._Args> static __result_of_success< __decltype((((*std::declval< _Tp1> ()).*std::declval< _Fp> ())(std::declval< _Args> ()...))), __invoke_memfun_deref>  _S_test(int); 
# 2441
template< class ...> static __failure_type _S_test(...); 
# 2443
}; 
# 2445
template< class _MemPtr, class _Arg, class ..._Args> 
# 2446
struct __result_of_memfun_deref : private __result_of_memfun_deref_impl { 
# 2449
typedef __decltype((_S_test< _MemPtr, _Arg, _Args...> (0))) type; 
# 2450
}; 
# 2453
struct __result_of_memobj_ref_impl { 
# 2455
template< class _Fp, class _Tp1> static __result_of_success< __decltype((std::declval< _Tp1> ().*std::declval< _Fp> ())), __invoke_memobj_ref>  _S_test(int); 
# 2460
template< class , class > static __failure_type _S_test(...); 
# 2462
}; 
# 2464
template< class _MemPtr, class _Arg> 
# 2465
struct __result_of_memobj_ref : private __result_of_memobj_ref_impl { 
# 2468
typedef __decltype((_S_test< _MemPtr, _Arg> (0))) type; 
# 2469
}; 
# 2472
struct __result_of_memobj_deref_impl { 
# 2474
template< class _Fp, class _Tp1> static __result_of_success< __decltype(((*std::declval< _Tp1> ()).*std::declval< _Fp> ())), __invoke_memobj_deref>  _S_test(int); 
# 2479
template< class , class > static __failure_type _S_test(...); 
# 2481
}; 
# 2483
template< class _MemPtr, class _Arg> 
# 2484
struct __result_of_memobj_deref : private __result_of_memobj_deref_impl { 
# 2487
typedef __decltype((_S_test< _MemPtr, _Arg> (0))) type; 
# 2488
}; 
# 2490
template< class _MemPtr, class _Arg> struct __result_of_memobj; 
# 2493
template< class _Res, class _Class, class _Arg> 
# 2494
struct __result_of_memobj< _Res (_Class::*), _Arg>  { 
# 2496
typedef __remove_cvref_t< _Arg>  _Argval; 
# 2497
typedef _Res (_Class::*_MemPtr); 
# 2502
typedef typename __conditional_t< __or_< is_same< _Argval, _Class> , is_base_of< _Class, _Argval> > ::value, __result_of_memobj_ref< _MemPtr, _Arg> , __result_of_memobj_deref< _MemPtr, _Arg> > ::type type; 
# 2503
}; 
# 2505
template< class _MemPtr, class _Arg, class ..._Args> struct __result_of_memfun; 
# 2508
template< class _Res, class _Class, class _Arg, class ..._Args> 
# 2509
struct __result_of_memfun< _Res (_Class::*), _Arg, _Args...>  { 
# 2511
typedef typename remove_reference< _Arg> ::type _Argval; 
# 2512
typedef _Res (_Class::*_MemPtr); 
# 2516
typedef typename __conditional_t< is_base_of< _Class, _Argval> ::value, __result_of_memfun_ref< _MemPtr, _Arg, _Args...> , __result_of_memfun_deref< _MemPtr, _Arg, _Args...> > ::type type; 
# 2517
}; 
# 2524
template< class _Tp, class _Up = __remove_cvref_t< _Tp> > 
# 2525
struct __inv_unwrap { 
# 2527
using type = _Tp; 
# 2528
}; 
# 2530
template< class _Tp, class _Up> 
# 2531
struct __inv_unwrap< _Tp, reference_wrapper< _Up> >  { 
# 2533
using type = _Up &; 
# 2534
}; 
# 2536
template< bool , bool , class _Functor, class ..._ArgTypes> 
# 2537
struct __result_of_impl { 
# 2539
typedef __failure_type type; 
# 2540
}; 
# 2542
template< class _MemPtr, class _Arg> 
# 2543
struct __result_of_impl< true, false, _MemPtr, _Arg>  : public __result_of_memobj< __decay_t< _MemPtr> , typename __inv_unwrap< _Arg> ::type>  { 
# 2546
}; 
# 2548
template< class _MemPtr, class _Arg, class ..._Args> 
# 2549
struct __result_of_impl< false, true, _MemPtr, _Arg, _Args...>  : public __result_of_memfun< __decay_t< _MemPtr> , typename __inv_unwrap< _Arg> ::type, _Args...>  { 
# 2552
}; 
# 2555
struct __result_of_other_impl { 
# 2557
template< class _Fn, class ..._Args> static __result_of_success< __decltype((std::declval< _Fn> ()(std::declval< _Args> ()...))), __invoke_other>  _S_test(int); 
# 2562
template< class ...> static __failure_type _S_test(...); 
# 2564
}; 
# 2566
template< class _Functor, class ..._ArgTypes> 
# 2567
struct __result_of_impl< false, false, _Functor, _ArgTypes...>  : private __result_of_other_impl { 
# 2570
typedef __decltype((_S_test< _Functor, _ArgTypes...> (0))) type; 
# 2571
}; 
# 2574
template< class _Functor, class ..._ArgTypes> 
# 2575
struct __invoke_result : public __result_of_impl< is_member_object_pointer< typename remove_reference< _Functor> ::type> ::value, is_member_function_pointer< typename remove_reference< _Functor> ::type> ::value, _Functor, _ArgTypes...> ::type { 
# 2585
}; 
# 2588
template< class _Functor, class ..._ArgTypes> 
# 2589
struct result_of< _Functor (_ArgTypes ...)>  : public __invoke_result< _Functor, _ArgTypes...>  { 
# 2591
} __attribute((__deprecated__("use \'std::invoke_result\' instead"))); 
# 2595
template< size_t _Len, size_t _Align = __alignof__(typename __aligned_storage_msa< _Len> ::__type)> using aligned_storage_t = typename aligned_storage< _Len, _Align> ::type; 
# 2599
template< size_t _Len, class ..._Types> using aligned_union_t = typename aligned_union< _Len, _Types...> ::type; 
# 2603
template< class _Tp> using decay_t = typename decay< _Tp> ::type; 
# 2607
template< bool _Cond, class _Tp = void> using enable_if_t = typename enable_if< _Cond, _Tp> ::type; 
# 2611
template< bool _Cond, class _Iftrue, class _Iffalse> using conditional_t = typename conditional< _Cond, _Iftrue, _Iffalse> ::type; 
# 2615
template< class ..._Tp> using common_type_t = typename common_type< _Tp...> ::type; 
# 2619
template< class _Tp> using underlying_type_t = typename underlying_type< _Tp> ::type; 
# 2623
template< class _Tp> using result_of_t = typename result_of< _Tp> ::type; 
# 2630
template< class ...> using void_t = void; 
# 2636
template< class _Default, class _AlwaysVoid, 
# 2637
template< class ...>  class _Op, class ..._Args> 
# 2638
struct __detector { 
# 2640
using value_t = false_type; 
# 2641
using type = _Default; 
# 2642
}; 
# 2645
template< class _Default, template< class ...>  class _Op, class ...
# 2646
_Args> 
# 2647
struct __detector< _Default, __void_t< _Op< _Args...> > , _Op, _Args...>  { 
# 2649
using value_t = true_type; 
# 2650
using type = _Op< _Args...> ; 
# 2651
}; 
# 2654
template< class _Default, template< class ...>  class _Op, class ...
# 2655
_Args> using __detected_or = __detector< _Default, void, _Op, _Args...> ; 
# 2659
template< class _Default, template< class ...>  class _Op, class ...
# 2660
_Args> using __detected_or_t = typename __detected_or< _Default, _Op, _Args...> ::type; 
# 2678 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/type_traits" 3
template< class _Tp> struct __is_swappable; 
# 2681
template< class _Tp> struct __is_nothrow_swappable; 
# 2684
template< class > 
# 2685
struct __is_tuple_like_impl : public false_type { 
# 2686
}; 
# 2689
template< class _Tp> 
# 2690
struct __is_tuple_like : public __is_tuple_like_impl< __remove_cvref_t< _Tp> > ::type { 
# 2692
}; 
# 2695
template< class _Tp> inline _Require< __not_< __is_tuple_like< _Tp> > , is_move_constructible< _Tp> , is_move_assignable< _Tp> >  swap(_Tp &, _Tp &) noexcept(__and_< is_nothrow_move_constructible< _Tp> , is_nothrow_move_assignable< _Tp> > ::value); 
# 2705
template< class _Tp, size_t _Nm> inline __enable_if_t< __is_swappable< _Tp> ::value>  swap(_Tp (& __a)[_Nm], _Tp (& __b)[_Nm]) noexcept(__is_nothrow_swappable< _Tp> ::value); 
# 2713
namespace __swappable_details { 
# 2714
using std::swap;
# 2716
struct __do_is_swappable_impl { 
# 2718
template< class _Tp, class 
# 2719
 = __decltype((swap(std::declval< _Tp &> (), std::declval< _Tp &> ())))> static true_type 
# 2718
__test(int); 
# 2722
template< class > static false_type __test(...); 
# 2724
}; 
# 2726
struct __do_is_nothrow_swappable_impl { 
# 2728
template< class _Tp> static __bool_constant< noexcept(swap(std::declval< _Tp &> (), std::declval< _Tp &> ()))>  __test(int); 
# 2733
template< class > static false_type __test(...); 
# 2735
}; 
# 2737
}
# 2739
template< class _Tp> 
# 2740
struct __is_swappable_impl : public __swappable_details::__do_is_swappable_impl { 
# 2743
typedef __decltype((__test< _Tp> (0))) type; 
# 2744
}; 
# 2746
template< class _Tp> 
# 2747
struct __is_nothrow_swappable_impl : public __swappable_details::__do_is_nothrow_swappable_impl { 
# 2750
typedef __decltype((__test< _Tp> (0))) type; 
# 2751
}; 
# 2753
template< class _Tp> 
# 2754
struct __is_swappable : public __is_swappable_impl< _Tp> ::type { 
# 2756
}; 
# 2758
template< class _Tp> 
# 2759
struct __is_nothrow_swappable : public __is_nothrow_swappable_impl< _Tp> ::type { 
# 2761
}; 
# 2769
template< class _Tp> 
# 2770
struct is_swappable : public __is_swappable_impl< _Tp> ::type { 
# 2773
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 2775
}; 
# 2778
template< class _Tp> 
# 2779
struct is_nothrow_swappable : public __is_nothrow_swappable_impl< _Tp> ::type { 
# 2782
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 2784
}; 
# 2788
template< class _Tp> constexpr bool 
# 2789
is_swappable_v = (is_swappable< _Tp> ::value); 
# 2793
template< class _Tp> constexpr bool 
# 2794
is_nothrow_swappable_v = (is_nothrow_swappable< _Tp> ::value); 
# 2799
namespace __swappable_with_details { 
# 2800
using std::swap;
# 2802
struct __do_is_swappable_with_impl { 
# 2804
template< class _Tp, class _Up, class 
# 2805
 = __decltype((swap(std::declval< _Tp> (), std::declval< _Up> ()))), class 
# 2807
 = __decltype((swap(std::declval< _Up> (), std::declval< _Tp> ())))> static true_type 
# 2804
__test(int); 
# 2810
template< class , class > static false_type __test(...); 
# 2812
}; 
# 2814
struct __do_is_nothrow_swappable_with_impl { 
# 2816
template< class _Tp, class _Up> static __bool_constant< noexcept(swap(std::declval< _Tp> (), std::declval< _Up> ())) && noexcept(swap(std::declval< _Up> (), std::declval< _Tp> ()))>  __test(int); 
# 2823
template< class , class > static false_type __test(...); 
# 2825
}; 
# 2827
}
# 2829
template< class _Tp, class _Up> 
# 2830
struct __is_swappable_with_impl : public __swappable_with_details::__do_is_swappable_with_impl { 
# 2833
typedef __decltype((__test< _Tp, _Up> (0))) type; 
# 2834
}; 
# 2837
template< class _Tp> 
# 2838
struct __is_swappable_with_impl< _Tp &, _Tp &>  : public __swappable_details::__do_is_swappable_impl { 
# 2841
typedef __decltype((__test< _Tp &> (0))) type; 
# 2842
}; 
# 2844
template< class _Tp, class _Up> 
# 2845
struct __is_nothrow_swappable_with_impl : public __swappable_with_details::__do_is_nothrow_swappable_with_impl { 
# 2848
typedef __decltype((__test< _Tp, _Up> (0))) type; 
# 2849
}; 
# 2852
template< class _Tp> 
# 2853
struct __is_nothrow_swappable_with_impl< _Tp &, _Tp &>  : public __swappable_details::__do_is_nothrow_swappable_impl { 
# 2856
typedef __decltype((__test< _Tp &> (0))) type; 
# 2857
}; 
# 2861
template< class _Tp, class _Up> 
# 2862
struct is_swappable_with : public __is_swappable_with_impl< _Tp, _Up> ::type { 
# 2865
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "first template argument must be a complete class or an unbounded array");
# 2867
static_assert((std::__is_complete_or_unbounded(__type_identity< _Up> {})), "second template argument must be a complete class or an unbounded array");
# 2869
}; 
# 2872
template< class _Tp, class _Up> 
# 2873
struct is_nothrow_swappable_with : public __is_nothrow_swappable_with_impl< _Tp, _Up> ::type { 
# 2876
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "first template argument must be a complete class or an unbounded array");
# 2878
static_assert((std::__is_complete_or_unbounded(__type_identity< _Up> {})), "second template argument must be a complete class or an unbounded array");
# 2880
}; 
# 2884
template< class _Tp, class _Up> constexpr bool 
# 2885
is_swappable_with_v = (is_swappable_with< _Tp, _Up> ::value); 
# 2889
template< class _Tp, class _Up> constexpr bool 
# 2890
is_nothrow_swappable_with_v = (is_nothrow_swappable_with< _Tp, _Up> ::value); 
# 2901 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/type_traits" 3
template< class _Result, class _Ret, bool 
# 2902
 = is_void< _Ret> ::value, class  = void> 
# 2903
struct __is_invocable_impl : public false_type { 
# 2906
using __nothrow_type = false_type; 
# 2907
}; 
# 2910
template< class _Result, class _Ret> 
# 2911
struct __is_invocable_impl< _Result, _Ret, true, __void_t< typename _Result::type> >  : public true_type { 
# 2916
using __nothrow_type = true_type; 
# 2917
}; 
# 2919
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wctor-dtor-privacy"
# 2922
template< class _Result, class _Ret> 
# 2923
struct __is_invocable_impl< _Result, _Ret, false, __void_t< typename _Result::type> >  { 
# 2931
private: static typename _Result::type _S_get() noexcept; 
# 2933
template< class _Tp> static void _S_conv(_Tp) noexcept; 
# 2937
template< class _Tp, bool _Check_Noex = false, class 
# 2938
 = __decltype((_S_conv< _Tp> ((_S_get)()))), bool 
# 2939
_Noex = noexcept(_S_conv< _Tp> ((_S_get)()))> static __bool_constant< _Check_Noex ? _Noex : true>  
# 2937
_S_test(int); 
# 2943
template< class _Tp, bool  = false> static false_type _S_test(...); 
# 2949
public: using type = __decltype((_S_test< _Ret> (1))); 
# 2952
using __nothrow_type = __decltype((_S_test< _Ret, true> (1))); 
# 2953
}; 
#pragma GCC diagnostic pop
# 2956
template< class _Fn, class ..._ArgTypes> 
# 2957
struct __is_invocable : public __is_invocable_impl< __invoke_result< _Fn, _ArgTypes...> , void> ::type { 
# 2959
}; 
# 2961
template< class _Fn, class _Tp, class ..._Args> constexpr bool 
# 2962
__call_is_nt(__invoke_memfun_ref) 
# 2963
{ 
# 2964
using _Up = typename __inv_unwrap< _Tp> ::type; 
# 2965
return noexcept((std::declval< typename __inv_unwrap< _Tp> ::type> ().*std::declval< _Fn> ())(std::declval< _Args> ()...)); 
# 2967
} 
# 2969
template< class _Fn, class _Tp, class ..._Args> constexpr bool 
# 2970
__call_is_nt(__invoke_memfun_deref) 
# 2971
{ 
# 2972
return noexcept(((*std::declval< _Tp> ()).*std::declval< _Fn> ())(std::declval< _Args> ()...)); 
# 2974
} 
# 2976
template< class _Fn, class _Tp> constexpr bool 
# 2977
__call_is_nt(__invoke_memobj_ref) 
# 2978
{ 
# 2979
using _Up = typename __inv_unwrap< _Tp> ::type; 
# 2980
return noexcept((std::declval< typename __inv_unwrap< _Tp> ::type> ().*std::declval< _Fn> ())); 
# 2981
} 
# 2983
template< class _Fn, class _Tp> constexpr bool 
# 2984
__call_is_nt(__invoke_memobj_deref) 
# 2985
{ 
# 2986
return noexcept(((*std::declval< _Tp> ()).*std::declval< _Fn> ())); 
# 2987
} 
# 2989
template< class _Fn, class ..._Args> constexpr bool 
# 2990
__call_is_nt(__invoke_other) 
# 2991
{ 
# 2992
return noexcept(std::declval< _Fn> ()(std::declval< _Args> ()...)); 
# 2993
} 
# 2995
template< class _Result, class _Fn, class ..._Args> 
# 2996
struct __call_is_nothrow : public __bool_constant< std::__call_is_nt< _Fn, _Args...> (typename _Result::__invoke_type{})>  { 
# 3000
}; 
# 3002
template< class _Fn, class ..._Args> using __call_is_nothrow_ = __call_is_nothrow< __invoke_result< _Fn, _Args...> , _Fn, _Args...> ; 
# 3007
template< class _Fn, class ..._Args> 
# 3008
struct __is_nothrow_invocable : public __and_< __is_invocable< _Fn, _Args...> , __call_is_nothrow_< _Fn, _Args...> > ::type { 
# 3011
}; 
# 3013
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wctor-dtor-privacy"
struct __nonesuchbase { }; 
# 3016
struct __nonesuch : private __nonesuchbase { 
# 3017
~__nonesuch() = delete;
# 3018
__nonesuch(const __nonesuch &) = delete;
# 3019
void operator=(const __nonesuch &) = delete;
# 3020
}; 
#pragma GCC diagnostic pop
# 3028
template< class _Functor, class ..._ArgTypes> 
# 3029
struct invoke_result : public __invoke_result< _Functor, _ArgTypes...>  { 
# 3032
static_assert((std::__is_complete_or_unbounded(__type_identity< _Functor> {})), "_Functor must be a complete class or an unbounded array");
# 3034
static_assert(((std::__is_complete_or_unbounded(__type_identity< _ArgTypes> {}) && ... )), "each argument type must be a complete class or an unbounded array");
# 3037
}; 
# 3040
template< class _Fn, class ..._Args> using invoke_result_t = typename invoke_result< _Fn, _Args...> ::type; 
# 3044
template< class _Fn, class ..._ArgTypes> 
# 3045
struct is_invocable : public __is_invocable_impl< __invoke_result< _Fn, _ArgTypes...> , void> ::type { 
# 3048
static_assert((std::__is_complete_or_unbounded(__type_identity< _Fn> {})), "_Fn must be a complete class or an unbounded array");
# 3050
static_assert(((std::__is_complete_or_unbounded(__type_identity< _ArgTypes> {}) && ... )), "each argument type must be a complete class or an unbounded array");
# 3053
}; 
# 3056
template< class _Ret, class _Fn, class ..._ArgTypes> 
# 3057
struct is_invocable_r : public __is_invocable_impl< __invoke_result< _Fn, _ArgTypes...> , _Ret> ::type { 
# 3060
static_assert((std::__is_complete_or_unbounded(__type_identity< _Fn> {})), "_Fn must be a complete class or an unbounded array");
# 3062
static_assert(((std::__is_complete_or_unbounded(__type_identity< _ArgTypes> {}) && ... )), "each argument type must be a complete class or an unbounded array");
# 3065
static_assert((std::__is_complete_or_unbounded(__type_identity< _Ret> {})), "_Ret must be a complete class or an unbounded array");
# 3067
}; 
# 3070
template< class _Fn, class ..._ArgTypes> 
# 3071
struct is_nothrow_invocable : public __and_< __is_invocable_impl< __invoke_result< _Fn, _ArgTypes...> , void> , __call_is_nothrow_< _Fn, _ArgTypes...> > ::type { 
# 3075
static_assert((std::__is_complete_or_unbounded(__type_identity< _Fn> {})), "_Fn must be a complete class or an unbounded array");
# 3077
static_assert(((std::__is_complete_or_unbounded(__type_identity< _ArgTypes> {}) && ... )), "each argument type must be a complete class or an unbounded array");
# 3080
}; 
# 3083
template< class _Result, class _Ret> using __is_nt_invocable_impl = typename __is_invocable_impl< _Result, _Ret> ::__nothrow_type; 
# 3089
template< class _Ret, class _Fn, class ..._ArgTypes> 
# 3090
struct is_nothrow_invocable_r : public __and_< __is_nt_invocable_impl< __invoke_result< _Fn, _ArgTypes...> , _Ret> , __call_is_nothrow_< _Fn, _ArgTypes...> > ::type { 
# 3094
static_assert((std::__is_complete_or_unbounded(__type_identity< _Fn> {})), "_Fn must be a complete class or an unbounded array");
# 3096
static_assert(((std::__is_complete_or_unbounded(__type_identity< _ArgTypes> {}) && ... )), "each argument type must be a complete class or an unbounded array");
# 3099
static_assert((std::__is_complete_or_unbounded(__type_identity< _Ret> {})), "_Ret must be a complete class or an unbounded array");
# 3101
}; 
# 3120 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/type_traits" 3
template< class _Tp> constexpr bool 
# 3121
is_void_v = (is_void< _Tp> ::value); 
# 3122
template< class _Tp> constexpr bool 
# 3123
is_null_pointer_v = (is_null_pointer< _Tp> ::value); 
# 3124
template< class _Tp> constexpr bool 
# 3125
is_integral_v = (is_integral< _Tp> ::value); 
# 3126
template< class _Tp> constexpr bool 
# 3127
is_floating_point_v = (is_floating_point< _Tp> ::value); 
# 3128
template< class _Tp> constexpr bool 
# 3129
is_array_v = (is_array< _Tp> ::value); 
# 3130
template< class _Tp> constexpr bool 
# 3131
is_pointer_v = (is_pointer< _Tp> ::value); 
# 3132
template< class _Tp> constexpr bool 
# 3133
is_lvalue_reference_v = (is_lvalue_reference< _Tp> ::value); 
# 3135
template< class _Tp> constexpr bool 
# 3136
is_rvalue_reference_v = (is_rvalue_reference< _Tp> ::value); 
# 3138
template< class _Tp> constexpr bool 
# 3139
is_member_object_pointer_v = (is_member_object_pointer< _Tp> ::value); 
# 3141
template< class _Tp> constexpr bool 
# 3142
is_member_function_pointer_v = (is_member_function_pointer< _Tp> ::value); 
# 3144
template< class _Tp> constexpr bool 
# 3145
is_enum_v = (is_enum< _Tp> ::value); 
# 3146
template< class _Tp> constexpr bool 
# 3147
is_union_v = (is_union< _Tp> ::value); 
# 3148
template< class _Tp> constexpr bool 
# 3149
is_class_v = (is_class< _Tp> ::value); 
# 3150
template< class _Tp> constexpr bool 
# 3151
is_function_v = (is_function< _Tp> ::value); 
# 3152
template< class _Tp> constexpr bool 
# 3153
is_reference_v = (is_reference< _Tp> ::value); 
# 3154
template< class _Tp> constexpr bool 
# 3155
is_arithmetic_v = (is_arithmetic< _Tp> ::value); 
# 3156
template< class _Tp> constexpr bool 
# 3157
is_fundamental_v = (is_fundamental< _Tp> ::value); 
# 3158
template< class _Tp> constexpr bool 
# 3159
is_object_v = (is_object< _Tp> ::value); 
# 3160
template< class _Tp> constexpr bool 
# 3161
is_scalar_v = (is_scalar< _Tp> ::value); 
# 3162
template< class _Tp> constexpr bool 
# 3163
is_compound_v = (is_compound< _Tp> ::value); 
# 3164
template< class _Tp> constexpr bool 
# 3165
is_member_pointer_v = (is_member_pointer< _Tp> ::value); 
# 3166
template< class _Tp> constexpr bool 
# 3167
is_const_v = (is_const< _Tp> ::value); 
# 3168
template< class _Tp> constexpr bool 
# 3169
is_volatile_v = (is_volatile< _Tp> ::value); 
# 3170
template< class _Tp> constexpr bool 
# 3171
is_trivial_v = (is_trivial< _Tp> ::value); 
# 3172
template< class _Tp> constexpr bool 
# 3173
is_trivially_copyable_v = (is_trivially_copyable< _Tp> ::value); 
# 3175
template< class _Tp> constexpr bool 
# 3176
is_standard_layout_v = (is_standard_layout< _Tp> ::value); 
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
template< class _Tp> constexpr bool 
# 3181
is_pod_v = (is_pod< _Tp> ::value); 
# 3182
template< class _Tp> 
# 3183
[[__deprecated__]] constexpr bool 
# 3184
is_literal_type_v = (is_literal_type< _Tp> ::value); 
#pragma GCC diagnostic pop
template< class _Tp> constexpr bool 
# 3187
is_empty_v = (is_empty< _Tp> ::value); 
# 3188
template< class _Tp> constexpr bool 
# 3189
is_polymorphic_v = (is_polymorphic< _Tp> ::value); 
# 3190
template< class _Tp> constexpr bool 
# 3191
is_abstract_v = (is_abstract< _Tp> ::value); 
# 3192
template< class _Tp> constexpr bool 
# 3193
is_final_v = (is_final< _Tp> ::value); 
# 3194
template< class _Tp> constexpr bool 
# 3195
is_signed_v = (is_signed< _Tp> ::value); 
# 3196
template< class _Tp> constexpr bool 
# 3197
is_unsigned_v = (is_unsigned< _Tp> ::value); 
# 3198
template< class _Tp, class ..._Args> constexpr bool 
# 3199
is_constructible_v = (is_constructible< _Tp, _Args...> ::value); 
# 3201
template< class _Tp> constexpr bool 
# 3202
is_default_constructible_v = (is_default_constructible< _Tp> ::value); 
# 3204
template< class _Tp> constexpr bool 
# 3205
is_copy_constructible_v = (is_copy_constructible< _Tp> ::value); 
# 3207
template< class _Tp> constexpr bool 
# 3208
is_move_constructible_v = (is_move_constructible< _Tp> ::value); 
# 3210
template< class _Tp, class _Up> constexpr bool 
# 3211
is_assignable_v = (is_assignable< _Tp, _Up> ::value); 
# 3212
template< class _Tp> constexpr bool 
# 3213
is_copy_assignable_v = (is_copy_assignable< _Tp> ::value); 
# 3214
template< class _Tp> constexpr bool 
# 3215
is_move_assignable_v = (is_move_assignable< _Tp> ::value); 
# 3216
template< class _Tp> constexpr bool 
# 3217
is_destructible_v = (is_destructible< _Tp> ::value); 
# 3218
template< class _Tp, class ..._Args> constexpr bool 
# 3219
is_trivially_constructible_v = (is_trivially_constructible< _Tp, _Args...> ::value); 
# 3221
template< class _Tp> constexpr bool 
# 3222
is_trivially_default_constructible_v = (is_trivially_default_constructible< _Tp> ::value); 
# 3224
template< class _Tp> constexpr bool 
# 3225
is_trivially_copy_constructible_v = (is_trivially_copy_constructible< _Tp> ::value); 
# 3227
template< class _Tp> constexpr bool 
# 3228
is_trivially_move_constructible_v = (is_trivially_move_constructible< _Tp> ::value); 
# 3230
template< class _Tp, class _Up> constexpr bool 
# 3231
is_trivially_assignable_v = (is_trivially_assignable< _Tp, _Up> ::value); 
# 3233
template< class _Tp> constexpr bool 
# 3234
is_trivially_copy_assignable_v = (is_trivially_copy_assignable< _Tp> ::value); 
# 3236
template< class _Tp> constexpr bool 
# 3237
is_trivially_move_assignable_v = (is_trivially_move_assignable< _Tp> ::value); 
# 3239
template< class _Tp> constexpr bool 
# 3240
is_trivially_destructible_v = (is_trivially_destructible< _Tp> ::value); 
# 3242
template< class _Tp, class ..._Args> constexpr bool 
# 3243
is_nothrow_constructible_v = (is_nothrow_constructible< _Tp, _Args...> ::value); 
# 3245
template< class _Tp> constexpr bool 
# 3246
is_nothrow_default_constructible_v = (is_nothrow_default_constructible< _Tp> ::value); 
# 3248
template< class _Tp> constexpr bool 
# 3249
is_nothrow_copy_constructible_v = (is_nothrow_copy_constructible< _Tp> ::value); 
# 3251
template< class _Tp> constexpr bool 
# 3252
is_nothrow_move_constructible_v = (is_nothrow_move_constructible< _Tp> ::value); 
# 3254
template< class _Tp, class _Up> constexpr bool 
# 3255
is_nothrow_assignable_v = (is_nothrow_assignable< _Tp, _Up> ::value); 
# 3257
template< class _Tp> constexpr bool 
# 3258
is_nothrow_copy_assignable_v = (is_nothrow_copy_assignable< _Tp> ::value); 
# 3260
template< class _Tp> constexpr bool 
# 3261
is_nothrow_move_assignable_v = (is_nothrow_move_assignable< _Tp> ::value); 
# 3263
template< class _Tp> constexpr bool 
# 3264
is_nothrow_destructible_v = (is_nothrow_destructible< _Tp> ::value); 
# 3266
template< class _Tp> constexpr bool 
# 3267
has_virtual_destructor_v = (has_virtual_destructor< _Tp> ::value); 
# 3269
template< class _Tp> constexpr size_t 
# 3270
alignment_of_v = (alignment_of< _Tp> ::value); 
# 3271
template< class _Tp> constexpr size_t 
# 3272
rank_v = (rank< _Tp> ::value); 
# 3273
template< class _Tp, unsigned _Idx = 0U> constexpr size_t 
# 3274
extent_v = (extent< _Tp, _Idx> ::value); 
# 3276
template< class _Tp, class _Up> constexpr bool 
# 3277
is_same_v = __is_same(_Tp, _Up); 
# 3282
template< class _Base, class _Derived> constexpr bool 
# 3283
is_base_of_v = (is_base_of< _Base, _Derived> ::value); 
# 3284
template< class _From, class _To> constexpr bool 
# 3285
is_convertible_v = (is_convertible< _From, _To> ::value); 
# 3286
template< class _Fn, class ..._Args> constexpr bool 
# 3287
is_invocable_v = (is_invocable< _Fn, _Args...> ::value); 
# 3288
template< class _Fn, class ..._Args> constexpr bool 
# 3289
is_nothrow_invocable_v = (is_nothrow_invocable< _Fn, _Args...> ::value); 
# 3291
template< class _Ret, class _Fn, class ..._Args> constexpr bool 
# 3292
is_invocable_r_v = (is_invocable_r< _Ret, _Fn, _Args...> ::value); 
# 3294
template< class _Ret, class _Fn, class ..._Args> constexpr bool 
# 3295
is_nothrow_invocable_r_v = (is_nothrow_invocable_r< _Ret, _Fn, _Args...> ::value); 
# 3303
template< class _Tp> 
# 3304
struct has_unique_object_representations : public bool_constant< __has_unique_object_representations(remove_cv_t< remove_all_extents_t< _Tp> > )>  { 
# 3309
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 3311
}; 
# 3314
template< class _Tp> constexpr bool 
# 3315
has_unique_object_representations_v = (has_unique_object_representations< _Tp> ::value); 
# 3323
template< class _Tp> 
# 3324
struct is_aggregate : public bool_constant< __is_aggregate(remove_cv_t< _Tp> )>  { 
# 3326
}; 
# 3329
template< class _Tp> constexpr bool 
# 3330
is_aggregate_v = (is_aggregate< _Tp> ::value); 
# 3705 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/type_traits" 3
}
# 38 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/move.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 47
template< class _Tp> constexpr _Tp *
# 49
__addressof(_Tp &__r) noexcept 
# 50
{ return __builtin_addressof(__r); } 
# 55
}
# 59
namespace std __attribute((__visibility__("default"))) { 
# 74 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/move.h" 3
template< class _Tp> 
# 75
[[__nodiscard__]] constexpr _Tp &&
# 77
forward(typename remove_reference< _Tp> ::type &__t) noexcept 
# 78
{ return static_cast< _Tp &&>(__t); } 
# 86
template< class _Tp> 
# 87
[[__nodiscard__]] constexpr _Tp &&
# 89
forward(typename remove_reference< _Tp> ::type &&__t) noexcept 
# 90
{ 
# 91
static_assert((!std::template is_lvalue_reference< _Tp> ::value), "std::forward must not be used to convert an rvalue to an lvalue");
# 93
return static_cast< _Tp &&>(__t); 
# 94
} 
# 101
template< class _Tp> 
# 102
[[__nodiscard__]] constexpr typename remove_reference< _Tp> ::type &&
# 104
move(_Tp &&__t) noexcept 
# 105
{ return static_cast< typename remove_reference< _Tp> ::type &&>(__t); } 
# 108
template< class _Tp> 
# 109
struct __move_if_noexcept_cond : public __and_< __not_< is_nothrow_move_constructible< _Tp> > , is_copy_constructible< _Tp> > ::type { 
# 111
}; 
# 121 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/move.h" 3
template< class _Tp> 
# 122
[[__nodiscard__]] constexpr __conditional_t< __move_if_noexcept_cond< _Tp> ::value, const _Tp &, _Tp &&>  
# 125
move_if_noexcept(_Tp &__x) noexcept 
# 126
{ return std::move(__x); } 
# 142 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/move.h" 3
template< class _Tp> 
# 143
[[__nodiscard__]] constexpr _Tp *
# 145
addressof(_Tp &__r) noexcept 
# 146
{ return std::__addressof(__r); } 
# 150
template < typename _Tp >
    const _Tp * addressof ( const _Tp && ) = delete;
# 154
template< class _Tp, class _Up = _Tp> inline _Tp 
# 157
__exchange(_Tp &__obj, _Up &&__new_val) 
# 158
{ 
# 159
_Tp __old_val = std::move(__obj); 
# 160
__obj = std::forward< _Up> (__new_val); 
# 161
return __old_val; 
# 162
} 
# 186 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/move.h" 3
template< class _Tp> inline typename enable_if< __and_< __not_< __is_tuple_like< _Tp> > , is_move_constructible< _Tp> , is_move_assignable< _Tp> > ::value> ::type 
# 196
swap(_Tp &__a, _Tp &__b) noexcept(__and_< is_nothrow_move_constructible< _Tp> , is_nothrow_move_assignable< _Tp> > ::value) 
# 199
{ 
# 204
_Tp __tmp = std::move(__a); 
# 205
__a = std::move(__b); 
# 206
__b = std::move(__tmp); 
# 207
} 
# 212
template< class _Tp, size_t _Nm> inline typename enable_if< __is_swappable< _Tp> ::value> ::type 
# 220
swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm]) noexcept(__is_nothrow_swappable< _Tp> ::value) 
# 222
{ 
# 223
for (size_t __n = (0); __n < _Nm; ++__n) { 
# 224
swap(__a[__n], __b[__n]); }  
# 225
} 
# 229
}
# 43 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/utility.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 48
template< class _Tp> struct tuple_size; 
# 55
template< class _Tp, class 
# 56
_Up = typename remove_cv< _Tp> ::type, class 
# 57
 = typename enable_if< is_same< _Tp, _Up> ::value> ::type, size_t 
# 58
 = tuple_size< _Tp> ::value> using __enable_if_has_tuple_size = _Tp; 
# 61
template< class _Tp> 
# 62
struct tuple_size< const __enable_if_has_tuple_size< _Tp> >  : public std::tuple_size< _Tp>  { 
# 63
}; 
# 65
template< class _Tp> 
# 66
struct tuple_size< volatile __enable_if_has_tuple_size< _Tp> >  : public std::tuple_size< _Tp>  { 
# 67
}; 
# 69
template< class _Tp> 
# 70
struct tuple_size< const volatile __enable_if_has_tuple_size< _Tp> >  : public std::tuple_size< _Tp>  { 
# 71
}; 
# 74
template< class _Tp> constexpr size_t 
# 75
tuple_size_v = (tuple_size< _Tp> ::value); 
# 79
template< size_t __i, class _Tp> struct tuple_element; 
# 83
template< size_t __i, class _Tp> using __tuple_element_t = typename tuple_element< __i, _Tp> ::type; 
# 86
template< size_t __i, class _Tp> 
# 87
struct tuple_element< __i, const _Tp>  { 
# 89
typedef typename add_const< __tuple_element_t< __i, _Tp> > ::type type; 
# 90
}; 
# 92
template< size_t __i, class _Tp> 
# 93
struct tuple_element< __i, volatile _Tp>  { 
# 95
typedef typename add_volatile< __tuple_element_t< __i, _Tp> > ::type type; 
# 96
}; 
# 98
template< size_t __i, class _Tp> 
# 99
struct tuple_element< __i, const volatile _Tp>  { 
# 101
typedef typename add_cv< __tuple_element_t< __i, _Tp> > ::type type; 
# 102
}; 
# 108
template< class _Tp, class ..._Types> constexpr size_t 
# 110
__find_uniq_type_in_pack() 
# 111
{ 
# 112
constexpr size_t __sz = sizeof...(_Types); 
# 113
constexpr bool __found[__sz] = {__is_same(_Tp, _Types)...}; 
# 114
size_t __n = __sz; 
# 115
for (size_t __i = (0); __i < __sz; ++__i) 
# 116
{ 
# 117
if (__found[__i]) 
# 118
{ 
# 119
if (__n < __sz) { 
# 120
return __sz; }  
# 121
__n = __i; 
# 122
}  
# 123
}  
# 124
return __n; 
# 125
} 
# 134 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/utility.h" 3
template< size_t __i, class _Tp> using tuple_element_t = typename tuple_element< __i, _Tp> ::type; 
# 140
template< size_t ..._Indexes> struct _Index_tuple { }; 
# 143
template< size_t _Num> 
# 144
struct _Build_index_tuple { 
# 154 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/utility.h" 3
using __type = _Index_tuple< __integer_pack(_Num)...> ; 
# 156
}; 
# 163
template< class _Tp, _Tp ..._Idx> 
# 164
struct integer_sequence { 
# 166
typedef _Tp value_type; 
# 167
static constexpr size_t size() noexcept { return sizeof...(_Idx); } 
# 168
}; 
# 171
template< class _Tp, _Tp _Num> using make_integer_sequence = integer_sequence< _Tp, __integer_pack(_Num)...> ; 
# 180
template< size_t ..._Idx> using index_sequence = integer_sequence< unsigned long, _Idx...> ; 
# 184
template< size_t _Num> using make_index_sequence = make_integer_sequence< unsigned long, _Num> ; 
# 188
template< class ..._Types> using index_sequence_for = make_index_sequence< sizeof...(_Types)> ; 
# 193
struct in_place_t { 
# 194
explicit in_place_t() = default;
# 195
}; 
# 197
constexpr inline in_place_t in_place{}; 
# 199
template< class _Tp> struct in_place_type_t { 
# 201
explicit in_place_type_t() = default;
# 202
}; 
# 204
template< class _Tp> constexpr in_place_type_t< _Tp>  
# 205
in_place_type{}; 
# 207
template< size_t _Idx> struct in_place_index_t { 
# 209
explicit in_place_index_t() = default;
# 210
}; 
# 212
template< size_t _Idx> constexpr in_place_index_t< _Idx>  
# 213
in_place_index{}; 
# 215
template< class > constexpr bool 
# 216
__is_in_place_type_v = false; 
# 218
template< class _Tp> constexpr bool 
# 219
__is_in_place_type_v< in_place_type_t< _Tp> >  = true; 
# 221
template< class _Tp> using __is_in_place_type = bool_constant< __is_in_place_type_v< _Tp> > ; 
# 227
template< size_t _Np, class ..._Types> 
# 228
struct _Nth_type { 
# 229
}; 
# 231
template< class _Tp0, class ..._Rest> 
# 232
struct _Nth_type< 0, _Tp0, _Rest...>  { 
# 233
using type = _Tp0; }; 
# 235
template< class _Tp0, class _Tp1, class ..._Rest> 
# 236
struct _Nth_type< 1, _Tp0, _Tp1, _Rest...>  { 
# 237
using type = _Tp1; }; 
# 239
template< class _Tp0, class _Tp1, class _Tp2, class ..._Rest> 
# 240
struct _Nth_type< 2, _Tp0, _Tp1, _Tp2, _Rest...>  { 
# 241
using type = _Tp2; }; 
# 243
template< size_t _Np, class _Tp0, class _Tp1, class _Tp2, class ...
# 244
_Rest> 
# 248
struct _Nth_type< _Np, _Tp0, _Tp1, _Tp2, _Rest...>  : public std::_Nth_type< _Np - (3), _Rest...>  { 
# 250
}; 
# 253
template< class _Tp0, class _Tp1, class ..._Rest> 
# 254
struct _Nth_type< 0, _Tp0, _Tp1, _Rest...>  { 
# 255
using type = _Tp0; }; 
# 257
template< class _Tp0, class _Tp1, class _Tp2, class ..._Rest> 
# 258
struct _Nth_type< 0, _Tp0, _Tp1, _Tp2, _Rest...>  { 
# 259
using type = _Tp0; }; 
# 261
template< class _Tp0, class _Tp1, class _Tp2, class ..._Rest> 
# 262
struct _Nth_type< 1, _Tp0, _Tp1, _Tp2, _Rest...>  { 
# 263
using type = _Tp1; }; 
# 267
}
# 69 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_pair.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 80 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_pair.h" 3
struct piecewise_construct_t { explicit piecewise_construct_t() = default;}; 
# 83
constexpr inline piecewise_construct_t piecewise_construct = piecewise_construct_t(); 
# 89
template< class ...> class tuple; 
# 92
template< size_t ...> struct _Index_tuple; 
# 101
template< bool , class _T1, class _T2> 
# 102
struct _PCC { 
# 104
template< class _U1, class _U2> static constexpr bool 
# 105
_ConstructiblePair() 
# 106
{ 
# 107
return __and_< is_constructible< _T1, const _U1 &> , is_constructible< _T2, const _U2 &> > ::value; 
# 109
} 
# 111
template< class _U1, class _U2> static constexpr bool 
# 112
_ImplicitlyConvertiblePair() 
# 113
{ 
# 114
return __and_< is_convertible< const _U1 &, _T1> , is_convertible< const _U2 &, _T2> > ::value; 
# 116
} 
# 118
template< class _U1, class _U2> static constexpr bool 
# 119
_MoveConstructiblePair() 
# 120
{ 
# 121
return __and_< is_constructible< _T1, _U1 &&> , is_constructible< _T2, _U2 &&> > ::value; 
# 123
} 
# 125
template< class _U1, class _U2> static constexpr bool 
# 126
_ImplicitlyMoveConvertiblePair() 
# 127
{ 
# 128
return __and_< is_convertible< _U1 &&, _T1> , is_convertible< _U2 &&, _T2> > ::value; 
# 130
} 
# 131
}; 
# 133
template< class _T1, class _T2> 
# 134
struct _PCC< false, _T1, _T2>  { 
# 136
template< class _U1, class _U2> static constexpr bool 
# 137
_ConstructiblePair() 
# 138
{ 
# 139
return false; 
# 140
} 
# 142
template< class _U1, class _U2> static constexpr bool 
# 143
_ImplicitlyConvertiblePair() 
# 144
{ 
# 145
return false; 
# 146
} 
# 148
template< class _U1, class _U2> static constexpr bool 
# 149
_MoveConstructiblePair() 
# 150
{ 
# 151
return false; 
# 152
} 
# 154
template< class _U1, class _U2> static constexpr bool 
# 155
_ImplicitlyMoveConvertiblePair() 
# 156
{ 
# 157
return false; 
# 158
} 
# 159
}; 
# 163
template< class _U1, class _U2> class __pair_base { 
# 166
template< class _T1, class _T2> friend struct pair; 
# 167
__pair_base() = default;
# 168
~__pair_base() = default;
# 169
__pair_base(const __pair_base &) = default;
# 170
__pair_base &operator=(const __pair_base &) = delete;
# 172
}; 
# 184 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_pair.h" 3
template< class _T1, class _T2> 
# 185
struct pair : public __pair_base< _T1, _T2>  { 
# 188
typedef _T1 first_type; 
# 189
typedef _T2 second_type; 
# 191
_T1 first; 
# 192
_T2 second; 
# 195
constexpr pair(const pair &) = default;
# 196
constexpr pair(pair &&) = default;
# 198
template< class ..._Args1, class ..._Args2> pair(std::piecewise_construct_t, tuple< _Args1...> , tuple< _Args2...> ); 
# 204
void swap(pair &__p) noexcept(__and_< __is_nothrow_swappable< _T1> , __is_nothrow_swappable< _T2> > ::value) 
# 207
{ 
# 208
using std::swap;
# 209
swap(first, __p.first); 
# 210
swap(second, __p.second); 
# 211
} 
# 214
private: template< class ..._Args1, std::size_t ..._Indexes1, class ...
# 215
_Args2, std::size_t ..._Indexes2> 
# 214
pair(tuple< _Args1...>  &, tuple< _Args2...>  &, _Index_tuple< _Indexes1...> , _Index_tuple< _Indexes2...> ); 
# 384 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_pair.h" 3
public: 
# 378
template< class _U1 = _T1, class 
# 379
_U2 = _T2, typename enable_if< __and_< __is_implicitly_default_constructible< _U1> , __is_implicitly_default_constructible< _U2> > ::value, bool> ::type 
# 383
 = true> constexpr 
# 384
pair() : first(), second() 
# 385
{ } 
# 387
template< class _U1 = _T1, class 
# 388
_U2 = _T2, typename enable_if< __and_< is_default_constructible< _U1> , is_default_constructible< _U2> , __not_< __and_< __is_implicitly_default_constructible< _U1> , __is_implicitly_default_constructible< _U2> > > > ::value, bool> ::type 
# 395
 = false> constexpr explicit 
# 396
pair() : first(), second() 
# 397
{ } 
# 401
using _PCCP = _PCC< true, _T1, _T2> ; 
# 405
template< class _U1 = _T1, class _U2 = _T2, typename enable_if< _PCC< true, _T1, _T2> ::template _ConstructiblePair< _U1, _U2> () && _PCC< true, _T1, _T2> ::template _ImplicitlyConvertiblePair< _U1, _U2> (), bool> ::type 
# 410
 = true> constexpr 
# 411
pair(const _T1 &__a, const _T2 &__b) : first(__a), second(__b) 
# 412
{ } 
# 415
template< class _U1 = _T1, class _U2 = _T2, typename enable_if< _PCC< true, _T1, _T2> ::template _ConstructiblePair< _U1, _U2> () && (!_PCC< true, _T1, _T2> ::template _ImplicitlyConvertiblePair< _U1, _U2> ()), bool> ::type 
# 420
 = false> constexpr explicit 
# 421
pair(const _T1 &__a, const _T2 &__b) : first(__a), second(__b) 
# 422
{ } 
# 426
template< class _U1, class _U2> using _PCCFP = _PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ; 
# 432
template< class _U1, class _U2, typename enable_if< _PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ::template _ConstructiblePair< _U1, _U2> () && _PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ::template _ImplicitlyConvertiblePair< _U1, _U2> (), bool> ::type 
# 437
 = true> constexpr 
# 438
pair(const std::pair< _U1, _U2>  &__p) : first((__p.first)), second((__p.second)) 
# 439
{ } 
# 441
template< class _U1, class _U2, typename enable_if< _PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ::template _ConstructiblePair< _U1, _U2> () && (!_PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ::template _ImplicitlyConvertiblePair< _U1, _U2> ()), bool> ::type 
# 446
 = false> constexpr explicit 
# 447
pair(const std::pair< _U1, _U2>  &__p) : first((__p.first)), second((__p.second)) 
# 448
{ } 
# 464 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_pair.h" 3
private: struct __zero_as_null_pointer_constant { 
# 466
__zero_as_null_pointer_constant(int (__zero_as_null_pointer_constant::*)) 
# 467
{ } 
# 468
template < typename _Tp,
   typename = __enable_if_t < is_null_pointer < _Tp > :: value > >
 __zero_as_null_pointer_constant ( _Tp ) = delete;
# 471
}; 
# 487
public: 
# 478
template< class _U1, std::__enable_if_t< __and_< __not_< is_reference< _U1> > , is_pointer< _T2> , is_constructible< _T1, _U1> , __not_< is_constructible< _T1, const _U1 &> > , is_convertible< _U1, _T1> > ::value, bool>  
# 484
 = true> 
# 485
__attribute((__deprecated__("use \'nullptr\' instead of \'0\' to initialize std::pair of move-only type and pointer"))) constexpr 
# 487
pair(_U1 &&__x, __zero_as_null_pointer_constant, ...) : first(std::forward< _U1> (__x)), second(nullptr) 
# 488
{ } 
# 490
template< class _U1, std::__enable_if_t< __and_< __not_< is_reference< _U1> > , is_pointer< _T2> , is_constructible< _T1, _U1> , __not_< is_constructible< _T1, const _U1 &> > , __not_< is_convertible< _U1, _T1> > > ::value, bool>  
# 496
 = false> 
# 497
__attribute((__deprecated__("use \'nullptr\' instead of \'0\' to initialize std::pair of move-only type and pointer"))) constexpr explicit 
# 499
pair(_U1 &&__x, __zero_as_null_pointer_constant, ...) : first(std::forward< _U1> (__x)), second(nullptr) 
# 500
{ } 
# 502
template< class _U2, std::__enable_if_t< __and_< is_pointer< _T1> , __not_< is_reference< _U2> > , is_constructible< _T2, _U2> , __not_< is_constructible< _T2, const _U2 &> > , is_convertible< _U2, _T2> > ::value, bool>  
# 508
 = true> 
# 509
__attribute((__deprecated__("use \'nullptr\' instead of \'0\' to initialize std::pair of move-only type and pointer"))) constexpr 
# 511
pair(__zero_as_null_pointer_constant, _U2 &&__y, ...) : first(nullptr), second(std::forward< _U2> (__y)) 
# 512
{ } 
# 514
template< class _U2, std::__enable_if_t< __and_< is_pointer< _T1> , __not_< is_reference< _U2> > , is_constructible< _T2, _U2> , __not_< is_constructible< _T2, const _U2 &> > , __not_< is_convertible< _U2, _T2> > > ::value, bool>  
# 520
 = false> 
# 521
__attribute((__deprecated__("use \'nullptr\' instead of \'0\' to initialize std::pair of move-only type and pointer"))) constexpr explicit 
# 523
pair(__zero_as_null_pointer_constant, _U2 &&__y, ...) : first(nullptr), second(std::forward< _U2> (__y)) 
# 524
{ } 
# 528
template< class _U1, class _U2, typename enable_if< _PCC< true, _T1, _T2> ::template _MoveConstructiblePair< _U1, _U2> () && _PCC< true, _T1, _T2> ::template _ImplicitlyMoveConvertiblePair< _U1, _U2> (), bool> ::type 
# 533
 = true> constexpr 
# 534
pair(_U1 &&__x, _U2 &&__y) : first(std::forward< _U1> (__x)), second(std::forward< _U2> (__y)) 
# 535
{ } 
# 537
template< class _U1, class _U2, typename enable_if< _PCC< true, _T1, _T2> ::template _MoveConstructiblePair< _U1, _U2> () && (!_PCC< true, _T1, _T2> ::template _ImplicitlyMoveConvertiblePair< _U1, _U2> ()), bool> ::type 
# 542
 = false> constexpr explicit 
# 543
pair(_U1 &&__x, _U2 &&__y) : first(std::forward< _U1> (__x)), second(std::forward< _U2> (__y)) 
# 544
{ } 
# 547
template< class _U1, class _U2, typename enable_if< _PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ::template _MoveConstructiblePair< _U1, _U2> () && _PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ::template _ImplicitlyMoveConvertiblePair< _U1, _U2> (), bool> ::type 
# 552
 = true> constexpr 
# 553
pair(std::pair< _U1, _U2>  &&__p) : first(std::forward< _U1> ((__p.first))), second(std::forward< _U2> ((__p.second))) 
# 555
{ } 
# 557
template< class _U1, class _U2, typename enable_if< _PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ::template _MoveConstructiblePair< _U1, _U2> () && (!_PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ::template _ImplicitlyMoveConvertiblePair< _U1, _U2> ()), bool> ::type 
# 562
 = false> constexpr explicit 
# 563
pair(std::pair< _U1, _U2>  &&__p) : first(std::forward< _U1> ((__p.first))), second(std::forward< _U2> ((__p.second))) 
# 565
{ } 
# 568
pair &operator=(std::__conditional_t< __and_< is_copy_assignable< _T1> , is_copy_assignable< _T2> > ::value, const pair &, const std::__nonesuch &>  
# 570
__p) 
# 571
{ 
# 572
(first) = (__p.first); 
# 573
(second) = (__p.second); 
# 574
return *this; 
# 575
} 
# 578
pair &operator=(std::__conditional_t< __and_< is_move_assignable< _T1> , is_move_assignable< _T2> > ::value, pair &&, std::__nonesuch &&>  
# 580
__p) noexcept(__and_< is_nothrow_move_assignable< _T1> , is_nothrow_move_assignable< _T2> > ::value) 
# 583
{ 
# 584
(first) = std::forward< first_type> ((__p.first)); 
# 585
(second) = std::forward< second_type> ((__p.second)); 
# 586
return *this; 
# 587
} 
# 589
template< class _U1, class _U2> typename enable_if< __and_< is_assignable< _T1 &, const _U1 &> , is_assignable< _T2 &, const _U2 &> > ::value, pair &> ::type 
# 593
operator=(const std::pair< _U1, _U2>  &__p) 
# 594
{ 
# 595
(first) = (__p.first); 
# 596
(second) = (__p.second); 
# 597
return *this; 
# 598
} 
# 600
template< class _U1, class _U2> typename enable_if< __and_< is_assignable< _T1 &, _U1 &&> , is_assignable< _T2 &, _U2 &&> > ::value, pair &> ::type 
# 604
operator=(std::pair< _U1, _U2>  &&__p) 
# 605
{ 
# 606
(first) = std::forward< _U1> ((__p.first)); 
# 607
(second) = std::forward< _U2> ((__p.second)); 
# 608
return *this; 
# 609
} 
# 629 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_pair.h" 3
}; 
# 634
template< class _T1, class _T2> pair(_T1, _T2)->pair< _T1, _T2> ; 
# 638
template< class _T1, class _T2> constexpr bool 
# 640
operator==(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 641
{ return ((__x.first) == (__y.first)) && ((__x.second) == (__y.second)); } 
# 661 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_pair.h" 3
template< class _T1, class _T2> constexpr bool 
# 663
operator<(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 664
{ return ((__x.first) < (__y.first)) || ((!((__y.first) < (__x.first))) && ((__x.second) < (__y.second))); 
# 665
} 
# 668
template< class _T1, class _T2> constexpr bool 
# 670
operator!=(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 671
{ return !(__x == __y); } 
# 674
template< class _T1, class _T2> constexpr bool 
# 676
operator>(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 677
{ return __y < __x; } 
# 680
template< class _T1, class _T2> constexpr bool 
# 682
operator<=(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 683
{ return !(__y < __x); } 
# 686
template< class _T1, class _T2> constexpr bool 
# 688
operator>=(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 689
{ return !(__x < __y); } 
# 698 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_pair.h" 3
template< class _T1, class _T2> inline typename enable_if< __and_< __is_swappable< _T1> , __is_swappable< _T2> > ::value> ::type 
# 707
swap(pair< _T1, _T2>  &__x, pair< _T1, _T2>  &__y) noexcept(noexcept(__x.swap(__y))) 
# 709
{ __x.swap(__y); } 
# 712
template < typename _T1, typename _T2 >
    typename enable_if < ! __and_ < __is_swappable < _T1 >,
          __is_swappable < _T2 > > :: value > :: type
    swap ( pair < _T1, _T2 > &, pair < _T1, _T2 > & ) = delete;
# 738 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_pair.h" 3
template< class _T1, class _T2> constexpr pair< typename __decay_and_strip< _T1> ::__type, typename __decay_and_strip< _T2> ::__type>  
# 741
make_pair(_T1 &&__x, _T2 &&__y) 
# 742
{ 
# 743
typedef typename __decay_and_strip< _T1> ::__type __ds_type1; 
# 744
typedef typename __decay_and_strip< _T2> ::__type __ds_type2; 
# 745
typedef pair< typename __decay_and_strip< _T1> ::__type, typename __decay_and_strip< _T2> ::__type>  __pair_type; 
# 746
return __pair_type(std::forward< _T1> (__x), std::forward< _T2> (__y)); 
# 747
} 
# 760 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_pair.h" 3
template< class _T1, class _T2> 
# 761
struct __is_tuple_like_impl< pair< _T1, _T2> >  : public true_type { 
# 762
}; 
# 765
template< class _Tp1, class _Tp2> 
# 766
struct tuple_size< pair< _Tp1, _Tp2> >  : public integral_constant< unsigned long, 2UL>  { 
# 767
}; 
# 770
template< class _Tp1, class _Tp2> 
# 771
struct tuple_element< 0, pair< _Tp1, _Tp2> >  { 
# 772
typedef _Tp1 type; }; 
# 775
template< class _Tp1, class _Tp2> 
# 776
struct tuple_element< 1, pair< _Tp1, _Tp2> >  { 
# 777
typedef _Tp2 type; }; 
# 780
template< class _Tp1, class _Tp2> constexpr size_t 
# 781
tuple_size_v< pair< _Tp1, _Tp2> >  = (2); 
# 783
template< class _Tp1, class _Tp2> constexpr size_t 
# 784
tuple_size_v< const pair< _Tp1, _Tp2> >  = (2); 
# 786
template< class _Tp> constexpr bool 
# 787
__is_pair = false; 
# 789
template< class _Tp, class _Up> constexpr bool 
# 790
__is_pair< pair< _Tp, _Up> >  = true; 
# 792
template< class _Tp, class _Up> constexpr bool 
# 793
__is_pair< const pair< _Tp, _Up> >  = true; 
# 797
template< size_t _Int> struct __pair_get; 
# 801
template<> struct __pair_get< 0UL>  { 
# 803
template< class _Tp1, class _Tp2> static constexpr _Tp1 &
# 805
__get(pair< _Tp1, _Tp2>  &__pair) noexcept 
# 806
{ return __pair.first; } 
# 808
template< class _Tp1, class _Tp2> static constexpr _Tp1 &&
# 810
__move_get(pair< _Tp1, _Tp2>  &&__pair) noexcept 
# 811
{ return std::forward< _Tp1> ((__pair.first)); } 
# 813
template< class _Tp1, class _Tp2> static constexpr const _Tp1 &
# 815
__const_get(const pair< _Tp1, _Tp2>  &__pair) noexcept 
# 816
{ return __pair.first; } 
# 818
template< class _Tp1, class _Tp2> static constexpr const _Tp1 &&
# 820
__const_move_get(const pair< _Tp1, _Tp2>  &&__pair) noexcept 
# 821
{ return std::forward< const _Tp1> ((__pair.first)); } 
# 822
}; 
# 825
template<> struct __pair_get< 1UL>  { 
# 827
template< class _Tp1, class _Tp2> static constexpr _Tp2 &
# 829
__get(pair< _Tp1, _Tp2>  &__pair) noexcept 
# 830
{ return __pair.second; } 
# 832
template< class _Tp1, class _Tp2> static constexpr _Tp2 &&
# 834
__move_get(pair< _Tp1, _Tp2>  &&__pair) noexcept 
# 835
{ return std::forward< _Tp2> ((__pair.second)); } 
# 837
template< class _Tp1, class _Tp2> static constexpr const _Tp2 &
# 839
__const_get(const pair< _Tp1, _Tp2>  &__pair) noexcept 
# 840
{ return __pair.second; } 
# 842
template< class _Tp1, class _Tp2> static constexpr const _Tp2 &&
# 844
__const_move_get(const pair< _Tp1, _Tp2>  &&__pair) noexcept 
# 845
{ return std::forward< const _Tp2> ((__pair.second)); } 
# 846
}; 
# 853
template< size_t _Int, class _Tp1, class _Tp2> constexpr typename tuple_element< _Int, pair< _Tp1, _Tp2> > ::type &
# 855
get(pair< _Tp1, _Tp2>  &__in) noexcept 
# 856
{ return __pair_get< _Int> ::__get(__in); } 
# 858
template< size_t _Int, class _Tp1, class _Tp2> constexpr typename tuple_element< _Int, pair< _Tp1, _Tp2> > ::type &&
# 860
get(pair< _Tp1, _Tp2>  &&__in) noexcept 
# 861
{ return __pair_get< _Int> ::__move_get(std::move(__in)); } 
# 863
template< size_t _Int, class _Tp1, class _Tp2> constexpr const typename tuple_element< _Int, pair< _Tp1, _Tp2> > ::type &
# 865
get(const pair< _Tp1, _Tp2>  &__in) noexcept 
# 866
{ return __pair_get< _Int> ::__const_get(__in); } 
# 868
template< size_t _Int, class _Tp1, class _Tp2> constexpr const typename tuple_element< _Int, pair< _Tp1, _Tp2> > ::type &&
# 870
get(const pair< _Tp1, _Tp2>  &&__in) noexcept 
# 871
{ return __pair_get< _Int> ::__const_move_get(std::move(__in)); } 
# 877
template< class _Tp, class _Up> constexpr _Tp &
# 879
get(pair< _Tp, _Up>  &__p) noexcept 
# 880
{ return __p.first; } 
# 882
template< class _Tp, class _Up> constexpr const _Tp &
# 884
get(const pair< _Tp, _Up>  &__p) noexcept 
# 885
{ return __p.first; } 
# 887
template< class _Tp, class _Up> constexpr _Tp &&
# 889
get(pair< _Tp, _Up>  &&__p) noexcept 
# 890
{ return std::move((__p.first)); } 
# 892
template< class _Tp, class _Up> constexpr const _Tp &&
# 894
get(const pair< _Tp, _Up>  &&__p) noexcept 
# 895
{ return std::move((__p.first)); } 
# 897
template< class _Tp, class _Up> constexpr _Tp &
# 899
get(pair< _Up, _Tp>  &__p) noexcept 
# 900
{ return __p.second; } 
# 902
template< class _Tp, class _Up> constexpr const _Tp &
# 904
get(const pair< _Up, _Tp>  &__p) noexcept 
# 905
{ return __p.second; } 
# 907
template< class _Tp, class _Up> constexpr _Tp &&
# 909
get(pair< _Up, _Tp>  &&__p) noexcept 
# 910
{ return std::move((__p.second)); } 
# 912
template< class _Tp, class _Up> constexpr const _Tp &&
# 914
get(const pair< _Up, _Tp>  &&__p) noexcept 
# 915
{ return std::move((__p.second)); } 
# 922
}
# 74 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator_base_types.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 93 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator_base_types.h" 3
struct input_iterator_tag { }; 
# 96
struct output_iterator_tag { }; 
# 99
struct forward_iterator_tag : public input_iterator_tag { }; 
# 103
struct bidirectional_iterator_tag : public forward_iterator_tag { }; 
# 107
struct random_access_iterator_tag : public bidirectional_iterator_tag { }; 
# 125 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator_base_types.h" 3
template< class _Category, class _Tp, class _Distance = ptrdiff_t, class 
# 126
_Pointer = _Tp *, class _Reference = _Tp &> 
# 127
struct [[__deprecated__]] iterator { 
# 130
typedef _Category iterator_category; 
# 132
typedef _Tp value_type; 
# 134
typedef _Distance difference_type; 
# 136
typedef _Pointer pointer; 
# 138
typedef _Reference reference; 
# 139
}; 
# 149 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator_base_types.h" 3
template< class _Iterator> struct iterator_traits; 
# 155
template< class _Iterator, class  = __void_t< > > 
# 156
struct __iterator_traits { }; 
# 160
template< class _Iterator> 
# 161
struct __iterator_traits< _Iterator, __void_t< typename _Iterator::iterator_category, typename _Iterator::value_type, typename _Iterator::difference_type, typename _Iterator::pointer, typename _Iterator::reference> >  { 
# 168
typedef typename _Iterator::iterator_category iterator_category; 
# 169
typedef typename _Iterator::value_type value_type; 
# 170
typedef typename _Iterator::difference_type difference_type; 
# 171
typedef typename _Iterator::pointer pointer; 
# 172
typedef typename _Iterator::reference reference; 
# 173
}; 
# 176
template< class _Iterator> 
# 177
struct iterator_traits : public __iterator_traits< _Iterator>  { 
# 178
}; 
# 209 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator_base_types.h" 3
template< class _Tp> 
# 210
struct iterator_traits< _Tp *>  { 
# 212
typedef random_access_iterator_tag iterator_category; 
# 213
typedef _Tp value_type; 
# 214
typedef ptrdiff_t difference_type; 
# 215
typedef _Tp *pointer; 
# 216
typedef _Tp &reference; 
# 217
}; 
# 220
template< class _Tp> 
# 221
struct iterator_traits< const _Tp *>  { 
# 223
typedef random_access_iterator_tag iterator_category; 
# 224
typedef _Tp value_type; 
# 225
typedef ptrdiff_t difference_type; 
# 226
typedef const _Tp *pointer; 
# 227
typedef const _Tp &reference; 
# 228
}; 
# 235
template< class _Iter> constexpr typename iterator_traits< _Iter> ::iterator_category 
# 238
__iterator_category(const _Iter &) 
# 239
{ return typename iterator_traits< _Iter> ::iterator_category(); } 
# 244
template< class _Iter> using __iterator_category_t = typename iterator_traits< _Iter> ::iterator_category; 
# 248
template< class _InIter> using _RequireInputIter = __enable_if_t< is_convertible< __iterator_category_t< _InIter> , input_iterator_tag> ::value> ; 
# 253
template< class _It, class 
# 254
_Cat = __iterator_category_t< _It> > 
# 255
struct __is_random_access_iter : public is_base_of< random_access_iterator_tag, _Cat>  { 
# 258
typedef is_base_of< std::random_access_iterator_tag, _Cat>  _Base; 
# 259
enum { __value = is_base_of< std::random_access_iterator_tag, _Cat> ::value}; 
# 260
}; 
# 269
}
# 68 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator_base_funcs.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 74
template< class > struct _List_iterator; 
# 75
template< class > struct _List_const_iterator; 
# 78
template< class _InputIterator> constexpr typename iterator_traits< _InputIterator> ::difference_type 
# 81
__distance(_InputIterator __first, _InputIterator __last, input_iterator_tag) 
# 83
{ 
# 87
typename iterator_traits< _InputIterator> ::difference_type __n = (0); 
# 88
while (__first != __last) 
# 89
{ 
# 90
++__first; 
# 91
++__n; 
# 92
}  
# 93
return __n; 
# 94
} 
# 96
template< class _RandomAccessIterator> constexpr typename iterator_traits< _RandomAccessIterator> ::difference_type 
# 99
__distance(_RandomAccessIterator __first, _RandomAccessIterator __last, random_access_iterator_tag) 
# 101
{ 
# 105
return __last - __first; 
# 106
} 
# 110
template< class _Tp> ptrdiff_t __distance(_List_iterator< _Tp> , _List_iterator< _Tp> , input_iterator_tag); 
# 116
template< class _Tp> ptrdiff_t __distance(_List_const_iterator< _Tp> , _List_const_iterator< _Tp> , input_iterator_tag); 
# 125
template < typename _OutputIterator >
    void
    __distance ( _OutputIterator, _OutputIterator, output_iterator_tag ) = delete;
# 143 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator_base_funcs.h" 3
template< class _InputIterator> 
# 144
[[__nodiscard__]] constexpr typename iterator_traits< _InputIterator> ::difference_type 
# 147
distance(_InputIterator __first, _InputIterator __last) 
# 148
{ 
# 150
return std::__distance(__first, __last, std::__iterator_category(__first)); 
# 152
} 
# 154
template< class _InputIterator, class _Distance> constexpr void 
# 156
__advance(_InputIterator &__i, _Distance __n, input_iterator_tag) 
# 157
{ 
# 160
do { if (std::__is_constant_evaluated() && (!((bool)(__n >= 0)))) { __builtin_unreachable(); }  } while (false); 
# 161
while (__n--) { 
# 162
++__i; }  
# 163
} 
# 165
template< class _BidirectionalIterator, class _Distance> constexpr void 
# 167
__advance(_BidirectionalIterator &__i, _Distance __n, bidirectional_iterator_tag) 
# 169
{ 
# 173
if (__n > 0) { 
# 174
while (__n--) { 
# 175
++__i; }  } else { 
# 177
while (__n++) { 
# 178
--__i; }  }  
# 179
} 
# 181
template< class _RandomAccessIterator, class _Distance> constexpr void 
# 183
__advance(_RandomAccessIterator &__i, _Distance __n, random_access_iterator_tag) 
# 185
{ 
# 189
if (__builtin_constant_p(__n) && (__n == 1)) { 
# 190
++__i; } else { 
# 191
if (__builtin_constant_p(__n) && (__n == (-1))) { 
# 192
--__i; } else { 
# 194
__i += __n; }  }  
# 195
} 
# 199
template < typename _OutputIterator, typename _Distance >
    void
    __advance ( _OutputIterator &, _Distance, output_iterator_tag ) = delete;
# 216 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator_base_funcs.h" 3
template< class _InputIterator, class _Distance> constexpr void 
# 218
advance(_InputIterator &__i, _Distance __n) 
# 219
{ 
# 221
typename iterator_traits< _InputIterator> ::difference_type __d = __n; 
# 222
std::__advance(__i, __d, std::__iterator_category(__i)); 
# 223
} 
# 227
template< class _InputIterator> 
# 228
[[__nodiscard__]] constexpr _InputIterator 
# 230
next(_InputIterator __x, typename iterator_traits< _InputIterator> ::difference_type 
# 231
__n = 1) 
# 232
{ 
# 235
std::advance(__x, __n); 
# 236
return __x; 
# 237
} 
# 239
template< class _BidirectionalIterator> 
# 240
[[__nodiscard__]] constexpr _BidirectionalIterator 
# 242
prev(_BidirectionalIterator __x, typename iterator_traits< _BidirectionalIterator> ::difference_type 
# 243
__n = 1) 
# 244
{ 
# 248
std::advance(__x, -__n); 
# 249
return __x; 
# 250
} 
# 255
}
# 46 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/ptr_traits.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 50
class __undefined; 
# 54
template< class _Tp> 
# 55
struct __get_first_arg { 
# 56
using type = __undefined; }; 
# 58
template< template< class , class ...>  class _SomeTemplate, class _Tp, class ...
# 59
_Types> 
# 60
struct __get_first_arg< _SomeTemplate< _Tp, _Types...> >  { 
# 61
using type = _Tp; }; 
# 65
template< class _Tp, class _Up> 
# 66
struct __replace_first_arg { 
# 67
}; 
# 69
template< template< class , class ...>  class _SomeTemplate, class _Up, class 
# 70
_Tp, class ..._Types> 
# 71
struct __replace_first_arg< _SomeTemplate< _Tp, _Types...> , _Up>  { 
# 72
using type = _SomeTemplate< _Up, _Types...> ; }; 
# 81 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/ptr_traits.h" 3
template< class _Ptr, class  = void> 
# 82
struct __ptr_traits_elem : public __get_first_arg< _Ptr>  { 
# 83
}; 
# 86
template< class _Ptr> 
# 87
struct __ptr_traits_elem< _Ptr, __void_t< typename _Ptr::element_type> >  { 
# 88
using type = typename _Ptr::element_type; }; 
# 90
template< class _Ptr> using __ptr_traits_elem_t = typename __ptr_traits_elem< _Ptr> ::type; 
# 95
template< class _Ptr, class _Elt, bool  = is_void< _Elt> ::value> 
# 96
struct __ptr_traits_ptr_to { 
# 98
using pointer = _Ptr; 
# 99
using element_type = _Elt; 
# 108
static pointer pointer_to(element_type &__e) 
# 114
{ return pointer::pointer_to(__e); } 
# 115
}; 
# 118
template< class _Ptr, class _Elt> 
# 119
struct __ptr_traits_ptr_to< _Ptr, _Elt, true>  { 
# 120
}; 
# 123
template< class _Tp> 
# 124
struct __ptr_traits_ptr_to< _Tp *, _Tp, false>  { 
# 126
using pointer = _Tp *; 
# 127
using element_type = _Tp; 
# 135
static pointer pointer_to(element_type &__r) noexcept 
# 136
{ return std::addressof(__r); } 
# 137
}; 
# 139
template< class _Ptr, class _Elt> 
# 140
struct __ptr_traits_impl : public __ptr_traits_ptr_to< _Ptr, _Elt>  { 
# 144
private: 
# 143
template< class _Tp, class  = void> 
# 144
struct __difference { using type = std::ptrdiff_t; }; 
# 146
template< class _Tp> 
# 151
struct __difference< _Tp, std::__void_t< typename _Tp::difference_type> >  { 
# 153
using type = typename _Tp::difference_type; }; 
# 155
template< class _Tp, class _Up, class  = void> 
# 156
struct __rebind : public __replace_first_arg< _Tp, _Up>  { }; 
# 158
template< class _Tp, class _Up> 
# 163
struct __rebind< _Tp, _Up, std::__void_t< typename _Tp::template rebind< _Up> > >  { 
# 165
using type = typename _Tp::template rebind< _Up> ; }; 
# 169
public: using pointer = _Ptr; 
# 172
using element_type = _Elt; 
# 175
using difference_type = typename __difference< _Ptr> ::type; 
# 178
template< class _Up> using rebind = typename __rebind< _Ptr, _Up> ::type; 
# 180
}; 
# 184
template< class _Ptr> 
# 185
struct __ptr_traits_impl< _Ptr, __undefined>  { 
# 186
}; 
# 193
template< class _Ptr> 
# 194
struct pointer_traits : public __ptr_traits_impl< _Ptr, __ptr_traits_elem_t< _Ptr> >  { 
# 195
}; 
# 209 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/ptr_traits.h" 3
template< class _Tp> 
# 210
struct pointer_traits< _Tp *>  : public __ptr_traits_ptr_to< _Tp *, _Tp>  { 
# 213
typedef _Tp *pointer; 
# 215
typedef _Tp element_type; 
# 217
typedef std::ptrdiff_t difference_type; 
# 219
template< class _Up> using rebind = _Up *; 
# 220
}; 
# 223
template< class _Ptr, class _Tp> using __ptr_rebind = typename pointer_traits< _Ptr> ::template rebind< _Tp> ; 
# 226
template< class _Tp> constexpr _Tp *
# 228
__to_address(_Tp *__ptr) noexcept 
# 229
{ 
# 230
static_assert((!std::template is_function< _Tp> ::value), "not a function pointer");
# 231
return __ptr; 
# 232
} 
# 235
template< class _Ptr> constexpr typename pointer_traits< _Ptr> ::element_type *
# 237
__to_address(const _Ptr &__ptr) 
# 238
{ return std::__to_address(__ptr.operator->()); } 
# 283 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/ptr_traits.h" 3
}
# 88 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 109 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 131 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
template< class _Iterator> 
# 132
class reverse_iterator : public iterator< typename iterator_traits< _Iterator> ::iterator_category, typename iterator_traits< _Iterator> ::value_type, typename iterator_traits< _Iterator> ::difference_type, typename iterator_traits< _Iterator> ::pointer, typename iterator_traits< _Iterator> ::reference>  { 
# 139
template< class _Iter> friend class reverse_iterator; 
# 151 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
protected: _Iterator current; 
# 153
typedef iterator_traits< _Iterator>  __traits_type; 
# 156
public: typedef _Iterator iterator_type; 
# 157
typedef typename iterator_traits< _Iterator> ::pointer pointer; 
# 159
typedef typename iterator_traits< _Iterator> ::difference_type difference_type; 
# 160
typedef typename iterator_traits< _Iterator> ::reference reference; 
# 182 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
constexpr reverse_iterator() noexcept(noexcept((_Iterator()))) : current() 
# 185
{ } 
# 191
constexpr explicit reverse_iterator(iterator_type __x) noexcept(noexcept(((_Iterator)__x))) : current(__x) 
# 194
{ } 
# 200
constexpr reverse_iterator(const reverse_iterator &__x) noexcept(noexcept(((_Iterator)(__x.current)))) : current(__x.current) 
# 203
{ } 
# 206
reverse_iterator &operator=(const reverse_iterator &) = default;
# 213
template< class _Iter> constexpr 
# 218
reverse_iterator(const reverse_iterator< _Iter>  &__x) noexcept(noexcept(((_Iterator)(__x.current)))) : current((__x.current)) 
# 221
{ } 
# 224
template< class _Iter> constexpr reverse_iterator &
# 231
operator=(const reverse_iterator< _Iter>  &__x) noexcept(noexcept(((current) = (__x.current)))) 
# 233
{ 
# 234
(current) = (__x.current); 
# 235
return *this; 
# 236
} 
# 242
[[__nodiscard__]] constexpr iterator_type 
# 244
base() const noexcept(noexcept(((_Iterator)(current)))) 
# 246
{ return current; } 
# 258 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
[[__nodiscard__]] constexpr reference 
# 260
operator*() const 
# 261
{ 
# 262
_Iterator __tmp = current; 
# 263
return *(--__tmp); 
# 264
} 
# 271
[[__nodiscard__]] constexpr pointer 
# 273
operator->() const 
# 278
{ 
# 281
_Iterator __tmp = current; 
# 282
--__tmp; 
# 283
return _S_to_pointer(__tmp); 
# 284
} 
# 292
constexpr reverse_iterator &operator++() 
# 293
{ 
# 294
--(current); 
# 295
return *this; 
# 296
} 
# 304
constexpr reverse_iterator operator++(int) 
# 305
{ 
# 306
reverse_iterator __tmp = *this; 
# 307
--(current); 
# 308
return __tmp; 
# 309
} 
# 317
constexpr reverse_iterator &operator--() 
# 318
{ 
# 319
++(current); 
# 320
return *this; 
# 321
} 
# 329
constexpr reverse_iterator operator--(int) 
# 330
{ 
# 331
reverse_iterator __tmp = *this; 
# 332
++(current); 
# 333
return __tmp; 
# 334
} 
# 341
[[__nodiscard__]] constexpr reverse_iterator 
# 343
operator+(difference_type __n) const 
# 344
{ return ((reverse_iterator)((current) - __n)); } 
# 353
constexpr reverse_iterator &operator+=(difference_type __n) 
# 354
{ 
# 355
(current) -= __n; 
# 356
return *this; 
# 357
} 
# 364
[[__nodiscard__]] constexpr reverse_iterator 
# 366
operator-(difference_type __n) const 
# 367
{ return ((reverse_iterator)((current) + __n)); } 
# 376
constexpr reverse_iterator &operator-=(difference_type __n) 
# 377
{ 
# 378
(current) += __n; 
# 379
return *this; 
# 380
} 
# 387
[[__nodiscard__]] constexpr reference 
# 389
operator[](difference_type __n) const 
# 390
{ return *((*this) + __n); } 
# 421 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
private: 
# 419
template< class _Tp> static constexpr _Tp *
# 421
_S_to_pointer(_Tp *__p) 
# 422
{ return __p; } 
# 424
template< class _Tp> static constexpr pointer 
# 426
_S_to_pointer(_Tp __t) 
# 427
{ return __t.operator->(); } 
# 428
}; 
# 441 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
template< class _Iterator> 
# 442
[[__nodiscard__]] constexpr bool 
# 444
operator==(const reverse_iterator< _Iterator>  &__x, const reverse_iterator< _Iterator>  &
# 445
__y) 
# 446
{ return __x.base() == __y.base(); } 
# 448
template< class _Iterator> 
# 449
[[__nodiscard__]] constexpr bool 
# 451
operator<(const reverse_iterator< _Iterator>  &__x, const reverse_iterator< _Iterator>  &
# 452
__y) 
# 453
{ return __y.base() < __x.base(); } 
# 455
template< class _Iterator> 
# 456
[[__nodiscard__]] constexpr bool 
# 458
operator!=(const reverse_iterator< _Iterator>  &__x, const reverse_iterator< _Iterator>  &
# 459
__y) 
# 460
{ return !(__x == __y); } 
# 462
template< class _Iterator> 
# 463
[[__nodiscard__]] constexpr bool 
# 465
operator>(const reverse_iterator< _Iterator>  &__x, const reverse_iterator< _Iterator>  &
# 466
__y) 
# 467
{ return __y < __x; } 
# 469
template< class _Iterator> 
# 470
[[__nodiscard__]] constexpr bool 
# 472
operator<=(const reverse_iterator< _Iterator>  &__x, const reverse_iterator< _Iterator>  &
# 473
__y) 
# 474
{ return !(__y < __x); } 
# 476
template< class _Iterator> 
# 477
[[__nodiscard__]] constexpr bool 
# 479
operator>=(const reverse_iterator< _Iterator>  &__x, const reverse_iterator< _Iterator>  &
# 480
__y) 
# 481
{ return !(__x < __y); } 
# 486
template< class _IteratorL, class _IteratorR> 
# 487
[[__nodiscard__]] constexpr bool 
# 489
operator==(const reverse_iterator< _IteratorL>  &__x, const reverse_iterator< _IteratorR>  &
# 490
__y) 
# 491
{ return __x.base() == __y.base(); } 
# 493
template< class _IteratorL, class _IteratorR> 
# 494
[[__nodiscard__]] constexpr bool 
# 496
operator<(const reverse_iterator< _IteratorL>  &__x, const reverse_iterator< _IteratorR>  &
# 497
__y) 
# 498
{ return __x.base() > __y.base(); } 
# 500
template< class _IteratorL, class _IteratorR> 
# 501
[[__nodiscard__]] constexpr bool 
# 503
operator!=(const reverse_iterator< _IteratorL>  &__x, const reverse_iterator< _IteratorR>  &
# 504
__y) 
# 505
{ return __x.base() != __y.base(); } 
# 507
template< class _IteratorL, class _IteratorR> 
# 508
[[__nodiscard__]] constexpr bool 
# 510
operator>(const reverse_iterator< _IteratorL>  &__x, const reverse_iterator< _IteratorR>  &
# 511
__y) 
# 512
{ return __x.base() < __y.base(); } 
# 514
template< class _IteratorL, class _IteratorR> constexpr bool 
# 516
operator<=(const reverse_iterator< _IteratorL>  &__x, const reverse_iterator< _IteratorR>  &
# 517
__y) 
# 518
{ return __x.base() >= __y.base(); } 
# 520
template< class _IteratorL, class _IteratorR> 
# 521
[[__nodiscard__]] constexpr bool 
# 523
operator>=(const reverse_iterator< _IteratorL>  &__x, const reverse_iterator< _IteratorR>  &
# 524
__y) 
# 525
{ return __x.base() <= __y.base(); } 
# 618 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
template< class _IteratorL, class _IteratorR> 
# 619
[[__nodiscard__]] constexpr auto 
# 621
operator-(const reverse_iterator< _IteratorL>  &__x, const reverse_iterator< _IteratorR>  &
# 622
__y)->__decltype((__y.base() - __x.base())) 
# 624
{ return __y.base() - __x.base(); } 
# 627
template< class _Iterator> 
# 628
[[__nodiscard__]] constexpr reverse_iterator< _Iterator>  
# 630
operator+(typename reverse_iterator< _Iterator> ::difference_type __n, const reverse_iterator< _Iterator>  &
# 631
__x) 
# 632
{ return ((reverse_iterator< _Iterator> )(__x.base() - __n)); } 
# 636
template< class _Iterator> constexpr reverse_iterator< _Iterator>  
# 638
__make_reverse_iterator(_Iterator __i) 
# 639
{ return ((reverse_iterator< _Iterator> )(__i)); } 
# 647
template< class _Iterator> 
# 648
[[__nodiscard__]] constexpr reverse_iterator< _Iterator>  
# 650
make_reverse_iterator(_Iterator __i) 
# 651
{ return ((reverse_iterator< _Iterator> )(__i)); } 
# 662 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
template< class _Iterator> auto 
# 665
__niter_base(reverse_iterator< _Iterator>  __it)->__decltype((__make_reverse_iterator(__niter_base(__it.base())))) 
# 667
{ return __make_reverse_iterator(__niter_base(__it.base())); } 
# 669
template< class _Iterator> 
# 670
struct __is_move_iterator< reverse_iterator< _Iterator> >  : public std::__is_move_iterator< _Iterator>  { 
# 672
}; 
# 674
template< class _Iterator> auto 
# 677
__miter_base(reverse_iterator< _Iterator>  __it)->__decltype((__make_reverse_iterator(__miter_base(__it.base())))) 
# 679
{ return __make_reverse_iterator(__miter_base(__it.base())); } 
# 693 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
template< class _Container> 
# 694
class back_insert_iterator : public iterator< output_iterator_tag, void, void, void, void>  { 
# 698
protected: _Container *container; 
# 702
public: typedef _Container container_type; 
# 709
explicit back_insert_iterator(_Container &__x) : container(std::__addressof(__x)) 
# 710
{ } 
# 733 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
back_insert_iterator &operator=(const typename _Container::value_type &__value) 
# 734
{ 
# 735
(container)->push_back(__value); 
# 736
return *this; 
# 737
} 
# 741
back_insert_iterator &operator=(typename _Container::value_type &&__value) 
# 742
{ 
# 743
(container)->push_back(std::move(__value)); 
# 744
return *this; 
# 745
} 
# 749
[[__nodiscard__]] back_insert_iterator &
# 751
operator*() 
# 752
{ return *this; } 
# 757
back_insert_iterator &operator++() 
# 758
{ return *this; } 
# 763
back_insert_iterator operator++(int) 
# 764
{ return *this; } 
# 765
}; 
# 778 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
template< class _Container> 
# 779
[[__nodiscard__]] inline back_insert_iterator< _Container>  
# 781
back_inserter(_Container &__x) 
# 782
{ return ((back_insert_iterator< _Container> )(__x)); } 
# 794 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
template< class _Container> 
# 795
class front_insert_iterator : public iterator< output_iterator_tag, void, void, void, void>  { 
# 799
protected: _Container *container; 
# 803
public: typedef _Container container_type; 
# 810
explicit front_insert_iterator(_Container &__x) : container(std::__addressof(__x)) 
# 811
{ } 
# 834 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
front_insert_iterator &operator=(const typename _Container::value_type &__value) 
# 835
{ 
# 836
(container)->push_front(__value); 
# 837
return *this; 
# 838
} 
# 842
front_insert_iterator &operator=(typename _Container::value_type &&__value) 
# 843
{ 
# 844
(container)->push_front(std::move(__value)); 
# 845
return *this; 
# 846
} 
# 850
[[__nodiscard__]] front_insert_iterator &
# 852
operator*() 
# 853
{ return *this; } 
# 858
front_insert_iterator &operator++() 
# 859
{ return *this; } 
# 864
front_insert_iterator operator++(int) 
# 865
{ return *this; } 
# 866
}; 
# 879 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
template< class _Container> 
# 880
[[__nodiscard__]] inline front_insert_iterator< _Container>  
# 882
front_inserter(_Container &__x) 
# 883
{ return ((front_insert_iterator< _Container> )(__x)); } 
# 899 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
template< class _Container> 
# 900
class insert_iterator : public iterator< output_iterator_tag, void, void, void, void>  { 
# 906
typedef typename _Container::iterator _Iter; 
# 909
protected: _Container *container; 
# 910
_Iter iter; 
# 914
public: typedef _Container container_type; 
# 925 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
insert_iterator(_Container &__x, _Iter __i) : container(std::__addressof(__x)), iter(__i) 
# 926
{ } 
# 962 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
insert_iterator &operator=(const typename _Container::value_type &__value) 
# 963
{ 
# 964
(iter) = (container)->insert(iter, __value); 
# 965
++(iter); 
# 966
return *this; 
# 967
} 
# 971
insert_iterator &operator=(typename _Container::value_type &&__value) 
# 972
{ 
# 973
(iter) = (container)->insert(iter, std::move(__value)); 
# 974
++(iter); 
# 975
return *this; 
# 976
} 
# 980
[[__nodiscard__]] insert_iterator &
# 982
operator*() 
# 983
{ return *this; } 
# 988
insert_iterator &operator++() 
# 989
{ return *this; } 
# 994
insert_iterator &operator++(int) 
# 995
{ return *this; } 
# 996
}; 
# 998
#pragma GCC diagnostic pop
# 1019 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
template< class _Container> 
# 1020
[[__nodiscard__]] inline insert_iterator< _Container>  
# 1022
inserter(_Container &__x, typename _Container::iterator __i) 
# 1023
{ return insert_iterator< _Container> (__x, __i); } 
# 1029
}
# 1031
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 1042 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
template< class _Iterator, class _Container> 
# 1043
class __normal_iterator { 
# 1046
protected: _Iterator _M_current; 
# 1048
typedef std::iterator_traits< _Iterator>  __traits_type; 
# 1051
template< class _Iter> using __convertible_from = std::__enable_if_t< std::is_convertible< _Iter, _Iterator> ::value> ; 
# 1057
public: typedef _Iterator iterator_type; 
# 1058
typedef typename std::iterator_traits< _Iterator> ::iterator_category iterator_category; 
# 1059
typedef typename std::iterator_traits< _Iterator> ::value_type value_type; 
# 1060
typedef typename std::iterator_traits< _Iterator> ::difference_type difference_type; 
# 1061
typedef typename std::iterator_traits< _Iterator> ::reference reference; 
# 1062
typedef typename std::iterator_traits< _Iterator> ::pointer pointer; 
# 1068
constexpr __normal_iterator() noexcept : _M_current(_Iterator()) 
# 1069
{ } 
# 1072
explicit __normal_iterator(const _Iterator &__i) noexcept : _M_current(__i) 
# 1073
{ } 
# 1077
template< class _Iter, class  = __convertible_from< _Iter> > 
# 1079
__normal_iterator(const __normal_iterator< _Iter, _Container>  &__i) noexcept : _M_current(__i.base()) 
# 1090 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
{ } 
# 1095
reference operator*() const noexcept 
# 1096
{ return *(_M_current); } 
# 1100
pointer operator->() const noexcept 
# 1101
{ return _M_current; } 
# 1105
__normal_iterator &operator++() noexcept 
# 1106
{ 
# 1107
++(_M_current); 
# 1108
return *this; 
# 1109
} 
# 1113
__normal_iterator operator++(int) noexcept 
# 1114
{ return ((__normal_iterator)((_M_current)++)); } 
# 1119
__normal_iterator &operator--() noexcept 
# 1120
{ 
# 1121
--(_M_current); 
# 1122
return *this; 
# 1123
} 
# 1127
__normal_iterator operator--(int) noexcept 
# 1128
{ return ((__normal_iterator)((_M_current)--)); } 
# 1133
reference operator[](difference_type __n) const noexcept 
# 1134
{ return (_M_current)[__n]; } 
# 1138
__normal_iterator &operator+=(difference_type __n) noexcept 
# 1139
{ (_M_current) += __n; return *this; } 
# 1143
__normal_iterator operator+(difference_type __n) const noexcept 
# 1144
{ return ((__normal_iterator)((_M_current) + __n)); } 
# 1148
__normal_iterator &operator-=(difference_type __n) noexcept 
# 1149
{ (_M_current) -= __n; return *this; } 
# 1153
__normal_iterator operator-(difference_type __n) const noexcept 
# 1154
{ return ((__normal_iterator)((_M_current) - __n)); } 
# 1158
const _Iterator &base() const noexcept 
# 1159
{ return _M_current; } 
# 1160
}; 
# 1210 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
template< class _IteratorL, class _IteratorR, class _Container> 
# 1211
[[__nodiscard__]] inline bool 
# 1213
operator==(const __normal_iterator< _IteratorL, _Container>  &__lhs, const __normal_iterator< _IteratorR, _Container>  &
# 1214
__rhs) noexcept 
# 1216
{ return __lhs.base() == __rhs.base(); } 
# 1218
template< class _Iterator, class _Container> 
# 1219
[[__nodiscard__]] inline bool 
# 1221
operator==(const __normal_iterator< _Iterator, _Container>  &__lhs, const __normal_iterator< _Iterator, _Container>  &
# 1222
__rhs) noexcept 
# 1224
{ return __lhs.base() == __rhs.base(); } 
# 1226
template< class _IteratorL, class _IteratorR, class _Container> 
# 1227
[[__nodiscard__]] inline bool 
# 1229
operator!=(const __normal_iterator< _IteratorL, _Container>  &__lhs, const __normal_iterator< _IteratorR, _Container>  &
# 1230
__rhs) noexcept 
# 1232
{ return __lhs.base() != __rhs.base(); } 
# 1234
template< class _Iterator, class _Container> 
# 1235
[[__nodiscard__]] inline bool 
# 1237
operator!=(const __normal_iterator< _Iterator, _Container>  &__lhs, const __normal_iterator< _Iterator, _Container>  &
# 1238
__rhs) noexcept 
# 1240
{ return __lhs.base() != __rhs.base(); } 
# 1243
template< class _IteratorL, class _IteratorR, class _Container> 
# 1244
[[__nodiscard__]] inline bool 
# 1246
operator<(const __normal_iterator< _IteratorL, _Container>  &__lhs, const __normal_iterator< _IteratorR, _Container>  &
# 1247
__rhs) noexcept 
# 1249
{ return __lhs.base() < __rhs.base(); } 
# 1251
template< class _Iterator, class _Container> 
# 1252
[[__nodiscard__]] inline bool 
# 1254
operator<(const __normal_iterator< _Iterator, _Container>  &__lhs, const __normal_iterator< _Iterator, _Container>  &
# 1255
__rhs) noexcept 
# 1257
{ return __lhs.base() < __rhs.base(); } 
# 1259
template< class _IteratorL, class _IteratorR, class _Container> 
# 1260
[[__nodiscard__]] inline bool 
# 1262
operator>(const __normal_iterator< _IteratorL, _Container>  &__lhs, const __normal_iterator< _IteratorR, _Container>  &
# 1263
__rhs) noexcept 
# 1265
{ return __lhs.base() > __rhs.base(); } 
# 1267
template< class _Iterator, class _Container> 
# 1268
[[__nodiscard__]] inline bool 
# 1270
operator>(const __normal_iterator< _Iterator, _Container>  &__lhs, const __normal_iterator< _Iterator, _Container>  &
# 1271
__rhs) noexcept 
# 1273
{ return __lhs.base() > __rhs.base(); } 
# 1275
template< class _IteratorL, class _IteratorR, class _Container> 
# 1276
[[__nodiscard__]] inline bool 
# 1278
operator<=(const __normal_iterator< _IteratorL, _Container>  &__lhs, const __normal_iterator< _IteratorR, _Container>  &
# 1279
__rhs) noexcept 
# 1281
{ return __lhs.base() <= __rhs.base(); } 
# 1283
template< class _Iterator, class _Container> 
# 1284
[[__nodiscard__]] inline bool 
# 1286
operator<=(const __normal_iterator< _Iterator, _Container>  &__lhs, const __normal_iterator< _Iterator, _Container>  &
# 1287
__rhs) noexcept 
# 1289
{ return __lhs.base() <= __rhs.base(); } 
# 1291
template< class _IteratorL, class _IteratorR, class _Container> 
# 1292
[[__nodiscard__]] inline bool 
# 1294
operator>=(const __normal_iterator< _IteratorL, _Container>  &__lhs, const __normal_iterator< _IteratorR, _Container>  &
# 1295
__rhs) noexcept 
# 1297
{ return __lhs.base() >= __rhs.base(); } 
# 1299
template< class _Iterator, class _Container> 
# 1300
[[__nodiscard__]] inline bool 
# 1302
operator>=(const __normal_iterator< _Iterator, _Container>  &__lhs, const __normal_iterator< _Iterator, _Container>  &
# 1303
__rhs) noexcept 
# 1305
{ return __lhs.base() >= __rhs.base(); } 
# 1312
template< class _IteratorL, class _IteratorR, class _Container> 
# 1315
[[__nodiscard__]] inline auto 
# 1317
operator-(const __normal_iterator< _IteratorL, _Container>  &__lhs, const __normal_iterator< _IteratorR, _Container>  &
# 1318
__rhs) noexcept->__decltype((__lhs.base() - __rhs.base())) 
# 1325
{ return __lhs.base() - __rhs.base(); } 
# 1327
template< class _Iterator, class _Container> 
# 1328
[[__nodiscard__]] inline typename __normal_iterator< _Iterator, _Container> ::difference_type 
# 1330
operator-(const __normal_iterator< _Iterator, _Container>  &__lhs, const __normal_iterator< _Iterator, _Container>  &
# 1331
__rhs) noexcept 
# 1333
{ return __lhs.base() - __rhs.base(); } 
# 1335
template< class _Iterator, class _Container> 
# 1336
[[__nodiscard__]] inline __normal_iterator< _Iterator, _Container>  
# 1338
operator+(typename __normal_iterator< _Iterator, _Container> ::difference_type 
# 1339
__n, const __normal_iterator< _Iterator, _Container>  &__i) noexcept 
# 1341
{ return ((__normal_iterator< _Iterator, _Container> )(__i.base() + __n)); } 
# 1344
}
# 1346
namespace std __attribute((__visibility__("default"))) { 
# 1350
template< class _Iterator, class _Container> _Iterator 
# 1353
__niter_base(__gnu_cxx::__normal_iterator< _Iterator, _Container>  __it) noexcept(std::template is_nothrow_copy_constructible< _Iterator> ::value) 
# 1355
{ return __it.base(); } 
# 1362
template< class _Iterator, class _Container> constexpr auto 
# 1364
__to_address(const __gnu_cxx::__normal_iterator< _Iterator, _Container>  &
# 1365
__it) noexcept->__decltype((std::__to_address(__it.base()))) 
# 1367
{ return std::__to_address(__it.base()); } 
# 1417 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
namespace __detail { 
# 1433 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
}
# 1444 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
template< class _Iterator> 
# 1445
class move_iterator { 
# 1450
_Iterator _M_current; 
# 1452
using __traits_type = iterator_traits< _Iterator> ; 
# 1454
using __base_ref = typename iterator_traits< _Iterator> ::reference; 
# 1457
template< class _Iter2> friend class move_iterator; 
# 1484 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
public: using iterator_type = _Iterator; 
# 1497 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
typedef typename iterator_traits< _Iterator> ::iterator_category iterator_category; 
# 1498
typedef typename iterator_traits< _Iterator> ::value_type value_type; 
# 1499
typedef typename iterator_traits< _Iterator> ::difference_type difference_type; 
# 1501
typedef _Iterator pointer; 
# 1504
using reference = __conditional_t< is_reference< __base_ref> ::value, typename remove_reference< __base_ref> ::type &&, __base_ref> ; 
# 1511
constexpr move_iterator() : _M_current() 
# 1512
{ } 
# 1515
constexpr explicit move_iterator(iterator_type __i) : _M_current(std::move(__i)) 
# 1516
{ } 
# 1518
template< class _Iter> constexpr 
# 1523
move_iterator(const move_iterator< _Iter>  &__i) : _M_current((__i._M_current)) 
# 1524
{ } 
# 1526
template< class _Iter> constexpr move_iterator &
# 1532
operator=(const move_iterator< _Iter>  &__i) 
# 1533
{ 
# 1534
(_M_current) = (__i._M_current); 
# 1535
return *this; 
# 1536
} 
# 1539
[[__nodiscard__]] constexpr iterator_type 
# 1541
base() const 
# 1542
{ return _M_current; } 
# 1555 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
[[__nodiscard__]] constexpr reference 
# 1557
operator*() const 
# 1561
{ return static_cast< reference>(*(_M_current)); } 
# 1564
[[__nodiscard__]] constexpr pointer 
# 1566
operator->() const 
# 1567
{ return _M_current; } 
# 1570
constexpr move_iterator &operator++() 
# 1571
{ 
# 1572
++(_M_current); 
# 1573
return *this; 
# 1574
} 
# 1577
constexpr move_iterator operator++(int) 
# 1578
{ 
# 1579
move_iterator __tmp = *this; 
# 1580
++(_M_current); 
# 1581
return __tmp; 
# 1582
} 
# 1591
constexpr move_iterator &operator--() 
# 1592
{ 
# 1593
--(_M_current); 
# 1594
return *this; 
# 1595
} 
# 1598
constexpr move_iterator operator--(int) 
# 1599
{ 
# 1600
move_iterator __tmp = *this; 
# 1601
--(_M_current); 
# 1602
return __tmp; 
# 1603
} 
# 1605
[[__nodiscard__]] constexpr move_iterator 
# 1607
operator+(difference_type __n) const 
# 1608
{ return ((move_iterator)((_M_current) + __n)); } 
# 1611
constexpr move_iterator &operator+=(difference_type __n) 
# 1612
{ 
# 1613
(_M_current) += __n; 
# 1614
return *this; 
# 1615
} 
# 1617
[[__nodiscard__]] constexpr move_iterator 
# 1619
operator-(difference_type __n) const 
# 1620
{ return ((move_iterator)((_M_current) - __n)); } 
# 1623
constexpr move_iterator &operator-=(difference_type __n) 
# 1624
{ 
# 1625
(_M_current) -= __n; 
# 1626
return *this; 
# 1627
} 
# 1629
[[__nodiscard__]] constexpr reference 
# 1631
operator[](difference_type __n) const 
# 1635
{ return std::move((_M_current)[__n]); } 
# 1669 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
}; 
# 1671
template< class _IteratorL, class _IteratorR> 
# 1672
[[__nodiscard__]] constexpr bool 
# 1674
operator==(const move_iterator< _IteratorL>  &__x, const move_iterator< _IteratorR>  &
# 1675
__y) 
# 1679
{ return __x.base() == __y.base(); } 
# 1690 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
template< class _IteratorL, class _IteratorR> 
# 1691
[[__nodiscard__]] constexpr bool 
# 1693
operator!=(const move_iterator< _IteratorL>  &__x, const move_iterator< _IteratorR>  &
# 1694
__y) 
# 1695
{ return !(__x == __y); } 
# 1698
template< class _IteratorL, class _IteratorR> 
# 1699
[[__nodiscard__]] constexpr bool 
# 1701
operator<(const move_iterator< _IteratorL>  &__x, const move_iterator< _IteratorR>  &
# 1702
__y) 
# 1706
{ return __x.base() < __y.base(); } 
# 1708
template< class _IteratorL, class _IteratorR> 
# 1709
[[__nodiscard__]] constexpr bool 
# 1711
operator<=(const move_iterator< _IteratorL>  &__x, const move_iterator< _IteratorR>  &
# 1712
__y) 
# 1716
{ return !(__y < __x); } 
# 1718
template< class _IteratorL, class _IteratorR> 
# 1719
[[__nodiscard__]] constexpr bool 
# 1721
operator>(const move_iterator< _IteratorL>  &__x, const move_iterator< _IteratorR>  &
# 1722
__y) 
# 1726
{ return __y < __x; } 
# 1728
template< class _IteratorL, class _IteratorR> 
# 1729
[[__nodiscard__]] constexpr bool 
# 1731
operator>=(const move_iterator< _IteratorL>  &__x, const move_iterator< _IteratorR>  &
# 1732
__y) 
# 1736
{ return !(__x < __y); } 
# 1741
template< class _Iterator> 
# 1742
[[__nodiscard__]] constexpr bool 
# 1744
operator==(const move_iterator< _Iterator>  &__x, const move_iterator< _Iterator>  &
# 1745
__y) 
# 1746
{ return __x.base() == __y.base(); } 
# 1756 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
template< class _Iterator> 
# 1757
[[__nodiscard__]] constexpr bool 
# 1759
operator!=(const move_iterator< _Iterator>  &__x, const move_iterator< _Iterator>  &
# 1760
__y) 
# 1761
{ return !(__x == __y); } 
# 1763
template< class _Iterator> 
# 1764
[[__nodiscard__]] constexpr bool 
# 1766
operator<(const move_iterator< _Iterator>  &__x, const move_iterator< _Iterator>  &
# 1767
__y) 
# 1768
{ return __x.base() < __y.base(); } 
# 1770
template< class _Iterator> 
# 1771
[[__nodiscard__]] constexpr bool 
# 1773
operator<=(const move_iterator< _Iterator>  &__x, const move_iterator< _Iterator>  &
# 1774
__y) 
# 1775
{ return !(__y < __x); } 
# 1777
template< class _Iterator> 
# 1778
[[__nodiscard__]] constexpr bool 
# 1780
operator>(const move_iterator< _Iterator>  &__x, const move_iterator< _Iterator>  &
# 1781
__y) 
# 1782
{ return __y < __x; } 
# 1784
template< class _Iterator> 
# 1785
[[__nodiscard__]] constexpr bool 
# 1787
operator>=(const move_iterator< _Iterator>  &__x, const move_iterator< _Iterator>  &
# 1788
__y) 
# 1789
{ return !(__x < __y); } 
# 1793
template< class _IteratorL, class _IteratorR> 
# 1794
[[__nodiscard__]] constexpr auto 
# 1796
operator-(const move_iterator< _IteratorL>  &__x, const move_iterator< _IteratorR>  &
# 1797
__y)->__decltype((__x.base() - __y.base())) 
# 1799
{ return __x.base() - __y.base(); } 
# 1801
template< class _Iterator> 
# 1802
[[__nodiscard__]] constexpr move_iterator< _Iterator>  
# 1804
operator+(typename move_iterator< _Iterator> ::difference_type __n, const move_iterator< _Iterator>  &
# 1805
__x) 
# 1806
{ return __x + __n; } 
# 1808
template< class _Iterator> 
# 1809
[[__nodiscard__]] constexpr move_iterator< _Iterator>  
# 1811
make_move_iterator(_Iterator __i) 
# 1812
{ return ((move_iterator< _Iterator> )(std::move(__i))); } 
# 1814
template< class _Iterator, class _ReturnType = __conditional_t< __move_if_noexcept_cond< typename iterator_traits< _Iterator> ::value_type> ::value, _Iterator, move_iterator< _Iterator> > > constexpr _ReturnType 
# 1819
__make_move_if_noexcept_iterator(_Iterator __i) 
# 1820
{ return (_ReturnType)__i; } 
# 1824
template< class _Tp, class _ReturnType = __conditional_t< __move_if_noexcept_cond< _Tp> ::value, const _Tp *, move_iterator< _Tp *> > > constexpr _ReturnType 
# 1828
__make_move_if_noexcept_iterator(_Tp *__i) 
# 1829
{ return (_ReturnType)__i; } 
# 2570 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
template< class _Iterator> auto 
# 2573
__niter_base(move_iterator< _Iterator>  __it)->__decltype((make_move_iterator(__niter_base(__it.base())))) 
# 2575
{ return make_move_iterator(__niter_base(__it.base())); } 
# 2577
template< class _Iterator> 
# 2578
struct __is_move_iterator< move_iterator< _Iterator> >  { 
# 2580
enum { __value = 1}; 
# 2581
typedef __true_type __type; 
# 2582
}; 
# 2584
template< class _Iterator> auto 
# 2587
__miter_base(move_iterator< _Iterator>  __it)->__decltype((__miter_base(__it.base()))) 
# 2589
{ return __miter_base(__it.base()); } 
# 2602 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_iterator.h" 3
template< class _InputIterator> using __iter_key_t = remove_const_t< typename iterator_traits< _InputIterator> ::value_type::first_type> ; 
# 2606
template< class _InputIterator> using __iter_val_t = typename iterator_traits< _InputIterator> ::value_type::second_type; 
# 2610
template< class _T1, class _T2> struct pair; 
# 2613
template< class _InputIterator> using __iter_to_alloc_t = pair< add_const_t< __iter_key_t< _InputIterator> > , __iter_val_t< _InputIterator> > ; 
# 2620
}
# 48 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/debug/debug.h" 3
namespace std { 
# 50
namespace __debug { }
# 51
}
# 56
namespace __gnu_debug { 
# 58
using namespace std::__debug;
# 60
template< class _Ite, class _Seq, class _Cat> struct _Safe_iterator; 
# 62
}
# 35 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/predefined_ops.h" 3
namespace __gnu_cxx { 
# 37
namespace __ops { 
# 39
struct _Iter_less_iter { 
# 41
template< class _Iterator1, class _Iterator2> constexpr bool 
# 44
operator()(_Iterator1 __it1, _Iterator2 __it2) const 
# 45
{ return (*__it1) < (*__it2); } 
# 46
}; 
# 50
constexpr _Iter_less_iter __iter_less_iter() 
# 51
{ return _Iter_less_iter(); } 
# 53
struct _Iter_less_val { 
# 56
constexpr _Iter_less_val() = default;
# 63
explicit _Iter_less_val(_Iter_less_iter) { } 
# 65
template< class _Iterator, class _Value> bool 
# 68
operator()(_Iterator __it, _Value &__val) const 
# 69
{ return (*__it) < __val; } 
# 70
}; 
# 74
inline _Iter_less_val __iter_less_val() 
# 75
{ return _Iter_less_val(); } 
# 79
inline _Iter_less_val __iter_comp_val(_Iter_less_iter) 
# 80
{ return _Iter_less_val(); } 
# 82
struct _Val_less_iter { 
# 85
constexpr _Val_less_iter() = default;
# 92
explicit _Val_less_iter(_Iter_less_iter) { } 
# 94
template< class _Value, class _Iterator> bool 
# 97
operator()(_Value &__val, _Iterator __it) const 
# 98
{ return __val < (*__it); } 
# 99
}; 
# 103
inline _Val_less_iter __val_less_iter() 
# 104
{ return _Val_less_iter(); } 
# 108
inline _Val_less_iter __val_comp_iter(_Iter_less_iter) 
# 109
{ return _Val_less_iter(); } 
# 111
struct _Iter_equal_to_iter { 
# 113
template< class _Iterator1, class _Iterator2> bool 
# 116
operator()(_Iterator1 __it1, _Iterator2 __it2) const 
# 117
{ return (*__it1) == (*__it2); } 
# 118
}; 
# 122
inline _Iter_equal_to_iter __iter_equal_to_iter() 
# 123
{ return _Iter_equal_to_iter(); } 
# 125
struct _Iter_equal_to_val { 
# 127
template< class _Iterator, class _Value> bool 
# 130
operator()(_Iterator __it, _Value &__val) const 
# 131
{ return (*__it) == __val; } 
# 132
}; 
# 136
inline _Iter_equal_to_val __iter_equal_to_val() 
# 137
{ return _Iter_equal_to_val(); } 
# 141
inline _Iter_equal_to_val __iter_comp_val(_Iter_equal_to_iter) 
# 142
{ return _Iter_equal_to_val(); } 
# 144
template< class _Compare> 
# 145
struct _Iter_comp_iter { 
# 147
_Compare _M_comp; 
# 150
constexpr explicit _Iter_comp_iter(_Compare __comp) : _M_comp(std::move(__comp)) 
# 152
{ } 
# 154
template< class _Iterator1, class _Iterator2> constexpr bool 
# 157
operator()(_Iterator1 __it1, _Iterator2 __it2) 
# 158
{ return (bool)(_M_comp)(*__it1, *__it2); } 
# 159
}; 
# 161
template< class _Compare> constexpr _Iter_comp_iter< _Compare>  
# 164
__iter_comp_iter(_Compare __comp) 
# 165
{ return ((_Iter_comp_iter< _Compare> )(std::move(__comp))); } 
# 167
template< class _Compare> 
# 168
struct _Iter_comp_val { 
# 170
_Compare _M_comp; 
# 174
explicit _Iter_comp_val(_Compare __comp) : _M_comp(std::move(__comp)) 
# 176
{ } 
# 180
explicit _Iter_comp_val(const _Iter_comp_iter< _Compare>  &__comp) : _M_comp((__comp._M_comp)) 
# 182
{ } 
# 187
explicit _Iter_comp_val(_Iter_comp_iter< _Compare>  &&__comp) : _M_comp(std::move((__comp._M_comp))) 
# 189
{ } 
# 192
template< class _Iterator, class _Value> bool 
# 195
operator()(_Iterator __it, _Value &__val) 
# 196
{ return (bool)(_M_comp)(*__it, __val); } 
# 197
}; 
# 199
template< class _Compare> inline _Iter_comp_val< _Compare>  
# 202
__iter_comp_val(_Compare __comp) 
# 203
{ return ((_Iter_comp_val< _Compare> )(std::move(__comp))); } 
# 205
template< class _Compare> inline _Iter_comp_val< _Compare>  
# 208
__iter_comp_val(_Iter_comp_iter< _Compare>  __comp) 
# 209
{ return ((_Iter_comp_val< _Compare> )(std::move(__comp))); } 
# 211
template< class _Compare> 
# 212
struct _Val_comp_iter { 
# 214
_Compare _M_comp; 
# 218
explicit _Val_comp_iter(_Compare __comp) : _M_comp(std::move(__comp)) 
# 220
{ } 
# 224
explicit _Val_comp_iter(const _Iter_comp_iter< _Compare>  &__comp) : _M_comp((__comp._M_comp)) 
# 226
{ } 
# 231
explicit _Val_comp_iter(_Iter_comp_iter< _Compare>  &&__comp) : _M_comp(std::move((__comp._M_comp))) 
# 233
{ } 
# 236
template< class _Value, class _Iterator> bool 
# 239
operator()(_Value &__val, _Iterator __it) 
# 240
{ return (bool)(_M_comp)(__val, *__it); } 
# 241
}; 
# 243
template< class _Compare> inline _Val_comp_iter< _Compare>  
# 246
__val_comp_iter(_Compare __comp) 
# 247
{ return ((_Val_comp_iter< _Compare> )(std::move(__comp))); } 
# 249
template< class _Compare> inline _Val_comp_iter< _Compare>  
# 252
__val_comp_iter(_Iter_comp_iter< _Compare>  __comp) 
# 253
{ return ((_Val_comp_iter< _Compare> )(std::move(__comp))); } 
# 255
template< class _Value> 
# 256
struct _Iter_equals_val { 
# 258
_Value &_M_value; 
# 262
explicit _Iter_equals_val(_Value &__value) : _M_value(__value) 
# 264
{ } 
# 266
template< class _Iterator> bool 
# 269
operator()(_Iterator __it) 
# 270
{ return (*__it) == (_M_value); } 
# 271
}; 
# 273
template< class _Value> inline _Iter_equals_val< _Value>  
# 276
__iter_equals_val(_Value &__val) 
# 277
{ return ((_Iter_equals_val< _Value> )(__val)); } 
# 279
template< class _Iterator1> 
# 280
struct _Iter_equals_iter { 
# 282
_Iterator1 _M_it1; 
# 286
explicit _Iter_equals_iter(_Iterator1 __it1) : _M_it1(__it1) 
# 288
{ } 
# 290
template< class _Iterator2> bool 
# 293
operator()(_Iterator2 __it2) 
# 294
{ return (*__it2) == (*(_M_it1)); } 
# 295
}; 
# 297
template< class _Iterator> inline _Iter_equals_iter< _Iterator>  
# 300
__iter_comp_iter(_Iter_equal_to_iter, _Iterator __it) 
# 301
{ return ((_Iter_equals_iter< _Iterator> )(__it)); } 
# 303
template< class _Predicate> 
# 304
struct _Iter_pred { 
# 306
_Predicate _M_pred; 
# 310
explicit _Iter_pred(_Predicate __pred) : _M_pred(std::move(__pred)) 
# 312
{ } 
# 314
template< class _Iterator> bool 
# 317
operator()(_Iterator __it) 
# 318
{ return (bool)(_M_pred)(*__it); } 
# 319
}; 
# 321
template< class _Predicate> inline _Iter_pred< _Predicate>  
# 324
__pred_iter(_Predicate __pred) 
# 325
{ return ((_Iter_pred< _Predicate> )(std::move(__pred))); } 
# 327
template< class _Compare, class _Value> 
# 328
struct _Iter_comp_to_val { 
# 330
_Compare _M_comp; 
# 331
_Value &_M_value; 
# 334
_Iter_comp_to_val(_Compare __comp, _Value &__value) : _M_comp(std::move(__comp)), _M_value(__value) 
# 336
{ } 
# 338
template< class _Iterator> bool 
# 341
operator()(_Iterator __it) 
# 342
{ return (bool)(_M_comp)(*__it, _M_value); } 
# 343
}; 
# 345
template< class _Compare, class _Value> _Iter_comp_to_val< _Compare, _Value>  
# 348
__iter_comp_val(_Compare __comp, _Value &__val) 
# 349
{ 
# 350
return _Iter_comp_to_val< _Compare, _Value> (std::move(__comp), __val); 
# 351
} 
# 353
template< class _Compare, class _Iterator1> 
# 354
struct _Iter_comp_to_iter { 
# 356
_Compare _M_comp; 
# 357
_Iterator1 _M_it1; 
# 360
_Iter_comp_to_iter(_Compare __comp, _Iterator1 __it1) : _M_comp(std::move(__comp)), _M_it1(__it1) 
# 362
{ } 
# 364
template< class _Iterator2> bool 
# 367
operator()(_Iterator2 __it2) 
# 368
{ return (bool)(_M_comp)(*__it2, *(_M_it1)); } 
# 369
}; 
# 371
template< class _Compare, class _Iterator> inline _Iter_comp_to_iter< _Compare, _Iterator>  
# 374
__iter_comp_iter(_Iter_comp_iter< _Compare>  __comp, _Iterator __it) 
# 375
{ 
# 376
return _Iter_comp_to_iter< _Compare, _Iterator> (std::move((__comp._M_comp)), __it); 
# 378
} 
# 380
template< class _Predicate> 
# 381
struct _Iter_negate { 
# 383
_Predicate _M_pred; 
# 387
explicit _Iter_negate(_Predicate __pred) : _M_pred(std::move(__pred)) 
# 389
{ } 
# 391
template< class _Iterator> bool 
# 394
operator()(_Iterator __it) 
# 395
{ return !((bool)(_M_pred)(*__it)); } 
# 396
}; 
# 398
template< class _Predicate> inline _Iter_negate< _Predicate>  
# 401
__negate(_Iter_pred< _Predicate>  __pred) 
# 402
{ return ((_Iter_negate< _Predicate> )(std::move((__pred._M_pred)))); } 
# 404
}
# 405
}
# 79 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_algobase.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 87
template< class _Tp, class _Up> constexpr int 
# 90
__memcmp(const _Tp *__first1, const _Up *__first2, size_t __num) 
# 91
{ 
# 93
static_assert((sizeof(_Tp) == sizeof(_Up)), "can be compared with memcmp");
# 105 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_algobase.h" 3
return __builtin_memcmp(__first1, __first2, sizeof(_Tp) * __num); 
# 106
} 
# 149 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_algobase.h" 3
template< class _ForwardIterator1, class _ForwardIterator2> inline void 
# 152
iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b) 
# 153
{ 
# 182 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_algobase.h" 3
swap(*__a, *__b); 
# 184
} 
# 198 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_algobase.h" 3
template< class _ForwardIterator1, class _ForwardIterator2> _ForwardIterator2 
# 201
swap_ranges(_ForwardIterator1 __first1, _ForwardIterator1 __last1, _ForwardIterator2 
# 202
__first2) 
# 203
{ 
# 209
; 
# 211
for (; __first1 != __last1; (++__first1), ((void)(++__first2))) { 
# 212
std::iter_swap(__first1, __first2); }  
# 213
return __first2; 
# 214
} 
# 227 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_algobase.h" 3
template< class _Tp> constexpr const _Tp &
# 230
min(const _Tp &__a, const _Tp &__b) 
# 231
{ 
# 235
if (__b < __a) { 
# 236
return __b; }  
# 237
return __a; 
# 238
} 
# 251 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_algobase.h" 3
template< class _Tp> constexpr const _Tp &
# 254
max(const _Tp &__a, const _Tp &__b) 
# 255
{ 
# 259
if (__a < __b) { 
# 260
return __b; }  
# 261
return __a; 
# 262
} 
# 275 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_algobase.h" 3
template< class _Tp, class _Compare> constexpr const _Tp &
# 278
min(const _Tp &__a, const _Tp &__b, _Compare __comp) 
# 279
{ 
# 281
if (__comp(__b, __a)) { 
# 282
return __b; }  
# 283
return __a; 
# 284
} 
# 297 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_algobase.h" 3
template< class _Tp, class _Compare> constexpr const _Tp &
# 300
max(const _Tp &__a, const _Tp &__b, _Compare __comp) 
# 301
{ 
# 303
if (__comp(__a, __b)) { 
# 304
return __b; }  
# 305
return __a; 
# 306
} 
# 310
template< class _Iterator> inline _Iterator 
# 313
__niter_base(_Iterator __it) noexcept(std::template is_nothrow_copy_constructible< _Iterator> ::value) 
# 315
{ return __it; } 
# 317
template< class _Ite, class _Seq> _Ite __niter_base(const __gnu_debug::_Safe_iterator< _Ite, _Seq, random_access_iterator_tag>  &); 
# 325
template< class _From, class _To> inline _From 
# 328
__niter_wrap(_From __from, _To __res) 
# 329
{ return __from + (__res - std::__niter_base(__from)); } 
# 332
template< class _Iterator> inline _Iterator 
# 335
__niter_wrap(const _Iterator &, _Iterator __res) 
# 336
{ return __res; } 
# 344
template< bool _IsMove, bool _IsSimple, class _Category> 
# 345
struct __copy_move { 
# 347
template< class _II, class _OI> static _OI 
# 350
__copy_m(_II __first, _II __last, _OI __result) 
# 351
{ 
# 352
for (; __first != __last; (++__result), ((void)(++__first))) { 
# 353
(*__result) = (*__first); }  
# 354
return __result; 
# 355
} 
# 356
}; 
# 359
template< class _Category> 
# 360
struct __copy_move< true, false, _Category>  { 
# 362
template< class _II, class _OI> static _OI 
# 365
__copy_m(_II __first, _II __last, _OI __result) 
# 366
{ 
# 367
for (; __first != __last; (++__result), ((void)(++__first))) { 
# 368
(*__result) = std::move(*__first); }  
# 369
return __result; 
# 370
} 
# 371
}; 
# 375
template<> struct __copy_move< false, false, random_access_iterator_tag>  { 
# 377
template< class _II, class _OI> static _OI 
# 380
__copy_m(_II __first, _II __last, _OI __result) 
# 381
{ 
# 382
typedef typename iterator_traits< _II> ::difference_type _Distance; 
# 383
for (_Distance __n = __last - __first; __n > 0; --__n) 
# 384
{ 
# 385
(*__result) = (*__first); 
# 386
++__first; 
# 387
++__result; 
# 388
}  
# 389
return __result; 
# 390
} 
# 391
}; 
# 395
template<> struct __copy_move< true, false, random_access_iterator_tag>  { 
# 397
template< class _II, class _OI> static _OI 
# 400
__copy_m(_II __first, _II __last, _OI __result) 
# 401
{ 
# 402
typedef typename iterator_traits< _II> ::difference_type _Distance; 
# 403
for (_Distance __n = __last - __first; __n > 0; --__n) 
# 404
{ 
# 405
(*__result) = std::move(*__first); 
# 406
++__first; 
# 407
++__result; 
# 408
}  
# 409
return __result; 
# 410
} 
# 411
}; 
# 414
template< bool _IsMove> 
# 415
struct __copy_move< _IsMove, true, random_access_iterator_tag>  { 
# 417
template< class _Tp> static _Tp *
# 420
__copy_m(const _Tp *__first, const _Tp *__last, _Tp *__result) 
# 421
{ 
# 423
using __assignable = __conditional_t< _IsMove, is_move_assignable< _Tp> , is_copy_assignable< _Tp> > ; 
# 427
static_assert((__assignable::value), "type must be assignable");
# 429
const ptrdiff_t _Num = __last - __first; 
# 430
if (_Num) { 
# 431
__builtin_memmove(__result, __first, sizeof(_Tp) * _Num); }  
# 432
return __result + _Num; 
# 433
} 
# 434
}; 
# 438
template< class _Tp, class _Ref, class _Ptr> struct _Deque_iterator; 
# 441
struct _Bit_iterator; 
# 447
template< class _CharT> struct char_traits; 
# 450
template< class _CharT, class _Traits> class istreambuf_iterator; 
# 453
template< class _CharT, class _Traits> class ostreambuf_iterator; 
# 456
template< bool _IsMove, class _CharT> typename __gnu_cxx::__enable_if< __is_char< _CharT> ::__value, ostreambuf_iterator< _CharT, char_traits< _CharT> > > ::__type __copy_move_a2(_CharT *, _CharT *, ostreambuf_iterator< _CharT, char_traits< _CharT> > ); 
# 462
template< bool _IsMove, class _CharT> typename __gnu_cxx::__enable_if< __is_char< _CharT> ::__value, ostreambuf_iterator< _CharT, char_traits< _CharT> > > ::__type __copy_move_a2(const _CharT *, const _CharT *, ostreambuf_iterator< _CharT, char_traits< _CharT> > ); 
# 468
template< bool _IsMove, class _CharT> typename __gnu_cxx::__enable_if< __is_char< _CharT> ::__value, _CharT *> ::__type __copy_move_a2(istreambuf_iterator< _CharT, char_traits< _CharT> > , istreambuf_iterator< _CharT, char_traits< _CharT> > , _CharT *); 
# 474
template< bool _IsMove, class _CharT> typename __gnu_cxx::__enable_if< __is_char< _CharT> ::__value, _Deque_iterator< _CharT, _CharT &, _CharT *> > ::__type __copy_move_a2(istreambuf_iterator< _CharT, char_traits< _CharT> > , istreambuf_iterator< _CharT, char_traits< _CharT> > , _Deque_iterator< _CharT, _CharT &, _CharT *> ); 
# 483
template< bool _IsMove, class _II, class _OI> inline _OI 
# 486
__copy_move_a2(_II __first, _II __last, _OI __result) 
# 487
{ 
# 488
typedef typename iterator_traits< _II> ::iterator_category _Category; 
# 494
return std::template __copy_move< _IsMove, __memcpyable< _OI, _II> ::__value, typename iterator_traits< _II> ::iterator_category> ::__copy_m(__first, __last, __result); 
# 496
} 
# 498
template< bool _IsMove, class 
# 499
_Tp, class _Ref, class _Ptr, class _OI> _OI 
# 498
__copy_move_a1(_Deque_iterator< _Tp, _Ref, _Ptr> , _Deque_iterator< _Tp, _Ref, _Ptr> , _OI); 
# 505
template< bool _IsMove, class 
# 506
_ITp, class _IRef, class _IPtr, class _OTp> _Deque_iterator< _OTp, _OTp &, _OTp *>  
# 505
__copy_move_a1(_Deque_iterator< _ITp, _IRef, _IPtr> , _Deque_iterator< _ITp, _IRef, _IPtr> , _Deque_iterator< _OTp, _OTp &, _OTp *> ); 
# 512
template< bool _IsMove, class _II, class _Tp> typename __gnu_cxx::__enable_if< __is_random_access_iter< _II> ::__value, _Deque_iterator< _Tp, _Tp &, _Tp *> > ::__type __copy_move_a1(_II, _II, _Deque_iterator< _Tp, _Tp &, _Tp *> ); 
# 518
template< bool _IsMove, class _II, class _OI> inline _OI 
# 521
__copy_move_a1(_II __first, _II __last, _OI __result) 
# 522
{ return std::__copy_move_a2< _IsMove> (__first, __last, __result); } 
# 524
template< bool _IsMove, class _II, class _OI> inline _OI 
# 527
__copy_move_a(_II __first, _II __last, _OI __result) 
# 528
{ 
# 529
return std::__niter_wrap(__result, std::__copy_move_a1< _IsMove> (std::__niter_base(__first), std::__niter_base(__last), std::__niter_base(__result))); 
# 533
} 
# 535
template< bool _IsMove, class 
# 536
_Ite, class _Seq, class _Cat, class _OI> _OI 
# 535
__copy_move_a(const __gnu_debug::_Safe_iterator< _Ite, _Seq, _Cat>  &, const __gnu_debug::_Safe_iterator< _Ite, _Seq, _Cat>  &, _OI); 
# 542
template< bool _IsMove, class 
# 543
_II, class _Ite, class _Seq, class _Cat> __gnu_debug::_Safe_iterator< _Ite, _Seq, _Cat>  
# 542
__copy_move_a(_II, _II, const __gnu_debug::_Safe_iterator< _Ite, _Seq, _Cat>  &); 
# 548
template< bool _IsMove, class 
# 549
_IIte, class _ISeq, class _ICat, class 
# 550
_OIte, class _OSeq, class _OCat> __gnu_debug::_Safe_iterator< _OIte, _OSeq, _OCat>  
# 548
__copy_move_a(const __gnu_debug::_Safe_iterator< _IIte, _ISeq, _ICat>  &, const __gnu_debug::_Safe_iterator< _IIte, _ISeq, _ICat>  &, const __gnu_debug::_Safe_iterator< _OIte, _OSeq, _OCat>  &); 
# 556
template< class _InputIterator, class _Size, class _OutputIterator> _OutputIterator 
# 559
__copy_n_a(_InputIterator __first, _Size __n, _OutputIterator __result, bool) 
# 561
{ 
# 562
if (__n > 0) 
# 563
{ 
# 564
while (true) 
# 565
{ 
# 566
(*__result) = (*__first); 
# 567
++__result; 
# 568
if ((--__n) > 0) { 
# 569
++__first; } else { 
# 571
break; }  
# 572
}  
# 573
}  
# 574
return __result; 
# 575
} 
# 577
template< class _CharT, class _Size> typename __gnu_cxx::__enable_if< __is_char< _CharT> ::__value, _CharT *> ::__type __copy_n_a(istreambuf_iterator< _CharT, char_traits< _CharT> > , _Size, _CharT *, bool); 
# 583
template< class _CharT, class _Size> typename __gnu_cxx::__enable_if< __is_char< _CharT> ::__value, _Deque_iterator< _CharT, _CharT &, _CharT *> > ::__type __copy_n_a(istreambuf_iterator< _CharT, char_traits< _CharT> > , _Size, _Deque_iterator< _CharT, _CharT &, _CharT *> , bool); 
# 608 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_algobase.h" 3
template< class _II, class _OI> inline _OI 
# 611
copy(_II __first, _II __last, _OI __result) 
# 612
{ 
# 617
; 
# 619
return std::__copy_move_a< __is_move_iterator< _II> ::__value> (std::__miter_base(__first), std::__miter_base(__last), __result); 
# 621
} 
# 641 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_algobase.h" 3
template< class _II, class _OI> inline _OI 
# 644
move(_II __first, _II __last, _OI __result) 
# 645
{ 
# 650
; 
# 652
return std::__copy_move_a< true> (std::__miter_base(__first), std::__miter_base(__last), __result); 
# 654
} 
# 661
template< bool _IsMove, bool _IsSimple, class _Category> 
# 662
struct __copy_move_backward { 
# 664
template< class _BI1, class _BI2> static _BI2 
# 667
__copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result) 
# 668
{ 
# 669
while (__first != __last) { 
# 670
(*(--__result)) = (*(--__last)); }  
# 671
return __result; 
# 672
} 
# 673
}; 
# 676
template< class _Category> 
# 677
struct __copy_move_backward< true, false, _Category>  { 
# 679
template< class _BI1, class _BI2> static _BI2 
# 682
__copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result) 
# 683
{ 
# 684
while (__first != __last) { 
# 685
(*(--__result)) = std::move(*(--__last)); }  
# 686
return __result; 
# 687
} 
# 688
}; 
# 692
template<> struct __copy_move_backward< false, false, random_access_iterator_tag>  { 
# 694
template< class _BI1, class _BI2> static _BI2 
# 697
__copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result) 
# 698
{ 
# 700
typename iterator_traits< _BI1> ::difference_type __n = __last - __first; 
# 701
for (; __n > 0; --__n) { 
# 702
(*(--__result)) = (*(--__last)); }  
# 703
return __result; 
# 704
} 
# 705
}; 
# 709
template<> struct __copy_move_backward< true, false, random_access_iterator_tag>  { 
# 711
template< class _BI1, class _BI2> static _BI2 
# 714
__copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result) 
# 715
{ 
# 717
typename iterator_traits< _BI1> ::difference_type __n = __last - __first; 
# 718
for (; __n > 0; --__n) { 
# 719
(*(--__result)) = std::move(*(--__last)); }  
# 720
return __result; 
# 721
} 
# 722
}; 
# 725
template< bool _IsMove> 
# 726
struct __copy_move_backward< _IsMove, true, random_access_iterator_tag>  { 
# 728
template< class _Tp> static _Tp *
# 731
__copy_move_b(const _Tp *__first, const _Tp *__last, _Tp *__result) 
# 732
{ 
# 734
using __assignable = __conditional_t< _IsMove, is_move_assignable< _Tp> , is_copy_assignable< _Tp> > ; 
# 738
static_assert((__assignable::value), "type must be assignable");
# 740
const ptrdiff_t _Num = __last - __first; 
# 741
if (_Num) { 
# 742
__builtin_memmove(__result - _Num, __first, sizeof(_Tp) * _Num); }  
# 743
return __result - _Num; 
# 744
} 
# 745
}; 
# 747
template< bool _IsMove, class _BI1, class _BI2> inline _BI2 
# 750
__copy_move_backward_a2(_BI1 __first, _BI1 __last, _BI2 __result) 
# 751
{ 
# 752
typedef typename iterator_traits< _BI1> ::iterator_category _Category; 
# 758
return std::template __copy_move_backward< _IsMove, __memcpyable< _BI2, _BI1> ::__value, typename iterator_traits< _BI1> ::iterator_category> ::__copy_move_b(__first, __last, __result); 
# 763
} 
# 765
template< bool _IsMove, class _BI1, class _BI2> inline _BI2 
# 768
__copy_move_backward_a1(_BI1 __first, _BI1 __last, _BI2 __result) 
# 769
{ return std::__copy_move_backward_a2< _IsMove> (__first, __last, __result); } 
# 771
template< bool _IsMove, class 
# 772
_Tp, class _Ref, class _Ptr, class _OI> _OI 
# 771
__copy_move_backward_a1(_Deque_iterator< _Tp, _Ref, _Ptr> , _Deque_iterator< _Tp, _Ref, _Ptr> , _OI); 
# 778
template< bool _IsMove, class 
# 779
_ITp, class _IRef, class _IPtr, class _OTp> _Deque_iterator< _OTp, _OTp &, _OTp *>  
# 778
__copy_move_backward_a1(_Deque_iterator< _ITp, _IRef, _IPtr> , _Deque_iterator< _ITp, _IRef, _IPtr> , _Deque_iterator< _OTp, _OTp &, _OTp *> ); 
# 786
template< bool _IsMove, class _II, class _Tp> typename __gnu_cxx::__enable_if< __is_random_access_iter< _II> ::__value, _Deque_iterator< _Tp, _Tp &, _Tp *> > ::__type __copy_move_backward_a1(_II, _II, _Deque_iterator< _Tp, _Tp &, _Tp *> ); 
# 793
template< bool _IsMove, class _II, class _OI> inline _OI 
# 796
__copy_move_backward_a(_II __first, _II __last, _OI __result) 
# 797
{ 
# 798
return std::__niter_wrap(__result, std::__copy_move_backward_a1< _IsMove> (std::__niter_base(__first), std::__niter_base(__last), std::__niter_base(__result))); 
# 802
} 
# 804
template< bool _IsMove, class 
# 805
_Ite, class _Seq, class _Cat, class _OI> _OI 
# 804
__copy_move_backward_a(const __gnu_debug::_Safe_iterator< _Ite, _Seq, _Cat>  &, const __gnu_debug::_Safe_iterator< _Ite, _Seq, _Cat>  &, _OI); 
# 812
template< bool _IsMove, class 
# 813
_II, class _Ite, class _Seq, class _Cat> __gnu_debug::_Safe_iterator< _Ite, _Seq, _Cat>  
# 812
__copy_move_backward_a(_II, _II, const __gnu_debug::_Safe_iterator< _Ite, _Seq, _Cat>  &); 
# 818
template< bool _IsMove, class 
# 819
_IIte, class _ISeq, class _ICat, class 
# 820
_OIte, class _OSeq, class _OCat> __gnu_debug::_Safe_iterator< _OIte, _OSeq, _OCat>  
# 818
__copy_move_backward_a(const __gnu_debug::_Safe_iterator< _IIte, _ISeq, _ICat>  &, const __gnu_debug::_Safe_iterator< _IIte, _ISeq, _ICat>  &, const __gnu_debug::_Safe_iterator< _OIte, _OSeq, _OCat>  &); 
# 845 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_algobase.h" 3
template< class _BI1, class _BI2> inline _BI2 
# 848
copy_backward(_BI1 __first, _BI1 __last, _BI2 __result) 
# 849
{ 
# 855
; 
# 857
return std::__copy_move_backward_a< __is_move_iterator< _BI1> ::__value> (std::__miter_base(__first), std::__miter_base(__last), __result); 
# 859
} 
# 880 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_algobase.h" 3
template< class _BI1, class _BI2> inline _BI2 
# 883
move_backward(_BI1 __first, _BI1 __last, _BI2 __result) 
# 884
{ 
# 890
; 
# 892
return std::__copy_move_backward_a< true> (std::__miter_base(__first), std::__miter_base(__last), __result); 
# 895
} 
# 902
template< class _ForwardIterator, class _Tp> inline typename __gnu_cxx::__enable_if< !__is_scalar< _Tp> ::__value, void> ::__type 
# 906
__fill_a1(_ForwardIterator __first, _ForwardIterator __last, const _Tp &
# 907
__value) 
# 908
{ 
# 909
for (; __first != __last; ++__first) { 
# 910
(*__first) = __value; }  
# 911
} 
# 913
template< class _ForwardIterator, class _Tp> inline typename __gnu_cxx::__enable_if< __is_scalar< _Tp> ::__value, void> ::__type 
# 917
__fill_a1(_ForwardIterator __first, _ForwardIterator __last, const _Tp &
# 918
__value) 
# 919
{ 
# 920
const _Tp __tmp = __value; 
# 921
for (; __first != __last; ++__first) { 
# 922
(*__first) = __tmp; }  
# 923
} 
# 926
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_byte< _Tp> ::__value, void> ::__type 
# 930
__fill_a1(_Tp *__first, _Tp *__last, const _Tp &__c) 
# 931
{ 
# 932
const _Tp __tmp = __c; 
# 941 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_algobase.h" 3
if (const size_t __len = __last - __first) { 
# 942
__builtin_memset(__first, static_cast< unsigned char>(__tmp), __len); }  
# 943
} 
# 945
template< class _Ite, class _Cont, class _Tp> inline void 
# 948
__fill_a1(__gnu_cxx::__normal_iterator< _Ite, _Cont>  __first, __gnu_cxx::__normal_iterator< _Ite, _Cont>  
# 949
__last, const _Tp &
# 950
__value) 
# 951
{ std::__fill_a1(__first.base(), __last.base(), __value); } 
# 953
template< class _Tp, class _VTp> void __fill_a1(const _Deque_iterator< _Tp, _Tp &, _Tp *>  &, const _Deque_iterator< _Tp, _Tp &, _Tp *>  &, const _VTp &); 
# 961
void __fill_a1(_Bit_iterator, _Bit_iterator, const bool &); 
# 964
template< class _FIte, class _Tp> inline void 
# 967
__fill_a(_FIte __first, _FIte __last, const _Tp &__value) 
# 968
{ std::__fill_a1(__first, __last, __value); } 
# 970
template< class _Ite, class _Seq, class _Cat, class _Tp> void __fill_a(const __gnu_debug::_Safe_iterator< _Ite, _Seq, _Cat>  &, const __gnu_debug::_Safe_iterator< _Ite, _Seq, _Cat>  &, const _Tp &); 
# 988 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_algobase.h" 3
template< class _ForwardIterator, class _Tp> inline void 
# 991
fill(_ForwardIterator __first, _ForwardIterator __last, const _Tp &__value) 
# 992
{ 
# 996
; 
# 998
std::__fill_a(__first, __last, __value); 
# 999
} 
# 1003
constexpr int __size_to_integer(int __n) { return __n; } 
# 1005
constexpr unsigned __size_to_integer(unsigned __n) { return __n; } 
# 1007
constexpr long __size_to_integer(long __n) { return __n; } 
# 1009
constexpr unsigned long __size_to_integer(unsigned long __n) { return __n; } 
# 1011
constexpr long long __size_to_integer(long long __n) { return __n; } 
# 1013
constexpr unsigned long long __size_to_integer(unsigned long long __n) { return __n; } 
# 1017
__extension__ constexpr __int128 __size_to_integer(__int128 __n) { return __n; } 
# 1019
__extension__ constexpr unsigned __int128 __size_to_integer(unsigned __int128 __n) { return __n; } 
# 1041 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_algobase.h" 3
constexpr long long __size_to_integer(float __n) { return (long long)__n; } 
# 1043
constexpr long long __size_to_integer(double __n) { return (long long)__n; } 
# 1045
constexpr long long __size_to_integer(long double __n) { return (long long)__n; } 
# 1048
__extension__ constexpr long long __size_to_integer(__float128 __n) { return (long long)__n; } 
# 1051
template< class _OutputIterator, class _Size, class _Tp> inline typename __gnu_cxx::__enable_if< !__is_scalar< _Tp> ::__value, _OutputIterator> ::__type 
# 1055
__fill_n_a1(_OutputIterator __first, _Size __n, const _Tp &__value) 
# 1056
{ 
# 1057
for (; __n > 0; (--__n), ((void)(++__first))) { 
# 1058
(*__first) = __value; }  
# 1059
return __first; 
# 1060
} 
# 1062
template< class _OutputIterator, class _Size, class _Tp> inline typename __gnu_cxx::__enable_if< __is_scalar< _Tp> ::__value, _OutputIterator> ::__type 
# 1066
__fill_n_a1(_OutputIterator __first, _Size __n, const _Tp &__value) 
# 1067
{ 
# 1068
const _Tp __tmp = __value; 
# 1069
for (; __n > 0; (--__n), ((void)(++__first))) { 
# 1070
(*__first) = __tmp; }  
# 1071
return __first; 
# 1072
} 
# 1074
template< class _Ite, class _Seq, class _Cat, class _Size, class 
# 1075
_Tp> __gnu_debug::_Safe_iterator< _Ite, _Seq, _Cat>  
# 1074
__fill_n_a(const __gnu_debug::_Safe_iterator< _Ite, _Seq, _Cat>  & __first, _Size __n, const _Tp & __value, input_iterator_tag); 
# 1081
template< class _OutputIterator, class _Size, class _Tp> inline _OutputIterator 
# 1084
__fill_n_a(_OutputIterator __first, _Size __n, const _Tp &__value, output_iterator_tag) 
# 1086
{ 
# 1088
static_assert((is_integral< _Size> {}), "fill_n must pass integral size");
# 1090
return __fill_n_a1(__first, __n, __value); 
# 1091
} 
# 1093
template< class _OutputIterator, class _Size, class _Tp> inline _OutputIterator 
# 1096
__fill_n_a(_OutputIterator __first, _Size __n, const _Tp &__value, input_iterator_tag) 
# 1098
{ 
# 1100
static_assert((is_integral< _Size> {}), "fill_n must pass integral size");
# 1102
return __fill_n_a1(__first, __n, __value); 
# 1103
} 
# 1105
template< class _OutputIterator, class _Size, class _Tp> inline _OutputIterator 
# 1108
__fill_n_a(_OutputIterator __first, _Size __n, const _Tp &__value, random_access_iterator_tag) 
# 1110
{ 
# 1112
static_assert((is_integral< _Size> {}), "fill_n must pass integral size");
# 1114
if (__n <= 0) { 
# 1115
return __first; }  
# 1117
; 
# 1119
std::__fill_a(__first, __first + __n, __value); 
# 1120
return __first + __n; 
# 1121
} 
# 1140 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_algobase.h" 3
template< class _OI, class _Size, class _Tp> inline _OI 
# 1143
fill_n(_OI __first, _Size __n, const _Tp &__value) 
# 1144
{ 
# 1148
return std::__fill_n_a(__first, std::__size_to_integer(__n), __value, std::__iterator_category(__first)); 
# 1150
} 
# 1152
template< bool _BoolType> 
# 1153
struct __equal { 
# 1155
template< class _II1, class _II2> static bool 
# 1158
equal(_II1 __first1, _II1 __last1, _II2 __first2) 
# 1159
{ 
# 1160
for (; __first1 != __last1; (++__first1), ((void)(++__first2))) { 
# 1161
if (!((*__first1) == (*__first2))) { 
# 1162
return false; }  }  
# 1163
return true; 
# 1164
} 
# 1165
}; 
# 1168
template<> struct __equal< true>  { 
# 1170
template< class _Tp> static bool 
# 1173
equal(const _Tp *__first1, const _Tp *__last1, const _Tp *__first2) 
# 1174
{ 
# 1175
if (const size_t __len = __last1 - __first1) { 
# 1176
return !std::__memcmp(__first1, __first2, __len); }  
# 1177
return true; 
# 1178
} 
# 1179
}; 
# 1181
template< class _Tp, class _Ref, class _Ptr, class _II> typename __gnu_cxx::__enable_if< __is_random_access_iter< _II> ::__value, bool> ::__type __equal_aux1(_Deque_iterator< _Tp, _Ref, _Ptr> , _Deque_iterator< _Tp, _Ref, _Ptr> , _II); 
# 1188
template< class _Tp1, class _Ref1, class _Ptr1, class 
# 1189
_Tp2, class _Ref2, class _Ptr2> bool 
# 1188
__equal_aux1(_Deque_iterator< _Tp1, _Ref1, _Ptr1> , _Deque_iterator< _Tp1, _Ref1, _Ptr1> , _Deque_iterator< _Tp2, _Ref2, _Ptr2> ); 
# 1195
template< class _II, class _Tp, class _Ref, class _Ptr> typename __gnu_cxx::__enable_if< __is_random_access_iter< _II> ::__value, bool> ::__type __equal_aux1(_II, _II, _Deque_iterator< _Tp, _Ref, _Ptr> ); 
# 1201
template< class _II1, class _II2> inline bool 
# 1204
__equal_aux1(_II1 __first1, _II1 __last1, _II2 __first2) 
# 1205
{ 
# 1206
typedef typename iterator_traits< _II1> ::value_type _ValueType1; 
# 1207
const bool __simple = ((__is_integer< typename iterator_traits< _II1> ::value_type> ::__value || __is_pointer< typename iterator_traits< _II1> ::value_type> ::__value) && __memcmpable< _II1, _II2> ::__value); 
# 1210
return std::template __equal< __simple> ::equal(__first1, __last1, __first2); 
# 1211
} 
# 1213
template< class _II1, class _II2> inline bool 
# 1216
__equal_aux(_II1 __first1, _II1 __last1, _II2 __first2) 
# 1217
{ 
# 1218
return std::__equal_aux1(std::__niter_base(__first1), std::__niter_base(__last1), std::__niter_base(__first2)); 
# 1221
} 
# 1223
template< class _II1, class _Seq1, class _Cat1, class _II2> bool __equal_aux(const __gnu_debug::_Safe_iterator< _II1, _Seq1, _Cat1>  &, const __gnu_debug::_Safe_iterator< _II1, _Seq1, _Cat1>  &, _II2); 
# 1229
template< class _II1, class _II2, class _Seq2, class _Cat2> bool __equal_aux(_II1, _II1, const __gnu_debug::_Safe_iterator< _II2, _Seq2, _Cat2>  &); 
# 1234
template< class _II1, class _Seq1, class _Cat1, class 
# 1235
_II2, class _Seq2, class _Cat2> bool 
# 1234
__equal_aux(const __gnu_debug::_Safe_iterator< _II1, _Seq1, _Cat1>  &, const __gnu_debug::_Safe_iterator< _II1, _Seq1, _Cat1>  &, const __gnu_debug::_Safe_iterator< _II2, _Seq2, _Cat2>  &); 
# 1241
template< class , class > 
# 1242
struct __lc_rai { 
# 1244
template< class _II1, class _II2> static _II1 
# 1247
__newlast1(_II1, _II1 __last1, _II2, _II2) 
# 1248
{ return __last1; } 
# 1250
template< class _II> static bool 
# 1253
__cnd2(_II __first, _II __last) 
# 1254
{ return __first != __last; } 
# 1255
}; 
# 1258
template<> struct __lc_rai< random_access_iterator_tag, random_access_iterator_tag>  { 
# 1260
template< class _RAI1, class _RAI2> static _RAI1 
# 1263
__newlast1(_RAI1 __first1, _RAI1 __last1, _RAI2 
# 1264
__first2, _RAI2 __last2) 
# 1265
{ 
# 1267
const typename iterator_traits< _RAI1> ::difference_type __diff1 = __last1 - __first1; 
# 1269
const typename iterator_traits< _RAI2> ::difference_type __diff2 = __last2 - __first2; 
# 1270
return (__diff2 < __diff1) ? __first1 + __diff2 : __last1; 
# 1271
} 
# 1273
template< class _RAI> static bool 
# 1275
__cnd2(_RAI, _RAI) 
# 1276
{ return true; } 
# 1277
}; 
# 1279
template< class _II1, class _II2, class _Compare> bool 
# 1282
__lexicographical_compare_impl(_II1 __first1, _II1 __last1, _II2 
# 1283
__first2, _II2 __last2, _Compare 
# 1284
__comp) 
# 1285
{ 
# 1286
typedef typename iterator_traits< _II1> ::iterator_category _Category1; 
# 1287
typedef typename iterator_traits< _II2> ::iterator_category _Category2; 
# 1288
typedef __lc_rai< typename iterator_traits< _II1> ::iterator_category, typename iterator_traits< _II2> ::iterator_category>  __rai_type; 
# 1290
__last1 = __rai_type::__newlast1(__first1, __last1, __first2, __last2); 
# 1291
for (; (__first1 != __last1) && __rai_type::__cnd2(__first2, __last2); (++__first1), ((void)(++__first2))) 
# 1293
{ 
# 1294
if (__comp(__first1, __first2)) { 
# 1295
return true; }  
# 1296
if (__comp(__first2, __first1)) { 
# 1297
return false; }  
# 1298
}  
# 1299
return (__first1 == __last1) && (__first2 != __last2); 
# 1300
} 
# 1302
template< bool _BoolType> 
# 1303
struct __lexicographical_compare { 
# 1305
template< class _II1, class _II2> static bool 
# 1308
__lc(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2) 
# 1309
{ 
# 1310
using __gnu_cxx::__ops::__iter_less_iter;
# 1311
return std::__lexicographical_compare_impl(__first1, __last1, __first2, __last2, __iter_less_iter()); 
# 1314
} 
# 1316
template< class _II1, class _II2> static int 
# 1319
__3way(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2) 
# 1320
{ 
# 1321
while (__first1 != __last1) 
# 1322
{ 
# 1323
if (__first2 == __last2) { 
# 1324
return +1; }  
# 1325
if ((*__first1) < (*__first2)) { 
# 1326
return -1; }  
# 1327
if ((*__first2) < (*__first1)) { 
# 1328
return +1; }  
# 1329
++__first1; 
# 1330
++__first2; 
# 1331
}  
# 1332
return ((int)(__first2 == __last2)) - 1; 
# 1333
} 
# 1334
}; 
# 1337
template<> struct __lexicographical_compare< true>  { 
# 1339
template< class _Tp, class _Up> static bool 
# 1342
__lc(const _Tp *__first1, const _Tp *__last1, const _Up *
# 1343
__first2, const _Up *__last2) 
# 1344
{ return __3way(__first1, __last1, __first2, __last2) < 0; } 
# 1346
template< class _Tp, class _Up> static ptrdiff_t 
# 1349
__3way(const _Tp *__first1, const _Tp *__last1, const _Up *
# 1350
__first2, const _Up *__last2) 
# 1351
{ 
# 1352
const size_t __len1 = __last1 - __first1; 
# 1353
const size_t __len2 = __last2 - __first2; 
# 1354
if (const size_t __len = std::min(__len1, __len2)) { 
# 1355
if (int __result = std::__memcmp(__first1, __first2, __len)) { 
# 1356
return __result; }  }  
# 1357
return (ptrdiff_t)(__len1 - __len2); 
# 1358
} 
# 1359
}; 
# 1361
template< class _II1, class _II2> inline bool 
# 1364
__lexicographical_compare_aux1(_II1 __first1, _II1 __last1, _II2 
# 1365
__first2, _II2 __last2) 
# 1366
{ 
# 1367
typedef typename iterator_traits< _II1> ::value_type _ValueType1; 
# 1368
typedef typename iterator_traits< _II2> ::value_type _ValueType2; 
# 1369
const bool __simple = (__is_memcmp_ordered_with< typename iterator_traits< _II1> ::value_type, typename iterator_traits< _II2> ::value_type> ::__value && __is_pointer< _II1> ::__value && __is_pointer< _II2> ::__value); 
# 1382
return std::template __lexicographical_compare< __simple> ::__lc(__first1, __last1, __first2, __last2); 
# 1384
} 
# 1386
template< class _Tp1, class _Ref1, class _Ptr1, class 
# 1387
_Tp2> bool 
# 1386
__lexicographical_compare_aux1(_Deque_iterator< _Tp1, _Ref1, _Ptr1> , _Deque_iterator< _Tp1, _Ref1, _Ptr1> , _Tp2 *, _Tp2 *); 
# 1394
template< class _Tp1, class 
# 1395
_Tp2, class _Ref2, class _Ptr2> bool 
# 1394
__lexicographical_compare_aux1(_Tp1 *, _Tp1 *, _Deque_iterator< _Tp2, _Ref2, _Ptr2> , _Deque_iterator< _Tp2, _Ref2, _Ptr2> ); 
# 1401
template< class _Tp1, class _Ref1, class _Ptr1, class 
# 1402
_Tp2, class _Ref2, class _Ptr2> bool 
# 1401
__lexicographical_compare_aux1(_Deque_iterator< _Tp1, _Ref1, _Ptr1> , _Deque_iterator< _Tp1, _Ref1, _Ptr1> , _Deque_iterator< _Tp2, _Ref2, _Ptr2> , _Deque_iterator< _Tp2, _Ref2, _Ptr2> ); 
# 1410
template< class _II1, class _II2> inline bool 
# 1413
__lexicographical_compare_aux(_II1 __first1, _II1 __last1, _II2 
# 1414
__first2, _II2 __last2) 
# 1415
{ 
# 1416
return std::__lexicographical_compare_aux1(std::__niter_base(__first1), std::__niter_base(__last1), std::__niter_base(__first2), std::__niter_base(__last2)); 
# 1420
} 
# 1422
template< class _Iter1, class _Seq1, class _Cat1, class 
# 1423
_II2> bool 
# 1422
__lexicographical_compare_aux(const __gnu_debug::_Safe_iterator< _Iter1, _Seq1, _Cat1>  &, const __gnu_debug::_Safe_iterator< _Iter1, _Seq1, _Cat1>  &, _II2, _II2); 
# 1430
template< class _II1, class 
# 1431
_Iter2, class _Seq2, class _Cat2> bool 
# 1430
__lexicographical_compare_aux(_II1, _II1, const __gnu_debug::_Safe_iterator< _Iter2, _Seq2, _Cat2>  &, const __gnu_debug::_Safe_iterator< _Iter2, _Seq2, _Cat2>  &); 
# 1438
template< class _Iter1, class _Seq1, class _Cat1, class 
# 1439
_Iter2, class _Seq2, class _Cat2> bool 
# 1438
__lexicographical_compare_aux(const __gnu_debug::_Safe_iterator< _Iter1, _Seq1, _Cat1>  &, const __gnu_debug::_Safe_iterator< _Iter1, _Seq1, _Cat1>  &, const __gnu_debug::_Safe_iterator< _Iter2, _Seq2, _Cat2>  &, const __gnu_debug::_Safe_iterator< _Iter2, _Seq2, _Cat2>  &); 
# 1447
template< class _ForwardIterator, class _Tp, class _Compare> _ForwardIterator 
# 1450
__lower_bound(_ForwardIterator __first, _ForwardIterator __last, const _Tp &
# 1451
__val, _Compare __comp) 
# 1452
{ 
# 1454
typedef typename iterator_traits< _ForwardIterator> ::difference_type _DistanceType; 
# 1456
_DistanceType __len = std::distance(__first, __last); 
# 1458
while (__len > 0) 
# 1459
{ 
# 1460
_DistanceType __half = __len >> 1; 
# 1461
_ForwardIterator __middle = __first; 
# 1462
std::advance(__middle, __half); 
# 1463
if (__comp(__middle, __val)) 
# 1464
{ 
# 1465
__first = __middle; 
# 1466
++__first; 
# 1467
__len = ((__len - __half) - 1); 
# 1468
} else { 
# 1470
__len = __half; }  
# 1471
}  
# 1472
return __first; 
# 1473
} 
# 1486 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_algobase.h" 3
template< class _ForwardIterator, class _Tp> inline _ForwardIterator 
# 1489
lower_bound(_ForwardIterator __first, _ForwardIterator __last, const _Tp &
# 1490
__val) 
# 1491
{ 
# 1496
; 
# 1498
return std::__lower_bound(__first, __last, __val, __gnu_cxx::__ops::__iter_less_val()); 
# 1500
} 
# 1505
constexpr int __lg(int __n) 
# 1506
{ return ((((int)sizeof(int)) * 8) - 1) - __builtin_clz(__n); } 
# 1509
constexpr unsigned __lg(unsigned __n) 
# 1510
{ return ((((int)sizeof(int)) * 8) - 1) - __builtin_clz(__n); } 
# 1513
constexpr long __lg(long __n) 
# 1514
{ return ((((int)sizeof(long)) * 8) - 1) - __builtin_clzl(__n); } 
# 1517
constexpr unsigned long __lg(unsigned long __n) 
# 1518
{ return ((((int)sizeof(long)) * 8) - 1) - __builtin_clzl(__n); } 
# 1521
constexpr long long __lg(long long __n) 
# 1522
{ return ((((int)sizeof(long long)) * 8) - 1) - __builtin_clzll(__n); } 
# 1525
constexpr unsigned long long __lg(unsigned long long __n) 
# 1526
{ return ((((int)sizeof(long long)) * 8) - 1) - __builtin_clzll(__n); } 
# 1542 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_algobase.h" 3
template< class _II1, class _II2> inline bool 
# 1545
equal(_II1 __first1, _II1 __last1, _II2 __first2) 
# 1546
{ 
# 1553
; 
# 1555
return std::__equal_aux(__first1, __last1, __first2); 
# 1556
} 
# 1573 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_algobase.h" 3
template< class _IIter1, class _IIter2, class _BinaryPredicate> inline bool 
# 1576
equal(_IIter1 __first1, _IIter1 __last1, _IIter2 
# 1577
__first2, _BinaryPredicate __binary_pred) 
# 1578
{ 
# 1582
; 
# 1584
for (; __first1 != __last1; (++__first1), ((void)(++__first2))) { 
# 1585
if (!((bool)__binary_pred(*__first1, *__first2))) { 
# 1586
return false; }  }  
# 1587
return true; 
# 1588
} 
# 1592
template< class _II1, class _II2> inline bool 
# 1595
__equal4(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2) 
# 1596
{ 
# 1597
using _RATag = random_access_iterator_tag; 
# 1598
using _Cat1 = typename iterator_traits< _II1> ::iterator_category; 
# 1599
using _Cat2 = typename iterator_traits< _II2> ::iterator_category; 
# 1600
using _RAIters = __and_< is_same< typename iterator_traits< _II1> ::iterator_category, random_access_iterator_tag> , is_same< typename iterator_traits< _II2> ::iterator_category, random_access_iterator_tag> > ; 
# 1601
if (_RAIters()) 
# 1602
{ 
# 1603
auto __d1 = std::distance(__first1, __last1); 
# 1604
auto __d2 = std::distance(__first2, __last2); 
# 1605
if (__d1 != __d2) { 
# 1606
return false; }  
# 1607
return std::equal(__first1, __last1, __first2); 
# 1608
}  
# 1610
for (; (__first1 != __last1) && (__first2 != __last2); (++__first1), ((void)(++__first2))) { 
# 1612
if (!((*__first1) == (*__first2))) { 
# 1613
return false; }  }  
# 1614
return (__first1 == __last1) && (__first2 == __last2); 
# 1615
} 
# 1618
template< class _II1, class _II2, class _BinaryPredicate> inline bool 
# 1621
__equal4(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2, _BinaryPredicate 
# 1622
__binary_pred) 
# 1623
{ 
# 1624
using _RATag = random_access_iterator_tag; 
# 1625
using _Cat1 = typename iterator_traits< _II1> ::iterator_category; 
# 1626
using _Cat2 = typename iterator_traits< _II2> ::iterator_category; 
# 1627
using _RAIters = __and_< is_same< typename iterator_traits< _II1> ::iterator_category, random_access_iterator_tag> , is_same< typename iterator_traits< _II2> ::iterator_category, random_access_iterator_tag> > ; 
# 1628
if (_RAIters()) 
# 1629
{ 
# 1630
auto __d1 = std::distance(__first1, __last1); 
# 1631
auto __d2 = std::distance(__first2, __last2); 
# 1632
if (__d1 != __d2) { 
# 1633
return false; }  
# 1634
return std::equal(__first1, __last1, __first2, __binary_pred); 
# 1636
}  
# 1638
for (; (__first1 != __last1) && (__first2 != __last2); (++__first1), ((void)(++__first2))) { 
# 1640
if (!((bool)__binary_pred(*__first1, *__first2))) { 
# 1641
return false; }  }  
# 1642
return (__first1 == __last1) && (__first2 == __last2); 
# 1643
} 
# 1663 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_algobase.h" 3
template< class _II1, class _II2> inline bool 
# 1666
equal(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2) 
# 1667
{ 
# 1674
; 
# 1675
; 
# 1677
return std::__equal4(__first1, __last1, __first2, __last2); 
# 1678
} 
# 1696 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_algobase.h" 3
template< class _IIter1, class _IIter2, class _BinaryPredicate> inline bool 
# 1699
equal(_IIter1 __first1, _IIter1 __last1, _IIter2 
# 1700
__first2, _IIter2 __last2, _BinaryPredicate __binary_pred) 
# 1701
{ 
# 1705
; 
# 1706
; 
# 1708
return std::__equal4(__first1, __last1, __first2, __last2, __binary_pred); 
# 1710
} 
# 1728 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_algobase.h" 3
template< class _II1, class _II2> inline bool 
# 1731
lexicographical_compare(_II1 __first1, _II1 __last1, _II2 
# 1732
__first2, _II2 __last2) 
# 1733
{ 
# 1743
; 
# 1744
; 
# 1746
return std::__lexicographical_compare_aux(__first1, __last1, __first2, __last2); 
# 1748
} 
# 1763 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_algobase.h" 3
template< class _II1, class _II2, class _Compare> inline bool 
# 1766
lexicographical_compare(_II1 __first1, _II1 __last1, _II2 
# 1767
__first2, _II2 __last2, _Compare __comp) 
# 1768
{ 
# 1772
; 
# 1773
; 
# 1775
return std::__lexicographical_compare_impl(__first1, __last1, __first2, __last2, __gnu_cxx::__ops::__iter_comp_iter(__comp)); 
# 1778
} 
# 1875 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_algobase.h" 3
template< class _InputIterator1, class _InputIterator2, class 
# 1876
_BinaryPredicate> pair< _InputIterator1, _InputIterator2>  
# 1879
__mismatch(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 1880
__first2, _BinaryPredicate __binary_pred) 
# 1881
{ 
# 1882
while ((__first1 != __last1) && __binary_pred(__first1, __first2)) 
# 1883
{ 
# 1884
++__first1; 
# 1885
++__first2; 
# 1886
}  
# 1887
return pair< _InputIterator1, _InputIterator2> (__first1, __first2); 
# 1888
} 
# 1903 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_algobase.h" 3
template< class _InputIterator1, class _InputIterator2> inline pair< _InputIterator1, _InputIterator2>  
# 1906
mismatch(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 1907
__first2) 
# 1908
{ 
# 1915
; 
# 1917
return std::__mismatch(__first1, __last1, __first2, __gnu_cxx::__ops::__iter_equal_to_iter()); 
# 1919
} 
# 1937 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_algobase.h" 3
template< class _InputIterator1, class _InputIterator2, class 
# 1938
_BinaryPredicate> inline pair< _InputIterator1, _InputIterator2>  
# 1941
mismatch(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 1942
__first2, _BinaryPredicate __binary_pred) 
# 1943
{ 
# 1947
; 
# 1949
return std::__mismatch(__first1, __last1, __first2, __gnu_cxx::__ops::__iter_comp_iter(__binary_pred)); 
# 1951
} 
# 1955
template< class _InputIterator1, class _InputIterator2, class 
# 1956
_BinaryPredicate> pair< _InputIterator1, _InputIterator2>  
# 1959
__mismatch(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 1960
__first2, _InputIterator2 __last2, _BinaryPredicate 
# 1961
__binary_pred) 
# 1962
{ 
# 1963
while ((__first1 != __last1) && (__first2 != __last2) && __binary_pred(__first1, __first2)) 
# 1965
{ 
# 1966
++__first1; 
# 1967
++__first2; 
# 1968
}  
# 1969
return pair< _InputIterator1, _InputIterator2> (__first1, __first2); 
# 1970
} 
# 1986 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_algobase.h" 3
template< class _InputIterator1, class _InputIterator2> inline pair< _InputIterator1, _InputIterator2>  
# 1989
mismatch(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 1990
__first2, _InputIterator2 __last2) 
# 1991
{ 
# 1998
; 
# 1999
; 
# 2001
return std::__mismatch(__first1, __last1, __first2, __last2, __gnu_cxx::__ops::__iter_equal_to_iter()); 
# 2003
} 
# 2022 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_algobase.h" 3
template< class _InputIterator1, class _InputIterator2, class 
# 2023
_BinaryPredicate> inline pair< _InputIterator1, _InputIterator2>  
# 2026
mismatch(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 2027
__first2, _InputIterator2 __last2, _BinaryPredicate 
# 2028
__binary_pred) 
# 2029
{ 
# 2033
; 
# 2034
; 
# 2036
return std::__mismatch(__first1, __last1, __first2, __last2, __gnu_cxx::__ops::__iter_comp_iter(__binary_pred)); 
# 2038
} 
# 2044
template< class _InputIterator, class _Predicate> inline _InputIterator 
# 2047
__find_if(_InputIterator __first, _InputIterator __last, _Predicate 
# 2048
__pred, input_iterator_tag) 
# 2049
{ 
# 2050
while ((__first != __last) && (!__pred(__first))) { 
# 2051
++__first; }  
# 2052
return __first; 
# 2053
} 
# 2056
template< class _RandomAccessIterator, class _Predicate> _RandomAccessIterator 
# 2059
__find_if(_RandomAccessIterator __first, _RandomAccessIterator __last, _Predicate 
# 2060
__pred, random_access_iterator_tag) 
# 2061
{ 
# 2063
typename iterator_traits< _RandomAccessIterator> ::difference_type __trip_count = (__last - __first) >> 2; 
# 2065
for (; __trip_count > 0; --__trip_count) 
# 2066
{ 
# 2067
if (__pred(__first)) { 
# 2068
return __first; }  
# 2069
++__first; 
# 2071
if (__pred(__first)) { 
# 2072
return __first; }  
# 2073
++__first; 
# 2075
if (__pred(__first)) { 
# 2076
return __first; }  
# 2077
++__first; 
# 2079
if (__pred(__first)) { 
# 2080
return __first; }  
# 2081
++__first; 
# 2082
}  
# 2084
switch (__last - __first) 
# 2085
{ 
# 2086
case 3:  
# 2087
if (__pred(__first)) { 
# 2088
return __first; }  
# 2089
++__first; 
# 2091
case 2:  
# 2092
if (__pred(__first)) { 
# 2093
return __first; }  
# 2094
++__first; 
# 2096
case 1:  
# 2097
if (__pred(__first)) { 
# 2098
return __first; }  
# 2099
++__first; 
# 2101
case 0:  
# 2102
default:  
# 2103
return __last; 
# 2104
}  
# 2105
} 
# 2107
template< class _Iterator, class _Predicate> inline _Iterator 
# 2110
__find_if(_Iterator __first, _Iterator __last, _Predicate __pred) 
# 2111
{ 
# 2112
return __find_if(__first, __last, __pred, std::__iterator_category(__first)); 
# 2114
} 
# 2116
template< class _InputIterator, class _Predicate> typename iterator_traits< _InputIterator> ::difference_type 
# 2119
__count_if(_InputIterator __first, _InputIterator __last, _Predicate __pred) 
# 2120
{ 
# 2121
typename iterator_traits< _InputIterator> ::difference_type __n = (0); 
# 2122
for (; __first != __last; ++__first) { 
# 2123
if (__pred(__first)) { 
# 2124
++__n; }  }  
# 2125
return __n; 
# 2126
} 
# 2128
template< class _ForwardIterator, class _Predicate> _ForwardIterator 
# 2131
__remove_if(_ForwardIterator __first, _ForwardIterator __last, _Predicate 
# 2132
__pred) 
# 2133
{ 
# 2134
__first = std::__find_if(__first, __last, __pred); 
# 2135
if (__first == __last) { 
# 2136
return __first; }  
# 2137
_ForwardIterator __result = __first; 
# 2138
++__first; 
# 2139
for (; __first != __last; ++__first) { 
# 2140
if (!__pred(__first)) 
# 2141
{ 
# 2142
(*__result) = std::move(*__first); 
# 2143
++__result; 
# 2144
}  }  
# 2145
return __result; 
# 2146
} 
# 2149
template< class _ForwardIterator1, class _ForwardIterator2, class 
# 2150
_BinaryPredicate> bool 
# 2153
__is_permutation(_ForwardIterator1 __first1, _ForwardIterator1 __last1, _ForwardIterator2 
# 2154
__first2, _BinaryPredicate __pred) 
# 2155
{ 
# 2158
for (; __first1 != __last1; (++__first1), ((void)(++__first2))) { 
# 2159
if (!__pred(__first1, __first2)) { 
# 2160
break; }  }  
# 2162
if (__first1 == __last1) { 
# 2163
return true; }  
# 2167
_ForwardIterator2 __last2 = __first2; 
# 2168
std::advance(__last2, std::distance(__first1, __last1)); 
# 2169
for (_ForwardIterator1 __scan = __first1; __scan != __last1; ++__scan) 
# 2170
{ 
# 2171
if (__scan != std::__find_if(__first1, __scan, __gnu_cxx::__ops::__iter_comp_iter(__pred, __scan))) { 
# 2173
continue; }  
# 2175
auto __matches = std::__count_if(__first2, __last2, __gnu_cxx::__ops::__iter_comp_iter(__pred, __scan)); 
# 2178
if ((0 == __matches) || (std::__count_if(__scan, __last1, __gnu_cxx::__ops::__iter_comp_iter(__pred, __scan)) != __matches)) { 
# 2182
return false; }  
# 2183
}   
# 2184
return true; 
# 2185
} 
# 2199 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_algobase.h" 3
template< class _ForwardIterator1, class _ForwardIterator2> inline bool 
# 2202
is_permutation(_ForwardIterator1 __first1, _ForwardIterator1 __last1, _ForwardIterator2 
# 2203
__first2) 
# 2204
{ 
# 2211
; 
# 2213
return std::__is_permutation(__first1, __last1, __first2, __gnu_cxx::__ops::__iter_equal_to_iter()); 
# 2215
} 
# 2219
}
# 158 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/limits" 3
namespace std __attribute((__visibility__("default"))) { 
# 167
enum float_round_style { 
# 169
round_indeterminate = (-1), 
# 170
round_toward_zero = 0, 
# 171
round_to_nearest, 
# 172
round_toward_infinity, 
# 173
round_toward_neg_infinity
# 174
}; 
# 182
enum float_denorm_style { 
# 185
denorm_indeterminate = (-1), 
# 187
denorm_absent = 0, 
# 189
denorm_present
# 190
}; 
# 202 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/limits" 3
struct __numeric_limits_base { 
# 206
static constexpr inline bool is_specialized = false; 
# 211
static constexpr inline int digits = 0; 
# 214
static constexpr inline int digits10 = 0; 
# 219
static constexpr inline int max_digits10 = 0; 
# 223
static constexpr inline bool is_signed = false; 
# 226
static constexpr inline bool is_integer = false; 
# 231
static constexpr inline bool is_exact = false; 
# 235
static constexpr inline int radix = 0; 
# 239
static constexpr inline int min_exponent = 0; 
# 243
static constexpr inline int min_exponent10 = 0; 
# 248
static constexpr inline int max_exponent = 0; 
# 252
static constexpr inline int max_exponent10 = 0; 
# 255
static constexpr inline bool has_infinity = false; 
# 259
static constexpr inline bool has_quiet_NaN = false; 
# 263
static constexpr inline bool has_signaling_NaN = false; 
# 266
static constexpr inline float_denorm_style has_denorm = denorm_absent; 
# 270
static constexpr inline bool has_denorm_loss = false; 
# 274
static constexpr inline bool is_iec559 = false; 
# 279
static constexpr inline bool is_bounded = false; 
# 288 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/limits" 3
static constexpr inline bool is_modulo = false; 
# 291
static constexpr inline bool traps = false; 
# 294
static constexpr inline bool tinyness_before = false; 
# 299
static constexpr inline float_round_style round_style = round_toward_zero; 
# 301
}; 
# 311 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/limits" 3
template< class _Tp> 
# 312
struct numeric_limits : public __numeric_limits_base { 
# 317
static constexpr _Tp min() noexcept { return _Tp(); } 
# 321
static constexpr _Tp max() noexcept { return _Tp(); } 
# 327
static constexpr _Tp lowest() noexcept { return _Tp(); } 
# 333
static constexpr _Tp epsilon() noexcept { return _Tp(); } 
# 337
static constexpr _Tp round_error() noexcept { return _Tp(); } 
# 341
static constexpr _Tp infinity() noexcept { return _Tp(); } 
# 346
static constexpr _Tp quiet_NaN() noexcept { return _Tp(); } 
# 351
static constexpr _Tp signaling_NaN() noexcept { return _Tp(); } 
# 357
static constexpr _Tp denorm_min() noexcept { return _Tp(); } 
# 358
}; 
# 363
template< class _Tp> 
# 364
struct numeric_limits< const _Tp>  : public std::numeric_limits< _Tp>  { 
# 365
}; 
# 367
template< class _Tp> 
# 368
struct numeric_limits< volatile _Tp>  : public std::numeric_limits< _Tp>  { 
# 369
}; 
# 371
template< class _Tp> 
# 372
struct numeric_limits< const volatile _Tp>  : public std::numeric_limits< _Tp>  { 
# 373
}; 
# 384 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/limits" 3
template<> struct numeric_limits< bool>  { 
# 386
static constexpr inline bool is_specialized = true; 
# 389
static constexpr bool min() noexcept { return false; } 
# 392
static constexpr bool max() noexcept { return true; } 
# 396
static constexpr bool lowest() noexcept { return min(); } 
# 398
static constexpr inline int digits = 1; 
# 399
static constexpr inline int digits10 = 0; 
# 401
static constexpr inline int max_digits10 = 0; 
# 403
static constexpr inline bool is_signed = false; 
# 404
static constexpr inline bool is_integer = true; 
# 405
static constexpr inline bool is_exact = true; 
# 406
static constexpr inline int radix = 2; 
# 409
static constexpr bool epsilon() noexcept { return false; } 
# 412
static constexpr bool round_error() noexcept { return false; } 
# 414
static constexpr inline int min_exponent = 0; 
# 415
static constexpr inline int min_exponent10 = 0; 
# 416
static constexpr inline int max_exponent = 0; 
# 417
static constexpr inline int max_exponent10 = 0; 
# 419
static constexpr inline bool has_infinity = false; 
# 420
static constexpr inline bool has_quiet_NaN = false; 
# 421
static constexpr inline bool has_signaling_NaN = false; 
# 422
static constexpr inline float_denorm_style has_denorm = denorm_absent; 
# 424
static constexpr inline bool has_denorm_loss = false; 
# 427
static constexpr bool infinity() noexcept { return false; } 
# 430
static constexpr bool quiet_NaN() noexcept { return false; } 
# 433
static constexpr bool signaling_NaN() noexcept { return false; } 
# 436
static constexpr bool denorm_min() noexcept { return false; } 
# 438
static constexpr inline bool is_iec559 = false; 
# 439
static constexpr inline bool is_bounded = true; 
# 440
static constexpr inline bool is_modulo = false; 
# 445
static constexpr inline bool traps = true; 
# 446
static constexpr inline bool tinyness_before = false; 
# 447
static constexpr inline float_round_style round_style = round_toward_zero; 
# 449
}; 
# 453
template<> struct numeric_limits< char>  { 
# 455
static constexpr inline bool is_specialized = true; 
# 458
static constexpr char min() noexcept { return ((((char)(-1)) < 0) ? (-((((char)(-1)) < 0) ? (((((char)1) << (((sizeof(char) * (8)) - (((char)(-1)) < 0)) - (1))) - 1) << 1) + 1 : (~((char)0)))) - 1 : ((char)0)); } 
# 461
static constexpr char max() noexcept { return ((((char)(-1)) < 0) ? (((((char)1) << (((sizeof(char) * (8)) - (((char)(-1)) < 0)) - (1))) - 1) << 1) + 1 : (~((char)0))); } 
# 465
static constexpr char lowest() noexcept { return min(); } 
# 468
static constexpr inline int digits = ((sizeof(char) * (8)) - (((char)(-1)) < 0)); 
# 469
static constexpr inline int digits10 = ((((sizeof(char) * (8)) - (((char)(-1)) < 0)) * (643L)) / (2136)); 
# 471
static constexpr inline int max_digits10 = 0; 
# 473
static constexpr inline bool is_signed = (((char)(-1)) < 0); 
# 474
static constexpr inline bool is_integer = true; 
# 475
static constexpr inline bool is_exact = true; 
# 476
static constexpr inline int radix = 2; 
# 479
static constexpr char epsilon() noexcept { return 0; } 
# 482
static constexpr char round_error() noexcept { return 0; } 
# 484
static constexpr inline int min_exponent = 0; 
# 485
static constexpr inline int min_exponent10 = 0; 
# 486
static constexpr inline int max_exponent = 0; 
# 487
static constexpr inline int max_exponent10 = 0; 
# 489
static constexpr inline bool has_infinity = false; 
# 490
static constexpr inline bool has_quiet_NaN = false; 
# 491
static constexpr inline bool has_signaling_NaN = false; 
# 492
static constexpr inline float_denorm_style has_denorm = denorm_absent; 
# 494
static constexpr inline bool has_denorm_loss = false; 
# 497
static constexpr char infinity() noexcept { return ((char)0); } 
# 500
static constexpr char quiet_NaN() noexcept { return ((char)0); } 
# 503
static constexpr char signaling_NaN() noexcept { return ((char)0); } 
# 506
static constexpr char denorm_min() noexcept { return static_cast< char>(0); } 
# 508
static constexpr inline bool is_iec559 = false; 
# 509
static constexpr inline bool is_bounded = true; 
# 510
static constexpr inline bool is_modulo = (!is_signed); 
# 512
static constexpr inline bool traps = true; 
# 513
static constexpr inline bool tinyness_before = false; 
# 514
static constexpr inline float_round_style round_style = round_toward_zero; 
# 516
}; 
# 520
template<> struct numeric_limits< signed char>  { 
# 522
static constexpr inline bool is_specialized = true; 
# 525
static constexpr signed char min() noexcept { return (-127) - 1; } 
# 528
static constexpr signed char max() noexcept { return 127; } 
# 532
static constexpr signed char lowest() noexcept { return min(); } 
# 535
static constexpr inline int digits = ((sizeof(signed char) * (8)) - (((signed char)(-1)) < 0)); 
# 536
static constexpr inline int digits10 = ((((sizeof(signed char) * (8)) - (((signed char)(-1)) < 0)) * (643L)) / (2136)); 
# 539
static constexpr inline int max_digits10 = 0; 
# 541
static constexpr inline bool is_signed = true; 
# 542
static constexpr inline bool is_integer = true; 
# 543
static constexpr inline bool is_exact = true; 
# 544
static constexpr inline int radix = 2; 
# 547
static constexpr signed char epsilon() noexcept { return 0; } 
# 550
static constexpr signed char round_error() noexcept { return 0; } 
# 552
static constexpr inline int min_exponent = 0; 
# 553
static constexpr inline int min_exponent10 = 0; 
# 554
static constexpr inline int max_exponent = 0; 
# 555
static constexpr inline int max_exponent10 = 0; 
# 557
static constexpr inline bool has_infinity = false; 
# 558
static constexpr inline bool has_quiet_NaN = false; 
# 559
static constexpr inline bool has_signaling_NaN = false; 
# 560
static constexpr inline float_denorm_style has_denorm = denorm_absent; 
# 562
static constexpr inline bool has_denorm_loss = false; 
# 565
static constexpr signed char infinity() noexcept { return static_cast< signed char>(0); } 
# 568
static constexpr signed char quiet_NaN() noexcept { return static_cast< signed char>(0); } 
# 571
static constexpr signed char signaling_NaN() noexcept 
# 572
{ return static_cast< signed char>(0); } 
# 575
static constexpr signed char denorm_min() noexcept 
# 576
{ return static_cast< signed char>(0); } 
# 578
static constexpr inline bool is_iec559 = false; 
# 579
static constexpr inline bool is_bounded = true; 
# 580
static constexpr inline bool is_modulo = false; 
# 582
static constexpr inline bool traps = true; 
# 583
static constexpr inline bool tinyness_before = false; 
# 584
static constexpr inline float_round_style round_style = round_toward_zero; 
# 586
}; 
# 590
template<> struct numeric_limits< unsigned char>  { 
# 592
static constexpr inline bool is_specialized = true; 
# 595
static constexpr unsigned char min() noexcept { return 0; } 
# 598
static constexpr unsigned char max() noexcept { return ((127) * 2U) + (1); } 
# 602
static constexpr unsigned char lowest() noexcept { return min(); } 
# 605
static constexpr inline int digits = ((sizeof(unsigned char) * (8)) - (((unsigned char)(-1)) < 0)); 
# 607
static constexpr inline int digits10 = ((((sizeof(unsigned char) * (8)) - (((unsigned char)(-1)) < 0)) * (643L)) / (2136)); 
# 610
static constexpr inline int max_digits10 = 0; 
# 612
static constexpr inline bool is_signed = false; 
# 613
static constexpr inline bool is_integer = true; 
# 614
static constexpr inline bool is_exact = true; 
# 615
static constexpr inline int radix = 2; 
# 618
static constexpr unsigned char epsilon() noexcept { return 0; } 
# 621
static constexpr unsigned char round_error() noexcept { return 0; } 
# 623
static constexpr inline int min_exponent = 0; 
# 624
static constexpr inline int min_exponent10 = 0; 
# 625
static constexpr inline int max_exponent = 0; 
# 626
static constexpr inline int max_exponent10 = 0; 
# 628
static constexpr inline bool has_infinity = false; 
# 629
static constexpr inline bool has_quiet_NaN = false; 
# 630
static constexpr inline bool has_signaling_NaN = false; 
# 631
static constexpr inline float_denorm_style has_denorm = denorm_absent; 
# 633
static constexpr inline bool has_denorm_loss = false; 
# 636
static constexpr unsigned char infinity() noexcept 
# 637
{ return static_cast< unsigned char>(0); } 
# 640
static constexpr unsigned char quiet_NaN() noexcept 
# 641
{ return static_cast< unsigned char>(0); } 
# 644
static constexpr unsigned char signaling_NaN() noexcept 
# 645
{ return static_cast< unsigned char>(0); } 
# 648
static constexpr unsigned char denorm_min() noexcept 
# 649
{ return static_cast< unsigned char>(0); } 
# 651
static constexpr inline bool is_iec559 = false; 
# 652
static constexpr inline bool is_bounded = true; 
# 653
static constexpr inline bool is_modulo = true; 
# 655
static constexpr inline bool traps = true; 
# 656
static constexpr inline bool tinyness_before = false; 
# 657
static constexpr inline float_round_style round_style = round_toward_zero; 
# 659
}; 
# 663
template<> struct numeric_limits< wchar_t>  { 
# 665
static constexpr inline bool is_specialized = true; 
# 668
static constexpr wchar_t min() noexcept { return ((((wchar_t)(-1)) < 0) ? (-((((wchar_t)(-1)) < 0) ? (((((wchar_t)1) << (((sizeof(wchar_t) * (8)) - (((wchar_t)(-1)) < 0)) - (1))) - 1) << 1) + 1 : (~((wchar_t)0)))) - 1 : ((wchar_t)0)); } 
# 671
static constexpr wchar_t max() noexcept { return ((((wchar_t)(-1)) < 0) ? (((((wchar_t)1) << (((sizeof(wchar_t) * (8)) - (((wchar_t)(-1)) < 0)) - (1))) - 1) << 1) + 1 : (~((wchar_t)0))); } 
# 675
static constexpr wchar_t lowest() noexcept { return min(); } 
# 678
static constexpr inline int digits = ((sizeof(wchar_t) * (8)) - (((wchar_t)(-1)) < 0)); 
# 679
static constexpr inline int digits10 = ((((sizeof(wchar_t) * (8)) - (((wchar_t)(-1)) < 0)) * (643L)) / (2136)); 
# 682
static constexpr inline int max_digits10 = 0; 
# 684
static constexpr inline bool is_signed = (((wchar_t)(-1)) < 0); 
# 685
static constexpr inline bool is_integer = true; 
# 686
static constexpr inline bool is_exact = true; 
# 687
static constexpr inline int radix = 2; 
# 690
static constexpr wchar_t epsilon() noexcept { return 0; } 
# 693
static constexpr wchar_t round_error() noexcept { return 0; } 
# 695
static constexpr inline int min_exponent = 0; 
# 696
static constexpr inline int min_exponent10 = 0; 
# 697
static constexpr inline int max_exponent = 0; 
# 698
static constexpr inline int max_exponent10 = 0; 
# 700
static constexpr inline bool has_infinity = false; 
# 701
static constexpr inline bool has_quiet_NaN = false; 
# 702
static constexpr inline bool has_signaling_NaN = false; 
# 703
static constexpr inline float_denorm_style has_denorm = denorm_absent; 
# 705
static constexpr inline bool has_denorm_loss = false; 
# 708
static constexpr wchar_t infinity() noexcept { return ((wchar_t)0); } 
# 711
static constexpr wchar_t quiet_NaN() noexcept { return ((wchar_t)0); } 
# 714
static constexpr wchar_t signaling_NaN() noexcept { return ((wchar_t)0); } 
# 717
static constexpr wchar_t denorm_min() noexcept { return ((wchar_t)0); } 
# 719
static constexpr inline bool is_iec559 = false; 
# 720
static constexpr inline bool is_bounded = true; 
# 721
static constexpr inline bool is_modulo = (!is_signed); 
# 723
static constexpr inline bool traps = true; 
# 724
static constexpr inline bool tinyness_before = false; 
# 725
static constexpr inline float_round_style round_style = round_toward_zero; 
# 727
}; 
# 797 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/limits" 3
template<> struct numeric_limits< char16_t>  { 
# 799
static constexpr inline bool is_specialized = true; 
# 802
static constexpr char16_t min() noexcept { return ((((char16_t)(-1)) < 0) ? (-((((char16_t)(-1)) < 0) ? (((((char16_t)1) << (((sizeof(char16_t) * (8)) - (((char16_t)(-1)) < 0)) - (1))) - 1) << 1) + 1 : (~((char16_t)0)))) - 1 : ((char16_t)0)); } 
# 805
static constexpr char16_t max() noexcept { return ((((char16_t)(-1)) < 0) ? (((((char16_t)1) << (((sizeof(char16_t) * (8)) - (((char16_t)(-1)) < 0)) - (1))) - 1) << 1) + 1 : (~((char16_t)0))); } 
# 808
static constexpr char16_t lowest() noexcept { return min(); } 
# 810
static constexpr inline int digits = ((sizeof(char16_t) * (8)) - (((char16_t)(-1)) < 0)); 
# 811
static constexpr inline int digits10 = ((((sizeof(char16_t) * (8)) - (((char16_t)(-1)) < 0)) * (643L)) / (2136)); 
# 812
static constexpr inline int max_digits10 = 0; 
# 813
static constexpr inline bool is_signed = (((char16_t)(-1)) < 0); 
# 814
static constexpr inline bool is_integer = true; 
# 815
static constexpr inline bool is_exact = true; 
# 816
static constexpr inline int radix = 2; 
# 819
static constexpr char16_t epsilon() noexcept { return 0; } 
# 822
static constexpr char16_t round_error() noexcept { return 0; } 
# 824
static constexpr inline int min_exponent = 0; 
# 825
static constexpr inline int min_exponent10 = 0; 
# 826
static constexpr inline int max_exponent = 0; 
# 827
static constexpr inline int max_exponent10 = 0; 
# 829
static constexpr inline bool has_infinity = false; 
# 830
static constexpr inline bool has_quiet_NaN = false; 
# 831
static constexpr inline bool has_signaling_NaN = false; 
# 832
static constexpr inline float_denorm_style has_denorm = denorm_absent; 
# 833
static constexpr inline bool has_denorm_loss = false; 
# 836
static constexpr char16_t infinity() noexcept { return ((char16_t)0); } 
# 839
static constexpr char16_t quiet_NaN() noexcept { return ((char16_t)0); } 
# 842
static constexpr char16_t signaling_NaN() noexcept { return ((char16_t)0); } 
# 845
static constexpr char16_t denorm_min() noexcept { return ((char16_t)0); } 
# 847
static constexpr inline bool is_iec559 = false; 
# 848
static constexpr inline bool is_bounded = true; 
# 849
static constexpr inline bool is_modulo = (!is_signed); 
# 851
static constexpr inline bool traps = true; 
# 852
static constexpr inline bool tinyness_before = false; 
# 853
static constexpr inline float_round_style round_style = round_toward_zero; 
# 854
}; 
# 858
template<> struct numeric_limits< char32_t>  { 
# 860
static constexpr inline bool is_specialized = true; 
# 863
static constexpr char32_t min() noexcept { return ((((char32_t)(-1)) < (0)) ? (-((((char32_t)(-1)) < (0)) ? (((((char32_t)1) << (((sizeof(char32_t) * (8)) - (((char32_t)(-1)) < (0))) - (1))) - (1)) << 1) + (1) : (~((char32_t)0)))) - (1) : ((char32_t)0)); } 
# 866
static constexpr char32_t max() noexcept { return ((((char32_t)(-1)) < (0)) ? (((((char32_t)1) << (((sizeof(char32_t) * (8)) - (((char32_t)(-1)) < (0))) - (1))) - (1)) << 1) + (1) : (~((char32_t)0))); } 
# 869
static constexpr char32_t lowest() noexcept { return min(); } 
# 871
static constexpr inline int digits = ((sizeof(char32_t) * (8)) - (((char32_t)(-1)) < (0))); 
# 872
static constexpr inline int digits10 = ((((sizeof(char32_t) * (8)) - (((char32_t)(-1)) < (0))) * (643L)) / (2136)); 
# 873
static constexpr inline int max_digits10 = 0; 
# 874
static constexpr inline bool is_signed = (((char32_t)(-1)) < (0)); 
# 875
static constexpr inline bool is_integer = true; 
# 876
static constexpr inline bool is_exact = true; 
# 877
static constexpr inline int radix = 2; 
# 880
static constexpr char32_t epsilon() noexcept { return 0; } 
# 883
static constexpr char32_t round_error() noexcept { return 0; } 
# 885
static constexpr inline int min_exponent = 0; 
# 886
static constexpr inline int min_exponent10 = 0; 
# 887
static constexpr inline int max_exponent = 0; 
# 888
static constexpr inline int max_exponent10 = 0; 
# 890
static constexpr inline bool has_infinity = false; 
# 891
static constexpr inline bool has_quiet_NaN = false; 
# 892
static constexpr inline bool has_signaling_NaN = false; 
# 893
static constexpr inline float_denorm_style has_denorm = denorm_absent; 
# 894
static constexpr inline bool has_denorm_loss = false; 
# 897
static constexpr char32_t infinity() noexcept { return ((char32_t)0); } 
# 900
static constexpr char32_t quiet_NaN() noexcept { return ((char32_t)0); } 
# 903
static constexpr char32_t signaling_NaN() noexcept { return ((char32_t)0); } 
# 906
static constexpr char32_t denorm_min() noexcept { return ((char32_t)0); } 
# 908
static constexpr inline bool is_iec559 = false; 
# 909
static constexpr inline bool is_bounded = true; 
# 910
static constexpr inline bool is_modulo = (!is_signed); 
# 912
static constexpr inline bool traps = true; 
# 913
static constexpr inline bool tinyness_before = false; 
# 914
static constexpr inline float_round_style round_style = round_toward_zero; 
# 915
}; 
# 920
template<> struct numeric_limits< short>  { 
# 922
static constexpr inline bool is_specialized = true; 
# 925
static constexpr short min() noexcept { return (-32767) - 1; } 
# 928
static constexpr short max() noexcept { return 32767; } 
# 932
static constexpr short lowest() noexcept { return min(); } 
# 935
static constexpr inline int digits = ((sizeof(short) * (8)) - (((short)(-1)) < 0)); 
# 936
static constexpr inline int digits10 = ((((sizeof(short) * (8)) - (((short)(-1)) < 0)) * (643L)) / (2136)); 
# 938
static constexpr inline int max_digits10 = 0; 
# 940
static constexpr inline bool is_signed = true; 
# 941
static constexpr inline bool is_integer = true; 
# 942
static constexpr inline bool is_exact = true; 
# 943
static constexpr inline int radix = 2; 
# 946
static constexpr short epsilon() noexcept { return 0; } 
# 949
static constexpr short round_error() noexcept { return 0; } 
# 951
static constexpr inline int min_exponent = 0; 
# 952
static constexpr inline int min_exponent10 = 0; 
# 953
static constexpr inline int max_exponent = 0; 
# 954
static constexpr inline int max_exponent10 = 0; 
# 956
static constexpr inline bool has_infinity = false; 
# 957
static constexpr inline bool has_quiet_NaN = false; 
# 958
static constexpr inline bool has_signaling_NaN = false; 
# 959
static constexpr inline float_denorm_style has_denorm = denorm_absent; 
# 961
static constexpr inline bool has_denorm_loss = false; 
# 964
static constexpr short infinity() noexcept { return ((short)0); } 
# 967
static constexpr short quiet_NaN() noexcept { return ((short)0); } 
# 970
static constexpr short signaling_NaN() noexcept { return ((short)0); } 
# 973
static constexpr short denorm_min() noexcept { return ((short)0); } 
# 975
static constexpr inline bool is_iec559 = false; 
# 976
static constexpr inline bool is_bounded = true; 
# 977
static constexpr inline bool is_modulo = false; 
# 979
static constexpr inline bool traps = true; 
# 980
static constexpr inline bool tinyness_before = false; 
# 981
static constexpr inline float_round_style round_style = round_toward_zero; 
# 983
}; 
# 987
template<> struct numeric_limits< unsigned short>  { 
# 989
static constexpr inline bool is_specialized = true; 
# 992
static constexpr unsigned short min() noexcept { return 0; } 
# 995
static constexpr unsigned short max() noexcept { return ((32767) * 2U) + (1); } 
# 999
static constexpr unsigned short lowest() noexcept { return min(); } 
# 1002
static constexpr inline int digits = ((sizeof(unsigned short) * (8)) - (((unsigned short)(-1)) < 0)); 
# 1004
static constexpr inline int digits10 = ((((sizeof(unsigned short) * (8)) - (((unsigned short)(-1)) < 0)) * (643L)) / (2136)); 
# 1007
static constexpr inline int max_digits10 = 0; 
# 1009
static constexpr inline bool is_signed = false; 
# 1010
static constexpr inline bool is_integer = true; 
# 1011
static constexpr inline bool is_exact = true; 
# 1012
static constexpr inline int radix = 2; 
# 1015
static constexpr unsigned short epsilon() noexcept { return 0; } 
# 1018
static constexpr unsigned short round_error() noexcept { return 0; } 
# 1020
static constexpr inline int min_exponent = 0; 
# 1021
static constexpr inline int min_exponent10 = 0; 
# 1022
static constexpr inline int max_exponent = 0; 
# 1023
static constexpr inline int max_exponent10 = 0; 
# 1025
static constexpr inline bool has_infinity = false; 
# 1026
static constexpr inline bool has_quiet_NaN = false; 
# 1027
static constexpr inline bool has_signaling_NaN = false; 
# 1028
static constexpr inline float_denorm_style has_denorm = denorm_absent; 
# 1030
static constexpr inline bool has_denorm_loss = false; 
# 1033
static constexpr unsigned short infinity() noexcept 
# 1034
{ return static_cast< unsigned short>(0); } 
# 1037
static constexpr unsigned short quiet_NaN() noexcept 
# 1038
{ return static_cast< unsigned short>(0); } 
# 1041
static constexpr unsigned short signaling_NaN() noexcept 
# 1042
{ return static_cast< unsigned short>(0); } 
# 1045
static constexpr unsigned short denorm_min() noexcept 
# 1046
{ return static_cast< unsigned short>(0); } 
# 1048
static constexpr inline bool is_iec559 = false; 
# 1049
static constexpr inline bool is_bounded = true; 
# 1050
static constexpr inline bool is_modulo = true; 
# 1052
static constexpr inline bool traps = true; 
# 1053
static constexpr inline bool tinyness_before = false; 
# 1054
static constexpr inline float_round_style round_style = round_toward_zero; 
# 1056
}; 
# 1060
template<> struct numeric_limits< int>  { 
# 1062
static constexpr inline bool is_specialized = true; 
# 1065
static constexpr int min() noexcept { return (-2147483647) - 1; } 
# 1068
static constexpr int max() noexcept { return 2147483647; } 
# 1072
static constexpr int lowest() noexcept { return min(); } 
# 1075
static constexpr inline int digits = ((sizeof(int) * (8)) - (((int)(-1)) < 0)); 
# 1076
static constexpr inline int digits10 = ((((sizeof(int) * (8)) - (((int)(-1)) < 0)) * (643L)) / (2136)); 
# 1078
static constexpr inline int max_digits10 = 0; 
# 1080
static constexpr inline bool is_signed = true; 
# 1081
static constexpr inline bool is_integer = true; 
# 1082
static constexpr inline bool is_exact = true; 
# 1083
static constexpr inline int radix = 2; 
# 1086
static constexpr int epsilon() noexcept { return 0; } 
# 1089
static constexpr int round_error() noexcept { return 0; } 
# 1091
static constexpr inline int min_exponent = 0; 
# 1092
static constexpr inline int min_exponent10 = 0; 
# 1093
static constexpr inline int max_exponent = 0; 
# 1094
static constexpr inline int max_exponent10 = 0; 
# 1096
static constexpr inline bool has_infinity = false; 
# 1097
static constexpr inline bool has_quiet_NaN = false; 
# 1098
static constexpr inline bool has_signaling_NaN = false; 
# 1099
static constexpr inline float_denorm_style has_denorm = denorm_absent; 
# 1101
static constexpr inline bool has_denorm_loss = false; 
# 1104
static constexpr int infinity() noexcept { return static_cast< int>(0); } 
# 1107
static constexpr int quiet_NaN() noexcept { return static_cast< int>(0); } 
# 1110
static constexpr int signaling_NaN() noexcept { return static_cast< int>(0); } 
# 1113
static constexpr int denorm_min() noexcept { return static_cast< int>(0); } 
# 1115
static constexpr inline bool is_iec559 = false; 
# 1116
static constexpr inline bool is_bounded = true; 
# 1117
static constexpr inline bool is_modulo = false; 
# 1119
static constexpr inline bool traps = true; 
# 1120
static constexpr inline bool tinyness_before = false; 
# 1121
static constexpr inline float_round_style round_style = round_toward_zero; 
# 1123
}; 
# 1127
template<> struct numeric_limits< unsigned>  { 
# 1129
static constexpr inline bool is_specialized = true; 
# 1132
static constexpr unsigned min() noexcept { return 0; } 
# 1135
static constexpr unsigned max() noexcept { return ((2147483647) * 2U) + (1); } 
# 1139
static constexpr unsigned lowest() noexcept { return min(); } 
# 1142
static constexpr inline int digits = ((sizeof(unsigned) * (8)) - (((unsigned)(-1)) < (0))); 
# 1144
static constexpr inline int digits10 = ((((sizeof(unsigned) * (8)) - (((unsigned)(-1)) < (0))) * (643L)) / (2136)); 
# 1147
static constexpr inline int max_digits10 = 0; 
# 1149
static constexpr inline bool is_signed = false; 
# 1150
static constexpr inline bool is_integer = true; 
# 1151
static constexpr inline bool is_exact = true; 
# 1152
static constexpr inline int radix = 2; 
# 1155
static constexpr unsigned epsilon() noexcept { return 0; } 
# 1158
static constexpr unsigned round_error() noexcept { return 0; } 
# 1160
static constexpr inline int min_exponent = 0; 
# 1161
static constexpr inline int min_exponent10 = 0; 
# 1162
static constexpr inline int max_exponent = 0; 
# 1163
static constexpr inline int max_exponent10 = 0; 
# 1165
static constexpr inline bool has_infinity = false; 
# 1166
static constexpr inline bool has_quiet_NaN = false; 
# 1167
static constexpr inline bool has_signaling_NaN = false; 
# 1168
static constexpr inline float_denorm_style has_denorm = denorm_absent; 
# 1170
static constexpr inline bool has_denorm_loss = false; 
# 1173
static constexpr unsigned infinity() noexcept { return static_cast< unsigned>(0); } 
# 1176
static constexpr unsigned quiet_NaN() noexcept 
# 1177
{ return static_cast< unsigned>(0); } 
# 1180
static constexpr unsigned signaling_NaN() noexcept 
# 1181
{ return static_cast< unsigned>(0); } 
# 1184
static constexpr unsigned denorm_min() noexcept 
# 1185
{ return static_cast< unsigned>(0); } 
# 1187
static constexpr inline bool is_iec559 = false; 
# 1188
static constexpr inline bool is_bounded = true; 
# 1189
static constexpr inline bool is_modulo = true; 
# 1191
static constexpr inline bool traps = true; 
# 1192
static constexpr inline bool tinyness_before = false; 
# 1193
static constexpr inline float_round_style round_style = round_toward_zero; 
# 1195
}; 
# 1199
template<> struct numeric_limits< long>  { 
# 1201
static constexpr inline bool is_specialized = true; 
# 1204
static constexpr long min() noexcept { return (-9223372036854775807L) - (1); } 
# 1207
static constexpr long max() noexcept { return 9223372036854775807L; } 
# 1211
static constexpr long lowest() noexcept { return min(); } 
# 1214
static constexpr inline int digits = ((sizeof(long) * (8)) - (((long)(-1)) < (0))); 
# 1215
static constexpr inline int digits10 = ((((sizeof(long) * (8)) - (((long)(-1)) < (0))) * (643L)) / (2136)); 
# 1217
static constexpr inline int max_digits10 = 0; 
# 1219
static constexpr inline bool is_signed = true; 
# 1220
static constexpr inline bool is_integer = true; 
# 1221
static constexpr inline bool is_exact = true; 
# 1222
static constexpr inline int radix = 2; 
# 1225
static constexpr long epsilon() noexcept { return 0; } 
# 1228
static constexpr long round_error() noexcept { return 0; } 
# 1230
static constexpr inline int min_exponent = 0; 
# 1231
static constexpr inline int min_exponent10 = 0; 
# 1232
static constexpr inline int max_exponent = 0; 
# 1233
static constexpr inline int max_exponent10 = 0; 
# 1235
static constexpr inline bool has_infinity = false; 
# 1236
static constexpr inline bool has_quiet_NaN = false; 
# 1237
static constexpr inline bool has_signaling_NaN = false; 
# 1238
static constexpr inline float_denorm_style has_denorm = denorm_absent; 
# 1240
static constexpr inline bool has_denorm_loss = false; 
# 1243
static constexpr long infinity() noexcept { return static_cast< long>(0); } 
# 1246
static constexpr long quiet_NaN() noexcept { return static_cast< long>(0); } 
# 1249
static constexpr long signaling_NaN() noexcept { return static_cast< long>(0); } 
# 1252
static constexpr long denorm_min() noexcept { return static_cast< long>(0); } 
# 1254
static constexpr inline bool is_iec559 = false; 
# 1255
static constexpr inline bool is_bounded = true; 
# 1256
static constexpr inline bool is_modulo = false; 
# 1258
static constexpr inline bool traps = true; 
# 1259
static constexpr inline bool tinyness_before = false; 
# 1260
static constexpr inline float_round_style round_style = round_toward_zero; 
# 1262
}; 
# 1266
template<> struct numeric_limits< unsigned long>  { 
# 1268
static constexpr inline bool is_specialized = true; 
# 1271
static constexpr unsigned long min() noexcept { return 0; } 
# 1274
static constexpr unsigned long max() noexcept { return ((9223372036854775807L) * 2UL) + (1); } 
# 1278
static constexpr unsigned long lowest() noexcept { return min(); } 
# 1281
static constexpr inline int digits = ((sizeof(unsigned long) * (8)) - (((unsigned long)(-1)) < (0))); 
# 1283
static constexpr inline int digits10 = ((((sizeof(unsigned long) * (8)) - (((unsigned long)(-1)) < (0))) * (643L)) / (2136)); 
# 1286
static constexpr inline int max_digits10 = 0; 
# 1288
static constexpr inline bool is_signed = false; 
# 1289
static constexpr inline bool is_integer = true; 
# 1290
static constexpr inline bool is_exact = true; 
# 1291
static constexpr inline int radix = 2; 
# 1294
static constexpr unsigned long epsilon() noexcept { return 0; } 
# 1297
static constexpr unsigned long round_error() noexcept { return 0; } 
# 1299
static constexpr inline int min_exponent = 0; 
# 1300
static constexpr inline int min_exponent10 = 0; 
# 1301
static constexpr inline int max_exponent = 0; 
# 1302
static constexpr inline int max_exponent10 = 0; 
# 1304
static constexpr inline bool has_infinity = false; 
# 1305
static constexpr inline bool has_quiet_NaN = false; 
# 1306
static constexpr inline bool has_signaling_NaN = false; 
# 1307
static constexpr inline float_denorm_style has_denorm = denorm_absent; 
# 1309
static constexpr inline bool has_denorm_loss = false; 
# 1312
static constexpr unsigned long infinity() noexcept 
# 1313
{ return static_cast< unsigned long>(0); } 
# 1316
static constexpr unsigned long quiet_NaN() noexcept 
# 1317
{ return static_cast< unsigned long>(0); } 
# 1320
static constexpr unsigned long signaling_NaN() noexcept 
# 1321
{ return static_cast< unsigned long>(0); } 
# 1324
static constexpr unsigned long denorm_min() noexcept 
# 1325
{ return static_cast< unsigned long>(0); } 
# 1327
static constexpr inline bool is_iec559 = false; 
# 1328
static constexpr inline bool is_bounded = true; 
# 1329
static constexpr inline bool is_modulo = true; 
# 1331
static constexpr inline bool traps = true; 
# 1332
static constexpr inline bool tinyness_before = false; 
# 1333
static constexpr inline float_round_style round_style = round_toward_zero; 
# 1335
}; 
# 1339
template<> struct numeric_limits< long long>  { 
# 1341
static constexpr inline bool is_specialized = true; 
# 1344
static constexpr long long min() noexcept { return (-9223372036854775807LL) - (1); } 
# 1347
static constexpr long long max() noexcept { return 9223372036854775807LL; } 
# 1351
static constexpr long long lowest() noexcept { return min(); } 
# 1354
static constexpr inline int digits = ((sizeof(long long) * (8)) - (((long long)(-1)) < (0))); 
# 1356
static constexpr inline int digits10 = ((((sizeof(long long) * (8)) - (((long long)(-1)) < (0))) * (643L)) / (2136)); 
# 1359
static constexpr inline int max_digits10 = 0; 
# 1361
static constexpr inline bool is_signed = true; 
# 1362
static constexpr inline bool is_integer = true; 
# 1363
static constexpr inline bool is_exact = true; 
# 1364
static constexpr inline int radix = 2; 
# 1367
static constexpr long long epsilon() noexcept { return 0; } 
# 1370
static constexpr long long round_error() noexcept { return 0; } 
# 1372
static constexpr inline int min_exponent = 0; 
# 1373
static constexpr inline int min_exponent10 = 0; 
# 1374
static constexpr inline int max_exponent = 0; 
# 1375
static constexpr inline int max_exponent10 = 0; 
# 1377
static constexpr inline bool has_infinity = false; 
# 1378
static constexpr inline bool has_quiet_NaN = false; 
# 1379
static constexpr inline bool has_signaling_NaN = false; 
# 1380
static constexpr inline float_denorm_style has_denorm = denorm_absent; 
# 1382
static constexpr inline bool has_denorm_loss = false; 
# 1385
static constexpr long long infinity() noexcept { return static_cast< long long>(0); } 
# 1388
static constexpr long long quiet_NaN() noexcept { return static_cast< long long>(0); } 
# 1391
static constexpr long long signaling_NaN() noexcept 
# 1392
{ return static_cast< long long>(0); } 
# 1395
static constexpr long long denorm_min() noexcept { return static_cast< long long>(0); } 
# 1397
static constexpr inline bool is_iec559 = false; 
# 1398
static constexpr inline bool is_bounded = true; 
# 1399
static constexpr inline bool is_modulo = false; 
# 1401
static constexpr inline bool traps = true; 
# 1402
static constexpr inline bool tinyness_before = false; 
# 1403
static constexpr inline float_round_style round_style = round_toward_zero; 
# 1405
}; 
# 1409
template<> struct numeric_limits< unsigned long long>  { 
# 1411
static constexpr inline bool is_specialized = true; 
# 1414
static constexpr unsigned long long min() noexcept { return 0; } 
# 1417
static constexpr unsigned long long max() noexcept { return ((9223372036854775807LL) * 2ULL) + (1); } 
# 1421
static constexpr unsigned long long lowest() noexcept { return min(); } 
# 1424
static constexpr inline int digits = ((sizeof(unsigned long long) * (8)) - (((unsigned long long)(-1)) < (0))); 
# 1426
static constexpr inline int digits10 = ((((sizeof(unsigned long long) * (8)) - (((unsigned long long)(-1)) < (0))) * (643L)) / (2136)); 
# 1429
static constexpr inline int max_digits10 = 0; 
# 1431
static constexpr inline bool is_signed = false; 
# 1432
static constexpr inline bool is_integer = true; 
# 1433
static constexpr inline bool is_exact = true; 
# 1434
static constexpr inline int radix = 2; 
# 1437
static constexpr unsigned long long epsilon() noexcept { return 0; } 
# 1440
static constexpr unsigned long long round_error() noexcept { return 0; } 
# 1442
static constexpr inline int min_exponent = 0; 
# 1443
static constexpr inline int min_exponent10 = 0; 
# 1444
static constexpr inline int max_exponent = 0; 
# 1445
static constexpr inline int max_exponent10 = 0; 
# 1447
static constexpr inline bool has_infinity = false; 
# 1448
static constexpr inline bool has_quiet_NaN = false; 
# 1449
static constexpr inline bool has_signaling_NaN = false; 
# 1450
static constexpr inline float_denorm_style has_denorm = denorm_absent; 
# 1452
static constexpr inline bool has_denorm_loss = false; 
# 1455
static constexpr unsigned long long infinity() noexcept 
# 1456
{ return static_cast< unsigned long long>(0); } 
# 1459
static constexpr unsigned long long quiet_NaN() noexcept 
# 1460
{ return static_cast< unsigned long long>(0); } 
# 1463
static constexpr unsigned long long signaling_NaN() noexcept 
# 1464
{ return static_cast< unsigned long long>(0); } 
# 1467
static constexpr unsigned long long denorm_min() noexcept 
# 1468
{ return static_cast< unsigned long long>(0); } 
# 1470
static constexpr inline bool is_iec559 = false; 
# 1471
static constexpr inline bool is_bounded = true; 
# 1472
static constexpr inline bool is_modulo = true; 
# 1474
static constexpr inline bool traps = true; 
# 1475
static constexpr inline bool tinyness_before = false; 
# 1476
static constexpr inline float_round_style round_style = round_toward_zero; 
# 1478
}; 
# 1637 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/limits" 3
template<> struct numeric_limits< __int128>  { static constexpr inline bool is_specialized = true; static constexpr __int128 min() noexcept { return ((((__int128)(-1)) < (0)) ? (-((((__int128)(-1)) < (0)) ? (((((__int128)1) << ((128 - (((__int128)(-1)) < (0))) - 1)) - (1)) << 1) + (1) : (~((__int128)0)))) - (1) : ((__int128)0)); } static constexpr __int128 max() noexcept { return ((((__int128)(-1)) < (0)) ? (((((__int128)1) << ((128 - (((__int128)(-1)) < (0))) - 1)) - (1)) << 1) + (1) : (~((__int128)0))); } static constexpr inline int digits = (128 - 1); static constexpr inline int digits10 = (((128 - 1) * 643L) / (2136)); static constexpr inline bool is_signed = true; static constexpr inline bool is_integer = true; static constexpr inline bool is_exact = true; static constexpr inline int radix = 2; static constexpr __int128 epsilon() noexcept { return 0; } static constexpr __int128 round_error() noexcept { return 0; } static constexpr __int128 lowest() noexcept { return min(); } static constexpr inline int max_digits10 = 0; static constexpr inline int min_exponent = 0; static constexpr inline int min_exponent10 = 0; static constexpr inline int max_exponent = 0; static constexpr inline int max_exponent10 = 0; static constexpr inline bool has_infinity = false; static constexpr inline bool has_quiet_NaN = false; static constexpr inline bool has_signaling_NaN = false; static constexpr inline float_denorm_style has_denorm = denorm_absent; static constexpr inline bool has_denorm_loss = false; static constexpr __int128 infinity() noexcept { return static_cast< __int128>(0); } static constexpr __int128 quiet_NaN() noexcept { return static_cast< __int128>(0); } static constexpr __int128 signaling_NaN() noexcept { return static_cast< __int128>(0); } static constexpr __int128 denorm_min() noexcept { return static_cast< __int128>(0); } static constexpr inline bool is_iec559 = false; static constexpr inline bool is_bounded = true; static constexpr inline bool is_modulo = false; static constexpr inline bool traps = true; static constexpr inline bool tinyness_before = false; static constexpr inline float_round_style round_style = round_toward_zero; }; template<> struct numeric_limits< unsigned __int128>  { static constexpr inline bool is_specialized = true; static constexpr unsigned __int128 min() noexcept { return 0; } static constexpr unsigned __int128 max() noexcept { return ((((unsigned __int128)(-1)) < (0)) ? (((((unsigned __int128)1) << ((128 - (((unsigned __int128)(-1)) < (0))) - 1)) - (1)) << 1) + (1) : (~((unsigned __int128)0))); } static constexpr unsigned __int128 lowest() noexcept { return min(); } static constexpr inline int max_digits10 = 0; static constexpr inline int digits = 128; static constexpr inline int digits10 = (((128) * 643L) / (2136)); static constexpr inline bool is_signed = false; static constexpr inline bool is_integer = true; static constexpr inline bool is_exact = true; static constexpr inline int radix = 2; static constexpr unsigned __int128 epsilon() noexcept { return 0; } static constexpr unsigned __int128 round_error() noexcept { return 0; } static constexpr inline int min_exponent = 0; static constexpr inline int min_exponent10 = 0; static constexpr inline int max_exponent = 0; static constexpr inline int max_exponent10 = 0; static constexpr inline bool has_infinity = false; static constexpr inline bool has_quiet_NaN = false; static constexpr inline bool has_signaling_NaN = false; static constexpr inline float_denorm_style has_denorm = denorm_absent; static constexpr inline bool has_denorm_loss = false; static constexpr unsigned __int128 infinity() noexcept { return static_cast< unsigned __int128>(0); } static constexpr unsigned __int128 quiet_NaN() noexcept { return static_cast< unsigned __int128>(0); } static constexpr unsigned __int128 signaling_NaN() noexcept { return static_cast< unsigned __int128>(0); } static constexpr unsigned __int128 denorm_min() noexcept { return static_cast< unsigned __int128>(0); } static constexpr inline bool is_iec559 = false; static constexpr inline bool is_bounded = true; static constexpr inline bool is_modulo = true; static constexpr inline bool traps = true; static constexpr inline bool tinyness_before = false; static constexpr inline float_round_style round_style = round_toward_zero; }; 
# 1670 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/limits" 3
template<> struct numeric_limits< float>  { 
# 1672
static constexpr inline bool is_specialized = true; 
# 1675
static constexpr float min() noexcept { return (1.1754944E-38F); } 
# 1678
static constexpr float max() noexcept { return (3.4028235E38F); } 
# 1682
static constexpr float lowest() noexcept { return -(3.4028235E38F); } 
# 1685
static constexpr inline int digits = 24; 
# 1686
static constexpr inline int digits10 = 6; 
# 1688
static constexpr inline int max_digits10 = ((2) + (((24) * 643L) / (2136))); 
# 1691
static constexpr inline bool is_signed = true; 
# 1692
static constexpr inline bool is_integer = false; 
# 1693
static constexpr inline bool is_exact = false; 
# 1694
static constexpr inline int radix = 2; 
# 1697
static constexpr float epsilon() noexcept { return (1.1920929E-7F); } 
# 1700
static constexpr float round_error() noexcept { return (0.5F); } 
# 1702
static constexpr inline int min_exponent = (-125); 
# 1703
static constexpr inline int min_exponent10 = (-37); 
# 1704
static constexpr inline int max_exponent = 128; 
# 1705
static constexpr inline int max_exponent10 = 38; 
# 1707
static constexpr inline bool has_infinity = (1); 
# 1708
static constexpr inline bool has_quiet_NaN = (1); 
# 1709
static constexpr inline bool has_signaling_NaN = has_quiet_NaN; 
# 1710
static constexpr inline float_denorm_style has_denorm = (((bool)1) ? denorm_present : denorm_absent); 
# 1712
static constexpr inline bool has_denorm_loss = false; 
# 1716
static constexpr float infinity() noexcept { return __builtin_huge_valf(); } 
# 1719
static constexpr float quiet_NaN() noexcept { return __builtin_nanf(""); } 
# 1722
static constexpr float signaling_NaN() noexcept { return __builtin_nansf(""); } 
# 1725
static constexpr float denorm_min() noexcept { return (1.4E-45F); } 
# 1727
static constexpr inline bool is_iec559 = (has_infinity && has_quiet_NaN && (has_denorm == (denorm_present))); 
# 1729
static constexpr inline bool is_bounded = true; 
# 1730
static constexpr inline bool is_modulo = false; 
# 1732
static constexpr inline bool traps = false; 
# 1733
static constexpr inline bool tinyness_before = false; 
# 1735
static constexpr inline float_round_style round_style = round_to_nearest; 
# 1737
}; 
# 1745
template<> struct numeric_limits< double>  { 
# 1747
static constexpr inline bool is_specialized = true; 
# 1750
static constexpr double min() noexcept { return (double)(2.2250738585072013831E-308L); } 
# 1753
static constexpr double max() noexcept { return (double)(1.7976931348623157081E308L); } 
# 1757
static constexpr double lowest() noexcept { return -((double)(1.7976931348623157081E308L)); } 
# 1760
static constexpr inline int digits = 53; 
# 1761
static constexpr inline int digits10 = 15; 
# 1763
static constexpr inline int max_digits10 = ((2) + (((53) * 643L) / (2136))); 
# 1766
static constexpr inline bool is_signed = true; 
# 1767
static constexpr inline bool is_integer = false; 
# 1768
static constexpr inline bool is_exact = false; 
# 1769
static constexpr inline int radix = 2; 
# 1772
static constexpr double epsilon() noexcept { return (double)(2.2204460492503130808E-16L); } 
# 1775
static constexpr double round_error() noexcept { return (0.5); } 
# 1777
static constexpr inline int min_exponent = (-1021); 
# 1778
static constexpr inline int min_exponent10 = (-307); 
# 1779
static constexpr inline int max_exponent = 1024; 
# 1780
static constexpr inline int max_exponent10 = 308; 
# 1782
static constexpr inline bool has_infinity = (1); 
# 1783
static constexpr inline bool has_quiet_NaN = (1); 
# 1784
static constexpr inline bool has_signaling_NaN = has_quiet_NaN; 
# 1785
static constexpr inline float_denorm_style has_denorm = (((bool)1) ? denorm_present : denorm_absent); 
# 1787
static constexpr inline bool has_denorm_loss = false; 
# 1791
static constexpr double infinity() noexcept { return __builtin_huge_val(); } 
# 1794
static constexpr double quiet_NaN() noexcept { return __builtin_nan(""); } 
# 1797
static constexpr double signaling_NaN() noexcept { return __builtin_nans(""); } 
# 1800
static constexpr double denorm_min() noexcept { return (double)(4.940656458412465442E-324L); } 
# 1802
static constexpr inline bool is_iec559 = (has_infinity && has_quiet_NaN && (has_denorm == (denorm_present))); 
# 1804
static constexpr inline bool is_bounded = true; 
# 1805
static constexpr inline bool is_modulo = false; 
# 1807
static constexpr inline bool traps = false; 
# 1808
static constexpr inline bool tinyness_before = false; 
# 1810
static constexpr inline float_round_style round_style = round_to_nearest; 
# 1812
}; 
# 1820
template<> struct numeric_limits< long double>  { 
# 1822
static constexpr inline bool is_specialized = true; 
# 1825
static constexpr long double min() noexcept { return (3.3621031431120935063E-4932L); } 
# 1828
static constexpr long double max() noexcept { return (1.189731495357231765E4932L); } 
# 1832
static constexpr long double lowest() noexcept { return -(1.189731495357231765E4932L); } 
# 1835
static constexpr inline int digits = 64; 
# 1836
static constexpr inline int digits10 = 18; 
# 1838
static constexpr inline int max_digits10 = ((2) + (((64) * 643L) / (2136))); 
# 1841
static constexpr inline bool is_signed = true; 
# 1842
static constexpr inline bool is_integer = false; 
# 1843
static constexpr inline bool is_exact = false; 
# 1844
static constexpr inline int radix = 2; 
# 1847
static constexpr long double epsilon() noexcept { return (1.084202172485504434E-19L); } 
# 1850
static constexpr long double round_error() noexcept { return (0.5L); } 
# 1852
static constexpr inline int min_exponent = (-16381); 
# 1853
static constexpr inline int min_exponent10 = (-4931); 
# 1854
static constexpr inline int max_exponent = 16384; 
# 1855
static constexpr inline int max_exponent10 = 4932; 
# 1857
static constexpr inline bool has_infinity = (1); 
# 1858
static constexpr inline bool has_quiet_NaN = (1); 
# 1859
static constexpr inline bool has_signaling_NaN = has_quiet_NaN; 
# 1860
static constexpr inline float_denorm_style has_denorm = (((bool)1) ? denorm_present : denorm_absent); 
# 1862
static constexpr inline bool has_denorm_loss = false; 
# 1866
static constexpr long double infinity() noexcept { return __builtin_huge_vall(); } 
# 1869
static constexpr long double quiet_NaN() noexcept { return __builtin_nanl(""); } 
# 1872
static constexpr long double signaling_NaN() noexcept { return __builtin_nansl(""); } 
# 1875
static constexpr long double denorm_min() noexcept { return (3.6E-4951L); } 
# 1877
static constexpr inline bool is_iec559 = (has_infinity && has_quiet_NaN && (has_denorm == (denorm_present))); 
# 1879
static constexpr inline bool is_bounded = true; 
# 1880
static constexpr inline bool is_modulo = false; 
# 1882
static constexpr inline bool traps = false; 
# 1883
static constexpr inline bool tinyness_before = false; 
# 1885
static constexpr inline float_round_style round_style = round_to_nearest; 
# 1887
}; 
# 1894
}
# 39 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/special_function_util.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 50 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/special_function_util.h" 3
namespace __detail { 
# 55
template< class _Tp> 
# 56
struct __floating_point_constant { 
# 58
static const _Tp __value; 
# 59
}; 
# 63
template< class _Tp> 
# 64
struct __numeric_constants { 
# 67
static _Tp __pi() throw() 
# 68
{ return static_cast< _Tp>((3.1415926535897932385L)); } 
# 70
static _Tp __pi_2() throw() 
# 71
{ return static_cast< _Tp>((1.5707963267948966193L)); } 
# 73
static _Tp __pi_3() throw() 
# 74
{ return static_cast< _Tp>((1.0471975511965977461L)); } 
# 76
static _Tp __pi_4() throw() 
# 77
{ return static_cast< _Tp>((0.78539816339744830963L)); } 
# 79
static _Tp __1_pi() throw() 
# 80
{ return static_cast< _Tp>((0.31830988618379067154L)); } 
# 82
static _Tp __2_sqrtpi() throw() 
# 83
{ return static_cast< _Tp>((1.1283791670955125738L)); } 
# 85
static _Tp __sqrt2() throw() 
# 86
{ return static_cast< _Tp>((1.4142135623730950488L)); } 
# 88
static _Tp __sqrt3() throw() 
# 89
{ return static_cast< _Tp>((1.7320508075688772936L)); } 
# 91
static _Tp __sqrtpio2() throw() 
# 92
{ return static_cast< _Tp>((1.2533141373155002512L)); } 
# 94
static _Tp __sqrt1_2() throw() 
# 95
{ return static_cast< _Tp>((0.7071067811865475244L)); } 
# 97
static _Tp __lnpi() throw() 
# 98
{ return static_cast< _Tp>((1.1447298858494001742L)); } 
# 100
static _Tp __gamma_e() throw() 
# 101
{ return static_cast< _Tp>((0.5772156649015328606L)); } 
# 103
static _Tp __euler() throw() 
# 104
{ return static_cast< _Tp>((2.7182818284590452354L)); } 
# 105
}; 
# 114 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/special_function_util.h" 3
template< class _Tp> inline bool 
# 115
__isnan(_Tp __x) 
# 116
{ return std::isnan(__x); } 
# 133 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/special_function_util.h" 3
}
# 139
}
# 51 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/gamma.tcc" 3
namespace std __attribute((__visibility__("default"))) { 
# 65 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/gamma.tcc" 3
namespace __detail { 
# 76 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/gamma.tcc" 3
template< class _Tp> _Tp 
# 78
__bernoulli_series(unsigned __n) 
# 79
{ 
# 81
static const _Tp __num[28] = {((_Tp)1UL), ((-((_Tp)1UL)) / ((_Tp)2UL)), (((_Tp)1UL) / ((_Tp)6UL)), ((_Tp)0UL), ((-((_Tp)1UL)) / ((_Tp)30UL)), ((_Tp)0UL), (((_Tp)1UL) / ((_Tp)42UL)), ((_Tp)0UL), ((-((_Tp)1UL)) / ((_Tp)30UL)), ((_Tp)0UL), (((_Tp)5UL) / ((_Tp)66UL)), ((_Tp)0UL), ((-((_Tp)691UL)) / ((_Tp)2730UL)), ((_Tp)0UL), (((_Tp)7UL) / ((_Tp)6UL)), ((_Tp)0UL), ((-((_Tp)3617UL)) / ((_Tp)510UL)), ((_Tp)0UL), (((_Tp)43867UL) / ((_Tp)798UL)), ((_Tp)0UL), ((-((_Tp)174611)) / ((_Tp)330UL)), ((_Tp)0UL), (((_Tp)854513UL) / ((_Tp)138UL)), ((_Tp)0UL), ((-((_Tp)236364091UL)) / ((_Tp)2730UL)), ((_Tp)0UL), (((_Tp)8553103UL) / ((_Tp)6UL)), ((_Tp)0UL)}; 
# 98
if (__n == (0)) { 
# 99
return (_Tp)1; }  
# 101
if (__n == (1)) { 
# 102
return (-((_Tp)1)) / ((_Tp)2); }  
# 105
if ((__n % (2)) == (1)) { 
# 106
return (_Tp)0; }  
# 109
if (__n < (28)) { 
# 110
return __num[__n]; }  
# 113
_Tp __fact = ((_Tp)1); 
# 114
if (((__n / (2)) % (2)) == (0)) { 
# 115
__fact *= ((_Tp)(-1)); }  
# 116
for (unsigned __k = (1); __k <= __n; ++__k) { 
# 117
__fact *= (__k / (((_Tp)2) * __numeric_constants< _Tp> ::__pi())); }  
# 118
__fact *= ((_Tp)2); 
# 120
_Tp __sum = ((_Tp)0); 
# 121
for (unsigned __i = (1); __i < (1000); ++__i) 
# 122
{ 
# 123
_Tp __term = std::pow((_Tp)__i, -((_Tp)__n)); 
# 124
if (__term < std::template numeric_limits< _Tp> ::epsilon()) { 
# 125
break; }  
# 126
__sum += __term; 
# 127
}  
# 129
return __fact * __sum; 
# 130
} 
# 139 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/gamma.tcc" 3
template< class _Tp> inline _Tp 
# 141
__bernoulli(int __n) 
# 142
{ return __bernoulli_series< _Tp> (__n); } 
# 153 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/gamma.tcc" 3
template< class _Tp> _Tp 
# 155
__log_gamma_bernoulli(_Tp __x) 
# 156
{ 
# 157
_Tp __lg = (((__x - ((_Tp)(0.5L))) * std::log(__x)) - __x) + (((_Tp)(0.5L)) * std::log(((_Tp)2) * __numeric_constants< _Tp> ::__pi())); 
# 161
const _Tp __xx = __x * __x; 
# 162
_Tp __help = ((_Tp)1) / __x; 
# 163
for (unsigned __i = (1); __i < (20); ++__i) 
# 164
{ 
# 165
const _Tp __2i = (_Tp)((2) * __i); 
# 166
__help /= ((__2i * (__2i - ((_Tp)1))) * __xx); 
# 167
__lg += (__bernoulli< _Tp> ((2) * __i) * __help); 
# 168
}  
# 170
return __lg; 
# 171
} 
# 181 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/gamma.tcc" 3
template< class _Tp> _Tp 
# 183
__log_gamma_lanczos(_Tp __x) 
# 184
{ 
# 185
const _Tp __xm1 = __x - ((_Tp)1); 
# 187
static const _Tp __lanczos_cheb_7[9] = {((_Tp)(0.99999999999980993226L)), ((_Tp)(676.52036812188509857L)), ((_Tp)(-(1259.1392167224028704L))), ((_Tp)(771.32342877765307887L)), ((_Tp)(-(176.61502916214059906L))), ((_Tp)(12.507343278686904814L)), ((_Tp)(-(0.1385710952657201169L))), ((_Tp)(9.9843695780195708595E-6L)), ((_Tp)(1.5056327351493115584E-7L))}; 
# 199
static const _Tp __LOGROOT2PI = ((_Tp)(0.9189385332046727418L)); 
# 202
_Tp __sum = (__lanczos_cheb_7[0]); 
# 203
for (unsigned __k = (1); __k < (9); ++__k) { 
# 204
__sum += ((__lanczos_cheb_7[__k]) / (__xm1 + __k)); }  
# 206
const _Tp __term1 = (__xm1 + ((_Tp)(0.5L))) * std::log((__xm1 + ((_Tp)(7.5L))) / __numeric_constants< _Tp> ::__euler()); 
# 209
const _Tp __term2 = __LOGROOT2PI + std::log(__sum); 
# 210
const _Tp __result = __term1 + (__term2 - ((_Tp)7)); 
# 212
return __result; 
# 213
} 
# 225 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/gamma.tcc" 3
template< class _Tp> _Tp 
# 227
__log_gamma(_Tp __x) 
# 228
{ 
# 229
if (__x > ((_Tp)(0.5L))) { 
# 230
return __log_gamma_lanczos(__x); } else 
# 232
{ 
# 233
const _Tp __sin_fact = std::abs(std::sin(__numeric_constants< _Tp> ::__pi() * __x)); 
# 235
if (__sin_fact == ((_Tp)0)) { 
# 236
std::__throw_domain_error("Argument is nonpositive integer in __log_gamma"); }  
# 238
return (__numeric_constants< _Tp> ::__lnpi() - std::log(__sin_fact)) - __log_gamma_lanczos(((_Tp)1) - __x); 
# 241
}  
# 242
} 
# 252 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/gamma.tcc" 3
template< class _Tp> _Tp 
# 254
__log_gamma_sign(_Tp __x) 
# 255
{ 
# 256
if (__x > ((_Tp)0)) { 
# 257
return (_Tp)1; } else 
# 259
{ 
# 260
const _Tp __sin_fact = std::sin(__numeric_constants< _Tp> ::__pi() * __x); 
# 262
if (__sin_fact > ((_Tp)0)) { 
# 263
return 1; } else { 
# 264
if (__sin_fact < ((_Tp)0)) { 
# 265
return -((_Tp)1); } else { 
# 267
return (_Tp)0; }  }  
# 268
}  
# 269
} 
# 283 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/gamma.tcc" 3
template< class _Tp> _Tp 
# 285
__log_bincoef(unsigned __n, unsigned __k) 
# 286
{ 
# 288
static const _Tp __max_bincoeff = (std::template numeric_limits< _Tp> ::max_exponent10 * std::log((_Tp)10)) - ((_Tp)1); 
# 292
_Tp __coeff = (std::lgamma((_Tp)((1) + __n)) - std::lgamma((_Tp)((1) + __k))) - std::lgamma((_Tp)(((1) + __n) - __k)); 
# 300
} 
# 314 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/gamma.tcc" 3
template< class _Tp> _Tp 
# 316
__bincoef(unsigned __n, unsigned __k) 
# 317
{ 
# 319
static const _Tp __max_bincoeff = (std::template numeric_limits< _Tp> ::max_exponent10 * std::log((_Tp)10)) - ((_Tp)1); 
# 323
const _Tp __log_coeff = __log_bincoef< _Tp> (__n, __k); 
# 324
if (__log_coeff > __max_bincoeff) { 
# 325
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 327
return std::exp(__log_coeff); }  
# 328
} 
# 337 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/gamma.tcc" 3
template< class _Tp> inline _Tp 
# 339
__gamma(_Tp __x) 
# 340
{ return std::exp(__log_gamma(__x)); } 
# 356 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/gamma.tcc" 3
template< class _Tp> _Tp 
# 358
__psi_series(_Tp __x) 
# 359
{ 
# 360
_Tp __sum = (-__numeric_constants< _Tp> ::__gamma_e()) - (((_Tp)1) / __x); 
# 361
const unsigned __max_iter = (100000); 
# 362
for (unsigned __k = (1); __k < __max_iter; ++__k) 
# 363
{ 
# 364
const _Tp __term = __x / (__k * (__k + __x)); 
# 365
__sum += __term; 
# 366
if (std::abs(__term / __sum) < std::template numeric_limits< _Tp> ::epsilon()) { 
# 367
break; }  
# 368
}  
# 369
return __sum; 
# 370
} 
# 386 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/gamma.tcc" 3
template< class _Tp> _Tp 
# 388
__psi_asymp(_Tp __x) 
# 389
{ 
# 390
_Tp __sum = std::log(__x) - (((_Tp)(0.5L)) / __x); 
# 391
const _Tp __xx = __x * __x; 
# 392
_Tp __xp = __xx; 
# 393
const unsigned __max_iter = (100); 
# 394
for (unsigned __k = (1); __k < __max_iter; ++__k) 
# 395
{ 
# 396
const _Tp __term = __bernoulli< _Tp> ((2) * __k) / (((2) * __k) * __xp); 
# 397
__sum -= __term; 
# 398
if (std::abs(__term / __sum) < std::template numeric_limits< _Tp> ::epsilon()) { 
# 399
break; }  
# 400
__xp *= __xx; 
# 401
}  
# 402
return __sum; 
# 403
} 
# 417 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/gamma.tcc" 3
template< class _Tp> _Tp 
# 419
__psi(_Tp __x) 
# 420
{ 
# 421
const int __n = static_cast< int>(__x + (0.5L)); 
# 422
const _Tp __eps = ((_Tp)4) * std::template numeric_limits< _Tp> ::epsilon(); 
# 423
if ((__n <= 0) && (std::abs(__x - ((_Tp)__n)) < __eps)) { 
# 424
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 425
if (__x < ((_Tp)0)) 
# 426
{ 
# 427
const _Tp __pi = __numeric_constants< _Tp> ::__pi(); 
# 428
return __psi(((_Tp)1) - __x) - ((__pi * std::cos(__pi * __x)) / std::sin(__pi * __x)); 
# 430
} else { 
# 431
if (__x > ((_Tp)100)) { 
# 432
return __psi_asymp(__x); } else { 
# 434
return __psi_series(__x); }  }  }  
# 435
} 
# 446 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/gamma.tcc" 3
template< class _Tp> _Tp 
# 448
__psi(unsigned __n, _Tp __x) 
# 449
{ 
# 450
if (__x <= ((_Tp)0)) { 
# 451
std::__throw_domain_error("Argument out of range in __psi"); } else { 
# 453
if (__n == (0)) { 
# 454
return __psi(__x); } else 
# 456
{ 
# 457
const _Tp __hzeta = __hurwitz_zeta((_Tp)(__n + (1)), __x); 
# 459
const _Tp __ln_nfact = std::lgamma((_Tp)(__n + (1))); 
# 463
_Tp __result = std::exp(__ln_nfact) * __hzeta; 
# 464
if ((__n % (2)) == (1)) { 
# 465
__result = (-__result); }  
# 466
return __result; 
# 467
}  }  
# 468
} 
# 469
}
# 476
}
# 55 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/bessel_function.tcc" 3
namespace std __attribute((__visibility__("default"))) { 
# 71 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/bessel_function.tcc" 3
namespace __detail { 
# 98 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/bessel_function.tcc" 3
template< class _Tp> void 
# 100
__gamma_temme(_Tp __mu, _Tp &
# 101
__gam1, _Tp &__gam2, _Tp &__gampl, _Tp &__gammi) 
# 102
{ 
# 104
__gampl = (((_Tp)1) / std::tgamma(((_Tp)1) + __mu)); 
# 105
__gammi = (((_Tp)1) / std::tgamma(((_Tp)1) - __mu)); 
# 111
if (std::abs(__mu) < std::template numeric_limits< _Tp> ::epsilon()) { 
# 112
__gam1 = (-((_Tp)__numeric_constants< _Tp> ::__gamma_e())); } else { 
# 114
__gam1 = ((__gammi - __gampl) / (((_Tp)2) * __mu)); }  
# 116
__gam2 = ((__gammi + __gampl) / ((_Tp)2)); 
# 119
} 
# 136 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/bessel_function.tcc" 3
template< class _Tp> void 
# 138
__bessel_jn(_Tp __nu, _Tp __x, _Tp &
# 139
__Jnu, _Tp &__Nnu, _Tp &__Jpnu, _Tp &__Npnu) 
# 140
{ 
# 141
if (__x == ((_Tp)0)) 
# 142
{ 
# 143
if (__nu == ((_Tp)0)) 
# 144
{ 
# 145
__Jnu = ((_Tp)1); 
# 146
__Jpnu = ((_Tp)0); 
# 147
} else { 
# 148
if (__nu == ((_Tp)1)) 
# 149
{ 
# 150
__Jnu = ((_Tp)0); 
# 151
__Jpnu = ((_Tp)(0.5L)); 
# 152
} else 
# 154
{ 
# 155
__Jnu = ((_Tp)0); 
# 156
__Jpnu = ((_Tp)0); 
# 157
}  }  
# 158
__Nnu = (-std::template numeric_limits< _Tp> ::infinity()); 
# 159
__Npnu = std::template numeric_limits< _Tp> ::infinity(); 
# 160
return; 
# 161
}  
# 163
const _Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 168
const _Tp __fp_min = std::sqrt(std::template numeric_limits< _Tp> ::min()); 
# 169
const int __max_iter = 15000; 
# 170
const _Tp __x_min = ((_Tp)2); 
# 172
const int __nl = (__x < __x_min) ? static_cast< int>(__nu + ((_Tp)(0.5L))) : std::max(0, static_cast< int>((__nu - __x) + ((_Tp)(1.5L)))); 
# 176
const _Tp __mu = __nu - __nl; 
# 177
const _Tp __mu2 = __mu * __mu; 
# 178
const _Tp __xi = ((_Tp)1) / __x; 
# 179
const _Tp __xi2 = ((_Tp)2) * __xi; 
# 180
_Tp __w = __xi2 / __numeric_constants< _Tp> ::__pi(); 
# 181
int __isign = 1; 
# 182
_Tp __h = __nu * __xi; 
# 183
if (__h < __fp_min) { 
# 184
__h = __fp_min; }  
# 185
_Tp __b = __xi2 * __nu; 
# 186
_Tp __d = ((_Tp)0); 
# 187
_Tp __c = __h; 
# 188
int __i; 
# 189
for (__i = 1; __i <= __max_iter; ++__i) 
# 190
{ 
# 191
__b += __xi2; 
# 192
__d = (__b - __d); 
# 193
if (std::abs(__d) < __fp_min) { 
# 194
__d = __fp_min; }  
# 195
__c = (__b - (((_Tp)1) / __c)); 
# 196
if (std::abs(__c) < __fp_min) { 
# 197
__c = __fp_min; }  
# 198
__d = (((_Tp)1) / __d); 
# 199
const _Tp __del = __c * __d; 
# 200
__h *= __del; 
# 201
if (__d < ((_Tp)0)) { 
# 202
__isign = (-__isign); }  
# 203
if (std::abs(__del - ((_Tp)1)) < __eps) { 
# 204
break; }  
# 205
}  
# 206
if (__i > __max_iter) { 
# 207
std::__throw_runtime_error("Argument x too large in __bessel_jn; try asymptotic expansion."); }  
# 209
_Tp __Jnul = __isign * __fp_min; 
# 210
_Tp __Jpnul = __h * __Jnul; 
# 211
_Tp __Jnul1 = __Jnul; 
# 212
_Tp __Jpnu1 = __Jpnul; 
# 213
_Tp __fact = __nu * __xi; 
# 214
for (int __l = __nl; __l >= 1; --__l) 
# 215
{ 
# 216
const _Tp __Jnutemp = (__fact * __Jnul) + __Jpnul; 
# 217
__fact -= __xi; 
# 218
__Jpnul = ((__fact * __Jnutemp) - __Jnul); 
# 219
__Jnul = __Jnutemp; 
# 220
}  
# 221
if (__Jnul == ((_Tp)0)) { 
# 222
__Jnul = __eps; }  
# 223
_Tp __f = __Jpnul / __Jnul; 
# 224
_Tp __Nmu, __Nnu1, __Npmu, __Jmu; 
# 225
if (__x < __x_min) 
# 226
{ 
# 227
const _Tp __x2 = __x / ((_Tp)2); 
# 228
const _Tp __pimu = __numeric_constants< _Tp> ::__pi() * __mu; 
# 229
_Tp __fact = (std::abs(__pimu) < __eps) ? (_Tp)1 : (__pimu / std::sin(__pimu)); 
# 231
_Tp __d = (-std::log(__x2)); 
# 232
_Tp __e = __mu * __d; 
# 233
_Tp __fact2 = (std::abs(__e) < __eps) ? (_Tp)1 : (std::sinh(__e) / __e); 
# 235
_Tp __gam1, __gam2, __gampl, __gammi; 
# 236
__gamma_temme(__mu, __gam1, __gam2, __gampl, __gammi); 
# 237
_Tp __ff = ((((_Tp)2) / __numeric_constants< _Tp> ::__pi()) * __fact) * ((__gam1 * std::cosh(__e)) + ((__gam2 * __fact2) * __d)); 
# 239
__e = std::exp(__e); 
# 240
_Tp __p = __e / (__numeric_constants< _Tp> ::__pi() * __gampl); 
# 241
_Tp __q = ((_Tp)1) / ((__e * __numeric_constants< _Tp> ::__pi()) * __gammi); 
# 242
const _Tp __pimu2 = __pimu / ((_Tp)2); 
# 243
_Tp __fact3 = (std::abs(__pimu2) < __eps) ? (_Tp)1 : (std::sin(__pimu2) / __pimu2); 
# 245
_Tp __r = ((__numeric_constants< _Tp> ::__pi() * __pimu2) * __fact3) * __fact3; 
# 246
_Tp __c = ((_Tp)1); 
# 247
__d = ((-__x2) * __x2); 
# 248
_Tp __sum = __ff + (__r * __q); 
# 249
_Tp __sum1 = __p; 
# 250
for (__i = 1; __i <= __max_iter; ++__i) 
# 251
{ 
# 252
__ff = ((((__i * __ff) + __p) + __q) / ((__i * __i) - __mu2)); 
# 253
__c *= (__d / ((_Tp)__i)); 
# 254
__p /= (((_Tp)__i) - __mu); 
# 255
__q /= (((_Tp)__i) + __mu); 
# 256
const _Tp __del = __c * (__ff + (__r * __q)); 
# 257
__sum += __del; 
# 258
const _Tp __del1 = (__c * __p) - (__i * __del); 
# 259
__sum1 += __del1; 
# 260
if (std::abs(__del) < (__eps * (((_Tp)1) + std::abs(__sum)))) { 
# 261
break; }  
# 262
}  
# 263
if (__i > __max_iter) { 
# 264
std::__throw_runtime_error("Bessel y series failed to converge in __bessel_jn."); }  
# 266
__Nmu = (-__sum); 
# 267
__Nnu1 = ((-__sum1) * __xi2); 
# 268
__Npmu = (((__mu * __xi) * __Nmu) - __Nnu1); 
# 269
__Jmu = (__w / (__Npmu - (__f * __Nmu))); 
# 270
} else 
# 272
{ 
# 273
_Tp __a = ((_Tp)(0.25L)) - __mu2; 
# 274
_Tp __q = ((_Tp)1); 
# 275
_Tp __p = ((-__xi) / ((_Tp)2)); 
# 276
_Tp __br = ((_Tp)2) * __x; 
# 277
_Tp __bi = ((_Tp)2); 
# 278
_Tp __fact = (__a * __xi) / ((__p * __p) + (__q * __q)); 
# 279
_Tp __cr = __br + (__q * __fact); 
# 280
_Tp __ci = __bi + (__p * __fact); 
# 281
_Tp __den = (__br * __br) + (__bi * __bi); 
# 282
_Tp __dr = __br / __den; 
# 283
_Tp __di = (-__bi) / __den; 
# 284
_Tp __dlr = (__cr * __dr) - (__ci * __di); 
# 285
_Tp __dli = (__cr * __di) + (__ci * __dr); 
# 286
_Tp __temp = (__p * __dlr) - (__q * __dli); 
# 287
__q = ((__p * __dli) + (__q * __dlr)); 
# 288
__p = __temp; 
# 289
int __i; 
# 290
for (__i = 2; __i <= __max_iter; ++__i) 
# 291
{ 
# 292
__a += ((_Tp)(2 * (__i - 1))); 
# 293
__bi += ((_Tp)2); 
# 294
__dr = ((__a * __dr) + __br); 
# 295
__di = ((__a * __di) + __bi); 
# 296
if ((std::abs(__dr) + std::abs(__di)) < __fp_min) { 
# 297
__dr = __fp_min; }  
# 298
__fact = (__a / ((__cr * __cr) + (__ci * __ci))); 
# 299
__cr = (__br + (__cr * __fact)); 
# 300
__ci = (__bi - (__ci * __fact)); 
# 301
if ((std::abs(__cr) + std::abs(__ci)) < __fp_min) { 
# 302
__cr = __fp_min; }  
# 303
__den = ((__dr * __dr) + (__di * __di)); 
# 304
__dr /= __den; 
# 305
__di /= (-__den); 
# 306
__dlr = ((__cr * __dr) - (__ci * __di)); 
# 307
__dli = ((__cr * __di) + (__ci * __dr)); 
# 308
__temp = ((__p * __dlr) - (__q * __dli)); 
# 309
__q = ((__p * __dli) + (__q * __dlr)); 
# 310
__p = __temp; 
# 311
if ((std::abs(__dlr - ((_Tp)1)) + std::abs(__dli)) < __eps) { 
# 312
break; }  
# 313
}  
# 314
if (__i > __max_iter) { 
# 315
std::__throw_runtime_error("Lentz\'s method failed in __bessel_jn."); }  
# 317
const _Tp __gam = (__p - __f) / __q; 
# 318
__Jmu = std::sqrt(__w / (((__p - __f) * __gam) + __q)); 
# 320
__Jmu = std::copysign(__Jmu, __Jnul); 
# 325
__Nmu = (__gam * __Jmu); 
# 326
__Npmu = ((__p + (__q / __gam)) * __Nmu); 
# 327
__Nnu1 = (((__mu * __xi) * __Nmu) - __Npmu); 
# 328
}  
# 329
__fact = (__Jmu / __Jnul); 
# 330
__Jnu = (__fact * __Jnul1); 
# 331
__Jpnu = (__fact * __Jpnu1); 
# 332
for (__i = 1; __i <= __nl; ++__i) 
# 333
{ 
# 334
const _Tp __Nnutemp = (((__mu + __i) * __xi2) * __Nnu1) - __Nmu; 
# 335
__Nmu = __Nnu1; 
# 336
__Nnu1 = __Nnutemp; 
# 337
}  
# 338
__Nnu = __Nmu; 
# 339
__Npnu = (((__nu * __xi) * __Nmu) - __Nnu1); 
# 342
} 
# 361 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/bessel_function.tcc" 3
template< class _Tp> void 
# 363
__cyl_bessel_jn_asymp(_Tp __nu, _Tp __x, _Tp &__Jnu, _Tp &__Nnu) 
# 364
{ 
# 365
const _Tp __mu = (((_Tp)4) * __nu) * __nu; 
# 366
const _Tp __8x = ((_Tp)8) * __x; 
# 368
_Tp __P = ((_Tp)0); 
# 369
_Tp __Q = ((_Tp)0); 
# 371
_Tp __k = ((_Tp)0); 
# 372
_Tp __term = ((_Tp)1); 
# 374
int __epsP = 0; 
# 375
int __epsQ = 0; 
# 377
_Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 379
do 
# 380
{ 
# 381
__term *= ((__k == 0) ? (_Tp)1 : ((-(__mu - (((2 * __k) - 1) * ((2 * __k) - 1)))) / (__k * __8x))); 
# 385
__epsP = (std::abs(__term) < (__eps * std::abs(__P))); 
# 386
__P += __term; 
# 388
__k++; 
# 390
__term *= ((__mu - (((2 * __k) - 1) * ((2 * __k) - 1))) / (__k * __8x)); 
# 391
__epsQ = (std::abs(__term) < (__eps * std::abs(__Q))); 
# 392
__Q += __term; 
# 394
if (__epsP && __epsQ && (__k > (__nu / (2.0)))) { 
# 395
break; }  
# 397
__k++; 
# 398
} 
# 399
while (__k < 1000); 
# 401
const _Tp __chi = __x - ((__nu + ((_Tp)(0.5L))) * __numeric_constants< _Tp> ::__pi_2()); 
# 404
const _Tp __c = std::cos(__chi); 
# 405
const _Tp __s = std::sin(__chi); 
# 407
const _Tp __coef = std::sqrt(((_Tp)2) / (__numeric_constants< _Tp> ::__pi() * __x)); 
# 410
__Jnu = (__coef * ((__c * __P) - (__s * __Q))); 
# 411
__Nnu = (__coef * ((__s * __P) + (__c * __Q))); 
# 414
} 
# 444 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/bessel_function.tcc" 3
template< class _Tp> _Tp 
# 446
__cyl_bessel_ij_series(_Tp __nu, _Tp __x, _Tp __sgn, unsigned 
# 447
__max_iter) 
# 448
{ 
# 449
if (__x == ((_Tp)0)) { 
# 450
return (__nu == ((_Tp)0)) ? (_Tp)1 : ((_Tp)0); }  
# 452
const _Tp __x2 = __x / ((_Tp)2); 
# 453
_Tp __fact = __nu * std::log(__x2); 
# 455
__fact -= std::lgamma(__nu + ((_Tp)1)); 
# 459
__fact = std::exp(__fact); 
# 460
const _Tp __xx4 = (__sgn * __x2) * __x2; 
# 461
_Tp __Jn = ((_Tp)1); 
# 462
_Tp __term = ((_Tp)1); 
# 464
for (unsigned __i = (1); __i < __max_iter; ++__i) 
# 465
{ 
# 466
__term *= (__xx4 / (((_Tp)__i) * (__nu + ((_Tp)__i)))); 
# 467
__Jn += __term; 
# 468
if (std::abs(__term / __Jn) < std::template numeric_limits< _Tp> ::epsilon()) { 
# 469
break; }  
# 470
}  
# 472
return __fact * __Jn; 
# 473
} 
# 490 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/bessel_function.tcc" 3
template< class _Tp> _Tp 
# 492
__cyl_bessel_j(_Tp __nu, _Tp __x) 
# 493
{ 
# 494
if ((__nu < ((_Tp)0)) || (__x < ((_Tp)0))) { 
# 495
std::__throw_domain_error("Bad argument in __cyl_bessel_j."); } else { 
# 497
if (__isnan(__nu) || __isnan(__x)) { 
# 498
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 499
if ((__x * __x) < (((_Tp)10) * (__nu + ((_Tp)1)))) { 
# 500
return __cyl_bessel_ij_series(__nu, __x, -((_Tp)1), 200); } else { 
# 501
if (__x > ((_Tp)1000)) 
# 502
{ 
# 503
_Tp __J_nu, __N_nu; 
# 504
__cyl_bessel_jn_asymp(__nu, __x, __J_nu, __N_nu); 
# 505
return __J_nu; 
# 506
} else 
# 508
{ 
# 509
_Tp __J_nu, __N_nu, __Jp_nu, __Np_nu; 
# 510
__bessel_jn(__nu, __x, __J_nu, __N_nu, __Jp_nu, __Np_nu); 
# 511
return __J_nu; 
# 512
}  }  }  }  
# 513
} 
# 532 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/bessel_function.tcc" 3
template< class _Tp> _Tp 
# 534
__cyl_neumann_n(_Tp __nu, _Tp __x) 
# 535
{ 
# 536
if ((__nu < ((_Tp)0)) || (__x < ((_Tp)0))) { 
# 537
std::__throw_domain_error("Bad argument in __cyl_neumann_n."); } else { 
# 539
if (__isnan(__nu) || __isnan(__x)) { 
# 540
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 541
if (__x > ((_Tp)1000)) 
# 542
{ 
# 543
_Tp __J_nu, __N_nu; 
# 544
__cyl_bessel_jn_asymp(__nu, __x, __J_nu, __N_nu); 
# 545
return __N_nu; 
# 546
} else 
# 548
{ 
# 549
_Tp __J_nu, __N_nu, __Jp_nu, __Np_nu; 
# 550
__bessel_jn(__nu, __x, __J_nu, __N_nu, __Jp_nu, __Np_nu); 
# 551
return __N_nu; 
# 552
}  }  }  
# 553
} 
# 569 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/bessel_function.tcc" 3
template< class _Tp> void 
# 571
__sph_bessel_jn(unsigned __n, _Tp __x, _Tp &
# 572
__j_n, _Tp &__n_n, _Tp &__jp_n, _Tp &__np_n) 
# 573
{ 
# 574
const _Tp __nu = ((_Tp)__n) + ((_Tp)(0.5L)); 
# 576
_Tp __J_nu, __N_nu, __Jp_nu, __Np_nu; 
# 577
__bessel_jn(__nu, __x, __J_nu, __N_nu, __Jp_nu, __Np_nu); 
# 579
const _Tp __factor = __numeric_constants< _Tp> ::__sqrtpio2() / std::sqrt(__x); 
# 582
__j_n = (__factor * __J_nu); 
# 583
__n_n = (__factor * __N_nu); 
# 584
__jp_n = ((__factor * __Jp_nu) - (__j_n / (((_Tp)2) * __x))); 
# 585
__np_n = ((__factor * __Np_nu) - (__n_n / (((_Tp)2) * __x))); 
# 588
} 
# 604 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/bessel_function.tcc" 3
template< class _Tp> _Tp 
# 606
__sph_bessel(unsigned __n, _Tp __x) 
# 607
{ 
# 608
if (__x < ((_Tp)0)) { 
# 609
std::__throw_domain_error("Bad argument in __sph_bessel."); } else { 
# 611
if (__isnan(__x)) { 
# 612
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 613
if (__x == ((_Tp)0)) 
# 614
{ 
# 615
if (__n == (0)) { 
# 616
return (_Tp)1; } else { 
# 618
return (_Tp)0; }  
# 619
} else 
# 621
{ 
# 622
_Tp __j_n, __n_n, __jp_n, __np_n; 
# 623
__sph_bessel_jn(__n, __x, __j_n, __n_n, __jp_n, __np_n); 
# 624
return __j_n; 
# 625
}  }  }  
# 626
} 
# 642 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/bessel_function.tcc" 3
template< class _Tp> _Tp 
# 644
__sph_neumann(unsigned __n, _Tp __x) 
# 645
{ 
# 646
if (__x < ((_Tp)0)) { 
# 647
std::__throw_domain_error("Bad argument in __sph_neumann."); } else { 
# 649
if (__isnan(__x)) { 
# 650
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 651
if (__x == ((_Tp)0)) { 
# 652
return -std::template numeric_limits< _Tp> ::infinity(); } else 
# 654
{ 
# 655
_Tp __j_n, __n_n, __jp_n, __np_n; 
# 656
__sph_bessel_jn(__n, __x, __j_n, __n_n, __jp_n, __np_n); 
# 657
return __n_n; 
# 658
}  }  }  
# 659
} 
# 660
}
# 667
}
# 49 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/beta_function.tcc" 3
namespace std __attribute((__visibility__("default"))) { 
# 65 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/beta_function.tcc" 3
namespace __detail { 
# 79 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/beta_function.tcc" 3
template< class _Tp> _Tp 
# 81
__beta_gamma(_Tp __x, _Tp __y) 
# 82
{ 
# 84
_Tp __bet; 
# 86
if (__x > __y) 
# 87
{ 
# 88
__bet = (std::tgamma(__x) / std::tgamma(__x + __y)); 
# 90
__bet *= std::tgamma(__y); 
# 91
} else 
# 93
{ 
# 94
__bet = (std::tgamma(__y) / std::tgamma(__x + __y)); 
# 96
__bet *= std::tgamma(__x); 
# 97
}  
# 111 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/beta_function.tcc" 3
return __bet; 
# 112
} 
# 127 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/beta_function.tcc" 3
template< class _Tp> _Tp 
# 129
__beta_lgamma(_Tp __x, _Tp __y) 
# 130
{ 
# 132
_Tp __bet = (std::lgamma(__x) + std::lgamma(__y)) - std::lgamma(__x + __y); 
# 140
__bet = std::exp(__bet); 
# 141
return __bet; 
# 142
} 
# 158 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/beta_function.tcc" 3
template< class _Tp> _Tp 
# 160
__beta_product(_Tp __x, _Tp __y) 
# 161
{ 
# 163
_Tp __bet = (__x + __y) / (__x * __y); 
# 165
unsigned __max_iter = (1000000); 
# 166
for (unsigned __k = (1); __k < __max_iter; ++__k) 
# 167
{ 
# 168
_Tp __term = (((_Tp)1) + ((__x + __y) / __k)) / ((((_Tp)1) + (__x / __k)) * (((_Tp)1) + (__y / __k))); 
# 170
__bet *= __term; 
# 171
}  
# 173
return __bet; 
# 174
} 
# 189 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/beta_function.tcc" 3
template< class _Tp> inline _Tp 
# 191
__beta(_Tp __x, _Tp __y) 
# 192
{ 
# 193
if (__isnan(__x) || __isnan(__y)) { 
# 194
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 196
return __beta_lgamma(__x, __y); }  
# 197
} 
# 198
}
# 205
}
# 45 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/ell_integral.tcc" 3
namespace std __attribute((__visibility__("default"))) { 
# 59 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/ell_integral.tcc" 3
namespace __detail { 
# 76 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/ell_integral.tcc" 3
template< class _Tp> _Tp 
# 78
__ellint_rf(_Tp __x, _Tp __y, _Tp __z) 
# 79
{ 
# 80
const _Tp __min = std::template numeric_limits< _Tp> ::min(); 
# 81
const _Tp __lolim = ((_Tp)5) * __min; 
# 83
if (((__x < ((_Tp)0)) || (__y < ((_Tp)0))) || (__z < ((_Tp)0))) { 
# 84
std::__throw_domain_error("Argument less than zero in __ellint_rf."); } else { 
# 86
if ((((__x + __y) < __lolim) || ((__x + __z) < __lolim)) || ((__y + __z) < __lolim)) { 
# 88
std::__throw_domain_error("Argument too small in __ellint_rf"); } else 
# 90
{ 
# 91
const _Tp __c0 = (((_Tp)1) / ((_Tp)4)); 
# 92
const _Tp __c1 = (((_Tp)1) / ((_Tp)24)); 
# 93
const _Tp __c2 = (((_Tp)1) / ((_Tp)10)); 
# 94
const _Tp __c3 = (((_Tp)3) / ((_Tp)44)); 
# 95
const _Tp __c4 = (((_Tp)1) / ((_Tp)14)); 
# 97
_Tp __xn = __x; 
# 98
_Tp __yn = __y; 
# 99
_Tp __zn = __z; 
# 101
const _Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 102
const _Tp __errtol = std::pow(__eps, ((_Tp)1) / ((_Tp)6)); 
# 103
_Tp __mu; 
# 104
_Tp __xndev, __yndev, __zndev; 
# 106
const unsigned __max_iter = (100); 
# 107
for (unsigned __iter = (0); __iter < __max_iter; ++__iter) 
# 108
{ 
# 109
__mu = (((__xn + __yn) + __zn) / ((_Tp)3)); 
# 110
__xndev = (2 - ((__mu + __xn) / __mu)); 
# 111
__yndev = (2 - ((__mu + __yn) / __mu)); 
# 112
__zndev = (2 - ((__mu + __zn) / __mu)); 
# 113
_Tp __epsilon = std::max(std::abs(__xndev), std::abs(__yndev)); 
# 114
__epsilon = std::max(__epsilon, std::abs(__zndev)); 
# 115
if (__epsilon < __errtol) { 
# 116
break; }  
# 117
const _Tp __xnroot = std::sqrt(__xn); 
# 118
const _Tp __ynroot = std::sqrt(__yn); 
# 119
const _Tp __znroot = std::sqrt(__zn); 
# 120
const _Tp __lambda = (__xnroot * (__ynroot + __znroot)) + (__ynroot * __znroot); 
# 122
__xn = (__c0 * (__xn + __lambda)); 
# 123
__yn = (__c0 * (__yn + __lambda)); 
# 124
__zn = (__c0 * (__zn + __lambda)); 
# 125
}  
# 127
const _Tp __e2 = (__xndev * __yndev) - (__zndev * __zndev); 
# 128
const _Tp __e3 = (__xndev * __yndev) * __zndev; 
# 129
const _Tp __s = (((_Tp)1) + ((((__c1 * __e2) - __c2) - (__c3 * __e3)) * __e2)) + (__c4 * __e3); 
# 132
return __s / std::sqrt(__mu); 
# 133
}  }  
# 134
} 
# 153 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/ell_integral.tcc" 3
template< class _Tp> _Tp 
# 155
__comp_ellint_1_series(_Tp __k) 
# 156
{ 
# 158
const _Tp __kk = __k * __k; 
# 160
_Tp __term = __kk / ((_Tp)4); 
# 161
_Tp __sum = ((_Tp)1) + __term; 
# 163
const unsigned __max_iter = (1000); 
# 164
for (unsigned __i = (2); __i < __max_iter; ++__i) 
# 165
{ 
# 166
__term *= (((((2) * __i) - (1)) * __kk) / ((2) * __i)); 
# 167
if (__term < std::template numeric_limits< _Tp> ::epsilon()) { 
# 168
break; }  
# 169
__sum += __term; 
# 170
}  
# 172
return __numeric_constants< _Tp> ::__pi_2() * __sum; 
# 173
} 
# 191 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/ell_integral.tcc" 3
template< class _Tp> _Tp 
# 193
__comp_ellint_1(_Tp __k) 
# 194
{ 
# 196
if (__isnan(__k)) { 
# 197
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 198
if (std::abs(__k) >= ((_Tp)1)) { 
# 199
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 201
return __ellint_rf((_Tp)0, ((_Tp)1) - (__k * __k), (_Tp)1); }  }  
# 202
} 
# 219 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/ell_integral.tcc" 3
template< class _Tp> _Tp 
# 221
__ellint_1(_Tp __k, _Tp __phi) 
# 222
{ 
# 224
if (__isnan(__k) || __isnan(__phi)) { 
# 225
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 226
if (std::abs(__k) > ((_Tp)1)) { 
# 227
std::__throw_domain_error("Bad argument in __ellint_1."); } else 
# 229
{ 
# 231
const int __n = std::floor((__phi / __numeric_constants< _Tp> ::__pi()) + ((_Tp)(0.5L))); 
# 233
const _Tp __phi_red = __phi - (__n * __numeric_constants< _Tp> ::__pi()); 
# 236
const _Tp __s = std::sin(__phi_red); 
# 237
const _Tp __c = std::cos(__phi_red); 
# 239
const _Tp __F = __s * __ellint_rf(__c * __c, ((_Tp)1) - (((__k * __k) * __s) * __s), (_Tp)1); 
# 243
if (__n == 0) { 
# 244
return __F; } else { 
# 246
return __F + ((((_Tp)2) * __n) * __comp_ellint_1(__k)); }  
# 247
}  }  
# 248
} 
# 266 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/ell_integral.tcc" 3
template< class _Tp> _Tp 
# 268
__comp_ellint_2_series(_Tp __k) 
# 269
{ 
# 271
const _Tp __kk = __k * __k; 
# 273
_Tp __term = __kk; 
# 274
_Tp __sum = __term; 
# 276
const unsigned __max_iter = (1000); 
# 277
for (unsigned __i = (2); __i < __max_iter; ++__i) 
# 278
{ 
# 279
const _Tp __i2m = ((2) * __i) - (1); 
# 280
const _Tp __i2 = (2) * __i; 
# 281
__term *= (((__i2m * __i2m) * __kk) / (__i2 * __i2)); 
# 282
if (__term < std::template numeric_limits< _Tp> ::epsilon()) { 
# 283
break; }  
# 284
__sum += (__term / __i2m); 
# 285
}  
# 287
return __numeric_constants< _Tp> ::__pi_2() * (((_Tp)1) - __sum); 
# 288
} 
# 314 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/ell_integral.tcc" 3
template< class _Tp> _Tp 
# 316
__ellint_rd(_Tp __x, _Tp __y, _Tp __z) 
# 317
{ 
# 318
const _Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 319
const _Tp __errtol = std::pow(__eps / ((_Tp)8), ((_Tp)1) / ((_Tp)6)); 
# 320
const _Tp __max = std::template numeric_limits< _Tp> ::max(); 
# 321
const _Tp __lolim = (((_Tp)2) / std::pow(__max, ((_Tp)2) / ((_Tp)3))); 
# 323
if ((__x < ((_Tp)0)) || (__y < ((_Tp)0))) { 
# 324
std::__throw_domain_error("Argument less than zero in __ellint_rd."); } else { 
# 326
if (((__x + __y) < __lolim) || (__z < __lolim)) { 
# 327
std::__throw_domain_error("Argument too small in __ellint_rd."); } else 
# 330
{ 
# 331
const _Tp __c0 = (((_Tp)1) / ((_Tp)4)); 
# 332
const _Tp __c1 = (((_Tp)3) / ((_Tp)14)); 
# 333
const _Tp __c2 = (((_Tp)1) / ((_Tp)6)); 
# 334
const _Tp __c3 = (((_Tp)9) / ((_Tp)22)); 
# 335
const _Tp __c4 = (((_Tp)3) / ((_Tp)26)); 
# 337
_Tp __xn = __x; 
# 338
_Tp __yn = __y; 
# 339
_Tp __zn = __z; 
# 340
_Tp __sigma = ((_Tp)0); 
# 341
_Tp __power4 = ((_Tp)1); 
# 343
_Tp __mu; 
# 344
_Tp __xndev, __yndev, __zndev; 
# 346
const unsigned __max_iter = (100); 
# 347
for (unsigned __iter = (0); __iter < __max_iter; ++__iter) 
# 348
{ 
# 349
__mu = (((__xn + __yn) + (((_Tp)3) * __zn)) / ((_Tp)5)); 
# 350
__xndev = ((__mu - __xn) / __mu); 
# 351
__yndev = ((__mu - __yn) / __mu); 
# 352
__zndev = ((__mu - __zn) / __mu); 
# 353
_Tp __epsilon = std::max(std::abs(__xndev), std::abs(__yndev)); 
# 354
__epsilon = std::max(__epsilon, std::abs(__zndev)); 
# 355
if (__epsilon < __errtol) { 
# 356
break; }  
# 357
_Tp __xnroot = std::sqrt(__xn); 
# 358
_Tp __ynroot = std::sqrt(__yn); 
# 359
_Tp __znroot = std::sqrt(__zn); 
# 360
_Tp __lambda = (__xnroot * (__ynroot + __znroot)) + (__ynroot * __znroot); 
# 362
__sigma += (__power4 / (__znroot * (__zn + __lambda))); 
# 363
__power4 *= __c0; 
# 364
__xn = (__c0 * (__xn + __lambda)); 
# 365
__yn = (__c0 * (__yn + __lambda)); 
# 366
__zn = (__c0 * (__zn + __lambda)); 
# 367
}  
# 369
_Tp __ea = __xndev * __yndev; 
# 370
_Tp __eb = __zndev * __zndev; 
# 371
_Tp __ec = __ea - __eb; 
# 372
_Tp __ed = __ea - (((_Tp)6) * __eb); 
# 373
_Tp __ef = (__ed + __ec) + __ec; 
# 374
_Tp __s1 = __ed * (((-__c1) + ((__c3 * __ed) / ((_Tp)3))) - ((((((_Tp)3) * __c4) * __zndev) * __ef) / ((_Tp)2))); 
# 377
_Tp __s2 = __zndev * ((__c2 * __ef) + (__zndev * ((((-__c3) * __ec) - (__zndev * __c4)) - __ea))); 
# 381
return (((_Tp)3) * __sigma) + ((__power4 * ((((_Tp)1) + __s1) + __s2)) / (__mu * std::sqrt(__mu))); 
# 383
}  }  
# 384
} 
# 399 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/ell_integral.tcc" 3
template< class _Tp> _Tp 
# 401
__comp_ellint_2(_Tp __k) 
# 402
{ 
# 404
if (__isnan(__k)) { 
# 405
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 406
if (std::abs(__k) == 1) { 
# 407
return (_Tp)1; } else { 
# 408
if (std::abs(__k) > ((_Tp)1)) { 
# 409
std::__throw_domain_error("Bad argument in __comp_ellint_2."); } else 
# 411
{ 
# 412
const _Tp __kk = __k * __k; 
# 414
return __ellint_rf((_Tp)0, ((_Tp)1) - __kk, (_Tp)1) - ((__kk * __ellint_rd((_Tp)0, ((_Tp)1) - __kk, (_Tp)1)) / ((_Tp)3)); 
# 416
}  }  }  
# 417
} 
# 433 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/ell_integral.tcc" 3
template< class _Tp> _Tp 
# 435
__ellint_2(_Tp __k, _Tp __phi) 
# 436
{ 
# 438
if (__isnan(__k) || __isnan(__phi)) { 
# 439
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 440
if (std::abs(__k) > ((_Tp)1)) { 
# 441
std::__throw_domain_error("Bad argument in __ellint_2."); } else 
# 443
{ 
# 445
const int __n = std::floor((__phi / __numeric_constants< _Tp> ::__pi()) + ((_Tp)(0.5L))); 
# 447
const _Tp __phi_red = __phi - (__n * __numeric_constants< _Tp> ::__pi()); 
# 450
const _Tp __kk = __k * __k; 
# 451
const _Tp __s = std::sin(__phi_red); 
# 452
const _Tp __ss = __s * __s; 
# 453
const _Tp __sss = __ss * __s; 
# 454
const _Tp __c = std::cos(__phi_red); 
# 455
const _Tp __cc = __c * __c; 
# 457
const _Tp __E = (__s * __ellint_rf(__cc, ((_Tp)1) - (__kk * __ss), (_Tp)1)) - (((__kk * __sss) * __ellint_rd(__cc, ((_Tp)1) - (__kk * __ss), (_Tp)1)) / ((_Tp)3)); 
# 463
if (__n == 0) { 
# 464
return __E; } else { 
# 466
return __E + ((((_Tp)2) * __n) * __comp_ellint_2(__k)); }  
# 467
}  }  
# 468
} 
# 492 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/ell_integral.tcc" 3
template< class _Tp> _Tp 
# 494
__ellint_rc(_Tp __x, _Tp __y) 
# 495
{ 
# 496
const _Tp __min = std::template numeric_limits< _Tp> ::min(); 
# 497
const _Tp __lolim = ((_Tp)5) * __min; 
# 499
if (((__x < ((_Tp)0)) || (__y < ((_Tp)0))) || ((__x + __y) < __lolim)) { 
# 500
std::__throw_domain_error("Argument less than zero in __ellint_rc."); } else 
# 503
{ 
# 504
const _Tp __c0 = (((_Tp)1) / ((_Tp)4)); 
# 505
const _Tp __c1 = (((_Tp)1) / ((_Tp)7)); 
# 506
const _Tp __c2 = (((_Tp)9) / ((_Tp)22)); 
# 507
const _Tp __c3 = (((_Tp)3) / ((_Tp)10)); 
# 508
const _Tp __c4 = (((_Tp)3) / ((_Tp)8)); 
# 510
_Tp __xn = __x; 
# 511
_Tp __yn = __y; 
# 513
const _Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 514
const _Tp __errtol = std::pow(__eps / ((_Tp)30), ((_Tp)1) / ((_Tp)6)); 
# 515
_Tp __mu; 
# 516
_Tp __sn; 
# 518
const unsigned __max_iter = (100); 
# 519
for (unsigned __iter = (0); __iter < __max_iter; ++__iter) 
# 520
{ 
# 521
__mu = ((__xn + (((_Tp)2) * __yn)) / ((_Tp)3)); 
# 522
__sn = (((__yn + __mu) / __mu) - ((_Tp)2)); 
# 523
if (std::abs(__sn) < __errtol) { 
# 524
break; }  
# 525
const _Tp __lambda = ((((_Tp)2) * std::sqrt(__xn)) * std::sqrt(__yn)) + __yn; 
# 527
__xn = (__c0 * (__xn + __lambda)); 
# 528
__yn = (__c0 * (__yn + __lambda)); 
# 529
}  
# 531
_Tp __s = (__sn * __sn) * (__c3 + (__sn * (__c1 + (__sn * (__c4 + (__sn * __c2)))))); 
# 534
return (((_Tp)1) + __s) / std::sqrt(__mu); 
# 535
}  
# 536
} 
# 561 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/ell_integral.tcc" 3
template< class _Tp> _Tp 
# 563
__ellint_rj(_Tp __x, _Tp __y, _Tp __z, _Tp __p) 
# 564
{ 
# 565
const _Tp __min = std::template numeric_limits< _Tp> ::min(); 
# 566
const _Tp __lolim = std::pow(((_Tp)5) * __min, ((_Tp)1) / ((_Tp)3)); 
# 568
if (((__x < ((_Tp)0)) || (__y < ((_Tp)0))) || (__z < ((_Tp)0))) { 
# 569
std::__throw_domain_error("Argument less than zero in __ellint_rj."); } else { 
# 571
if (((((__x + __y) < __lolim) || ((__x + __z) < __lolim)) || ((__y + __z) < __lolim)) || (__p < __lolim)) { 
# 573
std::__throw_domain_error("Argument too small in __ellint_rj"); } else 
# 576
{ 
# 577
const _Tp __c0 = (((_Tp)1) / ((_Tp)4)); 
# 578
const _Tp __c1 = (((_Tp)3) / ((_Tp)14)); 
# 579
const _Tp __c2 = (((_Tp)1) / ((_Tp)3)); 
# 580
const _Tp __c3 = (((_Tp)3) / ((_Tp)22)); 
# 581
const _Tp __c4 = (((_Tp)3) / ((_Tp)26)); 
# 583
_Tp __xn = __x; 
# 584
_Tp __yn = __y; 
# 585
_Tp __zn = __z; 
# 586
_Tp __pn = __p; 
# 587
_Tp __sigma = ((_Tp)0); 
# 588
_Tp __power4 = ((_Tp)1); 
# 590
const _Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 591
const _Tp __errtol = std::pow(__eps / ((_Tp)8), ((_Tp)1) / ((_Tp)6)); 
# 593
_Tp __mu; 
# 594
_Tp __xndev, __yndev, __zndev, __pndev; 
# 596
const unsigned __max_iter = (100); 
# 597
for (unsigned __iter = (0); __iter < __max_iter; ++__iter) 
# 598
{ 
# 599
__mu = ((((__xn + __yn) + __zn) + (((_Tp)2) * __pn)) / ((_Tp)5)); 
# 600
__xndev = ((__mu - __xn) / __mu); 
# 601
__yndev = ((__mu - __yn) / __mu); 
# 602
__zndev = ((__mu - __zn) / __mu); 
# 603
__pndev = ((__mu - __pn) / __mu); 
# 604
_Tp __epsilon = std::max(std::abs(__xndev), std::abs(__yndev)); 
# 605
__epsilon = std::max(__epsilon, std::abs(__zndev)); 
# 606
__epsilon = std::max(__epsilon, std::abs(__pndev)); 
# 607
if (__epsilon < __errtol) { 
# 608
break; }  
# 609
const _Tp __xnroot = std::sqrt(__xn); 
# 610
const _Tp __ynroot = std::sqrt(__yn); 
# 611
const _Tp __znroot = std::sqrt(__zn); 
# 612
const _Tp __lambda = (__xnroot * (__ynroot + __znroot)) + (__ynroot * __znroot); 
# 614
const _Tp __alpha1 = (__pn * ((__xnroot + __ynroot) + __znroot)) + ((__xnroot * __ynroot) * __znroot); 
# 616
const _Tp __alpha2 = __alpha1 * __alpha1; 
# 617
const _Tp __beta = (__pn * (__pn + __lambda)) * (__pn + __lambda); 
# 619
__sigma += (__power4 * __ellint_rc(__alpha2, __beta)); 
# 620
__power4 *= __c0; 
# 621
__xn = (__c0 * (__xn + __lambda)); 
# 622
__yn = (__c0 * (__yn + __lambda)); 
# 623
__zn = (__c0 * (__zn + __lambda)); 
# 624
__pn = (__c0 * (__pn + __lambda)); 
# 625
}  
# 627
_Tp __ea = (__xndev * (__yndev + __zndev)) + (__yndev * __zndev); 
# 628
_Tp __eb = (__xndev * __yndev) * __zndev; 
# 629
_Tp __ec = __pndev * __pndev; 
# 630
_Tp __e2 = __ea - (((_Tp)3) * __ec); 
# 631
_Tp __e3 = __eb + ((((_Tp)2) * __pndev) * (__ea - __ec)); 
# 632
_Tp __s1 = ((_Tp)1) + (__e2 * (((-__c1) + (((((_Tp)3) * __c3) * __e2) / ((_Tp)4))) - (((((_Tp)3) * __c4) * __e3) / ((_Tp)2)))); 
# 634
_Tp __s2 = __eb * ((__c2 / ((_Tp)2)) + (__pndev * (((-__c3) - __c3) + (__pndev * __c4)))); 
# 636
_Tp __s3 = ((__pndev * __ea) * (__c2 - (__pndev * __c3))) - ((__c2 * __pndev) * __ec); 
# 639
return (((_Tp)3) * __sigma) + ((__power4 * ((__s1 + __s2) + __s3)) / (__mu * std::sqrt(__mu))); 
# 641
}  }  
# 642
} 
# 661 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/ell_integral.tcc" 3
template< class _Tp> _Tp 
# 663
__comp_ellint_3(_Tp __k, _Tp __nu) 
# 664
{ 
# 666
if (__isnan(__k) || __isnan(__nu)) { 
# 667
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 668
if (__nu == ((_Tp)1)) { 
# 669
return std::template numeric_limits< _Tp> ::infinity(); } else { 
# 670
if (std::abs(__k) > ((_Tp)1)) { 
# 671
std::__throw_domain_error("Bad argument in __comp_ellint_3."); } else 
# 673
{ 
# 674
const _Tp __kk = __k * __k; 
# 676
return __ellint_rf((_Tp)0, ((_Tp)1) - __kk, (_Tp)1) + ((__nu * __ellint_rj((_Tp)0, ((_Tp)1) - __kk, (_Tp)1, ((_Tp)1) - __nu)) / ((_Tp)3)); 
# 680
}  }  }  
# 681
} 
# 701 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/ell_integral.tcc" 3
template< class _Tp> _Tp 
# 703
__ellint_3(_Tp __k, _Tp __nu, _Tp __phi) 
# 704
{ 
# 706
if ((__isnan(__k) || __isnan(__nu)) || __isnan(__phi)) { 
# 707
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 708
if (std::abs(__k) > ((_Tp)1)) { 
# 709
std::__throw_domain_error("Bad argument in __ellint_3."); } else 
# 711
{ 
# 713
const int __n = std::floor((__phi / __numeric_constants< _Tp> ::__pi()) + ((_Tp)(0.5L))); 
# 715
const _Tp __phi_red = __phi - (__n * __numeric_constants< _Tp> ::__pi()); 
# 718
const _Tp __kk = __k * __k; 
# 719
const _Tp __s = std::sin(__phi_red); 
# 720
const _Tp __ss = __s * __s; 
# 721
const _Tp __sss = __ss * __s; 
# 722
const _Tp __c = std::cos(__phi_red); 
# 723
const _Tp __cc = __c * __c; 
# 725
const _Tp __Pi = (__s * __ellint_rf(__cc, ((_Tp)1) - (__kk * __ss), (_Tp)1)) + (((__nu * __sss) * __ellint_rj(__cc, ((_Tp)1) - (__kk * __ss), (_Tp)1, ((_Tp)1) - (__nu * __ss))) / ((_Tp)3)); 
# 731
if (__n == 0) { 
# 732
return __Pi; } else { 
# 734
return __Pi + ((((_Tp)2) * __n) * __comp_ellint_3(__k, __nu)); }  
# 735
}  }  
# 736
} 
# 737
}
# 743
}
# 50 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/exp_integral.tcc" 3
namespace std __attribute((__visibility__("default"))) { 
# 64 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/exp_integral.tcc" 3
namespace __detail { 
# 66
template< class _Tp> _Tp __expint_E1(_Tp); 
# 81 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/exp_integral.tcc" 3
template< class _Tp> _Tp 
# 83
__expint_E1_series(_Tp __x) 
# 84
{ 
# 85
const _Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 86
_Tp __term = ((_Tp)1); 
# 87
_Tp __esum = ((_Tp)0); 
# 88
_Tp __osum = ((_Tp)0); 
# 89
const unsigned __max_iter = (1000); 
# 90
for (unsigned __i = (1); __i < __max_iter; ++__i) 
# 91
{ 
# 92
__term *= ((-__x) / __i); 
# 93
if (std::abs(__term) < __eps) { 
# 94
break; }  
# 95
if (__term >= ((_Tp)0)) { 
# 96
__esum += (__term / __i); } else { 
# 98
__osum += (__term / __i); }  
# 99
}  
# 101
return (((-__esum) - __osum) - __numeric_constants< _Tp> ::__gamma_e()) - std::log(__x); 
# 103
} 
# 118 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/exp_integral.tcc" 3
template< class _Tp> _Tp 
# 120
__expint_E1_asymp(_Tp __x) 
# 121
{ 
# 122
_Tp __term = ((_Tp)1); 
# 123
_Tp __esum = ((_Tp)1); 
# 124
_Tp __osum = ((_Tp)0); 
# 125
const unsigned __max_iter = (1000); 
# 126
for (unsigned __i = (1); __i < __max_iter; ++__i) 
# 127
{ 
# 128
_Tp __prev = __term; 
# 129
__term *= ((-__i) / __x); 
# 130
if (std::abs(__term) > std::abs(__prev)) { 
# 131
break; }  
# 132
if (__term >= ((_Tp)0)) { 
# 133
__esum += __term; } else { 
# 135
__osum += __term; }  
# 136
}  
# 138
return (std::exp(-__x) * (__esum + __osum)) / __x; 
# 139
} 
# 155 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/exp_integral.tcc" 3
template< class _Tp> _Tp 
# 157
__expint_En_series(unsigned __n, _Tp __x) 
# 158
{ 
# 159
const unsigned __max_iter = (1000); 
# 160
const _Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 161
const int __nm1 = __n - (1); 
# 162
_Tp __ans = (__nm1 != 0) ? ((_Tp)1) / __nm1 : ((-std::log(__x)) - __numeric_constants< _Tp> ::__gamma_e()); 
# 165
_Tp __fact = ((_Tp)1); 
# 166
for (int __i = 1; __i <= __max_iter; ++__i) 
# 167
{ 
# 168
__fact *= ((-__x) / ((_Tp)__i)); 
# 169
_Tp __del; 
# 170
if (__i != __nm1) { 
# 171
__del = ((-__fact) / ((_Tp)(__i - __nm1))); } else 
# 173
{ 
# 174
_Tp __psi = (-__numeric_constants< _Tp> ::gamma_e()); 
# 175
for (int __ii = 1; __ii <= __nm1; ++__ii) { 
# 176
__psi += (((_Tp)1) / ((_Tp)__ii)); }  
# 177
__del = (__fact * (__psi - std::log(__x))); 
# 178
}  
# 179
__ans += __del; 
# 180
if (std::abs(__del) < (__eps * std::abs(__ans))) { 
# 181
return __ans; }  
# 182
}  
# 183
std::__throw_runtime_error("Series summation failed in __expint_En_series."); 
# 185
} 
# 201 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/exp_integral.tcc" 3
template< class _Tp> _Tp 
# 203
__expint_En_cont_frac(unsigned __n, _Tp __x) 
# 204
{ 
# 205
const unsigned __max_iter = (1000); 
# 206
const _Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 207
const _Tp __fp_min = std::template numeric_limits< _Tp> ::min(); 
# 208
const int __nm1 = __n - (1); 
# 209
_Tp __b = __x + ((_Tp)__n); 
# 210
_Tp __c = ((_Tp)1) / __fp_min; 
# 211
_Tp __d = ((_Tp)1) / __b; 
# 212
_Tp __h = __d; 
# 213
for (unsigned __i = (1); __i <= __max_iter; ++__i) 
# 214
{ 
# 215
_Tp __a = (-((_Tp)(__i * (__nm1 + __i)))); 
# 216
__b += ((_Tp)2); 
# 217
__d = (((_Tp)1) / ((__a * __d) + __b)); 
# 218
__c = (__b + (__a / __c)); 
# 219
const _Tp __del = __c * __d; 
# 220
__h *= __del; 
# 221
if (std::abs(__del - ((_Tp)1)) < __eps) 
# 222
{ 
# 223
const _Tp __ans = __h * std::exp(-__x); 
# 224
return __ans; 
# 225
}  
# 226
}  
# 227
std::__throw_runtime_error("Continued fraction failed in __expint_En_cont_frac."); 
# 229
} 
# 246 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/exp_integral.tcc" 3
template< class _Tp> _Tp 
# 248
__expint_En_recursion(unsigned __n, _Tp __x) 
# 249
{ 
# 250
_Tp __En; 
# 251
_Tp __E1 = __expint_E1(__x); 
# 252
if (__x < ((_Tp)__n)) 
# 253
{ 
# 255
__En = __E1; 
# 256
for (unsigned __j = (2); __j < __n; ++__j) { 
# 257
__En = ((std::exp(-__x) - (__x * __En)) / ((_Tp)(__j - (1)))); }  
# 258
} else 
# 260
{ 
# 262
__En = ((_Tp)1); 
# 263
const int __N = __n + (20); 
# 264
_Tp __save = ((_Tp)0); 
# 265
for (int __j = __N; __j > 0; --__j) 
# 266
{ 
# 267
__En = ((std::exp(-__x) - (__j * __En)) / __x); 
# 268
if (__j == __n) { 
# 269
__save = __En; }  
# 270
}  
# 271
_Tp __norm = __En / __E1; 
# 272
__En /= __norm; 
# 273
}  
# 275
return __En; 
# 276
} 
# 290 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/exp_integral.tcc" 3
template< class _Tp> _Tp 
# 292
__expint_Ei_series(_Tp __x) 
# 293
{ 
# 294
_Tp __term = ((_Tp)1); 
# 295
_Tp __sum = ((_Tp)0); 
# 296
const unsigned __max_iter = (1000); 
# 297
for (unsigned __i = (1); __i < __max_iter; ++__i) 
# 298
{ 
# 299
__term *= (__x / __i); 
# 300
__sum += (__term / __i); 
# 301
if (__term < (std::template numeric_limits< _Tp> ::epsilon() * __sum)) { 
# 302
break; }  
# 303
}  
# 305
return (__numeric_constants< _Tp> ::__gamma_e() + __sum) + std::log(__x); 
# 306
} 
# 321 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/exp_integral.tcc" 3
template< class _Tp> _Tp 
# 323
__expint_Ei_asymp(_Tp __x) 
# 324
{ 
# 325
_Tp __term = ((_Tp)1); 
# 326
_Tp __sum = ((_Tp)1); 
# 327
const unsigned __max_iter = (1000); 
# 328
for (unsigned __i = (1); __i < __max_iter; ++__i) 
# 329
{ 
# 330
_Tp __prev = __term; 
# 331
__term *= (__i / __x); 
# 332
if (__term < std::template numeric_limits< _Tp> ::epsilon()) { 
# 333
break; }  
# 334
if (__term >= __prev) { 
# 335
break; }  
# 336
__sum += __term; 
# 337
}  
# 339
return (std::exp(__x) * __sum) / __x; 
# 340
} 
# 354 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/exp_integral.tcc" 3
template< class _Tp> _Tp 
# 356
__expint_Ei(_Tp __x) 
# 357
{ 
# 358
if (__x < ((_Tp)0)) { 
# 359
return -__expint_E1(-__x); } else { 
# 360
if (__x < (-std::log(std::template numeric_limits< _Tp> ::epsilon()))) { 
# 361
return __expint_Ei_series(__x); } else { 
# 363
return __expint_Ei_asymp(__x); }  }  
# 364
} 
# 378 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/exp_integral.tcc" 3
template< class _Tp> _Tp 
# 380
__expint_E1(_Tp __x) 
# 381
{ 
# 382
if (__x < ((_Tp)0)) { 
# 383
return -__expint_Ei(-__x); } else { 
# 384
if (__x < ((_Tp)1)) { 
# 385
return __expint_E1_series(__x); } else { 
# 386
if (__x < ((_Tp)100)) { 
# 387
return __expint_En_cont_frac(1, __x); } else { 
# 389
return __expint_E1_asymp(__x); }  }  }  
# 390
} 
# 408 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/exp_integral.tcc" 3
template< class _Tp> _Tp 
# 410
__expint_asymp(unsigned __n, _Tp __x) 
# 411
{ 
# 412
_Tp __term = ((_Tp)1); 
# 413
_Tp __sum = ((_Tp)1); 
# 414
for (unsigned __i = (1); __i <= __n; ++__i) 
# 415
{ 
# 416
_Tp __prev = __term; 
# 417
__term *= ((-((__n - __i) + (1))) / __x); 
# 418
if (std::abs(__term) > std::abs(__prev)) { 
# 419
break; }  
# 420
__sum += __term; 
# 421
}  
# 423
return (std::exp(-__x) * __sum) / __x; 
# 424
} 
# 442 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/exp_integral.tcc" 3
template< class _Tp> _Tp 
# 444
__expint_large_n(unsigned __n, _Tp __x) 
# 445
{ 
# 446
const _Tp __xpn = __x + __n; 
# 447
const _Tp __xpn2 = __xpn * __xpn; 
# 448
_Tp __term = ((_Tp)1); 
# 449
_Tp __sum = ((_Tp)1); 
# 450
for (unsigned __i = (1); __i <= __n; ++__i) 
# 451
{ 
# 452
_Tp __prev = __term; 
# 453
__term *= ((__n - (((2) * (__i - (1))) * __x)) / __xpn2); 
# 454
if (std::abs(__term) < std::template numeric_limits< _Tp> ::epsilon()) { 
# 455
break; }  
# 456
__sum += __term; 
# 457
}  
# 459
return (std::exp(-__x) * __sum) / __xpn; 
# 460
} 
# 476 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/exp_integral.tcc" 3
template< class _Tp> _Tp 
# 478
__expint(unsigned __n, _Tp __x) 
# 479
{ 
# 481
if (__isnan(__x)) { 
# 482
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 483
if ((__n <= (1)) && (__x == ((_Tp)0))) { 
# 484
return std::template numeric_limits< _Tp> ::infinity(); } else 
# 486
{ 
# 487
_Tp __E0 = std::exp(__x) / __x; 
# 488
if (__n == (0)) { 
# 489
return __E0; }  
# 491
_Tp __E1 = __expint_E1(__x); 
# 492
if (__n == (1)) { 
# 493
return __E1; }  
# 495
if (__x == ((_Tp)0)) { 
# 496
return ((_Tp)1) / (static_cast< _Tp>(__n - (1))); }  
# 498
_Tp __En = __expint_En_recursion(__n, __x); 
# 500
return __En; 
# 501
}  }  
# 502
} 
# 516 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/exp_integral.tcc" 3
template< class _Tp> inline _Tp 
# 518
__expint(_Tp __x) 
# 519
{ 
# 520
if (__isnan(__x)) { 
# 521
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 523
return __expint_Ei(__x); }  
# 524
} 
# 525
}
# 531
}
# 44 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/hypergeometric.tcc" 3
namespace std __attribute((__visibility__("default"))) { 
# 60 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/hypergeometric.tcc" 3
namespace __detail { 
# 83 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/hypergeometric.tcc" 3
template< class _Tp> _Tp 
# 85
__conf_hyperg_series(_Tp __a, _Tp __c, _Tp __x) 
# 86
{ 
# 87
const _Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 89
_Tp __term = ((_Tp)1); 
# 90
_Tp __Fac = ((_Tp)1); 
# 91
const unsigned __max_iter = (100000); 
# 92
unsigned __i; 
# 93
for (__i = (0); __i < __max_iter; ++__i) 
# 94
{ 
# 95
__term *= (((__a + ((_Tp)__i)) * __x) / ((__c + ((_Tp)__i)) * ((_Tp)((1) + __i)))); 
# 97
if (std::abs(__term) < __eps) 
# 98
{ 
# 99
break; 
# 100
}  
# 101
__Fac += __term; 
# 102
}  
# 103
if (__i == __max_iter) { 
# 104
std::__throw_runtime_error("Series failed to converge in __conf_hyperg_series."); }  
# 107
return __Fac; 
# 108
} 
# 120 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/hypergeometric.tcc" 3
template< class _Tp> _Tp 
# 122
__conf_hyperg_luke(_Tp __a, _Tp __c, _Tp __xin) 
# 123
{ 
# 124
const _Tp __big = std::pow(std::template numeric_limits< _Tp> ::max(), (_Tp)(0.16L)); 
# 125
const int __nmax = 20000; 
# 126
const _Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 127
const _Tp __x = (-__xin); 
# 128
const _Tp __x3 = (__x * __x) * __x; 
# 129
const _Tp __t0 = __a / __c; 
# 130
const _Tp __t1 = (__a + ((_Tp)1)) / (((_Tp)2) * __c); 
# 131
const _Tp __t2 = (__a + ((_Tp)2)) / (((_Tp)2) * (__c + ((_Tp)1))); 
# 132
_Tp __F = ((_Tp)1); 
# 133
_Tp __prec; 
# 135
_Tp __Bnm3 = ((_Tp)1); 
# 136
_Tp __Bnm2 = ((_Tp)1) + (__t1 * __x); 
# 137
_Tp __Bnm1 = ((_Tp)1) + ((__t2 * __x) * (((_Tp)1) + ((__t1 / ((_Tp)3)) * __x))); 
# 139
_Tp __Anm3 = ((_Tp)1); 
# 140
_Tp __Anm2 = __Bnm2 - (__t0 * __x); 
# 141
_Tp __Anm1 = (__Bnm1 - ((__t0 * (((_Tp)1) + (__t2 * __x))) * __x)) + ((((__t0 * __t1) * (__c / (__c + ((_Tp)1)))) * __x) * __x); 
# 144
int __n = 3; 
# 145
while (1) 
# 146
{ 
# 147
_Tp __npam1 = ((_Tp)(__n - 1)) + __a; 
# 148
_Tp __npcm1 = ((_Tp)(__n - 1)) + __c; 
# 149
_Tp __npam2 = ((_Tp)(__n - 2)) + __a; 
# 150
_Tp __npcm2 = ((_Tp)(__n - 2)) + __c; 
# 151
_Tp __tnm1 = (_Tp)((2 * __n) - 1); 
# 152
_Tp __tnm3 = (_Tp)((2 * __n) - 3); 
# 153
_Tp __tnm5 = (_Tp)((2 * __n) - 5); 
# 154
_Tp __F1 = (((_Tp)(__n - 2)) - __a) / ((((_Tp)2) * __tnm3) * __npcm1); 
# 155
_Tp __F2 = ((((_Tp)__n) + __a) * __npam1) / ((((((_Tp)4) * __tnm1) * __tnm3) * __npcm2) * __npcm1); 
# 157
_Tp __F3 = (((-__npam2) * __npam1) * (((_Tp)(__n - 2)) - __a)) / ((((((((_Tp)8) * __tnm3) * __tnm3) * __tnm5) * (((_Tp)(__n - 3)) + __c)) * __npcm2) * __npcm1); 
# 160
_Tp __E = ((-__npam1) * (((_Tp)(__n - 1)) - __c)) / (((((_Tp)2) * __tnm3) * __npcm2) * __npcm1); 
# 163
_Tp __An = (((((_Tp)1) + (__F1 * __x)) * __Anm1) + (((__E + (__F2 * __x)) * __x) * __Anm2)) + ((__F3 * __x3) * __Anm3); 
# 165
_Tp __Bn = (((((_Tp)1) + (__F1 * __x)) * __Bnm1) + (((__E + (__F2 * __x)) * __x) * __Bnm2)) + ((__F3 * __x3) * __Bnm3); 
# 167
_Tp __r = __An / __Bn; 
# 169
__prec = std::abs((__F - __r) / __F); 
# 170
__F = __r; 
# 172
if ((__prec < __eps) || (__n > __nmax)) { 
# 173
break; }  
# 175
if ((std::abs(__An) > __big) || (std::abs(__Bn) > __big)) 
# 176
{ 
# 177
__An /= __big; 
# 178
__Bn /= __big; 
# 179
__Anm1 /= __big; 
# 180
__Bnm1 /= __big; 
# 181
__Anm2 /= __big; 
# 182
__Bnm2 /= __big; 
# 183
__Anm3 /= __big; 
# 184
__Bnm3 /= __big; 
# 185
} else { 
# 186
if ((std::abs(__An) < (((_Tp)1) / __big)) || (std::abs(__Bn) < (((_Tp)1) / __big))) 
# 188
{ 
# 189
__An *= __big; 
# 190
__Bn *= __big; 
# 191
__Anm1 *= __big; 
# 192
__Bnm1 *= __big; 
# 193
__Anm2 *= __big; 
# 194
__Bnm2 *= __big; 
# 195
__Anm3 *= __big; 
# 196
__Bnm3 *= __big; 
# 197
}  }  
# 199
++__n; 
# 200
__Bnm3 = __Bnm2; 
# 201
__Bnm2 = __Bnm1; 
# 202
__Bnm1 = __Bn; 
# 203
__Anm3 = __Anm2; 
# 204
__Anm2 = __Anm1; 
# 205
__Anm1 = __An; 
# 206
}  
# 208
if (__n >= __nmax) { 
# 209
std::__throw_runtime_error("Iteration failed to converge in __conf_hyperg_luke."); }  
# 212
return __F; 
# 213
} 
# 227 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/hypergeometric.tcc" 3
template< class _Tp> _Tp 
# 229
__conf_hyperg(_Tp __a, _Tp __c, _Tp __x) 
# 230
{ 
# 232
const _Tp __c_nint = std::nearbyint(__c); 
# 236
if ((__isnan(__a) || __isnan(__c)) || __isnan(__x)) { 
# 237
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 238
if ((__c_nint == __c) && (__c_nint <= 0)) { 
# 239
return std::template numeric_limits< _Tp> ::infinity(); } else { 
# 240
if (__a == ((_Tp)0)) { 
# 241
return (_Tp)1; } else { 
# 242
if (__c == __a) { 
# 243
return std::exp(__x); } else { 
# 244
if (__x < ((_Tp)0)) { 
# 245
return __conf_hyperg_luke(__a, __c, __x); } else { 
# 247
return __conf_hyperg_series(__a, __c, __x); }  }  }  }  }  
# 248
} 
# 271 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/hypergeometric.tcc" 3
template< class _Tp> _Tp 
# 273
__hyperg_series(_Tp __a, _Tp __b, _Tp __c, _Tp __x) 
# 274
{ 
# 275
const _Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 277
_Tp __term = ((_Tp)1); 
# 278
_Tp __Fabc = ((_Tp)1); 
# 279
const unsigned __max_iter = (100000); 
# 280
unsigned __i; 
# 281
for (__i = (0); __i < __max_iter; ++__i) 
# 282
{ 
# 283
__term *= ((((__a + ((_Tp)__i)) * (__b + ((_Tp)__i))) * __x) / ((__c + ((_Tp)__i)) * ((_Tp)((1) + __i)))); 
# 285
if (std::abs(__term) < __eps) 
# 286
{ 
# 287
break; 
# 288
}  
# 289
__Fabc += __term; 
# 290
}  
# 291
if (__i == __max_iter) { 
# 292
std::__throw_runtime_error("Series failed to converge in __hyperg_series."); }  
# 295
return __Fabc; 
# 296
} 
# 304
template< class _Tp> _Tp 
# 306
__hyperg_luke(_Tp __a, _Tp __b, _Tp __c, _Tp __xin) 
# 307
{ 
# 308
const _Tp __big = std::pow(std::template numeric_limits< _Tp> ::max(), (_Tp)(0.16L)); 
# 309
const int __nmax = 20000; 
# 310
const _Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 311
const _Tp __x = (-__xin); 
# 312
const _Tp __x3 = (__x * __x) * __x; 
# 313
const _Tp __t0 = (__a * __b) / __c; 
# 314
const _Tp __t1 = ((__a + ((_Tp)1)) * (__b + ((_Tp)1))) / (((_Tp)2) * __c); 
# 315
const _Tp __t2 = ((__a + ((_Tp)2)) * (__b + ((_Tp)2))) / (((_Tp)2) * (__c + ((_Tp)1))); 
# 318
_Tp __F = ((_Tp)1); 
# 320
_Tp __Bnm3 = ((_Tp)1); 
# 321
_Tp __Bnm2 = ((_Tp)1) + (__t1 * __x); 
# 322
_Tp __Bnm1 = ((_Tp)1) + ((__t2 * __x) * (((_Tp)1) + ((__t1 / ((_Tp)3)) * __x))); 
# 324
_Tp __Anm3 = ((_Tp)1); 
# 325
_Tp __Anm2 = __Bnm2 - (__t0 * __x); 
# 326
_Tp __Anm1 = (__Bnm1 - ((__t0 * (((_Tp)1) + (__t2 * __x))) * __x)) + ((((__t0 * __t1) * (__c / (__c + ((_Tp)1)))) * __x) * __x); 
# 329
int __n = 3; 
# 330
while (1) 
# 331
{ 
# 332
const _Tp __npam1 = ((_Tp)(__n - 1)) + __a; 
# 333
const _Tp __npbm1 = ((_Tp)(__n - 1)) + __b; 
# 334
const _Tp __npcm1 = ((_Tp)(__n - 1)) + __c; 
# 335
const _Tp __npam2 = ((_Tp)(__n - 2)) + __a; 
# 336
const _Tp __npbm2 = ((_Tp)(__n - 2)) + __b; 
# 337
const _Tp __npcm2 = ((_Tp)(__n - 2)) + __c; 
# 338
const _Tp __tnm1 = (_Tp)((2 * __n) - 1); 
# 339
const _Tp __tnm3 = (_Tp)((2 * __n) - 3); 
# 340
const _Tp __tnm5 = (_Tp)((2 * __n) - 5); 
# 341
const _Tp __n2 = __n * __n; 
# 342
const _Tp __F1 = (((((((_Tp)3) * __n2) + (((__a + __b) - ((_Tp)6)) * __n)) + ((_Tp)2)) - (__a * __b)) - (((_Tp)2) * (__a + __b))) / ((((_Tp)2) * __tnm3) * __npcm1); 
# 345
const _Tp __F2 = (((-((((((_Tp)3) * __n2) - (((__a + __b) + ((_Tp)6)) * __n)) + ((_Tp)2)) - (__a * __b))) * __npam1) * __npbm1) / ((((((_Tp)4) * __tnm1) * __tnm3) * __npcm2) * __npcm1); 
# 348
const _Tp __F3 = (((((__npam2 * __npam1) * __npbm2) * __npbm1) * (((_Tp)(__n - 2)) - __a)) * (((_Tp)(__n - 2)) - __b)) / ((((((((_Tp)8) * __tnm3) * __tnm3) * __tnm5) * (((_Tp)(__n - 3)) + __c)) * __npcm2) * __npcm1); 
# 352
const _Tp __E = (((-__npam1) * __npbm1) * (((_Tp)(__n - 1)) - __c)) / (((((_Tp)2) * __tnm3) * __npcm2) * __npcm1); 
# 355
_Tp __An = (((((_Tp)1) + (__F1 * __x)) * __Anm1) + (((__E + (__F2 * __x)) * __x) * __Anm2)) + ((__F3 * __x3) * __Anm3); 
# 357
_Tp __Bn = (((((_Tp)1) + (__F1 * __x)) * __Bnm1) + (((__E + (__F2 * __x)) * __x) * __Bnm2)) + ((__F3 * __x3) * __Bnm3); 
# 359
const _Tp __r = __An / __Bn; 
# 361
const _Tp __prec = std::abs((__F - __r) / __F); 
# 362
__F = __r; 
# 364
if ((__prec < __eps) || (__n > __nmax)) { 
# 365
break; }  
# 367
if ((std::abs(__An) > __big) || (std::abs(__Bn) > __big)) 
# 368
{ 
# 369
__An /= __big; 
# 370
__Bn /= __big; 
# 371
__Anm1 /= __big; 
# 372
__Bnm1 /= __big; 
# 373
__Anm2 /= __big; 
# 374
__Bnm2 /= __big; 
# 375
__Anm3 /= __big; 
# 376
__Bnm3 /= __big; 
# 377
} else { 
# 378
if ((std::abs(__An) < (((_Tp)1) / __big)) || (std::abs(__Bn) < (((_Tp)1) / __big))) 
# 380
{ 
# 381
__An *= __big; 
# 382
__Bn *= __big; 
# 383
__Anm1 *= __big; 
# 384
__Bnm1 *= __big; 
# 385
__Anm2 *= __big; 
# 386
__Bnm2 *= __big; 
# 387
__Anm3 *= __big; 
# 388
__Bnm3 *= __big; 
# 389
}  }  
# 391
++__n; 
# 392
__Bnm3 = __Bnm2; 
# 393
__Bnm2 = __Bnm1; 
# 394
__Bnm1 = __Bn; 
# 395
__Anm3 = __Anm2; 
# 396
__Anm2 = __Anm1; 
# 397
__Anm1 = __An; 
# 398
}  
# 400
if (__n >= __nmax) { 
# 401
std::__throw_runtime_error("Iteration failed to converge in __hyperg_luke."); }  
# 404
return __F; 
# 405
} 
# 438 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/hypergeometric.tcc" 3
template< class _Tp> _Tp 
# 440
__hyperg_reflect(_Tp __a, _Tp __b, _Tp __c, _Tp __x) 
# 441
{ 
# 442
const _Tp __d = (__c - __a) - __b; 
# 443
const int __intd = std::floor(__d + ((_Tp)(0.5L))); 
# 444
const _Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 445
const _Tp __toler = ((_Tp)1000) * __eps; 
# 446
const _Tp __log_max = std::log(std::template numeric_limits< _Tp> ::max()); 
# 447
const bool __d_integer = std::abs(__d - __intd) < __toler; 
# 449
if (__d_integer) 
# 450
{ 
# 451
const _Tp __ln_omx = std::log(((_Tp)1) - __x); 
# 452
const _Tp __ad = std::abs(__d); 
# 453
_Tp __F1, __F2; 
# 455
_Tp __d1, __d2; 
# 456
if (__d >= ((_Tp)0)) 
# 457
{ 
# 458
__d1 = __d; 
# 459
__d2 = ((_Tp)0); 
# 460
} else 
# 462
{ 
# 463
__d1 = ((_Tp)0); 
# 464
__d2 = __d; 
# 465
}  
# 467
const _Tp __lng_c = __log_gamma(__c); 
# 470
if (__ad < __eps) 
# 471
{ 
# 473
__F1 = ((_Tp)0); 
# 474
} else 
# 476
{ 
# 478
bool __ok_d1 = true; 
# 479
_Tp __lng_ad, __lng_ad1, __lng_bd1; 
# 480
try 
# 481
{ 
# 482
__lng_ad = __log_gamma(__ad); 
# 483
__lng_ad1 = __log_gamma(__a + __d1); 
# 484
__lng_bd1 = __log_gamma(__b + __d1); 
# 485
} 
# 486
catch (...) 
# 487
{ 
# 488
__ok_d1 = false; 
# 489
}  
# 491
if (__ok_d1) 
# 492
{ 
# 496
_Tp __sum1 = ((_Tp)1); 
# 497
_Tp __term = ((_Tp)1); 
# 498
_Tp __ln_pre1 = (((__lng_ad + __lng_c) + (__d2 * __ln_omx)) - __lng_ad1) - __lng_bd1; 
# 503
for (int __i = 1; __i < __ad; ++__i) 
# 504
{ 
# 505
const int __j = __i - 1; 
# 506
__term *= ((((((__a + __d2) + __j) * ((__b + __d2) + __j)) / ((((_Tp)1) + __d2) + __j)) / __i) * (((_Tp)1) - __x)); 
# 508
__sum1 += __term; 
# 509
}  
# 511
if (__ln_pre1 > __log_max) { 
# 512
std::__throw_runtime_error("Overflow of gamma functions in __hyperg_luke."); } else { 
# 515
__F1 = (std::exp(__ln_pre1) * __sum1); }  
# 516
} else 
# 518
{ 
# 521
__F1 = ((_Tp)0); 
# 522
}  
# 523
}  
# 526
bool __ok_d2 = true; 
# 527
_Tp __lng_ad2, __lng_bd2; 
# 528
try 
# 529
{ 
# 530
__lng_ad2 = __log_gamma(__a + __d2); 
# 531
__lng_bd2 = __log_gamma(__b + __d2); 
# 532
} 
# 533
catch (...) 
# 534
{ 
# 535
__ok_d2 = false; 
# 536
}  
# 538
if (__ok_d2) 
# 539
{ 
# 542
const int __maxiter = 2000; 
# 543
const _Tp __psi_1 = (-__numeric_constants< _Tp> ::__gamma_e()); 
# 544
const _Tp __psi_1pd = __psi(((_Tp)1) + __ad); 
# 545
const _Tp __psi_apd1 = __psi(__a + __d1); 
# 546
const _Tp __psi_bpd1 = __psi(__b + __d1); 
# 548
_Tp __psi_term = (((__psi_1 + __psi_1pd) - __psi_apd1) - __psi_bpd1) - __ln_omx; 
# 550
_Tp __fact = ((_Tp)1); 
# 551
_Tp __sum2 = __psi_term; 
# 552
_Tp __ln_pre2 = ((__lng_c + (__d1 * __ln_omx)) - __lng_ad2) - __lng_bd2; 
# 556
int __j; 
# 557
for (__j = 1; __j < __maxiter; ++__j) 
# 558
{ 
# 561
const _Tp __term1 = (((_Tp)1) / ((_Tp)__j)) + (((_Tp)1) / (__ad + __j)); 
# 563
const _Tp __term2 = (((_Tp)1) / ((__a + __d1) + ((_Tp)(__j - 1)))) + (((_Tp)1) / ((__b + __d1) + ((_Tp)(__j - 1)))); 
# 565
__psi_term += (__term1 - __term2); 
# 566
__fact *= (((((__a + __d1) + ((_Tp)(__j - 1))) * ((__b + __d1) + ((_Tp)(__j - 1)))) / ((__ad + __j) * __j)) * (((_Tp)1) - __x)); 
# 569
const _Tp __delta = __fact * __psi_term; 
# 570
__sum2 += __delta; 
# 571
if (std::abs(__delta) < (__eps * std::abs(__sum2))) { 
# 572
break; }  
# 573
}  
# 574
if (__j == __maxiter) { 
# 575
std::__throw_runtime_error("Sum F2 failed to converge in __hyperg_reflect"); }  
# 578
if (__sum2 == ((_Tp)0)) { 
# 579
__F2 = ((_Tp)0); } else { 
# 581
__F2 = (std::exp(__ln_pre2) * __sum2); }  
# 582
} else 
# 584
{ 
# 587
__F2 = ((_Tp)0); 
# 588
}  
# 590
const _Tp __sgn_2 = (((__intd % 2) == 1) ? -((_Tp)1) : ((_Tp)1)); 
# 591
const _Tp __F = __F1 + (__sgn_2 * __F2); 
# 593
return __F; 
# 594
} else 
# 596
{ 
# 601
bool __ok1 = true; 
# 602
_Tp __sgn_g1ca = ((_Tp)0), __ln_g1ca = ((_Tp)0); 
# 603
_Tp __sgn_g1cb = ((_Tp)0), __ln_g1cb = ((_Tp)0); 
# 604
try 
# 605
{ 
# 606
__sgn_g1ca = __log_gamma_sign(__c - __a); 
# 607
__ln_g1ca = __log_gamma(__c - __a); 
# 608
__sgn_g1cb = __log_gamma_sign(__c - __b); 
# 609
__ln_g1cb = __log_gamma(__c - __b); 
# 610
} 
# 611
catch (...) 
# 612
{ 
# 613
__ok1 = false; 
# 614
}  
# 616
bool __ok2 = true; 
# 617
_Tp __sgn_g2a = ((_Tp)0), __ln_g2a = ((_Tp)0); 
# 618
_Tp __sgn_g2b = ((_Tp)0), __ln_g2b = ((_Tp)0); 
# 619
try 
# 620
{ 
# 621
__sgn_g2a = __log_gamma_sign(__a); 
# 622
__ln_g2a = __log_gamma(__a); 
# 623
__sgn_g2b = __log_gamma_sign(__b); 
# 624
__ln_g2b = __log_gamma(__b); 
# 625
} 
# 626
catch (...) 
# 627
{ 
# 628
__ok2 = false; 
# 629
}  
# 631
const _Tp __sgn_gc = __log_gamma_sign(__c); 
# 632
const _Tp __ln_gc = __log_gamma(__c); 
# 633
const _Tp __sgn_gd = __log_gamma_sign(__d); 
# 634
const _Tp __ln_gd = __log_gamma(__d); 
# 635
const _Tp __sgn_gmd = __log_gamma_sign(-__d); 
# 636
const _Tp __ln_gmd = __log_gamma(-__d); 
# 638
const _Tp __sgn1 = ((__sgn_gc * __sgn_gd) * __sgn_g1ca) * __sgn_g1cb; 
# 639
const _Tp __sgn2 = ((__sgn_gc * __sgn_gmd) * __sgn_g2a) * __sgn_g2b; 
# 641
_Tp __pre1, __pre2; 
# 642
if (__ok1 && __ok2) 
# 643
{ 
# 644
_Tp __ln_pre1 = ((__ln_gc + __ln_gd) - __ln_g1ca) - __ln_g1cb; 
# 645
_Tp __ln_pre2 = (((__ln_gc + __ln_gmd) - __ln_g2a) - __ln_g2b) + (__d * std::log(((_Tp)1) - __x)); 
# 647
if ((__ln_pre1 < __log_max) && (__ln_pre2 < __log_max)) 
# 648
{ 
# 649
__pre1 = std::exp(__ln_pre1); 
# 650
__pre2 = std::exp(__ln_pre2); 
# 651
__pre1 *= __sgn1; 
# 652
__pre2 *= __sgn2; 
# 653
} else 
# 655
{ 
# 656
std::__throw_runtime_error("Overflow of gamma functions in __hyperg_reflect"); 
# 658
}  
# 659
} else { 
# 660
if (__ok1 && (!__ok2)) 
# 661
{ 
# 662
_Tp __ln_pre1 = ((__ln_gc + __ln_gd) - __ln_g1ca) - __ln_g1cb; 
# 663
if (__ln_pre1 < __log_max) 
# 664
{ 
# 665
__pre1 = std::exp(__ln_pre1); 
# 666
__pre1 *= __sgn1; 
# 667
__pre2 = ((_Tp)0); 
# 668
} else 
# 670
{ 
# 671
std::__throw_runtime_error("Overflow of gamma functions in __hyperg_reflect"); 
# 673
}  
# 674
} else { 
# 675
if ((!__ok1) && __ok2) 
# 676
{ 
# 677
_Tp __ln_pre2 = (((__ln_gc + __ln_gmd) - __ln_g2a) - __ln_g2b) + (__d * std::log(((_Tp)1) - __x)); 
# 679
if (__ln_pre2 < __log_max) 
# 680
{ 
# 681
__pre1 = ((_Tp)0); 
# 682
__pre2 = std::exp(__ln_pre2); 
# 683
__pre2 *= __sgn2; 
# 684
} else 
# 686
{ 
# 687
std::__throw_runtime_error("Overflow of gamma functions in __hyperg_reflect"); 
# 689
}  
# 690
} else 
# 692
{ 
# 693
__pre1 = ((_Tp)0); 
# 694
__pre2 = ((_Tp)0); 
# 695
std::__throw_runtime_error("Underflow of gamma functions in __hyperg_reflect"); 
# 697
}  }  }  
# 699
const _Tp __F1 = __hyperg_series(__a, __b, ((_Tp)1) - __d, ((_Tp)1) - __x); 
# 701
const _Tp __F2 = __hyperg_series(__c - __a, __c - __b, ((_Tp)1) + __d, ((_Tp)1) - __x); 
# 704
const _Tp __F = (__pre1 * __F1) + (__pre2 * __F2); 
# 706
return __F; 
# 707
}  
# 708
} 
# 728 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/hypergeometric.tcc" 3
template< class _Tp> _Tp 
# 730
__hyperg(_Tp __a, _Tp __b, _Tp __c, _Tp __x) 
# 731
{ 
# 733
const _Tp __a_nint = std::nearbyint(__a); 
# 734
const _Tp __b_nint = std::nearbyint(__b); 
# 735
const _Tp __c_nint = std::nearbyint(__c); 
# 741
const _Tp __toler = ((_Tp)1000) * std::template numeric_limits< _Tp> ::epsilon(); 
# 742
if (std::abs(__x) >= ((_Tp)1)) { 
# 743
std::__throw_domain_error("Argument outside unit circle in __hyperg."); } else { 
# 745
if (((__isnan(__a) || __isnan(__b)) || __isnan(__c)) || __isnan(__x)) { 
# 747
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 748
if ((__c_nint == __c) && (__c_nint <= ((_Tp)0))) { 
# 749
return std::template numeric_limits< _Tp> ::infinity(); } else { 
# 750
if ((std::abs(__c - __b) < __toler) || (std::abs(__c - __a) < __toler)) { 
# 751
return std::pow(((_Tp)1) - __x, (__c - __a) - __b); } else { 
# 752
if ((__a >= ((_Tp)0)) && (__b >= ((_Tp)0)) && (__c >= ((_Tp)0)) && (__x >= ((_Tp)0)) && (__x < ((_Tp)(0.995L)))) { 
# 754
return __hyperg_series(__a, __b, __c, __x); } else { 
# 755
if ((std::abs(__a) < ((_Tp)10)) && (std::abs(__b) < ((_Tp)10))) 
# 756
{ 
# 759
if ((__a < ((_Tp)0)) && (std::abs(__a - __a_nint) < __toler)) { 
# 760
return __hyperg_series(__a_nint, __b, __c, __x); } else { 
# 761
if ((__b < ((_Tp)0)) && (std::abs(__b - __b_nint) < __toler)) { 
# 762
return __hyperg_series(__a, __b_nint, __c, __x); } else { 
# 763
if (__x < (-((_Tp)(0.25L)))) { 
# 764
return __hyperg_luke(__a, __b, __c, __x); } else { 
# 765
if (__x < ((_Tp)(0.5L))) { 
# 766
return __hyperg_series(__a, __b, __c, __x); } else { 
# 768
if (std::abs(__c) > ((_Tp)10)) { 
# 769
return __hyperg_series(__a, __b, __c, __x); } else { 
# 771
return __hyperg_reflect(__a, __b, __c, __x); }  }  }  }  }  
# 772
} else { 
# 774
return __hyperg_luke(__a, __b, __c, __x); }  }  }  }  }  }  
# 775
} 
# 776
}
# 783
}
# 49 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/legendre_function.tcc" 3
namespace std __attribute((__visibility__("default"))) { 
# 65 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/legendre_function.tcc" 3
namespace __detail { 
# 80 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/legendre_function.tcc" 3
template< class _Tp> _Tp 
# 82
__poly_legendre_p(unsigned __l, _Tp __x) 
# 83
{ 
# 85
if (__isnan(__x)) { 
# 86
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 87
if (__x == (+((_Tp)1))) { 
# 88
return +((_Tp)1); } else { 
# 89
if (__x == (-((_Tp)1))) { 
# 90
return (((__l % (2)) == (1)) ? -((_Tp)1) : (+((_Tp)1))); } else 
# 92
{ 
# 93
_Tp __p_lm2 = ((_Tp)1); 
# 94
if (__l == (0)) { 
# 95
return __p_lm2; }  
# 97
_Tp __p_lm1 = __x; 
# 98
if (__l == (1)) { 
# 99
return __p_lm1; }  
# 101
_Tp __p_l = (0); 
# 102
for (unsigned __ll = (2); __ll <= __l; ++__ll) 
# 103
{ 
# 106
__p_l = ((((((_Tp)2) * __x) * __p_lm1) - __p_lm2) - (((__x * __p_lm1) - __p_lm2) / ((_Tp)__ll))); 
# 108
__p_lm2 = __p_lm1; 
# 109
__p_lm1 = __p_l; 
# 110
}  
# 112
return __p_l; 
# 113
}  }  }  
# 114
} 
# 136 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/legendre_function.tcc" 3
template< class _Tp> _Tp 
# 138
__assoc_legendre_p(unsigned __l, unsigned __m, _Tp __x, _Tp 
# 139
__phase = (_Tp)(+1)) 
# 140
{ 
# 142
if (__m > __l) { 
# 143
return (_Tp)0; } else { 
# 144
if (__isnan(__x)) { 
# 145
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 146
if (__m == (0)) { 
# 147
return __poly_legendre_p(__l, __x); } else 
# 149
{ 
# 150
_Tp __p_mm = ((_Tp)1); 
# 151
if (__m > (0)) 
# 152
{ 
# 155
_Tp __root = std::sqrt(((_Tp)1) - __x) * std::sqrt(((_Tp)1) + __x); 
# 156
_Tp __fact = ((_Tp)1); 
# 157
for (unsigned __i = (1); __i <= __m; ++__i) 
# 158
{ 
# 159
__p_mm *= ((__phase * __fact) * __root); 
# 160
__fact += ((_Tp)2); 
# 161
}  
# 162
}  
# 163
if (__l == __m) { 
# 164
return __p_mm; }  
# 166
_Tp __p_mp1m = (((_Tp)(((2) * __m) + (1))) * __x) * __p_mm; 
# 167
if (__l == (__m + (1))) { 
# 168
return __p_mp1m; }  
# 170
_Tp __p_lm2m = __p_mm; 
# 171
_Tp __P_lm1m = __p_mp1m; 
# 172
_Tp __p_lm = ((_Tp)0); 
# 173
for (unsigned __j = __m + (2); __j <= __l; ++__j) 
# 174
{ 
# 175
__p_lm = ((((((_Tp)(((2) * __j) - (1))) * __x) * __P_lm1m) - (((_Tp)((__j + __m) - (1))) * __p_lm2m)) / ((_Tp)(__j - __m))); 
# 177
__p_lm2m = __P_lm1m; 
# 178
__P_lm1m = __p_lm; 
# 179
}  
# 181
return __p_lm; 
# 182
}  }  }  
# 183
} 
# 214 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/legendre_function.tcc" 3
template< class _Tp> _Tp 
# 216
__sph_legendre(unsigned __l, unsigned __m, _Tp __theta) 
# 217
{ 
# 218
if (__isnan(__theta)) { 
# 219
return std::template numeric_limits< _Tp> ::quiet_NaN(); }  
# 221
const _Tp __x = std::cos(__theta); 
# 223
if (__m > __l) { 
# 224
return (_Tp)0; } else { 
# 225
if (__m == (0)) 
# 226
{ 
# 227
_Tp __P = __poly_legendre_p(__l, __x); 
# 228
_Tp __fact = std::sqrt(((_Tp)(((2) * __l) + (1))) / (((_Tp)4) * __numeric_constants< _Tp> ::__pi())); 
# 230
__P *= __fact; 
# 231
return __P; 
# 232
} else { 
# 233
if ((__x == ((_Tp)1)) || (__x == (-((_Tp)1)))) 
# 234
{ 
# 236
return (_Tp)0; 
# 237
} else 
# 239
{ 
# 245
const _Tp __sgn = ((__m % (2)) == (1)) ? -((_Tp)1) : ((_Tp)1); 
# 246
const _Tp __y_mp1m_factor = __x * std::sqrt((_Tp)(((2) * __m) + (3))); 
# 248
const _Tp __lncirc = std::log1p((-__x) * __x); 
# 254
const _Tp __lnpoch = std::lgamma((_Tp)(__m + ((_Tp)(0.5L)))) - std::lgamma((_Tp)__m); 
# 260
const _Tp __lnpre_val = ((-((_Tp)(0.25L))) * __numeric_constants< _Tp> ::__lnpi()) + (((_Tp)(0.5L)) * (__lnpoch + (__m * __lncirc))); 
# 263
const _Tp __sr = std::sqrt((((_Tp)2) + (((_Tp)1) / __m)) / (((_Tp)4) * __numeric_constants< _Tp> ::__pi())); 
# 265
_Tp __y_mm = (__sgn * __sr) * std::exp(__lnpre_val); 
# 266
_Tp __y_mp1m = __y_mp1m_factor * __y_mm; 
# 268
if (__l == __m) { 
# 269
return __y_mm; } else { 
# 270
if (__l == (__m + (1))) { 
# 271
return __y_mp1m; } else 
# 273
{ 
# 274
_Tp __y_lm = ((_Tp)0); 
# 277
for (unsigned __ll = __m + (2); __ll <= __l; ++__ll) 
# 278
{ 
# 279
const _Tp __rat1 = ((_Tp)(__ll - __m)) / ((_Tp)(__ll + __m)); 
# 280
const _Tp __rat2 = ((_Tp)((__ll - __m) - (1))) / ((_Tp)((__ll + __m) - (1))); 
# 281
const _Tp __fact1 = std::sqrt((__rat1 * ((_Tp)(((2) * __ll) + (1)))) * ((_Tp)(((2) * __ll) - (1)))); 
# 283
const _Tp __fact2 = std::sqrt(((__rat1 * __rat2) * ((_Tp)(((2) * __ll) + (1)))) / ((_Tp)(((2) * __ll) - (3)))); 
# 285
__y_lm = ((((__x * __y_mp1m) * __fact1) - ((((__ll + __m) - (1)) * __y_mm) * __fact2)) / ((_Tp)(__ll - __m))); 
# 287
__y_mm = __y_mp1m; 
# 288
__y_mp1m = __y_lm; 
# 289
}  
# 291
return __y_lm; 
# 292
}  }  
# 293
}  }  }  
# 294
} 
# 295
}
# 302
}
# 51 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/modified_bessel_func.tcc" 3
namespace std __attribute((__visibility__("default"))) { 
# 65 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/modified_bessel_func.tcc" 3
namespace __detail { 
# 83 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/modified_bessel_func.tcc" 3
template< class _Tp> void 
# 85
__bessel_ik(_Tp __nu, _Tp __x, _Tp &
# 86
__Inu, _Tp &__Knu, _Tp &__Ipnu, _Tp &__Kpnu) 
# 87
{ 
# 88
if (__x == ((_Tp)0)) 
# 89
{ 
# 90
if (__nu == ((_Tp)0)) 
# 91
{ 
# 92
__Inu = ((_Tp)1); 
# 93
__Ipnu = ((_Tp)0); 
# 94
} else { 
# 95
if (__nu == ((_Tp)1)) 
# 96
{ 
# 97
__Inu = ((_Tp)0); 
# 98
__Ipnu = ((_Tp)(0.5L)); 
# 99
} else 
# 101
{ 
# 102
__Inu = ((_Tp)0); 
# 103
__Ipnu = ((_Tp)0); 
# 104
}  }  
# 105
__Knu = std::template numeric_limits< _Tp> ::infinity(); 
# 106
__Kpnu = (-std::template numeric_limits< _Tp> ::infinity()); 
# 107
return; 
# 108
}  
# 110
const _Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 111
const _Tp __fp_min = ((_Tp)10) * std::template numeric_limits< _Tp> ::epsilon(); 
# 112
const int __max_iter = 15000; 
# 113
const _Tp __x_min = ((_Tp)2); 
# 115
const int __nl = static_cast< int>(__nu + ((_Tp)(0.5L))); 
# 117
const _Tp __mu = __nu - __nl; 
# 118
const _Tp __mu2 = __mu * __mu; 
# 119
const _Tp __xi = ((_Tp)1) / __x; 
# 120
const _Tp __xi2 = ((_Tp)2) * __xi; 
# 121
_Tp __h = __nu * __xi; 
# 122
if (__h < __fp_min) { 
# 123
__h = __fp_min; }  
# 124
_Tp __b = __xi2 * __nu; 
# 125
_Tp __d = ((_Tp)0); 
# 126
_Tp __c = __h; 
# 127
int __i; 
# 128
for (__i = 1; __i <= __max_iter; ++__i) 
# 129
{ 
# 130
__b += __xi2; 
# 131
__d = (((_Tp)1) / (__b + __d)); 
# 132
__c = (__b + (((_Tp)1) / __c)); 
# 133
const _Tp __del = __c * __d; 
# 134
__h *= __del; 
# 135
if (std::abs(__del - ((_Tp)1)) < __eps) { 
# 136
break; }  
# 137
}  
# 138
if (__i > __max_iter) { 
# 139
std::__throw_runtime_error("Argument x too large in __bessel_ik; try asymptotic expansion."); }  
# 142
_Tp __Inul = __fp_min; 
# 143
_Tp __Ipnul = __h * __Inul; 
# 144
_Tp __Inul1 = __Inul; 
# 145
_Tp __Ipnu1 = __Ipnul; 
# 146
_Tp __fact = __nu * __xi; 
# 147
for (int __l = __nl; __l >= 1; --__l) 
# 148
{ 
# 149
const _Tp __Inutemp = (__fact * __Inul) + __Ipnul; 
# 150
__fact -= __xi; 
# 151
__Ipnul = ((__fact * __Inutemp) + __Inul); 
# 152
__Inul = __Inutemp; 
# 153
}  
# 154
_Tp __f = __Ipnul / __Inul; 
# 155
_Tp __Kmu, __Knu1; 
# 156
if (__x < __x_min) 
# 157
{ 
# 158
const _Tp __x2 = __x / ((_Tp)2); 
# 159
const _Tp __pimu = __numeric_constants< _Tp> ::__pi() * __mu; 
# 160
const _Tp __fact = (std::abs(__pimu) < __eps) ? (_Tp)1 : (__pimu / std::sin(__pimu)); 
# 162
_Tp __d = (-std::log(__x2)); 
# 163
_Tp __e = __mu * __d; 
# 164
const _Tp __fact2 = (std::abs(__e) < __eps) ? (_Tp)1 : (std::sinh(__e) / __e); 
# 166
_Tp __gam1, __gam2, __gampl, __gammi; 
# 167
__gamma_temme(__mu, __gam1, __gam2, __gampl, __gammi); 
# 168
_Tp __ff = __fact * ((__gam1 * std::cosh(__e)) + ((__gam2 * __fact2) * __d)); 
# 170
_Tp __sum = __ff; 
# 171
__e = std::exp(__e); 
# 172
_Tp __p = __e / (((_Tp)2) * __gampl); 
# 173
_Tp __q = ((_Tp)1) / ((((_Tp)2) * __e) * __gammi); 
# 174
_Tp __c = ((_Tp)1); 
# 175
__d = (__x2 * __x2); 
# 176
_Tp __sum1 = __p; 
# 177
int __i; 
# 178
for (__i = 1; __i <= __max_iter; ++__i) 
# 179
{ 
# 180
__ff = ((((__i * __ff) + __p) + __q) / ((__i * __i) - __mu2)); 
# 181
__c *= (__d / __i); 
# 182
__p /= (__i - __mu); 
# 183
__q /= (__i + __mu); 
# 184
const _Tp __del = __c * __ff; 
# 185
__sum += __del; 
# 186
const _Tp __del1 = __c * (__p - (__i * __ff)); 
# 187
__sum1 += __del1; 
# 188
if (std::abs(__del) < (__eps * std::abs(__sum))) { 
# 189
break; }  
# 190
}  
# 191
if (__i > __max_iter) { 
# 192
std::__throw_runtime_error("Bessel k series failed to converge in __bessel_ik."); }  
# 194
__Kmu = __sum; 
# 195
__Knu1 = (__sum1 * __xi2); 
# 196
} else 
# 198
{ 
# 199
_Tp __b = ((_Tp)2) * (((_Tp)1) + __x); 
# 200
_Tp __d = ((_Tp)1) / __b; 
# 201
_Tp __delh = __d; 
# 202
_Tp __h = __delh; 
# 203
_Tp __q1 = ((_Tp)0); 
# 204
_Tp __q2 = ((_Tp)1); 
# 205
_Tp __a1 = ((_Tp)(0.25L)) - __mu2; 
# 206
_Tp __q = __c = __a1; 
# 207
_Tp __a = (-__a1); 
# 208
_Tp __s = ((_Tp)1) + (__q * __delh); 
# 209
int __i; 
# 210
for (__i = 2; __i <= __max_iter; ++__i) 
# 211
{ 
# 212
__a -= (2 * (__i - 1)); 
# 213
__c = (((-__a) * __c) / __i); 
# 214
const _Tp __qnew = (__q1 - (__b * __q2)) / __a; 
# 215
__q1 = __q2; 
# 216
__q2 = __qnew; 
# 217
__q += (__c * __qnew); 
# 218
__b += ((_Tp)2); 
# 219
__d = (((_Tp)1) / (__b + (__a * __d))); 
# 220
__delh = (((__b * __d) - ((_Tp)1)) * __delh); 
# 221
__h += __delh; 
# 222
const _Tp __dels = __q * __delh; 
# 223
__s += __dels; 
# 224
if (std::abs(__dels / __s) < __eps) { 
# 225
break; }  
# 226
}  
# 227
if (__i > __max_iter) { 
# 228
std::__throw_runtime_error("Steed\'s method failed in __bessel_ik."); }  
# 230
__h = (__a1 * __h); 
# 231
__Kmu = ((std::sqrt(__numeric_constants< _Tp> ::__pi() / (((_Tp)2) * __x)) * std::exp(-__x)) / __s); 
# 233
__Knu1 = ((__Kmu * (((__mu + __x) + ((_Tp)(0.5L))) - __h)) * __xi); 
# 234
}  
# 236
_Tp __Kpmu = ((__mu * __xi) * __Kmu) - __Knu1; 
# 237
_Tp __Inumu = __xi / ((__f * __Kmu) - __Kpmu); 
# 238
__Inu = ((__Inumu * __Inul1) / __Inul); 
# 239
__Ipnu = ((__Inumu * __Ipnu1) / __Inul); 
# 240
for (__i = 1; __i <= __nl; ++__i) 
# 241
{ 
# 242
const _Tp __Knutemp = (((__mu + __i) * __xi2) * __Knu1) + __Kmu; 
# 243
__Kmu = __Knu1; 
# 244
__Knu1 = __Knutemp; 
# 245
}  
# 246
__Knu = __Kmu; 
# 247
__Kpnu = (((__nu * __xi) * __Kmu) - __Knu1); 
# 250
} 
# 267 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/modified_bessel_func.tcc" 3
template< class _Tp> _Tp 
# 269
__cyl_bessel_i(_Tp __nu, _Tp __x) 
# 270
{ 
# 271
if ((__nu < ((_Tp)0)) || (__x < ((_Tp)0))) { 
# 272
std::__throw_domain_error("Bad argument in __cyl_bessel_i."); } else { 
# 274
if (__isnan(__nu) || __isnan(__x)) { 
# 275
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 276
if ((__x * __x) < (((_Tp)10) * (__nu + ((_Tp)1)))) { 
# 277
return __cyl_bessel_ij_series(__nu, __x, +((_Tp)1), 200); } else 
# 279
{ 
# 280
_Tp __I_nu, __K_nu, __Ip_nu, __Kp_nu; 
# 281
__bessel_ik(__nu, __x, __I_nu, __K_nu, __Ip_nu, __Kp_nu); 
# 282
return __I_nu; 
# 283
}  }  }  
# 284
} 
# 303 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/modified_bessel_func.tcc" 3
template< class _Tp> _Tp 
# 305
__cyl_bessel_k(_Tp __nu, _Tp __x) 
# 306
{ 
# 307
if ((__nu < ((_Tp)0)) || (__x < ((_Tp)0))) { 
# 308
std::__throw_domain_error("Bad argument in __cyl_bessel_k."); } else { 
# 310
if (__isnan(__nu) || __isnan(__x)) { 
# 311
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else 
# 313
{ 
# 314
_Tp __I_nu, __K_nu, __Ip_nu, __Kp_nu; 
# 315
__bessel_ik(__nu, __x, __I_nu, __K_nu, __Ip_nu, __Kp_nu); 
# 316
return __K_nu; 
# 317
}  }  
# 318
} 
# 337 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/modified_bessel_func.tcc" 3
template< class _Tp> void 
# 339
__sph_bessel_ik(unsigned __n, _Tp __x, _Tp &
# 340
__i_n, _Tp &__k_n, _Tp &__ip_n, _Tp &__kp_n) 
# 341
{ 
# 342
const _Tp __nu = ((_Tp)__n) + ((_Tp)(0.5L)); 
# 344
_Tp __I_nu, __Ip_nu, __K_nu, __Kp_nu; 
# 345
__bessel_ik(__nu, __x, __I_nu, __K_nu, __Ip_nu, __Kp_nu); 
# 347
const _Tp __factor = __numeric_constants< _Tp> ::__sqrtpio2() / std::sqrt(__x); 
# 350
__i_n = (__factor * __I_nu); 
# 351
__k_n = (__factor * __K_nu); 
# 352
__ip_n = ((__factor * __Ip_nu) - (__i_n / (((_Tp)2) * __x))); 
# 353
__kp_n = ((__factor * __Kp_nu) - (__k_n / (((_Tp)2) * __x))); 
# 356
} 
# 373 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/modified_bessel_func.tcc" 3
template< class _Tp> void 
# 375
__airy(_Tp __x, _Tp &__Ai, _Tp &__Bi, _Tp &__Aip, _Tp &__Bip) 
# 376
{ 
# 377
const _Tp __absx = std::abs(__x); 
# 378
const _Tp __rootx = std::sqrt(__absx); 
# 379
const _Tp __z = ((((_Tp)2) * __absx) * __rootx) / ((_Tp)3); 
# 380
const _Tp _S_inf = std::template numeric_limits< _Tp> ::infinity(); 
# 382
if (__isnan(__x)) { 
# 383
__Bip = (__Aip = (__Bi = (__Ai = std::template numeric_limits< _Tp> ::quiet_NaN()))); } else { 
# 384
if (__z == _S_inf) 
# 385
{ 
# 386
__Aip = (__Ai = ((_Tp)0)); 
# 387
__Bip = (__Bi = _S_inf); 
# 388
} else { 
# 389
if (__z == (-_S_inf)) { 
# 390
__Bip = (__Aip = (__Bi = (__Ai = ((_Tp)0)))); } else { 
# 391
if (__x > ((_Tp)0)) 
# 392
{ 
# 393
_Tp __I_nu, __Ip_nu, __K_nu, __Kp_nu; 
# 395
__bessel_ik(((_Tp)1) / ((_Tp)3), __z, __I_nu, __K_nu, __Ip_nu, __Kp_nu); 
# 396
__Ai = ((__rootx * __K_nu) / (__numeric_constants< _Tp> ::__sqrt3() * __numeric_constants< _Tp> ::__pi())); 
# 399
__Bi = (__rootx * ((__K_nu / __numeric_constants< _Tp> ::__pi()) + ((((_Tp)2) * __I_nu) / __numeric_constants< _Tp> ::__sqrt3()))); 
# 402
__bessel_ik(((_Tp)2) / ((_Tp)3), __z, __I_nu, __K_nu, __Ip_nu, __Kp_nu); 
# 403
__Aip = (((-__x) * __K_nu) / (__numeric_constants< _Tp> ::__sqrt3() * __numeric_constants< _Tp> ::__pi())); 
# 406
__Bip = (__x * ((__K_nu / __numeric_constants< _Tp> ::__pi()) + ((((_Tp)2) * __I_nu) / __numeric_constants< _Tp> ::__sqrt3()))); 
# 409
} else { 
# 410
if (__x < ((_Tp)0)) 
# 411
{ 
# 412
_Tp __J_nu, __Jp_nu, __N_nu, __Np_nu; 
# 414
__bessel_jn(((_Tp)1) / ((_Tp)3), __z, __J_nu, __N_nu, __Jp_nu, __Np_nu); 
# 415
__Ai = ((__rootx * (__J_nu - (__N_nu / __numeric_constants< _Tp> ::__sqrt3()))) / ((_Tp)2)); 
# 417
__Bi = (((-__rootx) * (__N_nu + (__J_nu / __numeric_constants< _Tp> ::__sqrt3()))) / ((_Tp)2)); 
# 420
__bessel_jn(((_Tp)2) / ((_Tp)3), __z, __J_nu, __N_nu, __Jp_nu, __Np_nu); 
# 421
__Aip = ((__absx * ((__N_nu / __numeric_constants< _Tp> ::__sqrt3()) + __J_nu)) / ((_Tp)2)); 
# 423
__Bip = ((__absx * ((__J_nu / __numeric_constants< _Tp> ::__sqrt3()) - __N_nu)) / ((_Tp)2)); 
# 425
} else 
# 427
{ 
# 431
__Ai = ((_Tp)(0.35502805388781723926L)); 
# 432
__Bi = (__Ai * __numeric_constants< _Tp> ::__sqrt3()); 
# 437
__Aip = (-((_Tp)(0.2588194037928067984L))); 
# 438
__Bip = ((-__Aip) * __numeric_constants< _Tp> ::__sqrt3()); 
# 439
}  }  }  }  }  
# 442
} 
# 443
}
# 449
}
# 42 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/poly_hermite.tcc" 3
namespace std __attribute((__visibility__("default"))) { 
# 56 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/poly_hermite.tcc" 3
namespace __detail { 
# 72 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/poly_hermite.tcc" 3
template< class _Tp> _Tp 
# 74
__poly_hermite_recursion(unsigned __n, _Tp __x) 
# 75
{ 
# 77
_Tp __H_0 = (1); 
# 78
if (__n == (0)) { 
# 79
return __H_0; }  
# 82
_Tp __H_1 = 2 * __x; 
# 83
if (__n == (1)) { 
# 84
return __H_1; }  
# 87
_Tp __H_n, __H_nm1, __H_nm2; 
# 88
unsigned __i; 
# 89
for (((__H_nm2 = __H_0), (__H_nm1 = __H_1)), (__i = (2)); __i <= __n; ++__i) 
# 90
{ 
# 91
__H_n = (2 * ((__x * __H_nm1) - ((__i - (1)) * __H_nm2))); 
# 92
__H_nm2 = __H_nm1; 
# 93
__H_nm1 = __H_n; 
# 94
}  
# 96
return __H_n; 
# 97
} 
# 114 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/poly_hermite.tcc" 3
template< class _Tp> inline _Tp 
# 116
__poly_hermite(unsigned __n, _Tp __x) 
# 117
{ 
# 118
if (__isnan(__x)) { 
# 119
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 121
return __poly_hermite_recursion(__n, __x); }  
# 122
} 
# 123
}
# 129
}
# 44 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/poly_laguerre.tcc" 3
namespace std __attribute((__visibility__("default"))) { 
# 60 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/poly_laguerre.tcc" 3
namespace __detail { 
# 75 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/poly_laguerre.tcc" 3
template< class _Tpa, class _Tp> _Tp 
# 77
__poly_laguerre_large_n(unsigned __n, _Tpa __alpha1, _Tp __x) 
# 78
{ 
# 79
const _Tp __a = (-((_Tp)__n)); 
# 80
const _Tp __b = ((_Tp)__alpha1) + ((_Tp)1); 
# 81
const _Tp __eta = (((_Tp)2) * __b) - (((_Tp)4) * __a); 
# 82
const _Tp __cos2th = __x / __eta; 
# 83
const _Tp __sin2th = ((_Tp)1) - __cos2th; 
# 84
const _Tp __th = std::acos(std::sqrt(__cos2th)); 
# 85
const _Tp __pre_h = ((((__numeric_constants< _Tp> ::__pi_2() * __numeric_constants< _Tp> ::__pi_2()) * __eta) * __eta) * __cos2th) * __sin2th; 
# 90
const _Tp __lg_b = std::lgamma(((_Tp)__n) + __b); 
# 91
const _Tp __lnfact = std::lgamma((_Tp)(__n + (1))); 
# 97
_Tp __pre_term1 = (((_Tp)(0.5L)) * (((_Tp)1) - __b)) * std::log((((_Tp)(0.25L)) * __x) * __eta); 
# 99
_Tp __pre_term2 = ((_Tp)(0.25L)) * std::log(__pre_h); 
# 100
_Tp __lnpre = (((__lg_b - __lnfact) + (((_Tp)(0.5L)) * __x)) + __pre_term1) - __pre_term2; 
# 102
_Tp __ser_term1 = std::sin(__a * __numeric_constants< _Tp> ::__pi()); 
# 103
_Tp __ser_term2 = std::sin(((((_Tp)(0.25L)) * __eta) * ((((_Tp)2) * __th) - std::sin(((_Tp)2) * __th))) + __numeric_constants< _Tp> ::__pi_4()); 
# 107
_Tp __ser = __ser_term1 + __ser_term2; 
# 109
return std::exp(__lnpre) * __ser; 
# 110
} 
# 129 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/poly_laguerre.tcc" 3
template< class _Tpa, class _Tp> _Tp 
# 131
__poly_laguerre_hyperg(unsigned __n, _Tpa __alpha1, _Tp __x) 
# 132
{ 
# 133
const _Tp __b = ((_Tp)__alpha1) + ((_Tp)1); 
# 134
const _Tp __mx = (-__x); 
# 135
const _Tp __tc_sgn = (__x < ((_Tp)0)) ? (_Tp)1 : (((__n % (2)) == (1)) ? -((_Tp)1) : ((_Tp)1)); 
# 138
_Tp __tc = ((_Tp)1); 
# 139
const _Tp __ax = std::abs(__x); 
# 140
for (unsigned __k = (1); __k <= __n; ++__k) { 
# 141
__tc *= (__ax / __k); }  
# 143
_Tp __term = __tc * __tc_sgn; 
# 144
_Tp __sum = __term; 
# 145
for (int __k = ((int)__n) - 1; __k >= 0; --__k) 
# 146
{ 
# 147
__term *= ((((__b + ((_Tp)__k)) / ((_Tp)(((int)__n) - __k))) * ((_Tp)(__k + 1))) / __mx); 
# 149
__sum += __term; 
# 150
}  
# 152
return __sum; 
# 153
} 
# 185 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/poly_laguerre.tcc" 3
template< class _Tpa, class _Tp> _Tp 
# 187
__poly_laguerre_recursion(unsigned __n, _Tpa __alpha1, _Tp __x) 
# 188
{ 
# 190
_Tp __l_0 = ((_Tp)1); 
# 191
if (__n == (0)) { 
# 192
return __l_0; }  
# 195
_Tp __l_1 = (((-__x) + ((_Tp)1)) + ((_Tp)__alpha1)); 
# 196
if (__n == (1)) { 
# 197
return __l_1; }  
# 200
_Tp __l_n2 = __l_0; 
# 201
_Tp __l_n1 = __l_1; 
# 202
_Tp __l_n = ((_Tp)0); 
# 203
for (unsigned __nn = (2); __nn <= __n; ++__nn) 
# 204
{ 
# 205
__l_n = (((((((_Tp)(((2) * __nn) - (1))) + ((_Tp)__alpha1)) - __x) * __l_n1) / ((_Tp)__nn)) - (((((_Tp)(__nn - (1))) + ((_Tp)__alpha1)) * __l_n2) / ((_Tp)__nn))); 
# 208
__l_n2 = __l_n1; 
# 209
__l_n1 = __l_n; 
# 210
}  
# 212
return __l_n; 
# 213
} 
# 244 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/poly_laguerre.tcc" 3
template< class _Tpa, class _Tp> _Tp 
# 246
__poly_laguerre(unsigned __n, _Tpa __alpha1, _Tp __x) 
# 247
{ 
# 248
if (__x < ((_Tp)0)) { 
# 249
std::__throw_domain_error("Negative argument in __poly_laguerre."); } else { 
# 252
if (__isnan(__x)) { 
# 253
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 254
if (__n == (0)) { 
# 255
return (_Tp)1; } else { 
# 256
if (__n == (1)) { 
# 257
return (((_Tp)1) + ((_Tp)__alpha1)) - __x; } else { 
# 258
if (__x == ((_Tp)0)) 
# 259
{ 
# 260
_Tp __prod = ((_Tp)__alpha1) + ((_Tp)1); 
# 261
for (unsigned __k = (2); __k <= __n; ++__k) { 
# 262
__prod *= ((((_Tp)__alpha1) + ((_Tp)__k)) / ((_Tp)__k)); }  
# 263
return __prod; 
# 264
} else { 
# 265
if ((__n > (10000000)) && (((_Tp)__alpha1) > (-((_Tp)1))) && (__x < ((((_Tp)2) * (((_Tp)__alpha1) + ((_Tp)1))) + ((_Tp)((4) * __n))))) { 
# 267
return __poly_laguerre_large_n(__n, __alpha1, __x); } else { 
# 268
if ((((_Tp)__alpha1) >= ((_Tp)0)) || ((__x > ((_Tp)0)) && (((_Tp)__alpha1) < (-((_Tp)(__n + (1))))))) { 
# 270
return __poly_laguerre_recursion(__n, __alpha1, __x); } else { 
# 272
return __poly_laguerre_hyperg(__n, __alpha1, __x); }  }  }  }  }  }  }  
# 273
} 
# 296 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/poly_laguerre.tcc" 3
template< class _Tp> inline _Tp 
# 298
__assoc_laguerre(unsigned __n, unsigned __m, _Tp __x) 
# 299
{ return __poly_laguerre< unsigned, _Tp> (__n, __m, __x); } 
# 316 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/poly_laguerre.tcc" 3
template< class _Tp> inline _Tp 
# 318
__laguerre(unsigned __n, _Tp __x) 
# 319
{ return __poly_laguerre< unsigned, _Tp> (__n, 0, __x); } 
# 320
}
# 327
}
# 47 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/riemann_zeta.tcc" 3
namespace std __attribute((__visibility__("default"))) { 
# 63 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/riemann_zeta.tcc" 3
namespace __detail { 
# 78 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/riemann_zeta.tcc" 3
template< class _Tp> _Tp 
# 80
__riemann_zeta_sum(_Tp __s) 
# 81
{ 
# 83
if (__s < ((_Tp)1)) { 
# 84
std::__throw_domain_error("Bad argument in zeta sum."); }  
# 86
const unsigned max_iter = (10000); 
# 87
_Tp __zeta = ((_Tp)0); 
# 88
for (unsigned __k = (1); __k < max_iter; ++__k) 
# 89
{ 
# 90
_Tp __term = std::pow(static_cast< _Tp>(__k), -__s); 
# 91
if (__term < std::template numeric_limits< _Tp> ::epsilon()) 
# 92
{ 
# 93
break; 
# 94
}  
# 95
__zeta += __term; 
# 96
}  
# 98
return __zeta; 
# 99
} 
# 115 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/riemann_zeta.tcc" 3
template< class _Tp> _Tp 
# 117
__riemann_zeta_alt(_Tp __s) 
# 118
{ 
# 119
_Tp __sgn = ((_Tp)1); 
# 120
_Tp __zeta = ((_Tp)0); 
# 121
for (unsigned __i = (1); __i < (10000000); ++__i) 
# 122
{ 
# 123
_Tp __term = __sgn / std::pow(__i, __s); 
# 124
if (std::abs(__term) < std::template numeric_limits< _Tp> ::epsilon()) { 
# 125
break; }  
# 126
__zeta += __term; 
# 127
__sgn *= ((_Tp)(-1)); 
# 128
}  
# 129
__zeta /= (((_Tp)1) - std::pow((_Tp)2, ((_Tp)1) - __s)); 
# 131
return __zeta; 
# 132
} 
# 157 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/riemann_zeta.tcc" 3
template< class _Tp> _Tp 
# 159
__riemann_zeta_glob(_Tp __s) 
# 160
{ 
# 161
_Tp __zeta = ((_Tp)0); 
# 163
const _Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 165
const _Tp __max_bincoeff = (std::template numeric_limits< _Tp> ::max_exponent10 * std::log((_Tp)10)) - ((_Tp)1); 
# 170
if (__s < ((_Tp)0)) 
# 171
{ 
# 173
if (std::fmod(__s, (_Tp)2) == ((_Tp)0)) { 
# 174
return (_Tp)0; } else 
# 177
{ 
# 178
_Tp __zeta = __riemann_zeta_glob(((_Tp)1) - __s); 
# 179
__zeta *= (((std::pow(((_Tp)2) * __numeric_constants< _Tp> ::__pi(), __s) * std::sin(__numeric_constants< _Tp> ::__pi_2() * __s)) * std::exp(std::lgamma(((_Tp)1) - __s))) / __numeric_constants< _Tp> ::__pi()); 
# 188
return __zeta; 
# 189
}  
# 190
}  
# 192
_Tp __num = ((_Tp)(0.5L)); 
# 193
const unsigned __maxit = (10000); 
# 194
for (unsigned __i = (0); __i < __maxit; ++__i) 
# 195
{ 
# 196
bool __punt = false; 
# 197
_Tp __sgn = ((_Tp)1); 
# 198
_Tp __term = ((_Tp)0); 
# 199
for (unsigned __j = (0); __j <= __i; ++__j) 
# 200
{ 
# 202
_Tp __bincoeff = (std::lgamma((_Tp)((1) + __i)) - std::lgamma((_Tp)((1) + __j))) - std::lgamma((_Tp)(((1) + __i) - __j)); 
# 210
if (__bincoeff > __max_bincoeff) 
# 211
{ 
# 213
__punt = true; 
# 214
break; 
# 215
}  
# 216
__bincoeff = std::exp(__bincoeff); 
# 217
__term += ((__sgn * __bincoeff) * std::pow((_Tp)((1) + __j), -__s)); 
# 218
__sgn *= ((_Tp)(-1)); 
# 219
}  
# 220
if (__punt) { 
# 221
break; }  
# 222
__term *= __num; 
# 223
__zeta += __term; 
# 224
if (std::abs(__term / __zeta) < __eps) { 
# 225
break; }  
# 226
__num *= ((_Tp)(0.5L)); 
# 227
}  
# 229
__zeta /= (((_Tp)1) - std::pow((_Tp)2, ((_Tp)1) - __s)); 
# 231
return __zeta; 
# 232
} 
# 252 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/riemann_zeta.tcc" 3
template< class _Tp> _Tp 
# 254
__riemann_zeta_product(_Tp __s) 
# 255
{ 
# 256
static const _Tp __prime[] = {((_Tp)2), ((_Tp)3), ((_Tp)5), ((_Tp)7), ((_Tp)11), ((_Tp)13), ((_Tp)17), ((_Tp)19), ((_Tp)23), ((_Tp)29), ((_Tp)31), ((_Tp)37), ((_Tp)41), ((_Tp)43), ((_Tp)47), ((_Tp)53), ((_Tp)59), ((_Tp)61), ((_Tp)67), ((_Tp)71), ((_Tp)73), ((_Tp)79), ((_Tp)83), ((_Tp)89), ((_Tp)97), ((_Tp)101), ((_Tp)103), ((_Tp)107), ((_Tp)109)}; 
# 262
static const unsigned __num_primes = (sizeof(__prime) / sizeof(_Tp)); 
# 264
_Tp __zeta = ((_Tp)1); 
# 265
for (unsigned __i = (0); __i < __num_primes; ++__i) 
# 266
{ 
# 267
const _Tp __fact = ((_Tp)1) - std::pow(__prime[__i], -__s); 
# 268
__zeta *= __fact; 
# 269
if ((((_Tp)1) - __fact) < std::template numeric_limits< _Tp> ::epsilon()) { 
# 270
break; }  
# 271
}  
# 273
__zeta = (((_Tp)1) / __zeta); 
# 275
return __zeta; 
# 276
} 
# 293 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/riemann_zeta.tcc" 3
template< class _Tp> _Tp 
# 295
__riemann_zeta(_Tp __s) 
# 296
{ 
# 297
if (__isnan(__s)) { 
# 298
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 299
if (__s == ((_Tp)1)) { 
# 300
return std::template numeric_limits< _Tp> ::infinity(); } else { 
# 301
if (__s < (-((_Tp)19))) 
# 302
{ 
# 303
_Tp __zeta = __riemann_zeta_product(((_Tp)1) - __s); 
# 304
__zeta *= (((std::pow(((_Tp)2) * __numeric_constants< _Tp> ::__pi(), __s) * std::sin(__numeric_constants< _Tp> ::__pi_2() * __s)) * std::exp(std::lgamma(((_Tp)1) - __s))) / __numeric_constants< _Tp> ::__pi()); 
# 312
return __zeta; 
# 313
} else { 
# 314
if (__s < ((_Tp)20)) 
# 315
{ 
# 317
bool __glob = true; 
# 318
if (__glob) { 
# 319
return __riemann_zeta_glob(__s); } else 
# 321
{ 
# 322
if (__s > ((_Tp)1)) { 
# 323
return __riemann_zeta_sum(__s); } else 
# 325
{ 
# 326
_Tp __zeta = ((std::pow(((_Tp)2) * __numeric_constants< _Tp> ::__pi(), __s) * std::sin(__numeric_constants< _Tp> ::__pi_2() * __s)) * std::tgamma(((_Tp)1) - __s)) * __riemann_zeta_sum(((_Tp)1) - __s); 
# 335
return __zeta; 
# 336
}  
# 337
}  
# 338
} else { 
# 340
return __riemann_zeta_product(__s); }  }  }  }  
# 341
} 
# 365 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/riemann_zeta.tcc" 3
template< class _Tp> _Tp 
# 367
__hurwitz_zeta_glob(_Tp __a, _Tp __s) 
# 368
{ 
# 369
_Tp __zeta = ((_Tp)0); 
# 371
const _Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 373
const _Tp __max_bincoeff = (std::template numeric_limits< _Tp> ::max_exponent10 * std::log((_Tp)10)) - ((_Tp)1); 
# 376
const unsigned __maxit = (10000); 
# 377
for (unsigned __i = (0); __i < __maxit; ++__i) 
# 378
{ 
# 379
bool __punt = false; 
# 380
_Tp __sgn = ((_Tp)1); 
# 381
_Tp __term = ((_Tp)0); 
# 382
for (unsigned __j = (0); __j <= __i; ++__j) 
# 383
{ 
# 385
_Tp __bincoeff = (std::lgamma((_Tp)((1) + __i)) - std::lgamma((_Tp)((1) + __j))) - std::lgamma((_Tp)(((1) + __i) - __j)); 
# 393
if (__bincoeff > __max_bincoeff) 
# 394
{ 
# 396
__punt = true; 
# 397
break; 
# 398
}  
# 399
__bincoeff = std::exp(__bincoeff); 
# 400
__term += ((__sgn * __bincoeff) * std::pow((_Tp)(__a + __j), -__s)); 
# 401
__sgn *= ((_Tp)(-1)); 
# 402
}  
# 403
if (__punt) { 
# 404
break; }  
# 405
__term /= ((_Tp)(__i + (1))); 
# 406
if (std::abs(__term / __zeta) < __eps) { 
# 407
break; }  
# 408
__zeta += __term; 
# 409
}  
# 411
__zeta /= (__s - ((_Tp)1)); 
# 413
return __zeta; 
# 414
} 
# 430 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/tr1/riemann_zeta.tcc" 3
template< class _Tp> inline _Tp 
# 432
__hurwitz_zeta(_Tp __a, _Tp __s) 
# 433
{ return __hurwitz_zeta_glob(__a, __s); } 
# 434
}
# 441
}
# 61 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 206 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
inline float assoc_laguerref(unsigned __n, unsigned __m, float __x) 
# 207
{ return __detail::__assoc_laguerre< float> (__n, __m, __x); } 
# 216
inline long double assoc_laguerrel(unsigned __n, unsigned __m, long double __x) 
# 217
{ return __detail::__assoc_laguerre< long double> (__n, __m, __x); } 
# 250 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
template< class _Tp> inline typename __gnu_cxx::__promote< _Tp> ::__type 
# 252
assoc_laguerre(unsigned __n, unsigned __m, _Tp __x) 
# 253
{ 
# 254
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 255
return __detail::__assoc_laguerre< typename __gnu_cxx::__promote< _Tp> ::__type> (__n, __m, __x); 
# 256
} 
# 267 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
inline float assoc_legendref(unsigned __l, unsigned __m, float __x) 
# 268
{ return __detail::__assoc_legendre_p< float> (__l, __m, __x); } 
# 276
inline long double assoc_legendrel(unsigned __l, unsigned __m, long double __x) 
# 277
{ return __detail::__assoc_legendre_p< long double> (__l, __m, __x); } 
# 296 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
template< class _Tp> inline typename __gnu_cxx::__promote< _Tp> ::__type 
# 298
assoc_legendre(unsigned __l, unsigned __m, _Tp __x) 
# 299
{ 
# 300
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 301
return __detail::__assoc_legendre_p< typename __gnu_cxx::__promote< _Tp> ::__type> (__l, __m, __x); 
# 302
} 
# 312 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
inline float betaf(float __a, float __b) 
# 313
{ return __detail::__beta< float> (__a, __b); } 
# 322
inline long double betal(long double __a, long double __b) 
# 323
{ return __detail::__beta< long double> (__a, __b); } 
# 341 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
template< class _Tpa, class _Tpb> inline typename __gnu_cxx::__promote_2< _Tpa, _Tpb> ::__type 
# 343
beta(_Tpa __a, _Tpb __b) 
# 344
{ 
# 345
typedef typename __gnu_cxx::__promote_2< _Tpa, _Tpb> ::__type __type; 
# 346
return __detail::__beta< typename __gnu_cxx::__promote_2< _Tpa, _Tpb> ::__type> (__a, __b); 
# 347
} 
# 358 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
inline float comp_ellint_1f(float __k) 
# 359
{ return __detail::__comp_ellint_1< float> (__k); } 
# 368
inline long double comp_ellint_1l(long double __k) 
# 369
{ return __detail::__comp_ellint_1< long double> (__k); } 
# 389 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
template< class _Tp> inline typename __gnu_cxx::__promote< _Tp> ::__type 
# 391
comp_ellint_1(_Tp __k) 
# 392
{ 
# 393
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 394
return __detail::__comp_ellint_1< typename __gnu_cxx::__promote< _Tp> ::__type> (__k); 
# 395
} 
# 406 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
inline float comp_ellint_2f(float __k) 
# 407
{ return __detail::__comp_ellint_2< float> (__k); } 
# 416
inline long double comp_ellint_2l(long double __k) 
# 417
{ return __detail::__comp_ellint_2< long double> (__k); } 
# 436 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
template< class _Tp> inline typename __gnu_cxx::__promote< _Tp> ::__type 
# 438
comp_ellint_2(_Tp __k) 
# 439
{ 
# 440
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 441
return __detail::__comp_ellint_2< typename __gnu_cxx::__promote< _Tp> ::__type> (__k); 
# 442
} 
# 453 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
inline float comp_ellint_3f(float __k, float __nu) 
# 454
{ return __detail::__comp_ellint_3< float> (__k, __nu); } 
# 463
inline long double comp_ellint_3l(long double __k, long double __nu) 
# 464
{ return __detail::__comp_ellint_3< long double> (__k, __nu); } 
# 487 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
template< class _Tp, class _Tpn> inline typename __gnu_cxx::__promote_2< _Tp, _Tpn> ::__type 
# 489
comp_ellint_3(_Tp __k, _Tpn __nu) 
# 490
{ 
# 491
typedef typename __gnu_cxx::__promote_2< _Tp, _Tpn> ::__type __type; 
# 492
return __detail::__comp_ellint_3< typename __gnu_cxx::__promote_2< _Tp, _Tpn> ::__type> (__k, __nu); 
# 493
} 
# 504 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
inline float cyl_bessel_if(float __nu, float __x) 
# 505
{ return __detail::__cyl_bessel_i< float> (__nu, __x); } 
# 514
inline long double cyl_bessel_il(long double __nu, long double __x) 
# 515
{ return __detail::__cyl_bessel_i< long double> (__nu, __x); } 
# 533 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
template< class _Tpnu, class _Tp> inline typename __gnu_cxx::__promote_2< _Tpnu, _Tp> ::__type 
# 535
cyl_bessel_i(_Tpnu __nu, _Tp __x) 
# 536
{ 
# 537
typedef typename __gnu_cxx::__promote_2< _Tpnu, _Tp> ::__type __type; 
# 538
return __detail::__cyl_bessel_i< typename __gnu_cxx::__promote_2< _Tpnu, _Tp> ::__type> (__nu, __x); 
# 539
} 
# 550 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
inline float cyl_bessel_jf(float __nu, float __x) 
# 551
{ return __detail::__cyl_bessel_j< float> (__nu, __x); } 
# 560
inline long double cyl_bessel_jl(long double __nu, long double __x) 
# 561
{ return __detail::__cyl_bessel_j< long double> (__nu, __x); } 
# 579 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
template< class _Tpnu, class _Tp> inline typename __gnu_cxx::__promote_2< _Tpnu, _Tp> ::__type 
# 581
cyl_bessel_j(_Tpnu __nu, _Tp __x) 
# 582
{ 
# 583
typedef typename __gnu_cxx::__promote_2< _Tpnu, _Tp> ::__type __type; 
# 584
return __detail::__cyl_bessel_j< typename __gnu_cxx::__promote_2< _Tpnu, _Tp> ::__type> (__nu, __x); 
# 585
} 
# 596 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
inline float cyl_bessel_kf(float __nu, float __x) 
# 597
{ return __detail::__cyl_bessel_k< float> (__nu, __x); } 
# 606
inline long double cyl_bessel_kl(long double __nu, long double __x) 
# 607
{ return __detail::__cyl_bessel_k< long double> (__nu, __x); } 
# 631 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
template< class _Tpnu, class _Tp> inline typename __gnu_cxx::__promote_2< _Tpnu, _Tp> ::__type 
# 633
cyl_bessel_k(_Tpnu __nu, _Tp __x) 
# 634
{ 
# 635
typedef typename __gnu_cxx::__promote_2< _Tpnu, _Tp> ::__type __type; 
# 636
return __detail::__cyl_bessel_k< typename __gnu_cxx::__promote_2< _Tpnu, _Tp> ::__type> (__nu, __x); 
# 637
} 
# 648 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
inline float cyl_neumannf(float __nu, float __x) 
# 649
{ return __detail::__cyl_neumann_n< float> (__nu, __x); } 
# 658
inline long double cyl_neumannl(long double __nu, long double __x) 
# 659
{ return __detail::__cyl_neumann_n< long double> (__nu, __x); } 
# 679 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
template< class _Tpnu, class _Tp> inline typename __gnu_cxx::__promote_2< _Tpnu, _Tp> ::__type 
# 681
cyl_neumann(_Tpnu __nu, _Tp __x) 
# 682
{ 
# 683
typedef typename __gnu_cxx::__promote_2< _Tpnu, _Tp> ::__type __type; 
# 684
return __detail::__cyl_neumann_n< typename __gnu_cxx::__promote_2< _Tpnu, _Tp> ::__type> (__nu, __x); 
# 685
} 
# 696 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
inline float ellint_1f(float __k, float __phi) 
# 697
{ return __detail::__ellint_1< float> (__k, __phi); } 
# 706
inline long double ellint_1l(long double __k, long double __phi) 
# 707
{ return __detail::__ellint_1< long double> (__k, __phi); } 
# 727 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
template< class _Tp, class _Tpp> inline typename __gnu_cxx::__promote_2< _Tp, _Tpp> ::__type 
# 729
ellint_1(_Tp __k, _Tpp __phi) 
# 730
{ 
# 731
typedef typename __gnu_cxx::__promote_2< _Tp, _Tpp> ::__type __type; 
# 732
return __detail::__ellint_1< typename __gnu_cxx::__promote_2< _Tp, _Tpp> ::__type> (__k, __phi); 
# 733
} 
# 744 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
inline float ellint_2f(float __k, float __phi) 
# 745
{ return __detail::__ellint_2< float> (__k, __phi); } 
# 754
inline long double ellint_2l(long double __k, long double __phi) 
# 755
{ return __detail::__ellint_2< long double> (__k, __phi); } 
# 775 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
template< class _Tp, class _Tpp> inline typename __gnu_cxx::__promote_2< _Tp, _Tpp> ::__type 
# 777
ellint_2(_Tp __k, _Tpp __phi) 
# 778
{ 
# 779
typedef typename __gnu_cxx::__promote_2< _Tp, _Tpp> ::__type __type; 
# 780
return __detail::__ellint_2< typename __gnu_cxx::__promote_2< _Tp, _Tpp> ::__type> (__k, __phi); 
# 781
} 
# 792 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
inline float ellint_3f(float __k, float __nu, float __phi) 
# 793
{ return __detail::__ellint_3< float> (__k, __nu, __phi); } 
# 802
inline long double ellint_3l(long double __k, long double __nu, long double __phi) 
# 803
{ return __detail::__ellint_3< long double> (__k, __nu, __phi); } 
# 828 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
template< class _Tp, class _Tpn, class _Tpp> inline typename __gnu_cxx::__promote_3< _Tp, _Tpn, _Tpp> ::__type 
# 830
ellint_3(_Tp __k, _Tpn __nu, _Tpp __phi) 
# 831
{ 
# 832
typedef typename __gnu_cxx::__promote_3< _Tp, _Tpn, _Tpp> ::__type __type; 
# 833
return __detail::__ellint_3< typename __gnu_cxx::__promote_3< _Tp, _Tpn, _Tpp> ::__type> (__k, __nu, __phi); 
# 834
} 
# 844 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
inline float expintf(float __x) 
# 845
{ return __detail::__expint< float> (__x); } 
# 854
inline long double expintl(long double __x) 
# 855
{ return __detail::__expint< long double> (__x); } 
# 868 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
template< class _Tp> inline typename __gnu_cxx::__promote< _Tp> ::__type 
# 870
expint(_Tp __x) 
# 871
{ 
# 872
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 873
return __detail::__expint< typename __gnu_cxx::__promote< _Tp> ::__type> (__x); 
# 874
} 
# 885 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
inline float hermitef(unsigned __n, float __x) 
# 886
{ return __detail::__poly_hermite< float> (__n, __x); } 
# 895
inline long double hermitel(unsigned __n, long double __x) 
# 896
{ return __detail::__poly_hermite< long double> (__n, __x); } 
# 916 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
template< class _Tp> inline typename __gnu_cxx::__promote< _Tp> ::__type 
# 918
hermite(unsigned __n, _Tp __x) 
# 919
{ 
# 920
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 921
return __detail::__poly_hermite< typename __gnu_cxx::__promote< _Tp> ::__type> (__n, __x); 
# 922
} 
# 933 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
inline float laguerref(unsigned __n, float __x) 
# 934
{ return __detail::__laguerre< float> (__n, __x); } 
# 943
inline long double laguerrel(unsigned __n, long double __x) 
# 944
{ return __detail::__laguerre< long double> (__n, __x); } 
# 960 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
template< class _Tp> inline typename __gnu_cxx::__promote< _Tp> ::__type 
# 962
laguerre(unsigned __n, _Tp __x) 
# 963
{ 
# 964
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 965
return __detail::__laguerre< typename __gnu_cxx::__promote< _Tp> ::__type> (__n, __x); 
# 966
} 
# 977 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
inline float legendref(unsigned __l, float __x) 
# 978
{ return __detail::__poly_legendre_p< float> (__l, __x); } 
# 987
inline long double legendrel(unsigned __l, long double __x) 
# 988
{ return __detail::__poly_legendre_p< long double> (__l, __x); } 
# 1005 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
template< class _Tp> inline typename __gnu_cxx::__promote< _Tp> ::__type 
# 1007
legendre(unsigned __l, _Tp __x) 
# 1008
{ 
# 1009
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 1010
return __detail::__poly_legendre_p< typename __gnu_cxx::__promote< _Tp> ::__type> (__l, __x); 
# 1011
} 
# 1022 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
inline float riemann_zetaf(float __s) 
# 1023
{ return __detail::__riemann_zeta< float> (__s); } 
# 1032
inline long double riemann_zetal(long double __s) 
# 1033
{ return __detail::__riemann_zeta< long double> (__s); } 
# 1056 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
template< class _Tp> inline typename __gnu_cxx::__promote< _Tp> ::__type 
# 1058
riemann_zeta(_Tp __s) 
# 1059
{ 
# 1060
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 1061
return __detail::__riemann_zeta< typename __gnu_cxx::__promote< _Tp> ::__type> (__s); 
# 1062
} 
# 1073 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
inline float sph_besself(unsigned __n, float __x) 
# 1074
{ return __detail::__sph_bessel< float> (__n, __x); } 
# 1083
inline long double sph_bessell(unsigned __n, long double __x) 
# 1084
{ return __detail::__sph_bessel< long double> (__n, __x); } 
# 1100 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
template< class _Tp> inline typename __gnu_cxx::__promote< _Tp> ::__type 
# 1102
sph_bessel(unsigned __n, _Tp __x) 
# 1103
{ 
# 1104
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 1105
return __detail::__sph_bessel< typename __gnu_cxx::__promote< _Tp> ::__type> (__n, __x); 
# 1106
} 
# 1117 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
inline float sph_legendref(unsigned __l, unsigned __m, float __theta) 
# 1118
{ return __detail::__sph_legendre< float> (__l, __m, __theta); } 
# 1128 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
inline long double sph_legendrel(unsigned __l, unsigned __m, long double __theta) 
# 1129
{ return __detail::__sph_legendre< long double> (__l, __m, __theta); } 
# 1147 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
template< class _Tp> inline typename __gnu_cxx::__promote< _Tp> ::__type 
# 1149
sph_legendre(unsigned __l, unsigned __m, _Tp __theta) 
# 1150
{ 
# 1151
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 1152
return __detail::__sph_legendre< typename __gnu_cxx::__promote< _Tp> ::__type> (__l, __m, __theta); 
# 1153
} 
# 1164 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
inline float sph_neumannf(unsigned __n, float __x) 
# 1165
{ return __detail::__sph_neumann< float> (__n, __x); } 
# 1174
inline long double sph_neumannl(unsigned __n, long double __x) 
# 1175
{ return __detail::__sph_neumann< long double> (__n, __x); } 
# 1191 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
template< class _Tp> inline typename __gnu_cxx::__promote< _Tp> ::__type 
# 1193
sph_neumann(unsigned __n, _Tp __x) 
# 1194
{ 
# 1195
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 1196
return __detail::__sph_neumann< typename __gnu_cxx::__promote< _Tp> ::__type> (__n, __x); 
# 1197
} 
# 1202
}
# 1205
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 1219 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
inline float airy_aif(float __x) 
# 1220
{ 
# 1221
float __Ai, __Bi, __Aip, __Bip; 
# 1222
std::__detail::__airy< float> (__x, __Ai, __Bi, __Aip, __Bip); 
# 1223
return __Ai; 
# 1224
} 
# 1230
inline long double airy_ail(long double __x) 
# 1231
{ 
# 1232
long double __Ai, __Bi, __Aip, __Bip; 
# 1233
std::__detail::__airy< long double> (__x, __Ai, __Bi, __Aip, __Bip); 
# 1234
return __Ai; 
# 1235
} 
# 1240
template< class _Tp> inline typename __promote< _Tp> ::__type 
# 1242
airy_ai(_Tp __x) 
# 1243
{ 
# 1244
typedef typename __promote< _Tp> ::__type __type; 
# 1245
__type __Ai, __Bi, __Aip, __Bip; 
# 1246
std::__detail::__airy< typename __promote< _Tp> ::__type> (__x, __Ai, __Bi, __Aip, __Bip); 
# 1247
return __Ai; 
# 1248
} 
# 1254
inline float airy_bif(float __x) 
# 1255
{ 
# 1256
float __Ai, __Bi, __Aip, __Bip; 
# 1257
std::__detail::__airy< float> (__x, __Ai, __Bi, __Aip, __Bip); 
# 1258
return __Bi; 
# 1259
} 
# 1265
inline long double airy_bil(long double __x) 
# 1266
{ 
# 1267
long double __Ai, __Bi, __Aip, __Bip; 
# 1268
std::__detail::__airy< long double> (__x, __Ai, __Bi, __Aip, __Bip); 
# 1269
return __Bi; 
# 1270
} 
# 1275
template< class _Tp> inline typename __promote< _Tp> ::__type 
# 1277
airy_bi(_Tp __x) 
# 1278
{ 
# 1279
typedef typename __promote< _Tp> ::__type __type; 
# 1280
__type __Ai, __Bi, __Aip, __Bip; 
# 1281
std::__detail::__airy< typename __promote< _Tp> ::__type> (__x, __Ai, __Bi, __Aip, __Bip); 
# 1282
return __Bi; 
# 1283
} 
# 1295 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
inline float conf_hypergf(float __a, float __c, float __x) 
# 1296
{ return std::__detail::__conf_hyperg< float> (__a, __c, __x); } 
# 1306 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
inline long double conf_hypergl(long double __a, long double __c, long double __x) 
# 1307
{ return std::__detail::__conf_hyperg< long double> (__a, __c, __x); } 
# 1325 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
template< class _Tpa, class _Tpc, class _Tp> inline typename __promote_3< _Tpa, _Tpc, _Tp> ::__type 
# 1327
conf_hyperg(_Tpa __a, _Tpc __c, _Tp __x) 
# 1328
{ 
# 1329
typedef typename __promote_3< _Tpa, _Tpc, _Tp> ::__type __type; 
# 1330
return std::__detail::__conf_hyperg< typename __promote_3< _Tpa, _Tpc, _Tp> ::__type> (__a, __c, __x); 
# 1331
} 
# 1343 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
inline float hypergf(float __a, float __b, float __c, float __x) 
# 1344
{ return std::__detail::__hyperg< float> (__a, __b, __c, __x); } 
# 1354 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
inline long double hypergl(long double __a, long double __b, long double __c, long double __x) 
# 1355
{ return std::__detail::__hyperg< long double> (__a, __b, __c, __x); } 
# 1374 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/specfun.h" 3
template< class _Tpa, class _Tpb, class _Tpc, class _Tp> inline typename __promote_4< _Tpa, _Tpb, _Tpc, _Tp> ::__type 
# 1376
hyperg(_Tpa __a, _Tpb __b, _Tpc __c, _Tp __x) 
# 1377
{ 
# 1379
typedef typename __promote_4< _Tpa, _Tpb, _Tpc, _Tp> ::__type __type; 
# 1380
return std::__detail::__hyperg< typename __promote_4< _Tpa, _Tpb, _Tpc, _Tp> ::__type> (__a, __b, __c, __x); 
# 1381
} 
# 1385
}
# 1388
#pragma GCC visibility pop
# 1938 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/cmath" 3
}
# 38 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/math.h" 3
using std::abs;
# 39
using std::acos;
# 40
using std::asin;
# 41
using std::atan;
# 42
using std::atan2;
# 43
using std::cos;
# 44
using std::sin;
# 45
using std::tan;
# 46
using std::cosh;
# 47
using std::sinh;
# 48
using std::tanh;
# 49
using std::exp;
# 50
using std::frexp;
# 51
using std::ldexp;
# 52
using std::log;
# 53
using std::log10;
# 54
using std::modf;
# 55
using std::pow;
# 56
using std::sqrt;
# 57
using std::ceil;
# 58
using std::fabs;
# 59
using std::floor;
# 60
using std::fmod;
# 63
using std::fpclassify;
# 64
using std::isfinite;
# 65
using std::isinf;
# 66
using std::isnan;
# 67
using std::isnormal;
# 68
using std::signbit;
# 69
using std::isgreater;
# 70
using std::isgreaterequal;
# 71
using std::isless;
# 72
using std::islessequal;
# 73
using std::islessgreater;
# 74
using std::isunordered;
# 78
using std::acosh;
# 79
using std::asinh;
# 80
using std::atanh;
# 81
using std::cbrt;
# 82
using std::copysign;
# 83
using std::erf;
# 84
using std::erfc;
# 85
using std::exp2;
# 86
using std::expm1;
# 87
using std::fdim;
# 88
using std::fma;
# 89
using std::fmax;
# 90
using std::fmin;
# 91
using std::hypot;
# 92
using std::ilogb;
# 93
using std::lgamma;
# 94
using std::llrint;
# 95
using std::llround;
# 96
using std::log1p;
# 97
using std::log2;
# 98
using std::logb;
# 99
using std::lrint;
# 100
using std::lround;
# 101
using std::nearbyint;
# 102
using std::nextafter;
# 103
using std::nexttoward;
# 104
using std::remainder;
# 105
using std::remquo;
# 106
using std::rint;
# 107
using std::round;
# 108
using std::scalbln;
# 109
using std::scalbn;
# 110
using std::tgamma;
# 111
using std::trunc;
# 10626 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
namespace std { 
# 10627
constexpr bool signbit(float x); 
# 10628
constexpr bool signbit(double x); 
# 10629
constexpr bool signbit(long double x); 
# 10630
constexpr bool isfinite(float x); 
# 10631
constexpr bool isfinite(double x); 
# 10632
constexpr bool isfinite(long double x); 
# 10633
constexpr bool isnan(float x); 
# 10636
extern "C" int isnan(double x) throw(); 
# 10640
constexpr bool isnan(long double x); 
# 10641
constexpr bool isinf(float x); 
# 10644
extern "C" int isinf(double x) throw(); 
# 10648
constexpr bool isinf(long double x); 
# 10649
}
# 10805 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
namespace std { 
# 10807
template< class T> extern T __pow_helper(T, int); 
# 10808
template< class T> extern T __cmath_power(T, unsigned); 
# 10809
}
# 10811
using std::abs;
# 10812
using std::fabs;
# 10813
using std::ceil;
# 10814
using std::floor;
# 10815
using std::sqrt;
# 10817
using std::pow;
# 10819
using std::log;
# 10820
using std::log10;
# 10821
using std::fmod;
# 10822
using std::modf;
# 10823
using std::exp;
# 10824
using std::frexp;
# 10825
using std::ldexp;
# 10826
using std::asin;
# 10827
using std::sin;
# 10828
using std::sinh;
# 10829
using std::acos;
# 10830
using std::cos;
# 10831
using std::cosh;
# 10832
using std::atan;
# 10833
using std::atan2;
# 10834
using std::tan;
# 10835
using std::tanh;
# 11206 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
namespace std { 
# 11215 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern inline long long abs(long long); 
# 11225 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern inline long abs(long); 
# 11226
extern constexpr float abs(float); 
# 11227
extern constexpr double abs(double); 
# 11228
extern constexpr float fabs(float); 
# 11229
extern constexpr float ceil(float); 
# 11230
extern constexpr float floor(float); 
# 11231
extern constexpr float sqrt(float); 
# 11232
extern constexpr float pow(float, float); 
# 11237
template< class _Tp, class _Up> extern constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type pow(_Tp, _Up); 
# 11247
extern constexpr float log(float); 
# 11248
extern constexpr float log10(float); 
# 11249
extern constexpr float fmod(float, float); 
# 11250
extern inline float modf(float, float *); 
# 11251
extern constexpr float exp(float); 
# 11252
extern inline float frexp(float, int *); 
# 11253
extern constexpr float ldexp(float, int); 
# 11254
extern constexpr float asin(float); 
# 11255
extern constexpr float sin(float); 
# 11256
extern constexpr float sinh(float); 
# 11257
extern constexpr float acos(float); 
# 11258
extern constexpr float cos(float); 
# 11259
extern constexpr float cosh(float); 
# 11260
extern constexpr float atan(float); 
# 11261
extern constexpr float atan2(float, float); 
# 11262
extern constexpr float tan(float); 
# 11263
extern constexpr float tanh(float); 
# 11350 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
}
# 11456 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
namespace std { 
# 11457
constexpr float logb(float a); 
# 11458
constexpr int ilogb(float a); 
# 11459
constexpr float scalbn(float a, int b); 
# 11460
constexpr float scalbln(float a, long b); 
# 11461
constexpr float exp2(float a); 
# 11462
constexpr float expm1(float a); 
# 11463
constexpr float log2(float a); 
# 11464
constexpr float log1p(float a); 
# 11465
constexpr float acosh(float a); 
# 11466
constexpr float asinh(float a); 
# 11467
constexpr float atanh(float a); 
# 11468
constexpr float hypot(float a, float b); 
# 11469
constexpr float cbrt(float a); 
# 11470
constexpr float erf(float a); 
# 11471
constexpr float erfc(float a); 
# 11472
constexpr float lgamma(float a); 
# 11473
constexpr float tgamma(float a); 
# 11474
constexpr float copysign(float a, float b); 
# 11475
constexpr float nextafter(float a, float b); 
# 11476
constexpr float remainder(float a, float b); 
# 11477
inline float remquo(float a, float b, int * quo); 
# 11478
constexpr float round(float a); 
# 11479
constexpr long lround(float a); 
# 11480
constexpr long long llround(float a); 
# 11481
constexpr float trunc(float a); 
# 11482
constexpr float rint(float a); 
# 11483
constexpr long lrint(float a); 
# 11484
constexpr long long llrint(float a); 
# 11485
constexpr float nearbyint(float a); 
# 11486
constexpr float fdim(float a, float b); 
# 11487
constexpr float fma(float a, float b, float c); 
# 11488
constexpr float fmax(float a, float b); 
# 11489
constexpr float fmin(float a, float b); 
# 11490
}
# 11595 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
static inline float exp10(const float a); 
# 11597
static inline float rsqrt(const float a); 
# 11599
static inline float rcbrt(const float a); 
# 11601
static inline float sinpi(const float a); 
# 11603
static inline float cospi(const float a); 
# 11605
static inline void sincospi(const float a, float *const sptr, float *const cptr); 
# 11607
static inline void sincos(const float a, float *const sptr, float *const cptr); 
# 11609
static inline float j0(const float a); 
# 11611
static inline float j1(const float a); 
# 11613
static inline float jn(const int n, const float a); 
# 11615
static inline float y0(const float a); 
# 11617
static inline float y1(const float a); 
# 11619
static inline float yn(const int n, const float a); 
# 11621
__attribute__((unused)) static inline float cyl_bessel_i0(const float a); 
# 11623
__attribute__((unused)) static inline float cyl_bessel_i1(const float a); 
# 11625
static inline float erfinv(const float a); 
# 11627
static inline float erfcinv(const float a); 
# 11629
static inline float normcdfinv(const float a); 
# 11631
static inline float normcdf(const float a); 
# 11633
static inline float erfcx(const float a); 
# 11635
static inline double copysign(const double a, const float b); 
# 11637
static inline double copysign(const float a, const double b); 
# 11645
static inline unsigned min(const unsigned a, const unsigned b); 
# 11653
static inline unsigned min(const int a, const unsigned b); 
# 11661
static inline unsigned min(const unsigned a, const int b); 
# 11669
static inline long min(const long a, const long b); 
# 11677
static inline unsigned long min(const unsigned long a, const unsigned long b); 
# 11685
static inline unsigned long min(const long a, const unsigned long b); 
# 11693
static inline unsigned long min(const unsigned long a, const long b); 
# 11701
static inline long long min(const long long a, const long long b); 
# 11709
static inline unsigned long long min(const unsigned long long a, const unsigned long long b); 
# 11717
static inline unsigned long long min(const long long a, const unsigned long long b); 
# 11725
static inline unsigned long long min(const unsigned long long a, const long long b); 
# 11736 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
static inline float min(const float a, const float b); 
# 11747 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
static inline double min(const double a, const double b); 
# 11757 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
static inline double min(const float a, const double b); 
# 11767 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
static inline double min(const double a, const float b); 
# 11775
static inline unsigned max(const unsigned a, const unsigned b); 
# 11783
static inline unsigned max(const int a, const unsigned b); 
# 11791
static inline unsigned max(const unsigned a, const int b); 
# 11799
static inline long max(const long a, const long b); 
# 11807
static inline unsigned long max(const unsigned long a, const unsigned long b); 
# 11815
static inline unsigned long max(const long a, const unsigned long b); 
# 11823
static inline unsigned long max(const unsigned long a, const long b); 
# 11831
static inline long long max(const long long a, const long long b); 
# 11839
static inline unsigned long long max(const unsigned long long a, const unsigned long long b); 
# 11847
static inline unsigned long long max(const long long a, const unsigned long long b); 
# 11855
static inline unsigned long long max(const unsigned long long a, const long long b); 
# 11866 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
static inline float max(const float a, const float b); 
# 11877 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
static inline double max(const double a, const double b); 
# 11887 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
static inline double max(const float a, const double b); 
# 11897 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
static inline double max(const double a, const float b); 
# 11909 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
extern "C" {
# 11910
__attribute__((unused)) inline void *__nv_aligned_device_malloc(size_t size, size_t align) 
# 11911
{int volatile ___ = 1;(void)size;(void)align;
# 11914
::exit(___);}
#if 0
# 11911
{ 
# 11912
__attribute__((unused)) void *__nv_aligned_device_malloc_impl(size_t, size_t); 
# 11913
return __nv_aligned_device_malloc_impl(size, align); 
# 11914
} 
#endif
# 11915 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.h"
}
# 758 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.hpp"
static inline float exp10(const float a) 
# 759
{ 
# 760
return exp10f(a); 
# 761
} 
# 763
static inline float rsqrt(const float a) 
# 764
{ 
# 765
return rsqrtf(a); 
# 766
} 
# 768
static inline float rcbrt(const float a) 
# 769
{ 
# 770
return rcbrtf(a); 
# 771
} 
# 773
static inline float sinpi(const float a) 
# 774
{ 
# 775
return sinpif(a); 
# 776
} 
# 778
static inline float cospi(const float a) 
# 779
{ 
# 780
return cospif(a); 
# 781
} 
# 783
static inline void sincospi(const float a, float *const sptr, float *const cptr) 
# 784
{ 
# 785
sincospif(a, sptr, cptr); 
# 786
} 
# 788
static inline void sincos(const float a, float *const sptr, float *const cptr) 
# 789
{ 
# 790
sincosf(a, sptr, cptr); 
# 791
} 
# 793
static inline float j0(const float a) 
# 794
{ 
# 795
return j0f(a); 
# 796
} 
# 798
static inline float j1(const float a) 
# 799
{ 
# 800
return j1f(a); 
# 801
} 
# 803
static inline float jn(const int n, const float a) 
# 804
{ 
# 805
return jnf(n, a); 
# 806
} 
# 808
static inline float y0(const float a) 
# 809
{ 
# 810
return y0f(a); 
# 811
} 
# 813
static inline float y1(const float a) 
# 814
{ 
# 815
return y1f(a); 
# 816
} 
# 818
static inline float yn(const int n, const float a) 
# 819
{ 
# 820
return ynf(n, a); 
# 821
} 
# 823
__attribute__((unused)) static inline float cyl_bessel_i0(const float a) 
# 824
{int volatile ___ = 1;(void)a;
# 826
::exit(___);}
#if 0
# 824
{ 
# 825
return cyl_bessel_i0f(a); 
# 826
} 
#endif
# 828 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.hpp"
__attribute__((unused)) static inline float cyl_bessel_i1(const float a) 
# 829
{int volatile ___ = 1;(void)a;
# 831
::exit(___);}
#if 0
# 829
{ 
# 830
return cyl_bessel_i1f(a); 
# 831
} 
#endif
# 833 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.hpp"
static inline float erfinv(const float a) 
# 834
{ 
# 835
return erfinvf(a); 
# 836
} 
# 838
static inline float erfcinv(const float a) 
# 839
{ 
# 840
return erfcinvf(a); 
# 841
} 
# 843
static inline float normcdfinv(const float a) 
# 844
{ 
# 845
return normcdfinvf(a); 
# 846
} 
# 848
static inline float normcdf(const float a) 
# 849
{ 
# 850
return normcdff(a); 
# 851
} 
# 853
static inline float erfcx(const float a) 
# 854
{ 
# 855
return erfcxf(a); 
# 856
} 
# 858
static inline double copysign(const double a, const float b) 
# 859
{ 
# 860
return copysign(a, static_cast< double>(b)); 
# 861
} 
# 863
static inline double copysign(const float a, const double b) 
# 864
{ 
# 865
return copysign(static_cast< double>(a), b); 
# 866
} 
# 868
static inline unsigned min(const unsigned a, const unsigned b) 
# 869
{ 
# 870
return umin(a, b); 
# 871
} 
# 873
static inline unsigned min(const int a, const unsigned b) 
# 874
{ 
# 875
return umin(static_cast< unsigned>(a), b); 
# 876
} 
# 878
static inline unsigned min(const unsigned a, const int b) 
# 879
{ 
# 880
return umin(a, static_cast< unsigned>(b)); 
# 881
} 
# 883
static inline long min(const long a, const long b) 
# 884
{ 
# 885
long retval; 
# 891
if (sizeof(long) == sizeof(int)) { 
# 895
retval = (static_cast< long>(min(static_cast< int>(a), static_cast< int>(b)))); 
# 896
} else { 
# 897
retval = (static_cast< long>(llmin(static_cast< long long>(a), static_cast< long long>(b)))); 
# 898
}  
# 899
return retval; 
# 900
} 
# 902
static inline unsigned long min(const unsigned long a, const unsigned long b) 
# 903
{ 
# 904
unsigned long retval; 
# 908
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 912
retval = (static_cast< unsigned long>(umin(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
# 913
} else { 
# 914
retval = (static_cast< unsigned long>(ullmin(static_cast< unsigned long long>(a), static_cast< unsigned long long>(b)))); 
# 915
}  
# 916
return retval; 
# 917
} 
# 919
static inline unsigned long min(const long a, const unsigned long b) 
# 920
{ 
# 921
unsigned long retval; 
# 925
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 929
retval = (static_cast< unsigned long>(umin(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
# 930
} else { 
# 931
retval = (static_cast< unsigned long>(ullmin(static_cast< unsigned long long>(a), static_cast< unsigned long long>(b)))); 
# 932
}  
# 933
return retval; 
# 934
} 
# 936
static inline unsigned long min(const unsigned long a, const long b) 
# 937
{ 
# 938
unsigned long retval; 
# 942
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 946
retval = (static_cast< unsigned long>(umin(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
# 947
} else { 
# 948
retval = (static_cast< unsigned long>(ullmin(static_cast< unsigned long long>(a), static_cast< unsigned long long>(b)))); 
# 949
}  
# 950
return retval; 
# 951
} 
# 953
static inline long long min(const long long a, const long long b) 
# 954
{ 
# 955
return llmin(a, b); 
# 956
} 
# 958
static inline unsigned long long min(const unsigned long long a, const unsigned long long b) 
# 959
{ 
# 960
return ullmin(a, b); 
# 961
} 
# 963
static inline unsigned long long min(const long long a, const unsigned long long b) 
# 964
{ 
# 965
return ullmin(static_cast< unsigned long long>(a), b); 
# 966
} 
# 968
static inline unsigned long long min(const unsigned long long a, const long long b) 
# 969
{ 
# 970
return ullmin(a, static_cast< unsigned long long>(b)); 
# 971
} 
# 973
static inline float min(const float a, const float b) 
# 974
{ 
# 975
return fminf(a, b); 
# 976
} 
# 978
static inline double min(const double a, const double b) 
# 979
{ 
# 980
return fmin(a, b); 
# 981
} 
# 983
static inline double min(const float a, const double b) 
# 984
{ 
# 985
return fmin(static_cast< double>(a), b); 
# 986
} 
# 988
static inline double min(const double a, const float b) 
# 989
{ 
# 990
return fmin(a, static_cast< double>(b)); 
# 991
} 
# 993
static inline unsigned max(const unsigned a, const unsigned b) 
# 994
{ 
# 995
return umax(a, b); 
# 996
} 
# 998
static inline unsigned max(const int a, const unsigned b) 
# 999
{ 
# 1000
return umax(static_cast< unsigned>(a), b); 
# 1001
} 
# 1003
static inline unsigned max(const unsigned a, const int b) 
# 1004
{ 
# 1005
return umax(a, static_cast< unsigned>(b)); 
# 1006
} 
# 1008
static inline long max(const long a, const long b) 
# 1009
{ 
# 1010
long retval; 
# 1015
if (sizeof(long) == sizeof(int)) { 
# 1019
retval = (static_cast< long>(max(static_cast< int>(a), static_cast< int>(b)))); 
# 1020
} else { 
# 1021
retval = (static_cast< long>(llmax(static_cast< long long>(a), static_cast< long long>(b)))); 
# 1022
}  
# 1023
return retval; 
# 1024
} 
# 1026
static inline unsigned long max(const unsigned long a, const unsigned long b) 
# 1027
{ 
# 1028
unsigned long retval; 
# 1032
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 1036
retval = (static_cast< unsigned long>(umax(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
# 1037
} else { 
# 1038
retval = (static_cast< unsigned long>(ullmax(static_cast< unsigned long long>(a), static_cast< unsigned long long>(b)))); 
# 1039
}  
# 1040
return retval; 
# 1041
} 
# 1043
static inline unsigned long max(const long a, const unsigned long b) 
# 1044
{ 
# 1045
unsigned long retval; 
# 1049
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 1053
retval = (static_cast< unsigned long>(umax(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
# 1054
} else { 
# 1055
retval = (static_cast< unsigned long>(ullmax(static_cast< unsigned long long>(a), static_cast< unsigned long long>(b)))); 
# 1056
}  
# 1057
return retval; 
# 1058
} 
# 1060
static inline unsigned long max(const unsigned long a, const long b) 
# 1061
{ 
# 1062
unsigned long retval; 
# 1066
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 1070
retval = (static_cast< unsigned long>(umax(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
# 1071
} else { 
# 1072
retval = (static_cast< unsigned long>(ullmax(static_cast< unsigned long long>(a), static_cast< unsigned long long>(b)))); 
# 1073
}  
# 1074
return retval; 
# 1075
} 
# 1077
static inline long long max(const long long a, const long long b) 
# 1078
{ 
# 1079
return llmax(a, b); 
# 1080
} 
# 1082
static inline unsigned long long max(const unsigned long long a, const unsigned long long b) 
# 1083
{ 
# 1084
return ullmax(a, b); 
# 1085
} 
# 1087
static inline unsigned long long max(const long long a, const unsigned long long b) 
# 1088
{ 
# 1089
return ullmax(static_cast< unsigned long long>(a), b); 
# 1090
} 
# 1092
static inline unsigned long long max(const unsigned long long a, const long long b) 
# 1093
{ 
# 1094
return ullmax(a, static_cast< unsigned long long>(b)); 
# 1095
} 
# 1097
static inline float max(const float a, const float b) 
# 1098
{ 
# 1099
return fmaxf(a, b); 
# 1100
} 
# 1102
static inline double max(const double a, const double b) 
# 1103
{ 
# 1104
return fmax(a, b); 
# 1105
} 
# 1107
static inline double max(const float a, const double b) 
# 1108
{ 
# 1109
return fmax(static_cast< double>(a), b); 
# 1110
} 
# 1112
static inline double max(const double a, const float b) 
# 1113
{ 
# 1114
return fmax(a, static_cast< double>(b)); 
# 1115
} 
# 1126 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/math_functions.hpp"
inline int min(const int a, const int b) 
# 1127
{ 
# 1128
return (a < b) ? a : b; 
# 1129
} 
# 1131
inline unsigned umin(const unsigned a, const unsigned b) 
# 1132
{ 
# 1133
return (a < b) ? a : b; 
# 1134
} 
# 1136
inline long long llmin(const long long a, const long long b) 
# 1137
{ 
# 1138
return (a < b) ? a : b; 
# 1139
} 
# 1141
inline unsigned long long ullmin(const unsigned long long a, const unsigned long long 
# 1142
b) 
# 1143
{ 
# 1144
return (a < b) ? a : b; 
# 1145
} 
# 1147
inline int max(const int a, const int b) 
# 1148
{ 
# 1149
return (a > b) ? a : b; 
# 1150
} 
# 1152
inline unsigned umax(const unsigned a, const unsigned b) 
# 1153
{ 
# 1154
return (a > b) ? a : b; 
# 1155
} 
# 1157
inline long long llmax(const long long a, const long long b) 
# 1158
{ 
# 1159
return (a > b) ? a : b; 
# 1160
} 
# 1162
inline unsigned long long ullmax(const unsigned long long a, const unsigned long long 
# 1163
b) 
# 1164
{ 
# 1165
return (a > b) ? a : b; 
# 1166
} 
# 95 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
extern "C" {
# 3215 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline int __vimax_s32_relu(const int a, const int b); 
# 3227 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline unsigned __vimax_s16x2_relu(const unsigned a, const unsigned b); 
# 3236 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline int __vimin_s32_relu(const int a, const int b); 
# 3248 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline unsigned __vimin_s16x2_relu(const unsigned a, const unsigned b); 
# 3257 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline int __vimax3_s32(const int a, const int b, const int c); 
# 3269 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline unsigned __vimax3_s16x2(const unsigned a, const unsigned b, const unsigned c); 
# 3278 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline unsigned __vimax3_u32(const unsigned a, const unsigned b, const unsigned c); 
# 3290 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline unsigned __vimax3_u16x2(const unsigned a, const unsigned b, const unsigned c); 
# 3299 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline int __vimin3_s32(const int a, const int b, const int c); 
# 3311 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline unsigned __vimin3_s16x2(const unsigned a, const unsigned b, const unsigned c); 
# 3320 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline unsigned __vimin3_u32(const unsigned a, const unsigned b, const unsigned c); 
# 3332 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline unsigned __vimin3_u16x2(const unsigned a, const unsigned b, const unsigned c); 
# 3341 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline int __vimax3_s32_relu(const int a, const int b, const int c); 
# 3353 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline unsigned __vimax3_s16x2_relu(const unsigned a, const unsigned b, const unsigned c); 
# 3362 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline int __vimin3_s32_relu(const int a, const int b, const int c); 
# 3374 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline unsigned __vimin3_s16x2_relu(const unsigned a, const unsigned b, const unsigned c); 
# 3383 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline int __viaddmax_s32(const int a, const int b, const int c); 
# 3395 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline unsigned __viaddmax_s16x2(const unsigned a, const unsigned b, const unsigned c); 
# 3404 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline unsigned __viaddmax_u32(const unsigned a, const unsigned b, const unsigned c); 
# 3416 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline unsigned __viaddmax_u16x2(const unsigned a, const unsigned b, const unsigned c); 
# 3425 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline int __viaddmin_s32(const int a, const int b, const int c); 
# 3437 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline unsigned __viaddmin_s16x2(const unsigned a, const unsigned b, const unsigned c); 
# 3446 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline unsigned __viaddmin_u32(const unsigned a, const unsigned b, const unsigned c); 
# 3458 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline unsigned __viaddmin_u16x2(const unsigned a, const unsigned b, const unsigned c); 
# 3468 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline int __viaddmax_s32_relu(const int a, const int b, const int c); 
# 3480 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline unsigned __viaddmax_s16x2_relu(const unsigned a, const unsigned b, const unsigned c); 
# 3490 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline int __viaddmin_s32_relu(const int a, const int b, const int c); 
# 3502 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline unsigned __viaddmin_s16x2_relu(const unsigned a, const unsigned b, const unsigned c); 
# 3511 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline int __vibmax_s32(const int a, const int b, bool *const pred); 
# 3520 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline unsigned __vibmax_u32(const unsigned a, const unsigned b, bool *const pred); 
# 3529 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline int __vibmin_s32(const int a, const int b, bool *const pred); 
# 3538 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline unsigned __vibmin_u32(const unsigned a, const unsigned b, bool *const pred); 
# 3552 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline unsigned __vibmax_s16x2(const unsigned a, const unsigned b, bool *const pred_hi, bool *const pred_lo); 
# 3566 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline unsigned __vibmax_u16x2(const unsigned a, const unsigned b, bool *const pred_hi, bool *const pred_lo); 
# 3580 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline unsigned __vibmin_s16x2(const unsigned a, const unsigned b, bool *const pred_hi, bool *const pred_lo); 
# 3594 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
static inline unsigned __vibmin_u16x2(const unsigned a, const unsigned b, bool *const pred_hi, bool *const pred_lo); 
# 3601
}
# 108 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.hpp"
static inline int __vimax_s32_relu(const int a, const int b) { 
# 115
int ans = max(a, b); 
# 117
return (ans > 0) ? ans : 0; 
# 119
} 
# 121
static inline unsigned __vimax_s16x2_relu(const unsigned a, const unsigned b) { 
# 122
unsigned res; 
# 130
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 131
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 133
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 134
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 137
short aS_lo = *((short *)(&aU_lo)); 
# 138
short aS_hi = *((short *)(&aU_hi)); 
# 140
short bS_lo = *((short *)(&bU_lo)); 
# 141
short bS_hi = *((short *)(&bU_hi)); 
# 144
short ansS_lo = (short)max(aS_lo, bS_lo); 
# 145
short ansS_hi = (short)max(aS_hi, bS_hi); 
# 148
if (ansS_lo < 0) { ansS_lo = (0); }  
# 149
if (ansS_hi < 0) { ansS_hi = (0); }  
# 152
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
# 153
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
# 156
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
# 159
return res; 
# 160
} 
# 162
static inline int __vimin_s32_relu(const int a, const int b) { 
# 169
int ans = min(a, b); 
# 171
return (ans > 0) ? ans : 0; 
# 173
} 
# 175
static inline unsigned __vimin_s16x2_relu(const unsigned a, const unsigned b) { 
# 176
unsigned res; 
# 184
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 185
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 187
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 188
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 191
short aS_lo = *((short *)(&aU_lo)); 
# 192
short aS_hi = *((short *)(&aU_hi)); 
# 194
short bS_lo = *((short *)(&bU_lo)); 
# 195
short bS_hi = *((short *)(&bU_hi)); 
# 198
short ansS_lo = (short)min(aS_lo, bS_lo); 
# 199
short ansS_hi = (short)min(aS_hi, bS_hi); 
# 202
if (ansS_lo < 0) { ansS_lo = (0); }  
# 203
if (ansS_hi < 0) { ansS_hi = (0); }  
# 206
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
# 207
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
# 210
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
# 213
return res; 
# 214
} 
# 216
static inline int __vimax3_s32(const int a, const int b, const int c) { 
# 226 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.hpp"
return max(max(a, b), c); 
# 228
} 
# 230
static inline unsigned __vimax3_s16x2(const unsigned a, const unsigned b, const unsigned c) { 
# 231
unsigned res; 
# 243 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 244
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 246
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 247
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 249
unsigned short cU_lo = (unsigned short)(c & 65535U); 
# 250
unsigned short cU_hi = (unsigned short)(c >> 16); 
# 253
short aS_lo = *((short *)(&aU_lo)); 
# 254
short aS_hi = *((short *)(&aU_hi)); 
# 256
short bS_lo = *((short *)(&bU_lo)); 
# 257
short bS_hi = *((short *)(&bU_hi)); 
# 259
short cS_lo = *((short *)(&cU_lo)); 
# 260
short cS_hi = *((short *)(&cU_hi)); 
# 263
short ansS_lo = (short)max(max(aS_lo, bS_lo), cS_lo); 
# 264
short ansS_hi = (short)max(max(aS_hi, bS_hi), cS_hi); 
# 267
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
# 268
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
# 271
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
# 273
return res; 
# 274
} 
# 276
static inline unsigned __vimax3_u32(const unsigned a, const unsigned b, const unsigned c) { 
# 286 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.hpp"
return max(max(a, b), c); 
# 288
} 
# 290
static inline unsigned __vimax3_u16x2(const unsigned a, const unsigned b, const unsigned c) { 
# 291
unsigned res; 
# 302 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 303
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 305
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 306
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 308
unsigned short cU_lo = (unsigned short)(c & 65535U); 
# 309
unsigned short cU_hi = (unsigned short)(c >> 16); 
# 312
unsigned short ansU_lo = (unsigned short)max(max(aU_lo, bU_lo), cU_lo); 
# 313
unsigned short ansU_hi = (unsigned short)max(max(aU_hi, bU_hi), cU_hi); 
# 316
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
# 319
return res; 
# 320
} 
# 322
static inline int __vimin3_s32(const int a, const int b, const int c) { 
# 332 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.hpp"
return min(min(a, b), c); 
# 334
} 
# 336
static inline unsigned __vimin3_s16x2(const unsigned a, const unsigned b, const unsigned c) { 
# 337
unsigned res; 
# 348 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 349
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 351
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 352
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 354
unsigned short cU_lo = (unsigned short)(c & 65535U); 
# 355
unsigned short cU_hi = (unsigned short)(c >> 16); 
# 358
short aS_lo = *((short *)(&aU_lo)); 
# 359
short aS_hi = *((short *)(&aU_hi)); 
# 361
short bS_lo = *((short *)(&bU_lo)); 
# 362
short bS_hi = *((short *)(&bU_hi)); 
# 364
short cS_lo = *((short *)(&cU_lo)); 
# 365
short cS_hi = *((short *)(&cU_hi)); 
# 368
short ansS_lo = (short)min(min(aS_lo, bS_lo), cS_lo); 
# 369
short ansS_hi = (short)min(min(aS_hi, bS_hi), cS_hi); 
# 372
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
# 373
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
# 376
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
# 379
return res; 
# 380
} 
# 382
static inline unsigned __vimin3_u32(const unsigned a, const unsigned b, const unsigned c) { 
# 392 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.hpp"
return min(min(a, b), c); 
# 394
} 
# 396
static inline unsigned __vimin3_u16x2(const unsigned a, const unsigned b, const unsigned c) { 
# 397
unsigned res; 
# 408 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 409
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 411
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 412
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 414
unsigned short cU_lo = (unsigned short)(c & 65535U); 
# 415
unsigned short cU_hi = (unsigned short)(c >> 16); 
# 418
unsigned short ansU_lo = (unsigned short)min(min(aU_lo, bU_lo), cU_lo); 
# 419
unsigned short ansU_hi = (unsigned short)min(min(aU_hi, bU_hi), cU_hi); 
# 422
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
# 425
return res; 
# 426
} 
# 428
static inline int __vimax3_s32_relu(const int a, const int b, const int c) { 
# 438 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.hpp"
int ans = max(max(a, b), c); 
# 440
return (ans > 0) ? ans : 0; 
# 442
} 
# 444
static inline unsigned __vimax3_s16x2_relu(const unsigned a, const unsigned b, const unsigned c) { 
# 445
unsigned res; 
# 456 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 457
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 459
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 460
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 462
unsigned short cU_lo = (unsigned short)(c & 65535U); 
# 463
unsigned short cU_hi = (unsigned short)(c >> 16); 
# 466
short aS_lo = *((short *)(&aU_lo)); 
# 467
short aS_hi = *((short *)(&aU_hi)); 
# 469
short bS_lo = *((short *)(&bU_lo)); 
# 470
short bS_hi = *((short *)(&bU_hi)); 
# 472
short cS_lo = *((short *)(&cU_lo)); 
# 473
short cS_hi = *((short *)(&cU_hi)); 
# 476
short ansS_lo = (short)max(max(aS_lo, bS_lo), cS_lo); 
# 477
short ansS_hi = (short)max(max(aS_hi, bS_hi), cS_hi); 
# 480
if (ansS_lo < 0) { ansS_lo = (0); }  
# 481
if (ansS_hi < 0) { ansS_hi = (0); }  
# 484
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
# 485
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
# 488
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
# 491
return res; 
# 492
} 
# 494
static inline int __vimin3_s32_relu(const int a, const int b, const int c) { 
# 504 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.hpp"
int ans = min(min(a, b), c); 
# 506
return (ans > 0) ? ans : 0; 
# 508
} 
# 510
static inline unsigned __vimin3_s16x2_relu(const unsigned a, const unsigned b, const unsigned c) { 
# 511
unsigned res; 
# 522 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 523
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 525
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 526
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 528
unsigned short cU_lo = (unsigned short)(c & 65535U); 
# 529
unsigned short cU_hi = (unsigned short)(c >> 16); 
# 532
short aS_lo = *((short *)(&aU_lo)); 
# 533
short aS_hi = *((short *)(&aU_hi)); 
# 535
short bS_lo = *((short *)(&bU_lo)); 
# 536
short bS_hi = *((short *)(&bU_hi)); 
# 538
short cS_lo = *((short *)(&cU_lo)); 
# 539
short cS_hi = *((short *)(&cU_hi)); 
# 542
short ansS_lo = (short)min(min(aS_lo, bS_lo), cS_lo); 
# 543
short ansS_hi = (short)min(min(aS_hi, bS_hi), cS_hi); 
# 546
if (ansS_lo < 0) { ansS_lo = (0); }  
# 547
if (ansS_hi < 0) { ansS_hi = (0); }  
# 550
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
# 551
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
# 554
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
# 557
return res; 
# 558
} 
# 560
static inline int __viaddmax_s32(const int a, const int b, const int c) { 
# 570 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.hpp"
return max(a + b, c); 
# 572
} 
# 574
static inline unsigned __viaddmax_s16x2(const unsigned a, const unsigned b, const unsigned c) { 
# 575
unsigned res; 
# 586 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 587
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 589
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 590
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 592
unsigned short cU_lo = (unsigned short)(c & 65535U); 
# 593
unsigned short cU_hi = (unsigned short)(c >> 16); 
# 596
short aS_lo = *((short *)(&aU_lo)); 
# 597
short aS_hi = *((short *)(&aU_hi)); 
# 599
short bS_lo = *((short *)(&bU_lo)); 
# 600
short bS_hi = *((short *)(&bU_hi)); 
# 602
short cS_lo = *((short *)(&cU_lo)); 
# 603
short cS_hi = *((short *)(&cU_hi)); 
# 606
short ansS_lo = (short)max((short)(aS_lo + bS_lo), cS_lo); 
# 607
short ansS_hi = (short)max((short)(aS_hi + bS_hi), cS_hi); 
# 610
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
# 611
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
# 614
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
# 617
return res; 
# 618
} 
# 620
static inline unsigned __viaddmax_u32(const unsigned a, const unsigned b, const unsigned c) { 
# 630 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.hpp"
return max(a + b, c); 
# 632
} 
# 634
static inline unsigned __viaddmax_u16x2(const unsigned a, const unsigned b, const unsigned c) { 
# 635
unsigned res; 
# 646 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 647
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 649
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 650
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 652
unsigned short cU_lo = (unsigned short)(c & 65535U); 
# 653
unsigned short cU_hi = (unsigned short)(c >> 16); 
# 656
unsigned short ansU_lo = (unsigned short)max((unsigned short)(aU_lo + bU_lo), cU_lo); 
# 657
unsigned short ansU_hi = (unsigned short)max((unsigned short)(aU_hi + bU_hi), cU_hi); 
# 660
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
# 663
return res; 
# 664
} 
# 666
static inline int __viaddmin_s32(const int a, const int b, const int c) { 
# 676 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.hpp"
return min(a + b, c); 
# 678
} 
# 680
static inline unsigned __viaddmin_s16x2(const unsigned a, const unsigned b, const unsigned c) { 
# 681
unsigned res; 
# 692 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 693
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 695
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 696
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 698
unsigned short cU_lo = (unsigned short)(c & 65535U); 
# 699
unsigned short cU_hi = (unsigned short)(c >> 16); 
# 702
short aS_lo = *((short *)(&aU_lo)); 
# 703
short aS_hi = *((short *)(&aU_hi)); 
# 705
short bS_lo = *((short *)(&bU_lo)); 
# 706
short bS_hi = *((short *)(&bU_hi)); 
# 708
short cS_lo = *((short *)(&cU_lo)); 
# 709
short cS_hi = *((short *)(&cU_hi)); 
# 712
short ansS_lo = (short)min((short)(aS_lo + bS_lo), cS_lo); 
# 713
short ansS_hi = (short)min((short)(aS_hi + bS_hi), cS_hi); 
# 716
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
# 717
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
# 720
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
# 723
return res; 
# 724
} 
# 726
static inline unsigned __viaddmin_u32(const unsigned a, const unsigned b, const unsigned c) { 
# 736 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.hpp"
return min(a + b, c); 
# 738
} 
# 740
static inline unsigned __viaddmin_u16x2(const unsigned a, const unsigned b, const unsigned c) { 
# 741
unsigned res; 
# 752 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 753
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 755
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 756
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 758
unsigned short cU_lo = (unsigned short)(c & 65535U); 
# 759
unsigned short cU_hi = (unsigned short)(c >> 16); 
# 762
unsigned short ansU_lo = (unsigned short)min((unsigned short)(aU_lo + bU_lo), cU_lo); 
# 763
unsigned short ansU_hi = (unsigned short)min((unsigned short)(aU_hi + bU_hi), cU_hi); 
# 766
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
# 769
return res; 
# 770
} 
# 772
static inline int __viaddmax_s32_relu(const int a, const int b, const int c) { 
# 782 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.hpp"
int ans = max(a + b, c); 
# 784
return (ans > 0) ? ans : 0; 
# 786
} 
# 788
static inline unsigned __viaddmax_s16x2_relu(const unsigned a, const unsigned b, const unsigned c) { 
# 789
unsigned res; 
# 800 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 801
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 803
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 804
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 806
unsigned short cU_lo = (unsigned short)(c & 65535U); 
# 807
unsigned short cU_hi = (unsigned short)(c >> 16); 
# 810
short aS_lo = *((short *)(&aU_lo)); 
# 811
short aS_hi = *((short *)(&aU_hi)); 
# 813
short bS_lo = *((short *)(&bU_lo)); 
# 814
short bS_hi = *((short *)(&bU_hi)); 
# 816
short cS_lo = *((short *)(&cU_lo)); 
# 817
short cS_hi = *((short *)(&cU_hi)); 
# 820
short ansS_lo = (short)max((short)(aS_lo + bS_lo), cS_lo); 
# 821
short ansS_hi = (short)max((short)(aS_hi + bS_hi), cS_hi); 
# 823
if (ansS_lo < 0) { ansS_lo = (0); }  
# 824
if (ansS_hi < 0) { ansS_hi = (0); }  
# 827
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
# 828
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
# 831
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
# 834
return res; 
# 835
} 
# 837
static inline int __viaddmin_s32_relu(const int a, const int b, const int c) { 
# 847 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.hpp"
int ans = min(a + b, c); 
# 849
return (ans > 0) ? ans : 0; 
# 851
} 
# 853
static inline unsigned __viaddmin_s16x2_relu(const unsigned a, const unsigned b, const unsigned c) { 
# 854
unsigned res; 
# 865 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 866
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 868
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 869
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 871
unsigned short cU_lo = (unsigned short)(c & 65535U); 
# 872
unsigned short cU_hi = (unsigned short)(c >> 16); 
# 875
short aS_lo = *((short *)(&aU_lo)); 
# 876
short aS_hi = *((short *)(&aU_hi)); 
# 878
short bS_lo = *((short *)(&bU_lo)); 
# 879
short bS_hi = *((short *)(&bU_hi)); 
# 881
short cS_lo = *((short *)(&cU_lo)); 
# 882
short cS_hi = *((short *)(&cU_hi)); 
# 885
short ansS_lo = (short)min((short)(aS_lo + bS_lo), cS_lo); 
# 886
short ansS_hi = (short)min((short)(aS_hi + bS_hi), cS_hi); 
# 888
if (ansS_lo < 0) { ansS_lo = (0); }  
# 889
if (ansS_hi < 0) { ansS_hi = (0); }  
# 892
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
# 893
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
# 896
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
# 899
return res; 
# 900
} 
# 904
static inline int __vibmax_s32(const int a, const int b, bool *const pred) { 
# 918 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.hpp"
int ans = max(a, b); 
# 920
(*pred) = (a >= b); 
# 921
return ans; 
# 923
} 
# 925
static inline unsigned __vibmax_u32(const unsigned a, const unsigned b, bool *const pred) { 
# 939 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.hpp"
unsigned ans = max(a, b); 
# 941
(*pred) = (a >= b); 
# 942
return ans; 
# 944
} 
# 947
static inline int __vibmin_s32(const int a, const int b, bool *const pred) { 
# 961 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.hpp"
int ans = min(a, b); 
# 963
(*pred) = (a <= b); 
# 964
return ans; 
# 966
} 
# 969
static inline unsigned __vibmin_u32(const unsigned a, const unsigned b, bool *const pred) { 
# 983 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.hpp"
unsigned ans = min(a, b); 
# 985
(*pred) = (a <= b); 
# 986
return ans; 
# 988
} 
# 990
static inline unsigned __vibmax_s16x2(const unsigned a, const unsigned b, bool *const pred_hi, bool *const pred_lo) { 
# 1012 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 1013
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 1015
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 1016
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 1019
short aS_lo = *((short *)(&aU_lo)); 
# 1020
short aS_hi = *((short *)(&aU_hi)); 
# 1022
short bS_lo = *((short *)(&bU_lo)); 
# 1023
short bS_hi = *((short *)(&bU_hi)); 
# 1026
short ansS_lo = (short)max(aS_lo, bS_lo); 
# 1027
short ansS_hi = (short)max(aS_hi, bS_hi); 
# 1029
(*pred_hi) = (aS_hi >= bS_hi); 
# 1030
(*pred_lo) = (aS_lo >= bS_lo); 
# 1033
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
# 1034
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
# 1037
unsigned ans = ((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16); 
# 1039
return ans; 
# 1041
} 
# 1043
static inline unsigned __vibmax_u16x2(const unsigned a, const unsigned b, bool *const pred_hi, bool *const pred_lo) { 
# 1065 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 1066
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 1068
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 1069
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 1072
unsigned short ansU_lo = (unsigned short)max(aU_lo, bU_lo); 
# 1073
unsigned short ansU_hi = (unsigned short)max(aU_hi, bU_hi); 
# 1075
(*pred_hi) = (aU_hi >= bU_hi); 
# 1076
(*pred_lo) = (aU_lo >= bU_lo); 
# 1079
unsigned ans = ((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16); 
# 1081
return ans; 
# 1083
} 
# 1085
static inline unsigned __vibmin_s16x2(const unsigned a, const unsigned b, bool *const pred_hi, bool *const pred_lo) { 
# 1107 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 1108
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 1110
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 1111
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 1114
short aS_lo = *((short *)(&aU_lo)); 
# 1115
short aS_hi = *((short *)(&aU_hi)); 
# 1117
short bS_lo = *((short *)(&bU_lo)); 
# 1118
short bS_hi = *((short *)(&bU_hi)); 
# 1121
short ansS_lo = (short)min(aS_lo, bS_lo); 
# 1122
short ansS_hi = (short)min(aS_hi, bS_hi); 
# 1124
(*pred_hi) = (aS_hi <= bS_hi); 
# 1125
(*pred_lo) = (aS_lo <= bS_lo); 
# 1128
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
# 1129
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
# 1132
unsigned ans = ((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16); 
# 1134
return ans; 
# 1136
} 
# 1138
static inline unsigned __vibmin_u16x2(const unsigned a, const unsigned b, bool *const pred_hi, bool *const pred_lo) { 
# 1160 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 1161
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 1163
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 1164
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 1167
unsigned short ansU_lo = (unsigned short)min(aU_lo, bU_lo); 
# 1168
unsigned short ansU_hi = (unsigned short)min(aU_hi, bU_hi); 
# 1170
(*pred_hi) = (aU_hi <= bU_hi); 
# 1171
(*pred_lo) = (aU_lo <= bU_lo); 
# 1174
unsigned ans = ((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16); 
# 1176
return ans; 
# 1178
} 
# 89 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicAdd(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 89
{ } 
#endif
# 91 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAdd(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 91
{ } 
#endif
# 93 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicSub(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 93
{ } 
#endif
# 95 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicSub(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 95
{ } 
#endif
# 97 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicExch(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 97
{ } 
#endif
# 99 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicExch(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 99
{ } 
#endif
# 101 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/device_atomic_functions.h"
__attribute__((unused)) static inline float atomicExch(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 101
{ } 
#endif
# 103 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicMin(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 103
{ } 
#endif
# 105 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMin(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 105
{ } 
#endif
# 107 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicMax(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 107
{ } 
#endif
# 109 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMax(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 109
{ } 
#endif
# 111 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicInc(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 111
{ } 
#endif
# 113 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicDec(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 113
{ } 
#endif
# 115 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicAnd(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 115
{ } 
#endif
# 117 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAnd(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 117
{ } 
#endif
# 119 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicOr(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 119
{ } 
#endif
# 121 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicOr(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 121
{ } 
#endif
# 123 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicXor(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 123
{ } 
#endif
# 125 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicXor(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 125
{ } 
#endif
# 127 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicCAS(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 127
{ } 
#endif
# 129 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicCAS(unsigned *address, unsigned compare, unsigned val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 129
{ } 
#endif
# 156 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/device_atomic_functions.h"
extern "C" {
# 160
}
# 169 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAdd(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 169
{ } 
#endif
# 171 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicExch(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 171
{ } 
#endif
# 173 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicCAS(unsigned long long *address, unsigned long long compare, unsigned long long val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 173
{ } 
#endif
# 175 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/device_atomic_functions.h"
__attribute((deprecated("__any() is deprecated in favor of __any_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to suppr" "ess this warning)."))) __attribute__((unused)) static inline bool any(bool cond) {int volatile ___ = 1;(void)cond;::exit(___);}
#if 0
# 175
{ } 
#endif
# 177 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/device_atomic_functions.h"
__attribute((deprecated("__all() is deprecated in favor of __all_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to suppr" "ess this warning)."))) __attribute__((unused)) static inline bool all(bool cond) {int volatile ___ = 1;(void)cond;::exit(___);}
#if 0
# 177
{ } 
#endif
# 90 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_double_functions.h"
extern "C" {
# 1142 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_double_functions.h"
}
# 1150
__attribute__((unused)) static inline double fma(double a, double b, double c, cudaRoundMode mode); 
# 1154
__attribute__((unused)) static inline double dmul(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
# 1156
__attribute__((unused)) static inline double dadd(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
# 1158
__attribute__((unused)) static inline double dsub(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
# 1160
__attribute__((unused)) static inline int double2int(double a, cudaRoundMode mode = cudaRoundZero); 
# 1162
__attribute__((unused)) static inline unsigned double2uint(double a, cudaRoundMode mode = cudaRoundZero); 
# 1164
__attribute__((unused)) static inline long long double2ll(double a, cudaRoundMode mode = cudaRoundZero); 
# 1166
__attribute__((unused)) static inline unsigned long long double2ull(double a, cudaRoundMode mode = cudaRoundZero); 
# 1168
__attribute__((unused)) static inline double ll2double(long long a, cudaRoundMode mode = cudaRoundNearest); 
# 1170
__attribute__((unused)) static inline double ull2double(unsigned long long a, cudaRoundMode mode = cudaRoundNearest); 
# 1172
__attribute__((unused)) static inline double int2double(int a, cudaRoundMode mode = cudaRoundNearest); 
# 1174
__attribute__((unused)) static inline double uint2double(unsigned a, cudaRoundMode mode = cudaRoundNearest); 
# 1176
__attribute__((unused)) static inline double float2double(float a, cudaRoundMode mode = cudaRoundNearest); 
# 93 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double fma(double a, double b, double c, cudaRoundMode mode) 
# 94
{int volatile ___ = 1;(void)a;(void)b;(void)c;(void)mode;
# 99
::exit(___);}
#if 0
# 94
{ 
# 95
return (mode == (cudaRoundZero)) ? __fma_rz(a, b, c) : ((mode == (cudaRoundPosInf)) ? __fma_ru(a, b, c) : ((mode == (cudaRoundMinInf)) ? __fma_rd(a, b, c) : __fma_rn(a, b, c))); 
# 99
} 
#endif
# 101 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double dmul(double a, double b, cudaRoundMode mode) 
# 102
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 107
::exit(___);}
#if 0
# 102
{ 
# 103
return (mode == (cudaRoundZero)) ? __dmul_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dmul_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dmul_rd(a, b) : __dmul_rn(a, b))); 
# 107
} 
#endif
# 109 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double dadd(double a, double b, cudaRoundMode mode) 
# 110
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 115
::exit(___);}
#if 0
# 110
{ 
# 111
return (mode == (cudaRoundZero)) ? __dadd_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dadd_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dadd_rd(a, b) : __dadd_rn(a, b))); 
# 115
} 
#endif
# 117 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double dsub(double a, double b, cudaRoundMode mode) 
# 118
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 123
::exit(___);}
#if 0
# 118
{ 
# 119
return (mode == (cudaRoundZero)) ? __dsub_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dsub_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dsub_rd(a, b) : __dsub_rn(a, b))); 
# 123
} 
#endif
# 125 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline int double2int(double a, cudaRoundMode mode) 
# 126
{int volatile ___ = 1;(void)a;(void)mode;
# 131
::exit(___);}
#if 0
# 126
{ 
# 127
return (mode == (cudaRoundNearest)) ? __double2int_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2int_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2int_rd(a) : __double2int_rz(a))); 
# 131
} 
#endif
# 133 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline unsigned double2uint(double a, cudaRoundMode mode) 
# 134
{int volatile ___ = 1;(void)a;(void)mode;
# 139
::exit(___);}
#if 0
# 134
{ 
# 135
return (mode == (cudaRoundNearest)) ? __double2uint_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2uint_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2uint_rd(a) : __double2uint_rz(a))); 
# 139
} 
#endif
# 141 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline long long double2ll(double a, cudaRoundMode mode) 
# 142
{int volatile ___ = 1;(void)a;(void)mode;
# 147
::exit(___);}
#if 0
# 142
{ 
# 143
return (mode == (cudaRoundNearest)) ? __double2ll_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ll_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ll_rd(a) : __double2ll_rz(a))); 
# 147
} 
#endif
# 149 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline unsigned long long double2ull(double a, cudaRoundMode mode) 
# 150
{int volatile ___ = 1;(void)a;(void)mode;
# 155
::exit(___);}
#if 0
# 150
{ 
# 151
return (mode == (cudaRoundNearest)) ? __double2ull_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ull_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ull_rd(a) : __double2ull_rz(a))); 
# 155
} 
#endif
# 157 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double ll2double(long long a, cudaRoundMode mode) 
# 158
{int volatile ___ = 1;(void)a;(void)mode;
# 163
::exit(___);}
#if 0
# 158
{ 
# 159
return (mode == (cudaRoundZero)) ? __ll2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ll2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ll2double_rd(a) : __ll2double_rn(a))); 
# 163
} 
#endif
# 165 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double ull2double(unsigned long long a, cudaRoundMode mode) 
# 166
{int volatile ___ = 1;(void)a;(void)mode;
# 171
::exit(___);}
#if 0
# 166
{ 
# 167
return (mode == (cudaRoundZero)) ? __ull2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ull2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ull2double_rd(a) : __ull2double_rn(a))); 
# 171
} 
#endif
# 173 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double int2double(int a, cudaRoundMode mode) 
# 174
{int volatile ___ = 1;(void)a;(void)mode;
# 176
::exit(___);}
#if 0
# 174
{ 
# 175
return (double)a; 
# 176
} 
#endif
# 178 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double uint2double(unsigned a, cudaRoundMode mode) 
# 179
{int volatile ___ = 1;(void)a;(void)mode;
# 181
::exit(___);}
#if 0
# 179
{ 
# 180
return (double)a; 
# 181
} 
#endif
# 183 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double float2double(float a, cudaRoundMode mode) 
# 184
{int volatile ___ = 1;(void)a;(void)mode;
# 186
::exit(___);}
#if 0
# 184
{ 
# 185
return (double)a; 
# 186
} 
#endif
# 99 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_20_atomic_functions.h"
__attribute__((unused)) static inline float atomicAdd(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 99
{ } 
#endif
# 92 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMin(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 92
{ } 
#endif
# 94 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMax(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 94
{ } 
#endif
# 96 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline long long atomicAnd(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 96
{ } 
#endif
# 98 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline long long atomicOr(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 98
{ } 
#endif
# 100 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline long long atomicXor(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 100
{ } 
#endif
# 102 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMin(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 102
{ } 
#endif
# 104 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMax(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 104
{ } 
#endif
# 106 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAnd(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 106
{ } 
#endif
# 108 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicOr(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 108
{ } 
#endif
# 110 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicXor(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 110
{ } 
#endif
# 93 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline double atomicAdd(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 93
{ } 
#endif
# 96 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicAdd_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 96
{ } 
#endif
# 99 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicAdd_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 99
{ } 
#endif
# 102 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAdd_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 102
{ } 
#endif
# 105 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAdd_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 105
{ } 
#endif
# 108 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAdd_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 108
{ } 
#endif
# 111 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAdd_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 111
{ } 
#endif
# 114 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline float atomicAdd_block(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 114
{ } 
#endif
# 117 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline float atomicAdd_system(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 117
{ } 
#endif
# 120 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline double atomicAdd_block(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 120
{ } 
#endif
# 123 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline double atomicAdd_system(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 123
{ } 
#endif
# 126 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicSub_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 126
{ } 
#endif
# 129 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicSub_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 129
{ } 
#endif
# 132 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicSub_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 132
{ } 
#endif
# 135 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicSub_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 135
{ } 
#endif
# 138 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicExch_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 138
{ } 
#endif
# 141 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicExch_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 141
{ } 
#endif
# 144 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicExch_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 144
{ } 
#endif
# 147 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicExch_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 147
{ } 
#endif
# 150 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicExch_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 150
{ } 
#endif
# 153 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicExch_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 153
{ } 
#endif
# 156 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline float atomicExch_block(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 156
{ } 
#endif
# 159 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline float atomicExch_system(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 159
{ } 
#endif
# 162 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicMin_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 162
{ } 
#endif
# 165 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicMin_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 165
{ } 
#endif
# 168 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMin_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 168
{ } 
#endif
# 171 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMin_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 171
{ } 
#endif
# 174 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMin_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 174
{ } 
#endif
# 177 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMin_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 177
{ } 
#endif
# 180 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMin_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 180
{ } 
#endif
# 183 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMin_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 183
{ } 
#endif
# 186 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicMax_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 186
{ } 
#endif
# 189 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicMax_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 189
{ } 
#endif
# 192 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMax_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 192
{ } 
#endif
# 195 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMax_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 195
{ } 
#endif
# 198 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMax_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 198
{ } 
#endif
# 201 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMax_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 201
{ } 
#endif
# 204 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMax_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 204
{ } 
#endif
# 207 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMax_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 207
{ } 
#endif
# 210 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicInc_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 210
{ } 
#endif
# 213 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicInc_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 213
{ } 
#endif
# 216 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicDec_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 216
{ } 
#endif
# 219 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicDec_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 219
{ } 
#endif
# 222 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicCAS_block(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 222
{ } 
#endif
# 225 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicCAS_system(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 225
{ } 
#endif
# 228 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicCAS_block(unsigned *address, unsigned compare, unsigned 
# 229
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 229
{ } 
#endif
# 232 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicCAS_system(unsigned *address, unsigned compare, unsigned 
# 233
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 233
{ } 
#endif
# 236 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicCAS_block(unsigned long long *address, unsigned long long 
# 237
compare, unsigned long long 
# 238
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 238
{ } 
#endif
# 241 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicCAS_system(unsigned long long *address, unsigned long long 
# 242
compare, unsigned long long 
# 243
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 243
{ } 
#endif
# 246 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicAnd_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 246
{ } 
#endif
# 249 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicAnd_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 249
{ } 
#endif
# 252 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicAnd_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 252
{ } 
#endif
# 255 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicAnd_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 255
{ } 
#endif
# 258 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAnd_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 258
{ } 
#endif
# 261 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAnd_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 261
{ } 
#endif
# 264 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAnd_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 264
{ } 
#endif
# 267 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAnd_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 267
{ } 
#endif
# 270 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicOr_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 270
{ } 
#endif
# 273 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicOr_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 273
{ } 
#endif
# 276 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicOr_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 276
{ } 
#endif
# 279 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicOr_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 279
{ } 
#endif
# 282 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicOr_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 282
{ } 
#endif
# 285 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicOr_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 285
{ } 
#endif
# 288 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicOr_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 288
{ } 
#endif
# 291 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicOr_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 291
{ } 
#endif
# 294 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicXor_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 294
{ } 
#endif
# 297 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicXor_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 297
{ } 
#endif
# 300 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicXor_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 300
{ } 
#endif
# 303 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicXor_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 303
{ } 
#endif
# 306 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicXor_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 306
{ } 
#endif
# 309 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicXor_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 309
{ } 
#endif
# 312 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicXor_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 312
{ } 
#endif
# 315 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicXor_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 315
{ } 
#endif
# 100 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_20_intrinsics.h"
extern "C" {
# 1513 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_20_intrinsics.h"
}
# 1525 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_20_intrinsics.h"
__attribute((deprecated("__ballot() is deprecated in favor of __ballot_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to" " suppress this warning)."))) __attribute__((unused)) static inline unsigned ballot(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1525
{ } 
#endif
# 1527 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline int syncthreads_count(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1527
{ } 
#endif
# 1529 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_and(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1529
{ } 
#endif
# 1531 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_or(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1531
{ } 
#endif
# 1536 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline unsigned __isGlobal(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1536
{ } 
#endif
# 1537 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline unsigned __isShared(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1537
{ } 
#endif
# 1538 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline unsigned __isConstant(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1538
{ } 
#endif
# 1539 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline unsigned __isLocal(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1539
{ } 
#endif
# 1541 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline unsigned __isGridConstant(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1541
{ } 
#endif
# 1543 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline size_t __cvta_generic_to_global(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1543
{ } 
#endif
# 1544 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline size_t __cvta_generic_to_shared(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1544
{ } 
#endif
# 1545 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline size_t __cvta_generic_to_constant(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1545
{ } 
#endif
# 1546 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline size_t __cvta_generic_to_local(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1546
{ } 
#endif
# 1548 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline size_t __cvta_generic_to_grid_constant(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1548
{ } 
#endif
# 1551 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline void *__cvta_global_to_generic(size_t rawbits) {int volatile ___ = 1;(void)rawbits;::exit(___);}
#if 0
# 1551
{ } 
#endif
# 1552 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline void *__cvta_shared_to_generic(size_t rawbits) {int volatile ___ = 1;(void)rawbits;::exit(___);}
#if 0
# 1552
{ } 
#endif
# 1553 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline void *__cvta_constant_to_generic(size_t rawbits) {int volatile ___ = 1;(void)rawbits;::exit(___);}
#if 0
# 1553
{ } 
#endif
# 1554 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline void *__cvta_local_to_generic(size_t rawbits) {int volatile ___ = 1;(void)rawbits;::exit(___);}
#if 0
# 1554
{ } 
#endif
# 1556 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline void *__cvta_grid_constant_to_generic(size_t rawbits) {int volatile ___ = 1;(void)rawbits;::exit(___);}
#if 0
# 1556
{ } 
#endif
# 123 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __fns(unsigned mask, unsigned base, int offset) {int volatile ___ = 1;(void)mask;(void)base;(void)offset;::exit(___);}
#if 0
# 123
{ } 
#endif
# 124 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline void __barrier_sync(unsigned id) {int volatile ___ = 1;(void)id;::exit(___);}
#if 0
# 124
{ } 
#endif
# 125 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline void __barrier_sync_count(unsigned id, unsigned cnt) {int volatile ___ = 1;(void)id;(void)cnt;::exit(___);}
#if 0
# 125
{ } 
#endif
# 126 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline void __syncwarp(unsigned mask = 4294967295U) {int volatile ___ = 1;(void)mask;::exit(___);}
#if 0
# 126
{ } 
#endif
# 127 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __all_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
# 127
{ } 
#endif
# 128 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __any_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
# 128
{ } 
#endif
# 129 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __uni_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
# 129
{ } 
#endif
# 130 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __ballot_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
# 130
{ } 
#endif
# 131 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __activemask() {int volatile ___ = 1;::exit(___);}
#if 0
# 131
{ } 
#endif
# 140 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline int __shfl(int var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 140
{ } 
#endif
# 141 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline unsigned __shfl(unsigned var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 141
{ } 
#endif
# 142 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline int __shfl_up(int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 142
{ } 
#endif
# 143 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline unsigned __shfl_up(unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 143
{ } 
#endif
# 144 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline int __shfl_down(int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 144
{ } 
#endif
# 145 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline unsigned __shfl_down(unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 145
{ } 
#endif
# 146 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline int __shfl_xor(int var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 146
{ } 
#endif
# 147 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline unsigned __shfl_xor(unsigned var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 147
{ } 
#endif
# 148 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline float __shfl(float var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 148
{ } 
#endif
# 149 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline float __shfl_up(float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 149
{ } 
#endif
# 150 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline float __shfl_down(float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 150
{ } 
#endif
# 151 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline float __shfl_xor(float var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 151
{ } 
#endif
# 154 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __shfl_sync(unsigned mask, int var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 154
{ } 
#endif
# 155 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __shfl_sync(unsigned mask, unsigned var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 155
{ } 
#endif
# 156 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __shfl_up_sync(unsigned mask, int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 156
{ } 
#endif
# 157 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __shfl_up_sync(unsigned mask, unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 157
{ } 
#endif
# 158 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __shfl_down_sync(unsigned mask, int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 158
{ } 
#endif
# 159 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __shfl_down_sync(unsigned mask, unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 159
{ } 
#endif
# 160 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __shfl_xor_sync(unsigned mask, int var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 160
{ } 
#endif
# 161 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __shfl_xor_sync(unsigned mask, unsigned var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 161
{ } 
#endif
# 162 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline float __shfl_sync(unsigned mask, float var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 162
{ } 
#endif
# 163 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline float __shfl_up_sync(unsigned mask, float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 163
{ } 
#endif
# 164 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline float __shfl_down_sync(unsigned mask, float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 164
{ } 
#endif
# 165 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline float __shfl_xor_sync(unsigned mask, float var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 165
{ } 
#endif
# 169 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline unsigned long long __shfl(unsigned long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 169
{ } 
#endif
# 170 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline long long __shfl(long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 170
{ } 
#endif
# 171 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline long long __shfl_up(long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 171
{ } 
#endif
# 172 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline unsigned long long __shfl_up(unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 172
{ } 
#endif
# 173 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline long long __shfl_down(long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 173
{ } 
#endif
# 174 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline unsigned long long __shfl_down(unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 174
{ } 
#endif
# 175 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline long long __shfl_xor(long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 175
{ } 
#endif
# 176 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline unsigned long long __shfl_xor(unsigned long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 176
{ } 
#endif
# 177 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline double __shfl(double var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 177
{ } 
#endif
# 178 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline double __shfl_up(double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 178
{ } 
#endif
# 179 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline double __shfl_down(double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 179
{ } 
#endif
# 180 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline double __shfl_xor(double var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 180
{ } 
#endif
# 183 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long long __shfl_sync(unsigned mask, long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 183
{ } 
#endif
# 184 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __shfl_sync(unsigned mask, unsigned long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 184
{ } 
#endif
# 185 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long long __shfl_up_sync(unsigned mask, long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 185
{ } 
#endif
# 186 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __shfl_up_sync(unsigned mask, unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 186
{ } 
#endif
# 187 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long long __shfl_down_sync(unsigned mask, long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 187
{ } 
#endif
# 188 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __shfl_down_sync(unsigned mask, unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 188
{ } 
#endif
# 189 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long long __shfl_xor_sync(unsigned mask, long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 189
{ } 
#endif
# 190 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __shfl_xor_sync(unsigned mask, unsigned long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 190
{ } 
#endif
# 191 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline double __shfl_sync(unsigned mask, double var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 191
{ } 
#endif
# 192 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline double __shfl_up_sync(unsigned mask, double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 192
{ } 
#endif
# 193 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline double __shfl_down_sync(unsigned mask, double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 193
{ } 
#endif
# 194 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline double __shfl_xor_sync(unsigned mask, double var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 194
{ } 
#endif
# 198 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline long __shfl(long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 198
{ } 
#endif
# 199 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline unsigned long __shfl(unsigned long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 199
{ } 
#endif
# 200 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline long __shfl_up(long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 200
{ } 
#endif
# 201 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline unsigned long __shfl_up(unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 201
{ } 
#endif
# 202 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline long __shfl_down(long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 202
{ } 
#endif
# 203 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline unsigned long __shfl_down(unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 203
{ } 
#endif
# 204 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline long __shfl_xor(long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 204
{ } 
#endif
# 205 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline unsigned long __shfl_xor(unsigned long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 205
{ } 
#endif
# 208 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long __shfl_sync(unsigned mask, long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 208
{ } 
#endif
# 209 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long __shfl_sync(unsigned mask, unsigned long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 209
{ } 
#endif
# 210 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long __shfl_up_sync(unsigned mask, long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 210
{ } 
#endif
# 211 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long __shfl_up_sync(unsigned mask, unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 211
{ } 
#endif
# 212 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long __shfl_down_sync(unsigned mask, long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 212
{ } 
#endif
# 213 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long __shfl_down_sync(unsigned mask, unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 213
{ } 
#endif
# 214 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long __shfl_xor_sync(unsigned mask, long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 214
{ } 
#endif
# 215 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long __shfl_xor_sync(unsigned mask, unsigned long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 215
{ } 
#endif
# 91 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long __ldg(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 91
{ } 
#endif
# 92 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long __ldg(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 92
{ } 
#endif
# 94 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char __ldg(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 94
{ } 
#endif
# 95 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline signed char __ldg(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 95
{ } 
#endif
# 96 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short __ldg(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 96
{ } 
#endif
# 97 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int __ldg(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 97
{ } 
#endif
# 98 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long long __ldg(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 98
{ } 
#endif
# 99 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char2 __ldg(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 99
{ } 
#endif
# 100 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char4 __ldg(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 100
{ } 
#endif
# 101 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short2 __ldg(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 101
{ } 
#endif
# 102 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short4 __ldg(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 102
{ } 
#endif
# 103 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int2 __ldg(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 103
{ } 
#endif
# 104 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int4 __ldg(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 104
{ } 
#endif
# 105 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline longlong2 __ldg(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 105
{ } 
#endif
# 107 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned char __ldg(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 107
{ } 
#endif
# 108 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned short __ldg(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 108
{ } 
#endif
# 109 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __ldg(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 109
{ } 
#endif
# 110 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __ldg(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 110
{ } 
#endif
# 111 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar2 __ldg(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 111
{ } 
#endif
# 112 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar4 __ldg(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 112
{ } 
#endif
# 113 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort2 __ldg(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 113
{ } 
#endif
# 114 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort4 __ldg(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 114
{ } 
#endif
# 115 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint2 __ldg(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 115
{ } 
#endif
# 116 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint4 __ldg(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 116
{ } 
#endif
# 117 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ulonglong2 __ldg(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 117
{ } 
#endif
# 119 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float __ldg(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 119
{ } 
#endif
# 120 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double __ldg(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 120
{ } 
#endif
# 121 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float2 __ldg(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 121
{ } 
#endif
# 122 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float4 __ldg(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 122
{ } 
#endif
# 123 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double2 __ldg(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 123
{ } 
#endif
# 128 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long __ldcg(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 128
{ } 
#endif
# 129 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long __ldcg(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 129
{ } 
#endif
# 131 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char __ldcg(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 131
{ } 
#endif
# 132 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline signed char __ldcg(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 132
{ } 
#endif
# 133 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short __ldcg(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 133
{ } 
#endif
# 134 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int __ldcg(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 134
{ } 
#endif
# 135 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long long __ldcg(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 135
{ } 
#endif
# 136 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char2 __ldcg(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 136
{ } 
#endif
# 137 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char4 __ldcg(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 137
{ } 
#endif
# 138 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short2 __ldcg(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 138
{ } 
#endif
# 139 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short4 __ldcg(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 139
{ } 
#endif
# 140 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int2 __ldcg(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 140
{ } 
#endif
# 141 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int4 __ldcg(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 141
{ } 
#endif
# 142 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline longlong2 __ldcg(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 142
{ } 
#endif
# 144 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned char __ldcg(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 144
{ } 
#endif
# 145 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned short __ldcg(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 145
{ } 
#endif
# 146 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __ldcg(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 146
{ } 
#endif
# 147 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __ldcg(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 147
{ } 
#endif
# 148 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar2 __ldcg(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 148
{ } 
#endif
# 149 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar4 __ldcg(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 149
{ } 
#endif
# 150 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort2 __ldcg(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 150
{ } 
#endif
# 151 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort4 __ldcg(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 151
{ } 
#endif
# 152 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint2 __ldcg(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 152
{ } 
#endif
# 153 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint4 __ldcg(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 153
{ } 
#endif
# 154 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ulonglong2 __ldcg(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 154
{ } 
#endif
# 156 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float __ldcg(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 156
{ } 
#endif
# 157 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double __ldcg(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 157
{ } 
#endif
# 158 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float2 __ldcg(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 158
{ } 
#endif
# 159 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float4 __ldcg(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 159
{ } 
#endif
# 160 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double2 __ldcg(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 160
{ } 
#endif
# 164 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long __ldca(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 164
{ } 
#endif
# 165 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long __ldca(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 165
{ } 
#endif
# 167 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char __ldca(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 167
{ } 
#endif
# 168 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline signed char __ldca(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 168
{ } 
#endif
# 169 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short __ldca(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 169
{ } 
#endif
# 170 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int __ldca(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 170
{ } 
#endif
# 171 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long long __ldca(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 171
{ } 
#endif
# 172 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char2 __ldca(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 172
{ } 
#endif
# 173 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char4 __ldca(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 173
{ } 
#endif
# 174 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short2 __ldca(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 174
{ } 
#endif
# 175 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short4 __ldca(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 175
{ } 
#endif
# 176 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int2 __ldca(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 176
{ } 
#endif
# 177 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int4 __ldca(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 177
{ } 
#endif
# 178 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline longlong2 __ldca(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 178
{ } 
#endif
# 180 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned char __ldca(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 180
{ } 
#endif
# 181 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned short __ldca(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 181
{ } 
#endif
# 182 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __ldca(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 182
{ } 
#endif
# 183 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __ldca(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 183
{ } 
#endif
# 184 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar2 __ldca(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 184
{ } 
#endif
# 185 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar4 __ldca(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 185
{ } 
#endif
# 186 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort2 __ldca(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 186
{ } 
#endif
# 187 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort4 __ldca(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 187
{ } 
#endif
# 188 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint2 __ldca(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 188
{ } 
#endif
# 189 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint4 __ldca(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 189
{ } 
#endif
# 190 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ulonglong2 __ldca(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 190
{ } 
#endif
# 192 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float __ldca(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 192
{ } 
#endif
# 193 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double __ldca(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 193
{ } 
#endif
# 194 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float2 __ldca(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 194
{ } 
#endif
# 195 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float4 __ldca(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 195
{ } 
#endif
# 196 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double2 __ldca(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 196
{ } 
#endif
# 200 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long __ldcs(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 200
{ } 
#endif
# 201 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long __ldcs(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 201
{ } 
#endif
# 203 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char __ldcs(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 203
{ } 
#endif
# 204 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline signed char __ldcs(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 204
{ } 
#endif
# 205 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short __ldcs(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 205
{ } 
#endif
# 206 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int __ldcs(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 206
{ } 
#endif
# 207 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long long __ldcs(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 207
{ } 
#endif
# 208 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char2 __ldcs(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 208
{ } 
#endif
# 209 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char4 __ldcs(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 209
{ } 
#endif
# 210 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short2 __ldcs(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 210
{ } 
#endif
# 211 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short4 __ldcs(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 211
{ } 
#endif
# 212 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int2 __ldcs(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 212
{ } 
#endif
# 213 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int4 __ldcs(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 213
{ } 
#endif
# 214 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline longlong2 __ldcs(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 214
{ } 
#endif
# 216 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned char __ldcs(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 216
{ } 
#endif
# 217 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned short __ldcs(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 217
{ } 
#endif
# 218 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __ldcs(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 218
{ } 
#endif
# 219 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __ldcs(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 219
{ } 
#endif
# 220 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar2 __ldcs(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 220
{ } 
#endif
# 221 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar4 __ldcs(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 221
{ } 
#endif
# 222 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort2 __ldcs(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 222
{ } 
#endif
# 223 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort4 __ldcs(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 223
{ } 
#endif
# 224 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint2 __ldcs(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 224
{ } 
#endif
# 225 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint4 __ldcs(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 225
{ } 
#endif
# 226 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ulonglong2 __ldcs(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 226
{ } 
#endif
# 228 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float __ldcs(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 228
{ } 
#endif
# 229 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double __ldcs(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 229
{ } 
#endif
# 230 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float2 __ldcs(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 230
{ } 
#endif
# 231 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float4 __ldcs(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 231
{ } 
#endif
# 232 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double2 __ldcs(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 232
{ } 
#endif
# 236 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long __ldlu(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 236
{ } 
#endif
# 237 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long __ldlu(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 237
{ } 
#endif
# 239 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char __ldlu(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 239
{ } 
#endif
# 240 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline signed char __ldlu(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 240
{ } 
#endif
# 241 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short __ldlu(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 241
{ } 
#endif
# 242 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int __ldlu(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 242
{ } 
#endif
# 243 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long long __ldlu(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 243
{ } 
#endif
# 244 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char2 __ldlu(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 244
{ } 
#endif
# 245 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char4 __ldlu(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 245
{ } 
#endif
# 246 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short2 __ldlu(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 246
{ } 
#endif
# 247 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short4 __ldlu(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 247
{ } 
#endif
# 248 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int2 __ldlu(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 248
{ } 
#endif
# 249 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int4 __ldlu(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 249
{ } 
#endif
# 250 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline longlong2 __ldlu(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 250
{ } 
#endif
# 252 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned char __ldlu(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 252
{ } 
#endif
# 253 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned short __ldlu(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 253
{ } 
#endif
# 254 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __ldlu(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 254
{ } 
#endif
# 255 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __ldlu(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 255
{ } 
#endif
# 256 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar2 __ldlu(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 256
{ } 
#endif
# 257 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar4 __ldlu(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 257
{ } 
#endif
# 258 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort2 __ldlu(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 258
{ } 
#endif
# 259 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort4 __ldlu(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 259
{ } 
#endif
# 260 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint2 __ldlu(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 260
{ } 
#endif
# 261 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint4 __ldlu(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 261
{ } 
#endif
# 262 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ulonglong2 __ldlu(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 262
{ } 
#endif
# 264 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float __ldlu(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 264
{ } 
#endif
# 265 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double __ldlu(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 265
{ } 
#endif
# 266 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float2 __ldlu(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 266
{ } 
#endif
# 267 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float4 __ldlu(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 267
{ } 
#endif
# 268 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double2 __ldlu(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 268
{ } 
#endif
# 272 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long __ldcv(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 272
{ } 
#endif
# 273 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long __ldcv(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 273
{ } 
#endif
# 275 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char __ldcv(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 275
{ } 
#endif
# 276 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline signed char __ldcv(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 276
{ } 
#endif
# 277 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short __ldcv(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 277
{ } 
#endif
# 278 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int __ldcv(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 278
{ } 
#endif
# 279 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long long __ldcv(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 279
{ } 
#endif
# 280 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char2 __ldcv(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 280
{ } 
#endif
# 281 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char4 __ldcv(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 281
{ } 
#endif
# 282 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short2 __ldcv(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 282
{ } 
#endif
# 283 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short4 __ldcv(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 283
{ } 
#endif
# 284 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int2 __ldcv(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 284
{ } 
#endif
# 285 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int4 __ldcv(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 285
{ } 
#endif
# 286 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline longlong2 __ldcv(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 286
{ } 
#endif
# 288 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned char __ldcv(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 288
{ } 
#endif
# 289 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned short __ldcv(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 289
{ } 
#endif
# 290 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __ldcv(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 290
{ } 
#endif
# 291 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __ldcv(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 291
{ } 
#endif
# 292 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar2 __ldcv(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 292
{ } 
#endif
# 293 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar4 __ldcv(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 293
{ } 
#endif
# 294 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort2 __ldcv(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 294
{ } 
#endif
# 295 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort4 __ldcv(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 295
{ } 
#endif
# 296 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint2 __ldcv(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 296
{ } 
#endif
# 297 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint4 __ldcv(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 297
{ } 
#endif
# 298 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ulonglong2 __ldcv(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 298
{ } 
#endif
# 300 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float __ldcv(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 300
{ } 
#endif
# 301 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double __ldcv(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 301
{ } 
#endif
# 302 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float2 __ldcv(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 302
{ } 
#endif
# 303 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float4 __ldcv(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 303
{ } 
#endif
# 304 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double2 __ldcv(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 304
{ } 
#endif
# 308 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(long *ptr, long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 308
{ } 
#endif
# 309 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(unsigned long *ptr, unsigned long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 309
{ } 
#endif
# 311 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(char *ptr, char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 311
{ } 
#endif
# 312 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(signed char *ptr, signed char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 312
{ } 
#endif
# 313 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(short *ptr, short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 313
{ } 
#endif
# 314 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(int *ptr, int value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 314
{ } 
#endif
# 315 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(long long *ptr, long long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 315
{ } 
#endif
# 316 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(char2 *ptr, char2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 316
{ } 
#endif
# 317 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(char4 *ptr, char4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 317
{ } 
#endif
# 318 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(short2 *ptr, short2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 318
{ } 
#endif
# 319 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(short4 *ptr, short4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 319
{ } 
#endif
# 320 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(int2 *ptr, int2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 320
{ } 
#endif
# 321 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(int4 *ptr, int4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 321
{ } 
#endif
# 322 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(longlong2 *ptr, longlong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 322
{ } 
#endif
# 324 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(unsigned char *ptr, unsigned char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 324
{ } 
#endif
# 325 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(unsigned short *ptr, unsigned short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 325
{ } 
#endif
# 326 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(unsigned *ptr, unsigned value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 326
{ } 
#endif
# 327 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(unsigned long long *ptr, unsigned long long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 327
{ } 
#endif
# 328 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(uchar2 *ptr, uchar2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 328
{ } 
#endif
# 329 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(uchar4 *ptr, uchar4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 329
{ } 
#endif
# 330 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(ushort2 *ptr, ushort2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 330
{ } 
#endif
# 331 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(ushort4 *ptr, ushort4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 331
{ } 
#endif
# 332 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(uint2 *ptr, uint2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 332
{ } 
#endif
# 333 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(uint4 *ptr, uint4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 333
{ } 
#endif
# 334 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(ulonglong2 *ptr, ulonglong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 334
{ } 
#endif
# 336 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(float *ptr, float value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 336
{ } 
#endif
# 337 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(double *ptr, double value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 337
{ } 
#endif
# 338 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(float2 *ptr, float2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 338
{ } 
#endif
# 339 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(float4 *ptr, float4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 339
{ } 
#endif
# 340 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(double2 *ptr, double2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 340
{ } 
#endif
# 344 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(long *ptr, long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 344
{ } 
#endif
# 345 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(unsigned long *ptr, unsigned long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 345
{ } 
#endif
# 347 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(char *ptr, char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 347
{ } 
#endif
# 348 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(signed char *ptr, signed char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 348
{ } 
#endif
# 349 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(short *ptr, short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 349
{ } 
#endif
# 350 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(int *ptr, int value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 350
{ } 
#endif
# 351 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(long long *ptr, long long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 351
{ } 
#endif
# 352 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(char2 *ptr, char2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 352
{ } 
#endif
# 353 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(char4 *ptr, char4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 353
{ } 
#endif
# 354 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(short2 *ptr, short2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 354
{ } 
#endif
# 355 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(short4 *ptr, short4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 355
{ } 
#endif
# 356 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(int2 *ptr, int2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 356
{ } 
#endif
# 357 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(int4 *ptr, int4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 357
{ } 
#endif
# 358 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(longlong2 *ptr, longlong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 358
{ } 
#endif
# 360 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(unsigned char *ptr, unsigned char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 360
{ } 
#endif
# 361 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(unsigned short *ptr, unsigned short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 361
{ } 
#endif
# 362 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(unsigned *ptr, unsigned value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 362
{ } 
#endif
# 363 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(unsigned long long *ptr, unsigned long long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 363
{ } 
#endif
# 364 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(uchar2 *ptr, uchar2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 364
{ } 
#endif
# 365 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(uchar4 *ptr, uchar4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 365
{ } 
#endif
# 366 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(ushort2 *ptr, ushort2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 366
{ } 
#endif
# 367 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(ushort4 *ptr, ushort4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 367
{ } 
#endif
# 368 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(uint2 *ptr, uint2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 368
{ } 
#endif
# 369 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(uint4 *ptr, uint4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 369
{ } 
#endif
# 370 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(ulonglong2 *ptr, ulonglong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 370
{ } 
#endif
# 372 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(float *ptr, float value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 372
{ } 
#endif
# 373 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(double *ptr, double value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 373
{ } 
#endif
# 374 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(float2 *ptr, float2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 374
{ } 
#endif
# 375 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(float4 *ptr, float4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 375
{ } 
#endif
# 376 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(double2 *ptr, double2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 376
{ } 
#endif
# 380 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(long *ptr, long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 380
{ } 
#endif
# 381 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(unsigned long *ptr, unsigned long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 381
{ } 
#endif
# 383 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(char *ptr, char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 383
{ } 
#endif
# 384 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(signed char *ptr, signed char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 384
{ } 
#endif
# 385 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(short *ptr, short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 385
{ } 
#endif
# 386 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(int *ptr, int value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 386
{ } 
#endif
# 387 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(long long *ptr, long long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 387
{ } 
#endif
# 388 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(char2 *ptr, char2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 388
{ } 
#endif
# 389 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(char4 *ptr, char4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 389
{ } 
#endif
# 390 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(short2 *ptr, short2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 390
{ } 
#endif
# 391 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(short4 *ptr, short4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 391
{ } 
#endif
# 392 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(int2 *ptr, int2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 392
{ } 
#endif
# 393 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(int4 *ptr, int4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 393
{ } 
#endif
# 394 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(longlong2 *ptr, longlong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 394
{ } 
#endif
# 396 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(unsigned char *ptr, unsigned char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 396
{ } 
#endif
# 397 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(unsigned short *ptr, unsigned short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 397
{ } 
#endif
# 398 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(unsigned *ptr, unsigned value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 398
{ } 
#endif
# 399 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(unsigned long long *ptr, unsigned long long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 399
{ } 
#endif
# 400 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(uchar2 *ptr, uchar2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 400
{ } 
#endif
# 401 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(uchar4 *ptr, uchar4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 401
{ } 
#endif
# 402 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(ushort2 *ptr, ushort2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 402
{ } 
#endif
# 403 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(ushort4 *ptr, ushort4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 403
{ } 
#endif
# 404 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(uint2 *ptr, uint2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 404
{ } 
#endif
# 405 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(uint4 *ptr, uint4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 405
{ } 
#endif
# 406 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(ulonglong2 *ptr, ulonglong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 406
{ } 
#endif
# 408 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(float *ptr, float value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 408
{ } 
#endif
# 409 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(double *ptr, double value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 409
{ } 
#endif
# 410 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(float2 *ptr, float2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 410
{ } 
#endif
# 411 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(float4 *ptr, float4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 411
{ } 
#endif
# 412 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(double2 *ptr, double2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 412
{ } 
#endif
# 416 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(long *ptr, long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 416
{ } 
#endif
# 417 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(unsigned long *ptr, unsigned long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 417
{ } 
#endif
# 419 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(char *ptr, char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 419
{ } 
#endif
# 420 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(signed char *ptr, signed char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 420
{ } 
#endif
# 421 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(short *ptr, short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 421
{ } 
#endif
# 422 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(int *ptr, int value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 422
{ } 
#endif
# 423 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(long long *ptr, long long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 423
{ } 
#endif
# 424 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(char2 *ptr, char2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 424
{ } 
#endif
# 425 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(char4 *ptr, char4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 425
{ } 
#endif
# 426 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(short2 *ptr, short2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 426
{ } 
#endif
# 427 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(short4 *ptr, short4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 427
{ } 
#endif
# 428 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(int2 *ptr, int2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 428
{ } 
#endif
# 429 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(int4 *ptr, int4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 429
{ } 
#endif
# 430 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(longlong2 *ptr, longlong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 430
{ } 
#endif
# 432 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(unsigned char *ptr, unsigned char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 432
{ } 
#endif
# 433 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(unsigned short *ptr, unsigned short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 433
{ } 
#endif
# 434 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(unsigned *ptr, unsigned value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 434
{ } 
#endif
# 435 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(unsigned long long *ptr, unsigned long long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 435
{ } 
#endif
# 436 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(uchar2 *ptr, uchar2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 436
{ } 
#endif
# 437 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(uchar4 *ptr, uchar4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 437
{ } 
#endif
# 438 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(ushort2 *ptr, ushort2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 438
{ } 
#endif
# 439 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(ushort4 *ptr, ushort4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 439
{ } 
#endif
# 440 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(uint2 *ptr, uint2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 440
{ } 
#endif
# 441 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(uint4 *ptr, uint4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 441
{ } 
#endif
# 442 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(ulonglong2 *ptr, ulonglong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 442
{ } 
#endif
# 444 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(float *ptr, float value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 444
{ } 
#endif
# 445 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(double *ptr, double value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 445
{ } 
#endif
# 446 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(float2 *ptr, float2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 446
{ } 
#endif
# 447 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(float4 *ptr, float4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 447
{ } 
#endif
# 448 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(double2 *ptr, double2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 448
{ } 
#endif
# 465 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __funnelshift_l(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 465
{ } 
#endif
# 477 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __funnelshift_lc(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 477
{ } 
#endif
# 490 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __funnelshift_r(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 490
{ } 
#endif
# 502 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __funnelshift_rc(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 502
{ } 
#endif
# 102 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp2a_lo(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 102
{ } 
#endif
# 113 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp2a_lo(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 113
{ } 
#endif
# 125 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp2a_lo(short2 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 125
{ } 
#endif
# 136 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp2a_lo(ushort2 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 136
{ } 
#endif
# 148 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp2a_hi(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 148
{ } 
#endif
# 159 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp2a_hi(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 159
{ } 
#endif
# 171 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp2a_hi(short2 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 171
{ } 
#endif
# 182 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp2a_hi(ushort2 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 182
{ } 
#endif
# 197 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp4a(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 197
{ } 
#endif
# 206 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp4a(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 206
{ } 
#endif
# 216 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp4a(char4 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 216
{ } 
#endif
# 225 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp4a(uchar4 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 225
{ } 
#endif
# 96 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 96
{ } 
#endif
# 97 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, int value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 97
{ } 
#endif
# 98 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, unsigned long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 98
{ } 
#endif
# 99 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 99
{ } 
#endif
# 100 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, unsigned long long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 100
{ } 
#endif
# 101 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, long long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 101
{ } 
#endif
# 102 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, float value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 102
{ } 
#endif
# 103 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, double value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 103
{ } 
#endif
# 105 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, unsigned value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 105
{ } 
#endif
# 106 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, int value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 106
{ } 
#endif
# 107 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, unsigned long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 107
{ } 
#endif
# 108 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 108
{ } 
#endif
# 109 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, unsigned long long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 109
{ } 
#endif
# 110 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, long long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 110
{ } 
#endif
# 111 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, float value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 111
{ } 
#endif
# 112 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, double value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 112
{ } 
#endif
# 114 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_70_rt.h"
__attribute__((unused)) static inline void __nanosleep(unsigned ns) {int volatile ___ = 1;(void)ns;::exit(___);}
#if 0
# 114
{ } 
#endif
# 116 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned short atomicCAS(unsigned short *address, unsigned short compare, unsigned short val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 116
{ } 
#endif
# 95 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_80_rt.h"
__attribute__((unused)) static inline unsigned __reduce_add_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 95
{ } 
#endif
# 96 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_80_rt.h"
__attribute__((unused)) static inline unsigned __reduce_min_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 96
{ } 
#endif
# 97 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_80_rt.h"
__attribute__((unused)) static inline unsigned __reduce_max_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 97
{ } 
#endif
# 99 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_80_rt.h"
__attribute__((unused)) static inline int __reduce_add_sync(unsigned mask, int value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 99
{ } 
#endif
# 100 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_80_rt.h"
__attribute__((unused)) static inline int __reduce_min_sync(unsigned mask, int value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 100
{ } 
#endif
# 101 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_80_rt.h"
__attribute__((unused)) static inline int __reduce_max_sync(unsigned mask, int value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 101
{ } 
#endif
# 103 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_80_rt.h"
__attribute__((unused)) static inline unsigned __reduce_and_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 103
{ } 
#endif
# 104 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_80_rt.h"
__attribute__((unused)) static inline unsigned __reduce_or_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 104
{ } 
#endif
# 105 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_80_rt.h"
__attribute__((unused)) static inline unsigned __reduce_xor_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 105
{ } 
#endif
# 110 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_80_rt.h"
extern "C" {
# 111
__attribute__((unused)) inline void *__nv_associate_access_property(const void *ptr, unsigned long long 
# 112
property) {int volatile ___ = 1;(void)ptr;(void)property;
# 116
::exit(___);}
#if 0
# 112
{ 
# 113
__attribute__((unused)) extern void *__nv_associate_access_property_impl(const void *, unsigned long long); 
# 115
return __nv_associate_access_property_impl(ptr, property); 
# 116
} 
#endif
# 118 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_80_rt.h"
__attribute__((unused)) inline void __nv_memcpy_async_shared_global_4(void *dst, const void *
# 119
src, unsigned 
# 120
src_size) {int volatile ___ = 1;(void)dst;(void)src;(void)src_size;
# 125
::exit(___);}
#if 0
# 120
{ 
# 121
__attribute__((unused)) extern void __nv_memcpy_async_shared_global_4_impl(void *, const void *, unsigned); 
# 124
__nv_memcpy_async_shared_global_4_impl(dst, src, src_size); 
# 125
} 
#endif
# 127 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_80_rt.h"
__attribute__((unused)) inline void __nv_memcpy_async_shared_global_8(void *dst, const void *
# 128
src, unsigned 
# 129
src_size) {int volatile ___ = 1;(void)dst;(void)src;(void)src_size;
# 134
::exit(___);}
#if 0
# 129
{ 
# 130
__attribute__((unused)) extern void __nv_memcpy_async_shared_global_8_impl(void *, const void *, unsigned); 
# 133
__nv_memcpy_async_shared_global_8_impl(dst, src, src_size); 
# 134
} 
#endif
# 136 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_80_rt.h"
__attribute__((unused)) inline void __nv_memcpy_async_shared_global_16(void *dst, const void *
# 137
src, unsigned 
# 138
src_size) {int volatile ___ = 1;(void)dst;(void)src;(void)src_size;
# 143
::exit(___);}
#if 0
# 138
{ 
# 139
__attribute__((unused)) extern void __nv_memcpy_async_shared_global_16_impl(void *, const void *, unsigned); 
# 142
__nv_memcpy_async_shared_global_16_impl(dst, src, src_size); 
# 143
} 
#endif
# 145 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_80_rt.h"
}
# 92 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_90_rt.h"
__attribute__((unused)) static inline unsigned __isCtaShared(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 92
{ } 
#endif
# 93 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_90_rt.h"
__attribute__((unused)) static inline unsigned __isClusterShared(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 93
{ } 
#endif
# 94 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_90_rt.h"
__attribute__((unused)) static inline void *__cluster_map_shared_rank(const void *ptr, unsigned target_block_rank) {int volatile ___ = 1;(void)ptr;(void)target_block_rank;::exit(___);}
#if 0
# 94
{ } 
#endif
# 95 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_90_rt.h"
__attribute__((unused)) static inline unsigned __cluster_query_shared_rank(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 95
{ } 
#endif
# 96 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_90_rt.h"
__attribute__((unused)) static inline uint2 __cluster_map_shared_multicast(const void *ptr, unsigned cluster_cta_mask) {int volatile ___ = 1;(void)ptr;(void)cluster_cta_mask;::exit(___);}
#if 0
# 96
{ } 
#endif
# 97 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_90_rt.h"
__attribute__((unused)) static inline unsigned __clusterDimIsSpecified() {int volatile ___ = 1;::exit(___);}
#if 0
# 97
{ } 
#endif
# 98 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_90_rt.h"
__attribute__((unused)) static inline dim3 __clusterDim() {int volatile ___ = 1;::exit(___);}
#if 0
# 98
{ } 
#endif
# 99 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_90_rt.h"
__attribute__((unused)) static inline dim3 __clusterRelativeBlockIdx() {int volatile ___ = 1;::exit(___);}
#if 0
# 99
{ } 
#endif
# 100 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_90_rt.h"
__attribute__((unused)) static inline dim3 __clusterGridDimInClusters() {int volatile ___ = 1;::exit(___);}
#if 0
# 100
{ } 
#endif
# 101 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_90_rt.h"
__attribute__((unused)) static inline dim3 __clusterIdx() {int volatile ___ = 1;::exit(___);}
#if 0
# 101
{ } 
#endif
# 102 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_90_rt.h"
__attribute__((unused)) static inline unsigned __clusterRelativeBlockRank() {int volatile ___ = 1;::exit(___);}
#if 0
# 102
{ } 
#endif
# 103 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_90_rt.h"
__attribute__((unused)) static inline unsigned __clusterSizeInBlocks() {int volatile ___ = 1;::exit(___);}
#if 0
# 103
{ } 
#endif
# 104 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_90_rt.h"
__attribute__((unused)) static inline void __cluster_barrier_arrive() {int volatile ___ = 1;::exit(___);}
#if 0
# 104
{ } 
#endif
# 105 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_90_rt.h"
__attribute__((unused)) static inline void __cluster_barrier_arrive_relaxed() {int volatile ___ = 1;::exit(___);}
#if 0
# 105
{ } 
#endif
# 106 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_90_rt.h"
__attribute__((unused)) static inline void __cluster_barrier_wait() {int volatile ___ = 1;::exit(___);}
#if 0
# 106
{ } 
#endif
# 107 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_90_rt.h"
__attribute__((unused)) static inline void __threadfence_cluster() {int volatile ___ = 1;::exit(___);}
#if 0
# 107
{ } 
#endif
# 109 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_90_rt.h"
__attribute__((unused)) static inline float2 atomicAdd(float2 *__address, float2 val) {int volatile ___ = 1;(void)__address;(void)val;::exit(___);}
#if 0
# 109
{ } 
#endif
# 110 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_90_rt.h"
__attribute__((unused)) static inline float2 atomicAdd_block(float2 *__address, float2 val) {int volatile ___ = 1;(void)__address;(void)val;::exit(___);}
#if 0
# 110
{ } 
#endif
# 111 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_90_rt.h"
__attribute__((unused)) static inline float2 atomicAdd_system(float2 *__address, float2 val) {int volatile ___ = 1;(void)__address;(void)val;::exit(___);}
#if 0
# 111
{ } 
#endif
# 112 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_90_rt.h"
__attribute__((unused)) static inline float4 atomicAdd(float4 *__address, float4 val) {int volatile ___ = 1;(void)__address;(void)val;::exit(___);}
#if 0
# 112
{ } 
#endif
# 113 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_90_rt.h"
__attribute__((unused)) static inline float4 atomicAdd_block(float4 *__address, float4 val) {int volatile ___ = 1;(void)__address;(void)val;::exit(___);}
#if 0
# 113
{ } 
#endif
# 114 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_90_rt.h"
__attribute__((unused)) static inline float4 atomicAdd_system(float4 *__address, float4 val) {int volatile ___ = 1;(void)__address;(void)val;::exit(___);}
#if 0
# 114
{ } 
#endif
# 125 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_90_rt.h"
extern "C" {
# 130
}
# 137
template< bool __b, class _T> 
# 138
struct __nv_atomic_enable_if { }; 
# 140
template< class _T> 
# 141
struct __nv_atomic_enable_if< true, _T>  { typedef _T __type; }; 
# 151 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_90_rt.h"
template< class _T> 
# 152
struct __nv_atomic_triv_cp_helper { 
# 159
static const bool __val = __is_trivially_copyable(_T); 
# 164
}; 
# 199 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_90_rt.h"
template< class _T> __attribute__((unused)) static inline typename __nv_atomic_enable_if< (sizeof(_T) == (16)) && (__alignof__(_T) >= (16)) && __nv_atomic_triv_cp_helper< _T> ::__val, _T> ::__type 
# 201
atomicCAS(_T *__address, _T __compare, _T __val) {int volatile ___ = 1;(void)__address;(void)__compare;(void)__val;
# 208
::exit(___);}
#if 0
# 201
{ 
# 202
union _U { _T __ret; _U() {int *volatile ___ = 0;::free(___);}
#if 0
# 202
{ } 
#endif
# 202 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_90_rt.h"
}; _U __u; 
# 203
__u128AtomicCAS((void *)__address, (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__compare)))), (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__val)))), (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__u.__ret))))); 
# 207
return __u.__ret; 
# 208
} 
#endif
# 210 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_90_rt.h"
template< class _T> __attribute__((unused)) static inline typename __nv_atomic_enable_if< (sizeof(_T) == (16)) && (__alignof__(_T) >= (16)) && __nv_atomic_triv_cp_helper< _T> ::__val, _T> ::__type 
# 212
atomicCAS_block(_T *__address, _T __compare, _T __val) {int volatile ___ = 1;(void)__address;(void)__compare;(void)__val;
# 219
::exit(___);}
#if 0
# 212
{ 
# 213
union _U { _T __ret; _U() {int *volatile ___ = 0;::free(___);}
#if 0
# 213
{ } 
#endif
# 213 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_90_rt.h"
}; _U __u; 
# 214
__u128AtomicCAS_block((void *)__address, (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__compare)))), (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__val)))), (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__u.__ret))))); 
# 218
return __u.__ret; 
# 219
} 
#endif
# 221 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_90_rt.h"
template< class _T> __attribute__((unused)) static inline typename __nv_atomic_enable_if< (sizeof(_T) == (16)) && (__alignof__(_T) >= (16)) && __nv_atomic_triv_cp_helper< _T> ::__val, _T> ::__type 
# 223
atomicExch(_T *__address, _T __val) {int volatile ___ = 1;(void)__address;(void)__val;
# 229
::exit(___);}
#if 0
# 223
{ 
# 224
union _U { _T __ret; _U() {int *volatile ___ = 0;::free(___);}
#if 0
# 224
{ } 
#endif
# 224 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_90_rt.h"
}; _U __u; 
# 225
__u128AtomicExch((void *)__address, (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__val)))), (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__u.__ret))))); 
# 228
return __u.__ret; 
# 229
} 
#endif
# 231 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_90_rt.h"
template< class _T> __attribute__((unused)) static inline typename __nv_atomic_enable_if< (sizeof(_T) == (16)) && (__alignof__(_T) >= (16)) && __nv_atomic_triv_cp_helper< _T> ::__val, _T> ::__type 
# 233
atomicExch_block(_T *__address, _T __val) {int volatile ___ = 1;(void)__address;(void)__val;
# 239
::exit(___);}
#if 0
# 233
{ 
# 234
union _U { _T __ret; _U() {int *volatile ___ = 0;::free(___);}
#if 0
# 234
{ } 
#endif
# 234 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/sm_90_rt.h"
}; _U __u; 
# 235
__u128AtomicExch_block((void *)__address, (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__val)))), (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__u.__ret))))); 
# 238
return __u.__ret; 
# 239
} 
#endif
# 65 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> struct __nv_itex_trait { }; 
# 66
template<> struct __nv_itex_trait< char>  { typedef void type; }; 
# 67
template<> struct __nv_itex_trait< signed char>  { typedef void type; }; 
# 68
template<> struct __nv_itex_trait< char1>  { typedef void type; }; 
# 69
template<> struct __nv_itex_trait< char2>  { typedef void type; }; 
# 70
template<> struct __nv_itex_trait< char4>  { typedef void type; }; 
# 71
template<> struct __nv_itex_trait< unsigned char>  { typedef void type; }; 
# 72
template<> struct __nv_itex_trait< uchar1>  { typedef void type; }; 
# 73
template<> struct __nv_itex_trait< uchar2>  { typedef void type; }; 
# 74
template<> struct __nv_itex_trait< uchar4>  { typedef void type; }; 
# 75
template<> struct __nv_itex_trait< short>  { typedef void type; }; 
# 76
template<> struct __nv_itex_trait< short1>  { typedef void type; }; 
# 77
template<> struct __nv_itex_trait< short2>  { typedef void type; }; 
# 78
template<> struct __nv_itex_trait< short4>  { typedef void type; }; 
# 79
template<> struct __nv_itex_trait< unsigned short>  { typedef void type; }; 
# 80
template<> struct __nv_itex_trait< ushort1>  { typedef void type; }; 
# 81
template<> struct __nv_itex_trait< ushort2>  { typedef void type; }; 
# 82
template<> struct __nv_itex_trait< ushort4>  { typedef void type; }; 
# 83
template<> struct __nv_itex_trait< int>  { typedef void type; }; 
# 84
template<> struct __nv_itex_trait< int1>  { typedef void type; }; 
# 85
template<> struct __nv_itex_trait< int2>  { typedef void type; }; 
# 86
template<> struct __nv_itex_trait< int4>  { typedef void type; }; 
# 87
template<> struct __nv_itex_trait< unsigned>  { typedef void type; }; 
# 88
template<> struct __nv_itex_trait< uint1>  { typedef void type; }; 
# 89
template<> struct __nv_itex_trait< uint2>  { typedef void type; }; 
# 90
template<> struct __nv_itex_trait< uint4>  { typedef void type; }; 
# 101 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template<> struct __nv_itex_trait< float>  { typedef void type; }; 
# 102
template<> struct __nv_itex_trait< float1>  { typedef void type; }; 
# 103
template<> struct __nv_itex_trait< float2>  { typedef void type; }; 
# 104
template<> struct __nv_itex_trait< float4>  { typedef void type; }; 
# 108
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 109
tex1Dfetch(T *ptr, cudaTextureObject_t obj, int x) 
# 110
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;
# 112
::exit(___);}
#if 0
# 110
{ 
# 111
__nv_tex_surf_handler("__itex1Dfetch", ptr, obj, x); 
# 112
} 
#endif
# 114 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 115
tex1Dfetch(cudaTextureObject_t texObject, int x) 
# 116
{int volatile ___ = 1;(void)texObject;(void)x;
# 120
::exit(___);}
#if 0
# 116
{ 
# 117
T ret; 
# 118
tex1Dfetch(&ret, texObject, x); 
# 119
return ret; 
# 120
} 
#endif
# 122 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 123
tex1D(T *ptr, cudaTextureObject_t obj, float x) 
# 124
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;
# 126
::exit(___);}
#if 0
# 124
{ 
# 125
__nv_tex_surf_handler("__itex1D", ptr, obj, x); 
# 126
} 
#endif
# 129 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 130
tex1D(cudaTextureObject_t texObject, float x) 
# 131
{int volatile ___ = 1;(void)texObject;(void)x;
# 135
::exit(___);}
#if 0
# 131
{ 
# 132
T ret; 
# 133
tex1D(&ret, texObject, x); 
# 134
return ret; 
# 135
} 
#endif
# 138 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 139
tex2D(T *ptr, cudaTextureObject_t obj, float x, float y) 
# 140
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;
# 142
::exit(___);}
#if 0
# 140
{ 
# 141
__nv_tex_surf_handler("__itex2D", ptr, obj, x, y); 
# 142
} 
#endif
# 144 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 145
tex2D(cudaTextureObject_t texObject, float x, float y) 
# 146
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;
# 150
::exit(___);}
#if 0
# 146
{ 
# 147
T ret; 
# 148
tex2D(&ret, texObject, x, y); 
# 149
return ret; 
# 150
} 
#endif
# 153 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 154
tex2D(T *ptr, cudaTextureObject_t obj, float x, float y, bool *
# 155
isResident) 
# 156
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)isResident;
# 160
::exit(___);}
#if 0
# 156
{ 
# 157
unsigned char res; 
# 158
__nv_tex_surf_handler("__itex2D_sparse", ptr, obj, x, y, &res); 
# 159
(*isResident) = (res != 0); 
# 160
} 
#endif
# 162 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 163
tex2D(cudaTextureObject_t texObject, float x, float y, bool *isResident) 
# 164
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)isResident;
# 168
::exit(___);}
#if 0
# 164
{ 
# 165
T ret; 
# 166
tex2D(&ret, texObject, x, y, isResident); 
# 167
return ret; 
# 168
} 
#endif
# 173 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 174
tex3D(T *ptr, cudaTextureObject_t obj, float x, float y, float z) 
# 175
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;
# 177
::exit(___);}
#if 0
# 175
{ 
# 176
__nv_tex_surf_handler("__itex3D", ptr, obj, x, y, z); 
# 177
} 
#endif
# 179 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 180
tex3D(cudaTextureObject_t texObject, float x, float y, float z) 
# 181
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;
# 185
::exit(___);}
#if 0
# 181
{ 
# 182
T ret; 
# 183
tex3D(&ret, texObject, x, y, z); 
# 184
return ret; 
# 185
} 
#endif
# 188 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 189
tex3D(T *ptr, cudaTextureObject_t obj, float x, float y, float z, bool *
# 190
isResident) 
# 191
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)isResident;
# 195
::exit(___);}
#if 0
# 191
{ 
# 192
unsigned char res; 
# 193
__nv_tex_surf_handler("__itex3D_sparse", ptr, obj, x, y, z, &res); 
# 194
(*isResident) = (res != 0); 
# 195
} 
#endif
# 197 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 198
tex3D(cudaTextureObject_t texObject, float x, float y, float z, bool *isResident) 
# 199
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)isResident;
# 203
::exit(___);}
#if 0
# 199
{ 
# 200
T ret; 
# 201
tex3D(&ret, texObject, x, y, z, isResident); 
# 202
return ret; 
# 203
} 
#endif
# 207 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 208
tex1DLayered(T *ptr, cudaTextureObject_t obj, float x, int layer) 
# 209
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;
# 211
::exit(___);}
#if 0
# 209
{ 
# 210
__nv_tex_surf_handler("__itex1DLayered", ptr, obj, x, layer); 
# 211
} 
#endif
# 213 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 214
tex1DLayered(cudaTextureObject_t texObject, float x, int layer) 
# 215
{int volatile ___ = 1;(void)texObject;(void)x;(void)layer;
# 219
::exit(___);}
#if 0
# 215
{ 
# 216
T ret; 
# 217
tex1DLayered(&ret, texObject, x, layer); 
# 218
return ret; 
# 219
} 
#endif
# 221 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 222
tex2DLayered(T *ptr, cudaTextureObject_t obj, float x, float y, int layer) 
# 223
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;
# 225
::exit(___);}
#if 0
# 223
{ 
# 224
__nv_tex_surf_handler("__itex2DLayered", ptr, obj, x, y, layer); 
# 225
} 
#endif
# 227 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 228
tex2DLayered(cudaTextureObject_t texObject, float x, float y, int layer) 
# 229
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;
# 233
::exit(___);}
#if 0
# 229
{ 
# 230
T ret; 
# 231
tex2DLayered(&ret, texObject, x, y, layer); 
# 232
return ret; 
# 233
} 
#endif
# 236 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 237
tex2DLayered(T *ptr, cudaTextureObject_t obj, float x, float y, int layer, bool *isResident) 
# 238
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)isResident;
# 242
::exit(___);}
#if 0
# 238
{ 
# 239
unsigned char res; 
# 240
__nv_tex_surf_handler("__itex2DLayered_sparse", ptr, obj, x, y, layer, &res); 
# 241
(*isResident) = (res != 0); 
# 242
} 
#endif
# 244 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 245
tex2DLayered(cudaTextureObject_t texObject, float x, float y, int layer, bool *isResident) 
# 246
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)isResident;
# 250
::exit(___);}
#if 0
# 246
{ 
# 247
T ret; 
# 248
tex2DLayered(&ret, texObject, x, y, layer, isResident); 
# 249
return ret; 
# 250
} 
#endif
# 254 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 255
texCubemap(T *ptr, cudaTextureObject_t obj, float x, float y, float z) 
# 256
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;
# 258
::exit(___);}
#if 0
# 256
{ 
# 257
__nv_tex_surf_handler("__itexCubemap", ptr, obj, x, y, z); 
# 258
} 
#endif
# 261 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 262
texCubemap(cudaTextureObject_t texObject, float x, float y, float z) 
# 263
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;
# 267
::exit(___);}
#if 0
# 263
{ 
# 264
T ret; 
# 265
texCubemap(&ret, texObject, x, y, z); 
# 266
return ret; 
# 267
} 
#endif
# 270 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 271
texCubemapLayered(T *ptr, cudaTextureObject_t obj, float x, float y, float z, int layer) 
# 272
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;
# 274
::exit(___);}
#if 0
# 272
{ 
# 273
__nv_tex_surf_handler("__itexCubemapLayered", ptr, obj, x, y, z, layer); 
# 274
} 
#endif
# 276 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 277
texCubemapLayered(cudaTextureObject_t texObject, float x, float y, float z, int layer) 
# 278
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;
# 282
::exit(___);}
#if 0
# 278
{ 
# 279
T ret; 
# 280
texCubemapLayered(&ret, texObject, x, y, z, layer); 
# 281
return ret; 
# 282
} 
#endif
# 284 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 285
tex2Dgather(T *ptr, cudaTextureObject_t obj, float x, float y, int comp = 0) 
# 286
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)comp;
# 288
::exit(___);}
#if 0
# 286
{ 
# 287
__nv_tex_surf_handler("__itex2Dgather", ptr, obj, x, y, comp); 
# 288
} 
#endif
# 290 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 291
tex2Dgather(cudaTextureObject_t to, float x, float y, int comp = 0) 
# 292
{int volatile ___ = 1;(void)to;(void)x;(void)y;(void)comp;
# 296
::exit(___);}
#if 0
# 292
{ 
# 293
T ret; 
# 294
tex2Dgather(&ret, to, x, y, comp); 
# 295
return ret; 
# 296
} 
#endif
# 299 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 300
tex2Dgather(T *ptr, cudaTextureObject_t obj, float x, float y, bool *isResident, int comp = 0) 
# 301
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)isResident;(void)comp;
# 305
::exit(___);}
#if 0
# 301
{ 
# 302
unsigned char res; 
# 303
__nv_tex_surf_handler("__itex2Dgather_sparse", ptr, obj, x, y, comp, &res); 
# 304
(*isResident) = (res != 0); 
# 305
} 
#endif
# 307 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 308
tex2Dgather(cudaTextureObject_t to, float x, float y, bool *isResident, int comp = 0) 
# 309
{int volatile ___ = 1;(void)to;(void)x;(void)y;(void)isResident;(void)comp;
# 313
::exit(___);}
#if 0
# 309
{ 
# 310
T ret; 
# 311
tex2Dgather(&ret, to, x, y, isResident, comp); 
# 312
return ret; 
# 313
} 
#endif
# 317 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 318
tex1DLod(T *ptr, cudaTextureObject_t obj, float x, float level) 
# 319
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)level;
# 321
::exit(___);}
#if 0
# 319
{ 
# 320
__nv_tex_surf_handler("__itex1DLod", ptr, obj, x, level); 
# 321
} 
#endif
# 323 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 324
tex1DLod(cudaTextureObject_t texObject, float x, float level) 
# 325
{int volatile ___ = 1;(void)texObject;(void)x;(void)level;
# 329
::exit(___);}
#if 0
# 325
{ 
# 326
T ret; 
# 327
tex1DLod(&ret, texObject, x, level); 
# 328
return ret; 
# 329
} 
#endif
# 332 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 333
tex2DLod(T *ptr, cudaTextureObject_t obj, float x, float y, float level) 
# 334
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)level;
# 336
::exit(___);}
#if 0
# 334
{ 
# 335
__nv_tex_surf_handler("__itex2DLod", ptr, obj, x, y, level); 
# 336
} 
#endif
# 338 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 339
tex2DLod(cudaTextureObject_t texObject, float x, float y, float level) 
# 340
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)level;
# 344
::exit(___);}
#if 0
# 340
{ 
# 341
T ret; 
# 342
tex2DLod(&ret, texObject, x, y, level); 
# 343
return ret; 
# 344
} 
#endif
# 348 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 349
tex2DLod(T *ptr, cudaTextureObject_t obj, float x, float y, float level, bool *isResident) 
# 350
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)level;(void)isResident;
# 354
::exit(___);}
#if 0
# 350
{ 
# 351
unsigned char res; 
# 352
__nv_tex_surf_handler("__itex2DLod_sparse", ptr, obj, x, y, level, &res); 
# 353
(*isResident) = (res != 0); 
# 354
} 
#endif
# 356 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 357
tex2DLod(cudaTextureObject_t texObject, float x, float y, float level, bool *isResident) 
# 358
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)level;(void)isResident;
# 362
::exit(___);}
#if 0
# 358
{ 
# 359
T ret; 
# 360
tex2DLod(&ret, texObject, x, y, level, isResident); 
# 361
return ret; 
# 362
} 
#endif
# 367 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 368
tex3DLod(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float level) 
# 369
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)level;
# 371
::exit(___);}
#if 0
# 369
{ 
# 370
__nv_tex_surf_handler("__itex3DLod", ptr, obj, x, y, z, level); 
# 371
} 
#endif
# 373 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 374
tex3DLod(cudaTextureObject_t texObject, float x, float y, float z, float level) 
# 375
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)level;
# 379
::exit(___);}
#if 0
# 375
{ 
# 376
T ret; 
# 377
tex3DLod(&ret, texObject, x, y, z, level); 
# 378
return ret; 
# 379
} 
#endif
# 382 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 383
tex3DLod(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float level, bool *isResident) 
# 384
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)level;(void)isResident;
# 388
::exit(___);}
#if 0
# 384
{ 
# 385
unsigned char res; 
# 386
__nv_tex_surf_handler("__itex3DLod_sparse", ptr, obj, x, y, z, level, &res); 
# 387
(*isResident) = (res != 0); 
# 388
} 
#endif
# 390 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 391
tex3DLod(cudaTextureObject_t texObject, float x, float y, float z, float level, bool *isResident) 
# 392
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)level;(void)isResident;
# 396
::exit(___);}
#if 0
# 392
{ 
# 393
T ret; 
# 394
tex3DLod(&ret, texObject, x, y, z, level, isResident); 
# 395
return ret; 
# 396
} 
#endif
# 401 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 402
tex1DLayeredLod(T *ptr, cudaTextureObject_t obj, float x, int layer, float level) 
# 403
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)level;
# 405
::exit(___);}
#if 0
# 403
{ 
# 404
__nv_tex_surf_handler("__itex1DLayeredLod", ptr, obj, x, layer, level); 
# 405
} 
#endif
# 407 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 408
tex1DLayeredLod(cudaTextureObject_t texObject, float x, int layer, float level) 
# 409
{int volatile ___ = 1;(void)texObject;(void)x;(void)layer;(void)level;
# 413
::exit(___);}
#if 0
# 409
{ 
# 410
T ret; 
# 411
tex1DLayeredLod(&ret, texObject, x, layer, level); 
# 412
return ret; 
# 413
} 
#endif
# 416 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 417
tex2DLayeredLod(T *ptr, cudaTextureObject_t obj, float x, float y, int layer, float level) 
# 418
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)level;
# 420
::exit(___);}
#if 0
# 418
{ 
# 419
__nv_tex_surf_handler("__itex2DLayeredLod", ptr, obj, x, y, layer, level); 
# 420
} 
#endif
# 422 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 423
tex2DLayeredLod(cudaTextureObject_t texObject, float x, float y, int layer, float level) 
# 424
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)level;
# 428
::exit(___);}
#if 0
# 424
{ 
# 425
T ret; 
# 426
tex2DLayeredLod(&ret, texObject, x, y, layer, level); 
# 427
return ret; 
# 428
} 
#endif
# 431 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 432
tex2DLayeredLod(T *ptr, cudaTextureObject_t obj, float x, float y, int layer, float level, bool *isResident) 
# 433
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)level;(void)isResident;
# 437
::exit(___);}
#if 0
# 433
{ 
# 434
unsigned char res; 
# 435
__nv_tex_surf_handler("__itex2DLayeredLod_sparse", ptr, obj, x, y, layer, level, &res); 
# 436
(*isResident) = (res != 0); 
# 437
} 
#endif
# 439 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 440
tex2DLayeredLod(cudaTextureObject_t texObject, float x, float y, int layer, float level, bool *isResident) 
# 441
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)level;(void)isResident;
# 445
::exit(___);}
#if 0
# 441
{ 
# 442
T ret; 
# 443
tex2DLayeredLod(&ret, texObject, x, y, layer, level, isResident); 
# 444
return ret; 
# 445
} 
#endif
# 448 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 449
texCubemapLod(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float level) 
# 450
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)level;
# 452
::exit(___);}
#if 0
# 450
{ 
# 451
__nv_tex_surf_handler("__itexCubemapLod", ptr, obj, x, y, z, level); 
# 452
} 
#endif
# 454 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 455
texCubemapLod(cudaTextureObject_t texObject, float x, float y, float z, float level) 
# 456
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)level;
# 460
::exit(___);}
#if 0
# 456
{ 
# 457
T ret; 
# 458
texCubemapLod(&ret, texObject, x, y, z, level); 
# 459
return ret; 
# 460
} 
#endif
# 463 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 464
texCubemapGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 465
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 467
::exit(___);}
#if 0
# 465
{ 
# 466
__nv_tex_surf_handler("__itexCubemapGrad_v2", ptr, obj, x, y, z, &dPdx, &dPdy); 
# 467
} 
#endif
# 469 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 470
texCubemapGrad(cudaTextureObject_t texObject, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 471
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 475
::exit(___);}
#if 0
# 471
{ 
# 472
T ret; 
# 473
texCubemapGrad(&ret, texObject, x, y, z, dPdx, dPdy); 
# 474
return ret; 
# 475
} 
#endif
# 477 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 478
texCubemapLayeredLod(T *ptr, cudaTextureObject_t obj, float x, float y, float z, int layer, float level) 
# 479
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;(void)level;
# 481
::exit(___);}
#if 0
# 479
{ 
# 480
__nv_tex_surf_handler("__itexCubemapLayeredLod", ptr, obj, x, y, z, layer, level); 
# 481
} 
#endif
# 483 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 484
texCubemapLayeredLod(cudaTextureObject_t texObject, float x, float y, float z, int layer, float level) 
# 485
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;(void)level;
# 489
::exit(___);}
#if 0
# 485
{ 
# 486
T ret; 
# 487
texCubemapLayeredLod(&ret, texObject, x, y, z, layer, level); 
# 488
return ret; 
# 489
} 
#endif
# 491 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 492
tex1DGrad(T *ptr, cudaTextureObject_t obj, float x, float dPdx, float dPdy) 
# 493
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)dPdx;(void)dPdy;
# 495
::exit(___);}
#if 0
# 493
{ 
# 494
__nv_tex_surf_handler("__itex1DGrad", ptr, obj, x, dPdx, dPdy); 
# 495
} 
#endif
# 497 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 498
tex1DGrad(cudaTextureObject_t texObject, float x, float dPdx, float dPdy) 
# 499
{int volatile ___ = 1;(void)texObject;(void)x;(void)dPdx;(void)dPdy;
# 503
::exit(___);}
#if 0
# 499
{ 
# 500
T ret; 
# 501
tex1DGrad(&ret, texObject, x, dPdx, dPdy); 
# 502
return ret; 
# 503
} 
#endif
# 506 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 507
tex2DGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float2 dPdx, float2 dPdy) 
# 508
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)dPdx;(void)dPdy;
# 510
::exit(___);}
#if 0
# 508
{ 
# 509
__nv_tex_surf_handler("__itex2DGrad_v2", ptr, obj, x, y, &dPdx, &dPdy); 
# 510
} 
#endif
# 512 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 513
tex2DGrad(cudaTextureObject_t texObject, float x, float y, float2 dPdx, float2 dPdy) 
# 514
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)dPdx;(void)dPdy;
# 518
::exit(___);}
#if 0
# 514
{ 
# 515
T ret; 
# 516
tex2DGrad(&ret, texObject, x, y, dPdx, dPdy); 
# 517
return ret; 
# 518
} 
#endif
# 521 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 522
tex2DGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float2 dPdx, float2 dPdy, bool *isResident) 
# 523
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)dPdx;(void)dPdy;(void)isResident;
# 527
::exit(___);}
#if 0
# 523
{ 
# 524
unsigned char res; 
# 525
__nv_tex_surf_handler("__itex2DGrad_sparse", ptr, obj, x, y, &dPdx, &dPdy, &res); 
# 526
(*isResident) = (res != 0); 
# 527
} 
#endif
# 529 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 530
tex2DGrad(cudaTextureObject_t texObject, float x, float y, float2 dPdx, float2 dPdy, bool *isResident) 
# 531
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)dPdx;(void)dPdy;(void)isResident;
# 535
::exit(___);}
#if 0
# 531
{ 
# 532
T ret; 
# 533
tex2DGrad(&ret, texObject, x, y, dPdx, dPdy, isResident); 
# 534
return ret; 
# 535
} 
#endif
# 539 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 540
tex3DGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 541
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 543
::exit(___);}
#if 0
# 541
{ 
# 542
__nv_tex_surf_handler("__itex3DGrad_v2", ptr, obj, x, y, z, &dPdx, &dPdy); 
# 543
} 
#endif
# 545 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 546
tex3DGrad(cudaTextureObject_t texObject, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 547
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 551
::exit(___);}
#if 0
# 547
{ 
# 548
T ret; 
# 549
tex3DGrad(&ret, texObject, x, y, z, dPdx, dPdy); 
# 550
return ret; 
# 551
} 
#endif
# 554 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 555
tex3DGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float4 dPdx, float4 dPdy, bool *isResident) 
# 556
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;(void)isResident;
# 560
::exit(___);}
#if 0
# 556
{ 
# 557
unsigned char res; 
# 558
__nv_tex_surf_handler("__itex3DGrad_sparse", ptr, obj, x, y, z, &dPdx, &dPdy, &res); 
# 559
(*isResident) = (res != 0); 
# 560
} 
#endif
# 562 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 563
tex3DGrad(cudaTextureObject_t texObject, float x, float y, float z, float4 dPdx, float4 dPdy, bool *isResident) 
# 564
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;(void)isResident;
# 568
::exit(___);}
#if 0
# 564
{ 
# 565
T ret; 
# 566
tex3DGrad(&ret, texObject, x, y, z, dPdx, dPdy, isResident); 
# 567
return ret; 
# 568
} 
#endif
# 573 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 574
tex1DLayeredGrad(T *ptr, cudaTextureObject_t obj, float x, int layer, float dPdx, float dPdy) 
# 575
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)dPdx;(void)dPdy;
# 577
::exit(___);}
#if 0
# 575
{ 
# 576
__nv_tex_surf_handler("__itex1DLayeredGrad", ptr, obj, x, layer, dPdx, dPdy); 
# 577
} 
#endif
# 579 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 580
tex1DLayeredGrad(cudaTextureObject_t texObject, float x, int layer, float dPdx, float dPdy) 
# 581
{int volatile ___ = 1;(void)texObject;(void)x;(void)layer;(void)dPdx;(void)dPdy;
# 585
::exit(___);}
#if 0
# 581
{ 
# 582
T ret; 
# 583
tex1DLayeredGrad(&ret, texObject, x, layer, dPdx, dPdy); 
# 584
return ret; 
# 585
} 
#endif
# 588 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 589
tex2DLayeredGrad(T *ptr, cudaTextureObject_t obj, float x, float y, int layer, float2 dPdx, float2 dPdy) 
# 590
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;
# 592
::exit(___);}
#if 0
# 590
{ 
# 591
__nv_tex_surf_handler("__itex2DLayeredGrad_v2", ptr, obj, x, y, layer, &dPdx, &dPdy); 
# 592
} 
#endif
# 594 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 595
tex2DLayeredGrad(cudaTextureObject_t texObject, float x, float y, int layer, float2 dPdx, float2 dPdy) 
# 596
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;
# 600
::exit(___);}
#if 0
# 596
{ 
# 597
T ret; 
# 598
tex2DLayeredGrad(&ret, texObject, x, y, layer, dPdx, dPdy); 
# 599
return ret; 
# 600
} 
#endif
# 603 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 604
tex2DLayeredGrad(T *ptr, cudaTextureObject_t obj, float x, float y, int layer, float2 dPdx, float2 dPdy, bool *isResident) 
# 605
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;(void)isResident;
# 609
::exit(___);}
#if 0
# 605
{ 
# 606
unsigned char res; 
# 607
__nv_tex_surf_handler("__itex2DLayeredGrad_sparse", ptr, obj, x, y, layer, &dPdx, &dPdy, &res); 
# 608
(*isResident) = (res != 0); 
# 609
} 
#endif
# 611 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 612
tex2DLayeredGrad(cudaTextureObject_t texObject, float x, float y, int layer, float2 dPdx, float2 dPdy, bool *isResident) 
# 613
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;(void)isResident;
# 617
::exit(___);}
#if 0
# 613
{ 
# 614
T ret; 
# 615
tex2DLayeredGrad(&ret, texObject, x, y, layer, dPdx, dPdy, isResident); 
# 616
return ret; 
# 617
} 
#endif
# 621 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 622
texCubemapLayeredGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float z, int layer, float4 dPdx, float4 dPdy) 
# 623
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;
# 625
::exit(___);}
#if 0
# 623
{ 
# 624
__nv_tex_surf_handler("__itexCubemapLayeredGrad_v2", ptr, obj, x, y, z, layer, &dPdx, &dPdy); 
# 625
} 
#endif
# 627 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 628
texCubemapLayeredGrad(cudaTextureObject_t texObject, float x, float y, float z, int layer, float4 dPdx, float4 dPdy) 
# 629
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;
# 633
::exit(___);}
#if 0
# 629
{ 
# 630
T ret; 
# 631
texCubemapLayeredGrad(&ret, texObject, x, y, z, layer, dPdx, dPdy); 
# 632
return ret; 
# 633
} 
#endif
# 58 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/surface_indirect_functions.h"
template< class T> struct __nv_isurf_trait { }; 
# 59
template<> struct __nv_isurf_trait< char>  { typedef void type; }; 
# 60
template<> struct __nv_isurf_trait< signed char>  { typedef void type; }; 
# 61
template<> struct __nv_isurf_trait< char1>  { typedef void type; }; 
# 62
template<> struct __nv_isurf_trait< unsigned char>  { typedef void type; }; 
# 63
template<> struct __nv_isurf_trait< uchar1>  { typedef void type; }; 
# 64
template<> struct __nv_isurf_trait< short>  { typedef void type; }; 
# 65
template<> struct __nv_isurf_trait< short1>  { typedef void type; }; 
# 66
template<> struct __nv_isurf_trait< unsigned short>  { typedef void type; }; 
# 67
template<> struct __nv_isurf_trait< ushort1>  { typedef void type; }; 
# 68
template<> struct __nv_isurf_trait< int>  { typedef void type; }; 
# 69
template<> struct __nv_isurf_trait< int1>  { typedef void type; }; 
# 70
template<> struct __nv_isurf_trait< unsigned>  { typedef void type; }; 
# 71
template<> struct __nv_isurf_trait< uint1>  { typedef void type; }; 
# 72
template<> struct __nv_isurf_trait< long long>  { typedef void type; }; 
# 73
template<> struct __nv_isurf_trait< longlong1>  { typedef void type; }; 
# 74
template<> struct __nv_isurf_trait< unsigned long long>  { typedef void type; }; 
# 75
template<> struct __nv_isurf_trait< ulonglong1>  { typedef void type; }; 
# 76
template<> struct __nv_isurf_trait< float>  { typedef void type; }; 
# 77
template<> struct __nv_isurf_trait< float1>  { typedef void type; }; 
# 79
template<> struct __nv_isurf_trait< char2>  { typedef void type; }; 
# 80
template<> struct __nv_isurf_trait< uchar2>  { typedef void type; }; 
# 81
template<> struct __nv_isurf_trait< short2>  { typedef void type; }; 
# 82
template<> struct __nv_isurf_trait< ushort2>  { typedef void type; }; 
# 83
template<> struct __nv_isurf_trait< int2>  { typedef void type; }; 
# 84
template<> struct __nv_isurf_trait< uint2>  { typedef void type; }; 
# 85
template<> struct __nv_isurf_trait< longlong2>  { typedef void type; }; 
# 86
template<> struct __nv_isurf_trait< ulonglong2>  { typedef void type; }; 
# 87
template<> struct __nv_isurf_trait< float2>  { typedef void type; }; 
# 89
template<> struct __nv_isurf_trait< char4>  { typedef void type; }; 
# 90
template<> struct __nv_isurf_trait< uchar4>  { typedef void type; }; 
# 91
template<> struct __nv_isurf_trait< short4>  { typedef void type; }; 
# 92
template<> struct __nv_isurf_trait< ushort4>  { typedef void type; }; 
# 93
template<> struct __nv_isurf_trait< int4>  { typedef void type; }; 
# 94
template<> struct __nv_isurf_trait< uint4>  { typedef void type; }; 
# 95
template<> struct __nv_isurf_trait< float4>  { typedef void type; }; 
# 98
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 99
surf1Dread(T *ptr, cudaSurfaceObject_t obj, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 100
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)mode;
# 102
::exit(___);}
#if 0
# 100
{ 
# 101
__nv_tex_surf_handler("__isurf1Dread", ptr, obj, x, mode); 
# 102
} 
#endif
# 104 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 105
surf1Dread(cudaSurfaceObject_t surfObject, int x, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 106
{int volatile ___ = 1;(void)surfObject;(void)x;(void)boundaryMode;
# 110
::exit(___);}
#if 0
# 106
{ 
# 107
T ret; 
# 108
surf1Dread(&ret, surfObject, x, boundaryMode); 
# 109
return ret; 
# 110
} 
#endif
# 112 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 113
surf2Dread(T *ptr, cudaSurfaceObject_t obj, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 114
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)mode;
# 116
::exit(___);}
#if 0
# 114
{ 
# 115
__nv_tex_surf_handler("__isurf2Dread", ptr, obj, x, y, mode); 
# 116
} 
#endif
# 118 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 119
surf2Dread(cudaSurfaceObject_t surfObject, int x, int y, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 120
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)boundaryMode;
# 124
::exit(___);}
#if 0
# 120
{ 
# 121
T ret; 
# 122
surf2Dread(&ret, surfObject, x, y, boundaryMode); 
# 123
return ret; 
# 124
} 
#endif
# 127 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 128
surf3Dread(T *ptr, cudaSurfaceObject_t obj, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 129
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)mode;
# 131
::exit(___);}
#if 0
# 129
{ 
# 130
__nv_tex_surf_handler("__isurf3Dread", ptr, obj, x, y, z, mode); 
# 131
} 
#endif
# 133 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 134
surf3Dread(cudaSurfaceObject_t surfObject, int x, int y, int z, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 135
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)z;(void)boundaryMode;
# 139
::exit(___);}
#if 0
# 135
{ 
# 136
T ret; 
# 137
surf3Dread(&ret, surfObject, x, y, z, boundaryMode); 
# 138
return ret; 
# 139
} 
#endif
# 141 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 142
surf1DLayeredread(T *ptr, cudaSurfaceObject_t obj, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 143
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)mode;
# 145
::exit(___);}
#if 0
# 143
{ 
# 144
__nv_tex_surf_handler("__isurf1DLayeredread", ptr, obj, x, layer, mode); 
# 145
} 
#endif
# 147 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 148
surf1DLayeredread(cudaSurfaceObject_t surfObject, int x, int layer, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 149
{int volatile ___ = 1;(void)surfObject;(void)x;(void)layer;(void)boundaryMode;
# 153
::exit(___);}
#if 0
# 149
{ 
# 150
T ret; 
# 151
surf1DLayeredread(&ret, surfObject, x, layer, boundaryMode); 
# 152
return ret; 
# 153
} 
#endif
# 155 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 156
surf2DLayeredread(T *ptr, cudaSurfaceObject_t obj, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 157
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)mode;
# 159
::exit(___);}
#if 0
# 157
{ 
# 158
__nv_tex_surf_handler("__isurf2DLayeredread", ptr, obj, x, y, layer, mode); 
# 159
} 
#endif
# 161 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 162
surf2DLayeredread(cudaSurfaceObject_t surfObject, int x, int y, int layer, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 163
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)layer;(void)boundaryMode;
# 167
::exit(___);}
#if 0
# 163
{ 
# 164
T ret; 
# 165
surf2DLayeredread(&ret, surfObject, x, y, layer, boundaryMode); 
# 166
return ret; 
# 167
} 
#endif
# 169 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 170
surfCubemapread(T *ptr, cudaSurfaceObject_t obj, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 171
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)face;(void)mode;
# 173
::exit(___);}
#if 0
# 171
{ 
# 172
__nv_tex_surf_handler("__isurfCubemapread", ptr, obj, x, y, face, mode); 
# 173
} 
#endif
# 175 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 176
surfCubemapread(cudaSurfaceObject_t surfObject, int x, int y, int face, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 177
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)face;(void)boundaryMode;
# 181
::exit(___);}
#if 0
# 177
{ 
# 178
T ret; 
# 179
surfCubemapread(&ret, surfObject, x, y, face, boundaryMode); 
# 180
return ret; 
# 181
} 
#endif
# 183 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 184
surfCubemapLayeredread(T *ptr, cudaSurfaceObject_t obj, int x, int y, int layerface, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 185
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layerface;(void)mode;
# 187
::exit(___);}
#if 0
# 185
{ 
# 186
__nv_tex_surf_handler("__isurfCubemapLayeredread", ptr, obj, x, y, layerface, mode); 
# 187
} 
#endif
# 189 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 190
surfCubemapLayeredread(cudaSurfaceObject_t surfObject, int x, int y, int layerface, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 191
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)layerface;(void)boundaryMode;
# 195
::exit(___);}
#if 0
# 191
{ 
# 192
T ret; 
# 193
surfCubemapLayeredread(&ret, surfObject, x, y, layerface, boundaryMode); 
# 194
return ret; 
# 195
} 
#endif
# 197 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 198
surf1Dwrite(T val, cudaSurfaceObject_t obj, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 199
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)mode;
# 201
::exit(___);}
#if 0
# 199
{ 
# 200
__nv_tex_surf_handler("__isurf1Dwrite_v2", &val, obj, x, mode); 
# 201
} 
#endif
# 203 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 204
surf2Dwrite(T val, cudaSurfaceObject_t obj, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 205
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)mode;
# 207
::exit(___);}
#if 0
# 205
{ 
# 206
__nv_tex_surf_handler("__isurf2Dwrite_v2", &val, obj, x, y, mode); 
# 207
} 
#endif
# 209 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 210
surf3Dwrite(T val, cudaSurfaceObject_t obj, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 211
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)z;(void)mode;
# 213
::exit(___);}
#if 0
# 211
{ 
# 212
__nv_tex_surf_handler("__isurf3Dwrite_v2", &val, obj, x, y, z, mode); 
# 213
} 
#endif
# 215 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 216
surf1DLayeredwrite(T val, cudaSurfaceObject_t obj, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 217
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)layer;(void)mode;
# 219
::exit(___);}
#if 0
# 217
{ 
# 218
__nv_tex_surf_handler("__isurf1DLayeredwrite_v2", &val, obj, x, layer, mode); 
# 219
} 
#endif
# 221 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 222
surf2DLayeredwrite(T val, cudaSurfaceObject_t obj, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 223
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)layer;(void)mode;
# 225
::exit(___);}
#if 0
# 223
{ 
# 224
__nv_tex_surf_handler("__isurf2DLayeredwrite_v2", &val, obj, x, y, layer, mode); 
# 225
} 
#endif
# 227 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 228
surfCubemapwrite(T val, cudaSurfaceObject_t obj, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 229
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)face;(void)mode;
# 231
::exit(___);}
#if 0
# 229
{ 
# 230
__nv_tex_surf_handler("__isurfCubemapwrite_v2", &val, obj, x, y, face, mode); 
# 231
} 
#endif
# 233 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 234
surfCubemapLayeredwrite(T val, cudaSurfaceObject_t obj, int x, int y, int layerface, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 235
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)layerface;(void)mode;
# 237
::exit(___);}
#if 0
# 235
{ 
# 236
__nv_tex_surf_handler("__isurfCubemapLayeredwrite_v2", &val, obj, x, y, layerface, mode); 
# 237
} 
#endif
# 3639 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/crt/device_functions.h"
extern "C" unsigned __cudaPushCallConfiguration(dim3 gridDim, dim3 blockDim, size_t sharedMem = 0, CUstream_st * stream = 0); 
# 68 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/device_launch_parameters.h"
extern "C" {
# 71
extern const uint3 __device_builtin_variable_threadIdx; 
# 72
extern const uint3 __device_builtin_variable_blockIdx; 
# 73
extern const dim3 __device_builtin_variable_blockDim; 
# 74
extern const dim3 __device_builtin_variable_gridDim; 
# 75
extern const int __device_builtin_variable_warpSize; 
# 80
}
# 62 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_relops.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 66
namespace rel_ops { 
# 86 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_relops.h" 3
template< class _Tp> inline bool 
# 88
operator!=(const _Tp &__x, const _Tp &__y) 
# 89
{ return !(__x == __y); } 
# 99 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_relops.h" 3
template< class _Tp> inline bool 
# 101
operator>(const _Tp &__x, const _Tp &__y) 
# 102
{ return __y < __x; } 
# 112 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_relops.h" 3
template< class _Tp> inline bool 
# 114
operator<=(const _Tp &__x, const _Tp &__y) 
# 115
{ return !(__y < __x); } 
# 125 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/bits/stl_relops.h" 3
template< class _Tp> inline bool 
# 127
operator>=(const _Tp &__x, const _Tp &__y) 
# 128
{ return !(__x < __y); } 
# 129
}
# 132
}
# 39 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/initializer_list" 3
#pragma GCC visibility push ( default )
# 43
namespace std { 
# 46
template< class _E> 
# 47
class initializer_list { 
# 50
public: typedef _E value_type; 
# 51
typedef const _E &reference; 
# 52
typedef const _E &const_reference; 
# 53
typedef size_t size_type; 
# 54
typedef const _E *iterator; 
# 55
typedef const _E *const_iterator; 
# 58
private: iterator _M_array; 
# 59
size_type _M_len; 
# 62
constexpr initializer_list(const_iterator __a, size_type __l) : _M_array(__a), _M_len(__l) 
# 63
{ } 
# 66
public: constexpr initializer_list() noexcept : _M_array((0)), _M_len((0)) 
# 67
{ } 
# 71
constexpr size_type size() const noexcept { return _M_len; } 
# 75
constexpr const_iterator begin() const noexcept { return _M_array; } 
# 79
constexpr const_iterator end() const noexcept { return begin() + size(); } 
# 80
}; 
# 88
template< class _Tp> constexpr const _Tp *
# 90
begin(initializer_list< _Tp>  __ils) noexcept 
# 91
{ return __ils.begin(); } 
# 99
template< class _Tp> constexpr const _Tp *
# 101
end(initializer_list< _Tp>  __ils) noexcept 
# 102
{ return __ils.end(); } 
# 103
}
# 105
#pragma GCC visibility pop
# 82 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/utility" 3
namespace std __attribute((__visibility__("default"))) { 
# 90
template< class _Tp, class _Up = _Tp> inline _Tp 
# 93
exchange(_Tp &__obj, _Up &&__new_val) noexcept(__and_< is_nothrow_move_constructible< _Tp> , is_nothrow_assignable< _Tp &, _Up> > ::value) 
# 96
{ return std::__exchange(__obj, std::forward< _Up> (__new_val)); } 
# 101
template< class _Tp> 
# 102
[[nodiscard]] constexpr add_const_t< _Tp>  &
# 104
as_const(_Tp &__t) noexcept 
# 105
{ return __t; } 
# 107
template < typename _Tp >
    void as_const ( const _Tp && ) = delete;
# 221 "/data/homezvol3/hsud8/.conda/envs/smat/x86_64-conda-linux-gnu/include/c++/12.3.0/utility" 3
}
# 206 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 207
cudaLaunchKernel(const T *
# 208
func, dim3 
# 209
gridDim, dim3 
# 210
blockDim, void **
# 211
args, size_t 
# 212
sharedMem = 0, cudaStream_t 
# 213
stream = 0) 
# 215
{ 
# 216
return ::cudaLaunchKernel((const void *)func, gridDim, blockDim, args, sharedMem, stream); 
# 217
} 
# 277 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
template< class ...ExpTypes, class ...ActTypes> static inline cudaError_t 
# 278
cudaLaunchKernelEx(const cudaLaunchConfig_t *
# 279
config, void (*
# 280
kernel)(ExpTypes ...), ActTypes &&...
# 281
args) 
# 283
{ 
# 284
return [&](ExpTypes ...coercedArgs) { 
# 285
void *pArgs[] = {(&coercedArgs)...}; 
# 286
return ::cudaLaunchKernelExC(config, (const void *)(kernel), pArgs); 
# 287
} (std::forward< ActTypes> (args)...); 
# 288
} 
# 340 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 341
cudaLaunchCooperativeKernel(const T *
# 342
func, dim3 
# 343
gridDim, dim3 
# 344
blockDim, void **
# 345
args, size_t 
# 346
sharedMem = 0, cudaStream_t 
# 347
stream = 0) 
# 349
{ 
# 350
return ::cudaLaunchCooperativeKernel((const void *)func, gridDim, blockDim, args, sharedMem, stream); 
# 351
} 
# 384 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaEventCreate(cudaEvent_t *
# 385
event, unsigned 
# 386
flags) 
# 388
{ 
# 389
return ::cudaEventCreateWithFlags(event, flags); 
# 390
} 
# 428 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaGraphInstantiate(cudaGraphExec_t *
# 429
pGraphExec, cudaGraph_t 
# 430
graph, cudaGraphNode_t *
# 431
pErrorNode, char *
# 432
pLogBuffer, size_t 
# 433
bufferSize) 
# 435
{ 
# 436
(void)pErrorNode; 
# 437
(void)pLogBuffer; 
# 438
(void)bufferSize; 
# 439
return ::cudaGraphInstantiate(pGraphExec, graph, 0); 
# 440
} 
# 499 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMallocHost(void **
# 500
ptr, size_t 
# 501
size, unsigned 
# 502
flags) 
# 504
{ 
# 505
return ::cudaHostAlloc(ptr, size, flags); 
# 506
} 
# 508
template< class T> static inline cudaError_t 
# 509
cudaHostAlloc(T **
# 510
ptr, size_t 
# 511
size, unsigned 
# 512
flags) 
# 514
{ 
# 515
return ::cudaHostAlloc((void **)((void *)ptr), size, flags); 
# 516
} 
# 518
template< class T> static inline cudaError_t 
# 519
cudaHostGetDevicePointer(T **
# 520
pDevice, void *
# 521
pHost, unsigned 
# 522
flags) 
# 524
{ 
# 525
return ::cudaHostGetDevicePointer((void **)((void *)pDevice), pHost, flags); 
# 526
} 
# 628 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 629
cudaMallocManaged(T **
# 630
devPtr, size_t 
# 631
size, unsigned 
# 632
flags = 1) 
# 634
{ 
# 635
return ::cudaMallocManaged((void **)((void *)devPtr), size, flags); 
# 636
} 
# 646 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
template< class T> cudaError_t 
# 647
cudaMemAdvise(T *
# 648
devPtr, size_t 
# 649
count, cudaMemoryAdvise 
# 650
advice, cudaMemLocation 
# 651
location) 
# 653
{ 
# 654
return ::cudaMemAdvise_v2((const void *)devPtr, count, advice, location); 
# 655
} 
# 657
template< class T> static inline cudaError_t 
# 658
cudaMemPrefetchAsync(T *
# 659
devPtr, size_t 
# 660
count, cudaMemLocation 
# 661
location, unsigned 
# 662
flags, cudaStream_t 
# 663
stream = 0) 
# 665
{ 
# 666
return ::cudaMemPrefetchAsync_v2((const void *)devPtr, count, location, flags, stream); 
# 667
} 
# 749 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 750
cudaStreamAttachMemAsync(cudaStream_t 
# 751
stream, T *
# 752
devPtr, size_t 
# 753
length = 0, unsigned 
# 754
flags = 4) 
# 756
{ 
# 757
return ::cudaStreamAttachMemAsync(stream, (void *)devPtr, length, flags); 
# 758
} 
# 760
template< class T> inline cudaError_t 
# 761
cudaMalloc(T **
# 762
devPtr, size_t 
# 763
size) 
# 765
{ 
# 766
return ::cudaMalloc((void **)((void *)devPtr), size); 
# 767
} 
# 769
template< class T> static inline cudaError_t 
# 770
cudaMallocHost(T **
# 771
ptr, size_t 
# 772
size, unsigned 
# 773
flags = 0) 
# 775
{ 
# 776
return cudaMallocHost((void **)((void *)ptr), size, flags); 
# 777
} 
# 779
template< class T> static inline cudaError_t 
# 780
cudaMallocPitch(T **
# 781
devPtr, size_t *
# 782
pitch, size_t 
# 783
width, size_t 
# 784
height) 
# 786
{ 
# 787
return ::cudaMallocPitch((void **)((void *)devPtr), pitch, width, height); 
# 788
} 
# 799 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMallocAsync(void **
# 800
ptr, size_t 
# 801
size, cudaMemPool_t 
# 802
memPool, cudaStream_t 
# 803
stream) 
# 805
{ 
# 806
return ::cudaMallocFromPoolAsync(ptr, size, memPool, stream); 
# 807
} 
# 809
template< class T> static inline cudaError_t 
# 810
cudaMallocAsync(T **
# 811
ptr, size_t 
# 812
size, cudaMemPool_t 
# 813
memPool, cudaStream_t 
# 814
stream) 
# 816
{ 
# 817
return ::cudaMallocFromPoolAsync((void **)((void *)ptr), size, memPool, stream); 
# 818
} 
# 820
template< class T> static inline cudaError_t 
# 821
cudaMallocAsync(T **
# 822
ptr, size_t 
# 823
size, cudaStream_t 
# 824
stream) 
# 826
{ 
# 827
return ::cudaMallocAsync((void **)((void *)ptr), size, stream); 
# 828
} 
# 830
template< class T> static inline cudaError_t 
# 831
cudaMallocFromPoolAsync(T **
# 832
ptr, size_t 
# 833
size, cudaMemPool_t 
# 834
memPool, cudaStream_t 
# 835
stream) 
# 837
{ 
# 838
return ::cudaMallocFromPoolAsync((void **)((void *)ptr), size, memPool, stream); 
# 839
} 
# 878 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 879
cudaMemcpyToSymbol(const T &
# 880
symbol, const void *
# 881
src, size_t 
# 882
count, size_t 
# 883
offset = 0, cudaMemcpyKind 
# 884
kind = cudaMemcpyHostToDevice) 
# 886
{ 
# 887
return ::cudaMemcpyToSymbol((const void *)(&symbol), src, count, offset, kind); 
# 888
} 
# 932 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 933
cudaMemcpyToSymbolAsync(const T &
# 934
symbol, const void *
# 935
src, size_t 
# 936
count, size_t 
# 937
offset = 0, cudaMemcpyKind 
# 938
kind = cudaMemcpyHostToDevice, cudaStream_t 
# 939
stream = 0) 
# 941
{ 
# 942
return ::cudaMemcpyToSymbolAsync((const void *)(&symbol), src, count, offset, kind, stream); 
# 943
} 
# 980 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 981
cudaMemcpyFromSymbol(void *
# 982
dst, const T &
# 983
symbol, size_t 
# 984
count, size_t 
# 985
offset = 0, cudaMemcpyKind 
# 986
kind = cudaMemcpyDeviceToHost) 
# 988
{ 
# 989
return ::cudaMemcpyFromSymbol(dst, (const void *)(&symbol), count, offset, kind); 
# 990
} 
# 1034 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1035
cudaMemcpyFromSymbolAsync(void *
# 1036
dst, const T &
# 1037
symbol, size_t 
# 1038
count, size_t 
# 1039
offset = 0, cudaMemcpyKind 
# 1040
kind = cudaMemcpyDeviceToHost, cudaStream_t 
# 1041
stream = 0) 
# 1043
{ 
# 1044
return ::cudaMemcpyFromSymbolAsync(dst, (const void *)(&symbol), count, offset, kind, stream); 
# 1045
} 
# 1103 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1104
cudaGraphAddMemcpyNodeToSymbol(cudaGraphNode_t *
# 1105
pGraphNode, cudaGraph_t 
# 1106
graph, const cudaGraphNode_t *
# 1107
pDependencies, size_t 
# 1108
numDependencies, const T &
# 1109
symbol, const void *
# 1110
src, size_t 
# 1111
count, size_t 
# 1112
offset, cudaMemcpyKind 
# 1113
kind) 
# 1114
{ 
# 1115
return ::cudaGraphAddMemcpyNodeToSymbol(pGraphNode, graph, pDependencies, numDependencies, (const void *)(&symbol), src, count, offset, kind); 
# 1116
} 
# 1174 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1175
cudaGraphAddMemcpyNodeFromSymbol(cudaGraphNode_t *
# 1176
pGraphNode, cudaGraph_t 
# 1177
graph, const cudaGraphNode_t *
# 1178
pDependencies, size_t 
# 1179
numDependencies, void *
# 1180
dst, const T &
# 1181
symbol, size_t 
# 1182
count, size_t 
# 1183
offset, cudaMemcpyKind 
# 1184
kind) 
# 1185
{ 
# 1186
return ::cudaGraphAddMemcpyNodeFromSymbol(pGraphNode, graph, pDependencies, numDependencies, dst, (const void *)(&symbol), count, offset, kind); 
# 1187
} 
# 1225 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1226
cudaGraphMemcpyNodeSetParamsToSymbol(cudaGraphNode_t 
# 1227
node, const T &
# 1228
symbol, const void *
# 1229
src, size_t 
# 1230
count, size_t 
# 1231
offset, cudaMemcpyKind 
# 1232
kind) 
# 1233
{ 
# 1234
return ::cudaGraphMemcpyNodeSetParamsToSymbol(node, (const void *)(&symbol), src, count, offset, kind); 
# 1235
} 
# 1273 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1274
cudaGraphMemcpyNodeSetParamsFromSymbol(cudaGraphNode_t 
# 1275
node, void *
# 1276
dst, const T &
# 1277
symbol, size_t 
# 1278
count, size_t 
# 1279
offset, cudaMemcpyKind 
# 1280
kind) 
# 1281
{ 
# 1282
return ::cudaGraphMemcpyNodeSetParamsFromSymbol(node, dst, (const void *)(&symbol), count, offset, kind); 
# 1283
} 
# 1331 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1332
cudaGraphExecMemcpyNodeSetParamsToSymbol(cudaGraphExec_t 
# 1333
hGraphExec, cudaGraphNode_t 
# 1334
node, const T &
# 1335
symbol, const void *
# 1336
src, size_t 
# 1337
count, size_t 
# 1338
offset, cudaMemcpyKind 
# 1339
kind) 
# 1340
{ 
# 1341
return ::cudaGraphExecMemcpyNodeSetParamsToSymbol(hGraphExec, node, (const void *)(&symbol), src, count, offset, kind); 
# 1342
} 
# 1390 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1391
cudaGraphExecMemcpyNodeSetParamsFromSymbol(cudaGraphExec_t 
# 1392
hGraphExec, cudaGraphNode_t 
# 1393
node, void *
# 1394
dst, const T &
# 1395
symbol, size_t 
# 1396
count, size_t 
# 1397
offset, cudaMemcpyKind 
# 1398
kind) 
# 1399
{ 
# 1400
return ::cudaGraphExecMemcpyNodeSetParamsFromSymbol(hGraphExec, node, dst, (const void *)(&symbol), count, offset, kind); 
# 1401
} 
# 1404
static inline cudaError_t cudaGraphExecUpdate(cudaGraphExec_t hGraphExec, cudaGraph_t hGraph, cudaGraphNode_t *hErrorNode_out, cudaGraphExecUpdateResult *updateResult_out) 
# 1405
{ 
# 1406
cudaGraphExecUpdateResultInfo resultInfo; 
# 1407
cudaError_t status = cudaGraphExecUpdate(hGraphExec, hGraph, &resultInfo); 
# 1408
if (hErrorNode_out) { 
# 1409
(*hErrorNode_out) = (resultInfo.errorNode); 
# 1410
}  
# 1411
if (updateResult_out) { 
# 1412
(*updateResult_out) = (resultInfo.result); 
# 1413
}  
# 1414
return status; 
# 1415
} 
# 1443 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1444
cudaUserObjectCreate(cudaUserObject_t *
# 1445
object_out, T *
# 1446
objectToWrap, unsigned 
# 1447
initialRefcount, unsigned 
# 1448
flags) 
# 1449
{ 
# 1450
return ::cudaUserObjectCreate(object_out, objectToWrap, [](void *
# 1453
vpObj) { delete (reinterpret_cast< T *>(vpObj)); } , initialRefcount, flags); 
# 1456
} 
# 1458
template< class T> static inline cudaError_t 
# 1459
cudaUserObjectCreate(cudaUserObject_t *
# 1460
object_out, T *
# 1461
objectToWrap, unsigned 
# 1462
initialRefcount, cudaUserObjectFlags 
# 1463
flags) 
# 1464
{ 
# 1465
return cudaUserObjectCreate(object_out, objectToWrap, initialRefcount, (unsigned)flags); 
# 1466
} 
# 1493 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1494
cudaGetSymbolAddress(void **
# 1495
devPtr, const T &
# 1496
symbol) 
# 1498
{ 
# 1499
return ::cudaGetSymbolAddress(devPtr, (const void *)(&symbol)); 
# 1500
} 
# 1525 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1526
cudaGetSymbolSize(size_t *
# 1527
size, const T &
# 1528
symbol) 
# 1530
{ 
# 1531
return ::cudaGetSymbolSize(size, (const void *)(&symbol)); 
# 1532
} 
# 1577 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1578
cudaFuncSetCacheConfig(T *
# 1579
func, cudaFuncCache 
# 1580
cacheConfig) 
# 1582
{ 
# 1583
return ::cudaFuncSetCacheConfig((const void *)func, cacheConfig); 
# 1584
} 
# 1586
template< class T> static inline cudaError_t 
# 1587
cudaFuncSetSharedMemConfig(T *
# 1588
func, cudaSharedMemConfig 
# 1589
config) 
# 1591
{ 
# 1592
return ::cudaFuncSetSharedMemConfig((const void *)func, config); 
# 1593
} 
# 1625 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t 
# 1626
cudaOccupancyMaxActiveBlocksPerMultiprocessor(int *
# 1627
numBlocks, T 
# 1628
func, int 
# 1629
blockSize, size_t 
# 1630
dynamicSMemSize) 
# 1631
{ 
# 1632
return ::cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(numBlocks, (const void *)func, blockSize, dynamicSMemSize, 0); 
# 1633
} 
# 1677 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t 
# 1678
cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int *
# 1679
numBlocks, T 
# 1680
func, int 
# 1681
blockSize, size_t 
# 1682
dynamicSMemSize, unsigned 
# 1683
flags) 
# 1684
{ 
# 1685
return ::cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(numBlocks, (const void *)func, blockSize, dynamicSMemSize, flags); 
# 1686
} 
# 1691
class __cudaOccupancyB2DHelper { 
# 1692
size_t n; 
# 1694
public: __cudaOccupancyB2DHelper(size_t n_) : n(n_) { } 
# 1695
size_t operator()(int) 
# 1696
{ 
# 1697
return n; 
# 1698
} 
# 1699
}; 
# 1747 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
template< class UnaryFunction, class T> static inline cudaError_t 
# 1748
cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(int *
# 1749
minGridSize, int *
# 1750
blockSize, T 
# 1751
func, UnaryFunction 
# 1752
blockSizeToDynamicSMemSize, int 
# 1753
blockSizeLimit = 0, unsigned 
# 1754
flags = 0) 
# 1755
{ 
# 1756
cudaError_t status; 
# 1759
int device; 
# 1760
cudaFuncAttributes attr; 
# 1763
int maxThreadsPerMultiProcessor; 
# 1764
int warpSize; 
# 1765
int devMaxThreadsPerBlock; 
# 1766
int multiProcessorCount; 
# 1767
int funcMaxThreadsPerBlock; 
# 1768
int occupancyLimit; 
# 1769
int granularity; 
# 1772
int maxBlockSize = 0; 
# 1773
int numBlocks = 0; 
# 1774
int maxOccupancy = 0; 
# 1777
int blockSizeToTryAligned; 
# 1778
int blockSizeToTry; 
# 1779
int blockSizeLimitAligned; 
# 1780
int occupancyInBlocks; 
# 1781
int occupancyInThreads; 
# 1782
size_t dynamicSMemSize; 
# 1788
if (((!minGridSize) || (!blockSize)) || (!func)) { 
# 1789
return cudaErrorInvalidValue; 
# 1790
}  
# 1796
status = ::cudaGetDevice(&device); 
# 1797
if (status != (cudaSuccess)) { 
# 1798
return status; 
# 1799
}  
# 1801
status = cudaDeviceGetAttribute(&maxThreadsPerMultiProcessor, cudaDevAttrMaxThreadsPerMultiProcessor, device); 
# 1805
if (status != (cudaSuccess)) { 
# 1806
return status; 
# 1807
}  
# 1809
status = cudaDeviceGetAttribute(&warpSize, cudaDevAttrWarpSize, device); 
# 1813
if (status != (cudaSuccess)) { 
# 1814
return status; 
# 1815
}  
# 1817
status = cudaDeviceGetAttribute(&devMaxThreadsPerBlock, cudaDevAttrMaxThreadsPerBlock, device); 
# 1821
if (status != (cudaSuccess)) { 
# 1822
return status; 
# 1823
}  
# 1825
status = cudaDeviceGetAttribute(&multiProcessorCount, cudaDevAttrMultiProcessorCount, device); 
# 1829
if (status != (cudaSuccess)) { 
# 1830
return status; 
# 1831
}  
# 1833
status = cudaFuncGetAttributes(&attr, func); 
# 1834
if (status != (cudaSuccess)) { 
# 1835
return status; 
# 1836
}  
# 1838
funcMaxThreadsPerBlock = (attr.maxThreadsPerBlock); 
# 1844
occupancyLimit = maxThreadsPerMultiProcessor; 
# 1845
granularity = warpSize; 
# 1847
if (blockSizeLimit == 0) { 
# 1848
blockSizeLimit = devMaxThreadsPerBlock; 
# 1849
}  
# 1851
if (devMaxThreadsPerBlock < blockSizeLimit) { 
# 1852
blockSizeLimit = devMaxThreadsPerBlock; 
# 1853
}  
# 1855
if (funcMaxThreadsPerBlock < blockSizeLimit) { 
# 1856
blockSizeLimit = funcMaxThreadsPerBlock; 
# 1857
}  
# 1859
blockSizeLimitAligned = (((blockSizeLimit + (granularity - 1)) / granularity) * granularity); 
# 1861
for (blockSizeToTryAligned = blockSizeLimitAligned; blockSizeToTryAligned > 0; blockSizeToTryAligned -= granularity) { 
# 1865
if (blockSizeLimit < blockSizeToTryAligned) { 
# 1866
blockSizeToTry = blockSizeLimit; 
# 1867
} else { 
# 1868
blockSizeToTry = blockSizeToTryAligned; 
# 1869
}  
# 1871
dynamicSMemSize = blockSizeToDynamicSMemSize(blockSizeToTry); 
# 1873
status = cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(&occupancyInBlocks, func, blockSizeToTry, dynamicSMemSize, flags); 
# 1880
if (status != (cudaSuccess)) { 
# 1881
return status; 
# 1882
}  
# 1884
occupancyInThreads = (blockSizeToTry * occupancyInBlocks); 
# 1886
if (occupancyInThreads > maxOccupancy) { 
# 1887
maxBlockSize = blockSizeToTry; 
# 1888
numBlocks = occupancyInBlocks; 
# 1889
maxOccupancy = occupancyInThreads; 
# 1890
}  
# 1894
if (occupancyLimit == maxOccupancy) { 
# 1895
break; 
# 1896
}  
# 1897
}  
# 1905
(*minGridSize) = (numBlocks * multiProcessorCount); 
# 1906
(*blockSize) = maxBlockSize; 
# 1908
return status; 
# 1909
} 
# 1943 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
template< class UnaryFunction, class T> static inline cudaError_t 
# 1944
cudaOccupancyMaxPotentialBlockSizeVariableSMem(int *
# 1945
minGridSize, int *
# 1946
blockSize, T 
# 1947
func, UnaryFunction 
# 1948
blockSizeToDynamicSMemSize, int 
# 1949
blockSizeLimit = 0) 
# 1950
{ 
# 1951
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, blockSizeToDynamicSMemSize, blockSizeLimit, 0); 
# 1952
} 
# 1989 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1990
cudaOccupancyMaxPotentialBlockSize(int *
# 1991
minGridSize, int *
# 1992
blockSize, T 
# 1993
func, size_t 
# 1994
dynamicSMemSize = 0, int 
# 1995
blockSizeLimit = 0) 
# 1996
{ 
# 1997
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, ((__cudaOccupancyB2DHelper)(dynamicSMemSize)), blockSizeLimit, 0); 
# 1998
} 
# 2027 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 2028
cudaOccupancyAvailableDynamicSMemPerBlock(size_t *
# 2029
dynamicSmemSize, T 
# 2030
func, int 
# 2031
numBlocks, int 
# 2032
blockSize) 
# 2033
{ 
# 2034
return ::cudaOccupancyAvailableDynamicSMemPerBlock(dynamicSmemSize, (const void *)func, numBlocks, blockSize); 
# 2035
} 
# 2086 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 2087
cudaOccupancyMaxPotentialBlockSizeWithFlags(int *
# 2088
minGridSize, int *
# 2089
blockSize, T 
# 2090
func, size_t 
# 2091
dynamicSMemSize = 0, int 
# 2092
blockSizeLimit = 0, unsigned 
# 2093
flags = 0) 
# 2094
{ 
# 2095
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, ((__cudaOccupancyB2DHelper)(dynamicSMemSize)), blockSizeLimit, flags); 
# 2096
} 
# 2130 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 2131
cudaOccupancyMaxPotentialClusterSize(int *
# 2132
clusterSize, T *
# 2133
func, const cudaLaunchConfig_t *
# 2134
config) 
# 2135
{ 
# 2136
return ::cudaOccupancyMaxPotentialClusterSize(clusterSize, (const void *)func, config); 
# 2137
} 
# 2173 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 2174
cudaOccupancyMaxActiveClusters(int *
# 2175
numClusters, T *
# 2176
func, const cudaLaunchConfig_t *
# 2177
config) 
# 2178
{ 
# 2179
return ::cudaOccupancyMaxActiveClusters(numClusters, (const void *)func, config); 
# 2180
} 
# 2213 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t 
# 2214
cudaFuncGetAttributes(cudaFuncAttributes *
# 2215
attr, T *
# 2216
entry) 
# 2218
{ 
# 2219
return ::cudaFuncGetAttributes(attr, (const void *)entry); 
# 2220
} 
# 2275 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 2276
cudaFuncSetAttribute(T *
# 2277
entry, cudaFuncAttribute 
# 2278
attr, int 
# 2279
value) 
# 2281
{ 
# 2282
return ::cudaFuncSetAttribute((const void *)entry, attr, value); 
# 2283
} 
# 2307 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 2308
cudaFuncGetName(const char **
# 2309
name, const T *
# 2310
func) 
# 2312
{ 
# 2313
return ::cudaFuncGetName(name, (const void *)func); 
# 2314
} 
# 2330 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 2331
cudaGetKernel(cudaKernel_t *
# 2332
kernelPtr, const T *
# 2333
entryFuncAddr) 
# 2335
{ 
# 2336
return ::cudaGetKernel(kernelPtr, (const void *)entryFuncAddr); 
# 2337
} 
# 2348 "/data/homezvol3/hsud8/.conda/envs/smat/bin/../include/cuda_runtime.h"
#pragma GCC diagnostic pop
# 64 "CMakeCUDACompilerId.cu"
const char *info_compiler = ("INFO:compiler[NVIDIA]"); 
# 66
const char *info_simulate = ("INFO:simulate[GNU]"); 
# 329 "CMakeCUDACompilerId.cu"
const char info_version[] = {'I', 'N', 'F', 'O', ':', 'c', 'o', 'm', 'p', 'i', 'l', 'e', 'r', '_', 'v', 'e', 'r', 's', 'i', 'o', 'n', '[', (('0') + ((12 / 10000000) % 10)), (('0') + ((12 / 1000000) % 10)), (('0') + ((12 / 100000) % 10)), (('0') + ((12 / 10000) % 10)), (('0') + ((12 / 1000) % 10)), (('0') + ((12 / 100) % 10)), (('0') + ((12 / 10) % 10)), (('0') + (12 % 10)), '.', (('0') + ((3 / 10000000) % 10)), (('0') + ((3 / 1000000) % 10)), (('0') + ((3 / 100000) % 10)), (('0') + ((3 / 10000) % 10)), (('0') + ((3 / 1000) % 10)), (('0') + ((3 / 100) % 10)), (('0') + ((3 / 10) % 10)), (('0') + (3 % 10)), '.', (('0') + ((107 / 10000000) % 10)), (('0') + ((107 / 1000000) % 10)), (('0') + ((107 / 100000) % 10)), (('0') + ((107 / 10000) % 10)), (('0') + ((107 / 1000) % 10)), (('0') + ((107 / 100) % 10)), (('0') + ((107 / 10) % 10)), (('0') + (107 % 10)), ']', '\000'}; 
# 356 "CMakeCUDACompilerId.cu"
const char info_simulate_version[] = {'I', 'N', 'F', 'O', ':', 's', 'i', 'm', 'u', 'l', 'a', 't', 'e', '_', 'v', 'e', 'r', 's', 'i', 'o', 'n', '[', (('0') + ((12 / 10000000) % 10)), (('0') + ((12 / 1000000) % 10)), (('0') + ((12 / 100000) % 10)), (('0') + ((12 / 10000) % 10)), (('0') + ((12 / 1000) % 10)), (('0') + ((12 / 100) % 10)), (('0') + ((12 / 10) % 10)), (('0') + (12 % 10)), '.', (('0') + ((3 / 10000000) % 10)), (('0') + ((3 / 1000000) % 10)), (('0') + ((3 / 100000) % 10)), (('0') + ((3 / 10000) % 10)), (('0') + ((3 / 1000) % 10)), (('0') + ((3 / 100) % 10)), (('0') + ((3 / 10) % 10)), (('0') + (3 % 10)), ']', '\000'}; 
# 376
const char *info_platform = ("INFO:platform[Linux]"); 
# 377
const char *info_arch = ("INFO:arch[]"); 
# 381
const char *info_language_dialect_default = ("INFO:dialect_default[17]"); 
# 399
int main(int argc, char *argv[]) 
# 400
{ 
# 401
int require = 0; 
# 402
require += (info_compiler[argc]); 
# 403
require += (info_platform[argc]); 
# 405
require += (info_version[argc]); 
# 408
require += (info_simulate[argc]); 
# 411
require += (info_simulate_version[argc]); 
# 413
require += (info_language_dialect_default[argc]); 
# 414
(void)argv; 
# 415
return require; 
# 416
} 

# 1 "CMakeCUDACompilerId.cudafe1.stub.c"
#define _NV_ANON_NAMESPACE _GLOBAL__N__3c9d27dc_22_CMakeCUDACompilerId_cu_bd57c623
#ifdef _NV_ANON_NAMESPACE
#endif
# 1 "CMakeCUDACompilerId.cudafe1.stub.c"
#include "CMakeCUDACompilerId.cudafe1.stub.c"
# 1 "CMakeCUDACompilerId.cudafe1.stub.c"
#undef _NV_ANON_NAMESPACE
