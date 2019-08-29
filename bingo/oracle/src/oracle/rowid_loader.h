/****************************************************************************
 * Copyright (C) from 2009 to Present EPAM Systems.
 * 
 * This file is part of Indigo toolkit.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 * http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ***************************************************************************/

#ifndef __rowid_loader_h__
#define __rowid_loader_h__

#include "base_cpp/bitinworker.h"
#include "lzw/lzw_dictionary.h"
#include "lzw/lzw_decoder.h"

using namespace indigo;

namespace indigo
{
   class Molecule;
   class Scanner;
}

class RowIDLoader
{
public:

   DECL_ERROR;

   RowIDLoader( LzwDict &NewDict, Scanner &NewIn );

   void loadRowID( Array<char> &RowId );

private:

   int _getNextCode( void );

   LzwDecoder _decoder;

   // no implicit copy
   RowIDLoader( const RowIDLoader & );

};

#endif /* __rowid_loader_h__ */

/* END OF 'ROWID_LOADER.H' FILE */
