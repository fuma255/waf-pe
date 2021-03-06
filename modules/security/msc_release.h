/*
* ModSecurity for Apache 2.x, http://www.modsecurity.org/
* Copyright (c) 2004-2011 Trustwave Holdings, Inc. (http://www.trustwave.com/)
*
* You may not use this file except in compliance with
* the License.  You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* If any of the files related to licensing are missing or if you have any
* other questions related to licensing please contact Trustwave Holdings, Inc.
* directly using the email address security@modsecurity.org.
*/

#ifndef _MSC_RELEASE_H_
#define _MSC_RELEASE_H_

#include <stdlib.h>
#include <string.h>

/* ENH: Clean this mess up by detecting this is possible */
#if !(defined(_AIX) || defined(WIN32) || defined(CYGWIN) || defined(NETWARE) || defined(SOLARIS2) || defined(OSF1))
#define DSOLOCAL __attribute__((visibility("hidden")))
#else
#define DSOLOCAL
#endif

#if defined(DEBUG_MEM)
/* Nothing Yet */
#endif

/* For GNU C, tell the compiler to check printf like formatters */
#if (defined(__GNUC__) && !defined(SOLARIS2))
#define PRINTF_ATTRIBUTE(a,b) __attribute__((format (printf, a, b)))
#else
#define PRINTF_ATTRIBUTE(a,b)
#endif

#define MODSEC_VERSION_MAJOR       "1"
#define MODSEC_VERSION_MINOR       "0"
#define MODSEC_VERSION_MAINT       "0"
#define MODSEC_VERSION_BUILD	   "712"
#define MODSEC_VERSION_TYPE        ""
#define MODSEC_VERSION_RELEASE     "7067"

#define MODSEC_VERSION_SUFFIX MODSEC_VERSION_TYPE MODSEC_VERSION_RELEASE

#define MODSEC_VERSION_DEBUG_VERSION \
    MODSEC_VERSION_MAJOR "." MODSEC_VERSION_MINOR "." MODSEC_VERSION_MAINT "-" \
    MODSEC_VERSION_BUILD
#define MODSEC_VERSION \
  MODSEC_VERSION_MAJOR "." MODSEC_VERSION_MINOR "." MODSEC_VERSION_MAINT \
  
/* Apache Module Defines */
#define MODSEC_MODULE_NAME "ModSecurity for Apache"
#define MODSEC_MODULE_VERSION MODSEC_VERSION
//#define MODSEC_MODULE_NAME_FULL MODSEC_MODULE_NAME "/" MODSEC_MODULE_VERSION " (http://www.modsecurity.org/)"
#define MODSEC_MODULE_NAME_FULL  "Security" "/" MODSEC_MODULE_VERSION

int DSOLOCAL get_modsec_build_type(const char *name);

#endif /* _MSC_RELEASE_H_ */
