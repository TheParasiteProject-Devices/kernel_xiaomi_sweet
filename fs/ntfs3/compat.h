/* SPDX-License-Identifier: GPL-2.0 */

#define NTFS3_BITMAP_SET(a, b, c)	bitmap_set(a, b, c)
#define NTFS3_BITMAP_CLEAR(a, b, c)	bitmap_clear(a, b, c)

/*
 * Copy from include/linux/compiler_attributes.h
 */
#define NTFS3_HAS_ATTRIBUTE(x) 0

#if NTFS3_HAS_ATTRIBUTE(__fallthrough__)
#define NTFS3_FALLTHROUGH __attribute__((__fallthrough__))
#else
#define NTFS3_FALLTHROUGH do {} while (0)  /* fallthrough */
#endif

/*
 * Copy from include/linux/build_bug.h
 */
#ifndef static_assert
#define static_assert(expr, ...) __static_assert(expr, ##__VA_ARGS__, #expr)
#define __static_assert(expr, msg, ...) _Static_assert(expr, msg)
#endif

/*
 * Copy from include/linux/overflow.h
 */
#ifndef struct_size
#define struct_size(p, member, n) (sizeof(*(p)) + n * sizeof(*(p)->member))
#endif
