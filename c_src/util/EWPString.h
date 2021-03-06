/**
 * Copyright (c) 2009-2010 Beijing RYTong Information Technologies, Ltd.
 * All rights reserved.
 *
 * The contents of this file are subject to the Erlang Database Driver
 * Public License Version 1.0, (the "License"); you may not use this 
 * file except in compliance with the License. You should have received
 * a copy of the Erlang Database Driver Public License along with this
 * software. If not, it can be retrieved via the world wide web at
 * http://www.rytong.com/.
 *
 * Software distributed under the License is distributed on an "AS IS"
 * basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See
 * the License for the specific language governing rights and limitations
 * under the License.
 */

#ifndef _RYT_EWP_STRING_H
#define _RYT_EWP_STRING_H

#include <stdio.h>

namespace rytong {

char * ewp_strcpy (char *dst, const char* src);

char * ewp_strncpy (char *dst, const char *src, size_t size);

int ewp_strcmp (const char *s1, const char *s2);

}/* end of namespace rytong */

#endif /* _RYT_EWP_STRING_H */
