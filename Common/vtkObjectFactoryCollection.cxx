/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkObjectFactoryCollection.cxx
  Language:  C++
  Date:      $Date$
  Version:   $Revision$

  Copyright (c) 1993-2002 Ken Martin, Will Schroeder, Bill Lorensen 
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even 
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR 
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
#include "vtkObjectFactoryCollection.h"

#include "vtkDebugLeaks.h"

vtkCxxRevisionMacro(vtkObjectFactoryCollection, "1.4");

//----------------------------------------------------------------------------
// Needed when we don't use the vtkStandardNewMacro.
vtkInstantiatorNewMacro(vtkObjectFactoryCollection);

vtkObjectFactoryCollection* vtkObjectFactoryCollection::New() 
{
#ifdef VTK_DEBUG_LEAKS
  vtkDebugLeaks::ConstructClass("vtkObjectFactoryCollection");
#endif    
  return new vtkObjectFactoryCollection;
}

