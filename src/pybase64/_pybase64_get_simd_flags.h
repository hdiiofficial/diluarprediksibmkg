#define PYBASE64_NONE       0x00000000

#define PYBASE64_SSE2       0x00000001
#define PYBASE64_SSE3       0x00000002
#define PYBASE64_SSSE3      0x00000004
#define PYBASE64_SSE41      0x00000008
#define PYBASE64_SSE42      0x00000010
#define PYBASE64_AVX        0x00000020
#define PYBASE64_AVX2       0x00000040
#define PYBASE64_AVX512VBMI 0x00000080

#define PYBASE64_NEON       0x00010000

#include <stdint.h>

uint32_t pybase64_get_simd_flags(void);
