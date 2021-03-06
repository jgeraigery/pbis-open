/* Editor Settings: expandtabs and use 4 spaces for indentation
 * ex: set softtabstop=4 tabstop=8 expandtab shiftwidth=4: *
 */

/*
 * Copyright © BeyondTrust Software 2004 - 2019
 * All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * BEYONDTRUST MAKES THIS SOFTWARE AVAILABLE UNDER OTHER LICENSING TERMS AS
 * WELL. IF YOU HAVE ENTERED INTO A SEPARATE LICENSE AGREEMENT WITH
 * BEYONDTRUST, THEN YOU MAY ELECT TO USE THE SOFTWARE UNDER THE TERMS OF THAT
 * SOFTWARE LICENSE AGREEMENT INSTEAD OF THE TERMS OF THE APACHE LICENSE,
 * NOTWITHSTANDING THE ABOVE NOTICE.  IF YOU HAVE QUESTIONS, OR WISH TO REQUEST
 * A COPY OF THE ALTERNATE LICENSING TERMS OFFERED BY BEYONDTRUST, PLEASE CONTACT
 * BEYONDTRUST AT beyondtrust.com/contact
 */

/*
 * Copyright (C) BeyondTrust Software. All rights reserved.
 *
 * Module Name:
 *
 *        api.h
 *
 * Abstract:
 *
 *        Registry
 *
 *        LSA Server API (Private Header)
 *
 * Authors: Krishna Ganugapati (krishnag@likewisesoftware.com)
 *          Sriram Nambakam (snambakam@likewisesoftware.com)
 *          Marc Guy (mguy@likewisesoftware.com)
 */

#ifndef INCLUDES_H_
#define INCLUDES_H_

#include "config.h"

#include "regsystem.h"
#include <sqlite3.h>
#include <uuid/uuid.h>
#include <lw/base.h>
#include <lw/ntstatus.h>
#include <lw/rtlstring.h>
#include <lw/rtlmemory.h>

#include <lwmsg/lwmsg.h>

#include <reg/lwntreg.h>
#include <regdef.h>

#include "regutils.h"
#include "regsrvutils.h"

#include "regsqlite.h"
#include "regserver.h"
#include "regipc.h"
#include "regprovspi.h"

#include "structs.h"
#include "sqldb_p.h"
#include "sqldb_schema_p.h"
#include "sqldb_create.h"
#include "sqldb_create_schema.h"
#include "sqlitehelper.h"
#include "sqliteapi_p.h"
#include "sqlitecache_p.h"
#include "sqliteapi.h"

#include "externs.h"




#endif /* INCLUDES_H_ */
