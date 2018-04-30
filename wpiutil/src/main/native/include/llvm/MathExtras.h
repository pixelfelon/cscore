/*----------------------------------------------------------------------------*/
/* Copyright (c) 2016-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#ifdef _MSC_VER
#pragma message "warning: llvm/MathExtras.h is deprecated; include wpi/MathExtras.h instead"
#else
#warning "llvm/MathExtras.h is deprecated; include wpi/MathExtras.h instead"
#endif

#include "wpi/MathExtras.h"

namespace llvm = wpi;
