
#ifndef _SYS_FILE_H
#define _SYS_FILE_H

#ifndef _MSC_VER
#error "Use this header only with Microsoft Visual C++ compilers!"
#endif

// include everywhere
#include <sys/types.h>

#include <fcntl.h>

#define L_SET  0
#define L_CURR 1
#define L_INCR 1
#define L_XTND 2

#define	F_OK		0	/* does file exist */
#define	X_OK		1	/* is it executable by caller */
#define	W_OK		2	/* is it writable by caller */
#define	R_OK		4	/* is it readable by caller */

#endif  // _SYS_FILE_H