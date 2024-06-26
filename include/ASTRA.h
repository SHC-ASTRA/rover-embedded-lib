/**
 * @file ASTRA.h
 * @author David Sharpe (ds0196@uah.edu)
 * @brief 
 * @version 0.1
 * @date 2024-06-28
 * 
 */
#pragma once


#if __has_include("AstraSELECTOR.h")

#include "AstraSELECTOR.h"

#if defined(CORE)
#include "project/CORE.h"

#elif defined(ARM)
#include "project/ARM.h"

#elif defined(WRIST)
#include "project/WRIST.h"

#elif defined(FAERIE)
#include "project/FAERIE.h"

#elif defined(CITADEL)
#include "project/CITADEL.h"

#else
#warning "Please uncomment the relevant `#define` statement in `/include/AstraSELECTOR.h`."

#endif  // defined(CORE)

#else  // Project does not have selector header.
// TODO: Why the actual fuck does this run when __has_include() returns true?????
//#error "Please create `/include/AstraSELECTOR.h` and uncomment the relevant `#define` statement."
#warning "Please create `/include/AstraSELECTOR.h` and uncomment the relevant `#define` statement."

#endif  // __has_include("AstraSELECTOR.h")
