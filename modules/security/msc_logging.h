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
#ifndef _MSC_LOGGING_H_
#define _MSC_LOGGING_H_

#define AUDITLOG_OFF                         0
#define AUDITLOG_ON                          1
#define ACCESSLOG_OFF                         0
#define ACCESSLOG_ON                          1

#define AUDITLOG_RELEVANT                    2

#define AUDITLOG_SERIAL                      0
#define AUDITLOG_CONCURRENT                  1

#define AUDITLOG_PART_FIRST                 'A'
#define AUDITLOG_PART_HEADER                'A'
#define AUDITLOG_PART_REQUEST_HEADERS       'B'
#define AUDITLOG_PART_REQUEST_BODY          'C'
#define AUDITLOG_PART_RESPONSE_HEADERS      'D'
#define AUDITLOG_PART_RESPONSE_BODY         'E'
#define AUDITLOG_PART_A_RESPONSE_HEADERS    'F'
#define AUDITLOG_PART_A_RESPONSE_BODY       'G'
#define AUDITLOG_PART_TRAILER               'H'
#define AUDITLOG_PART_FAKE_REQUEST_BODY     'I'
#define AUDITLOG_PART_UPLOADS               'J'
#define AUDITLOG_PART_MATCHEDRULES          'K'
#define AUDITLOG_PART_LAST                  'K'
#define AUDITLOG_PART_ENDMARKER             'Z'

#include "modsecurity.h"
#include "apr_pools.h"

void DSOLOCAL attack_log_process(modsec_rec *msr);

#endif

