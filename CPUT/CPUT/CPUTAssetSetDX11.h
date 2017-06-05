/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2017 Intel Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or imlied.
// See the License for the specific language governing permissions and
// limitations under the License.
/////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __CPUTASSETSETDX11_H__
#define __CPUTASSETSETDX11_H__

#include "CPUTAssetSet.h"

class CPUTAssetSetDX11 : public CPUTAssetSet
{
public:
    static CPUTAssetSet *CreateAssetSet( const cString &name, const cString &absolutePathAndFilename );

    CPUTAssetSetDX11() : CPUTAssetSet() {}
    virtual ~CPUTAssetSetDX11();
    virtual CPUTResult LoadAssetSet(cString name);
};

#endif // #ifndef __CPUTASSETSETDX11_H__
