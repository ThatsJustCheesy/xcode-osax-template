#ifndef main_h
#define main_h

#include <CoreServices/CoreServices.h>

#define AE_EVENT_HANDLER(func_name) pascal OSErr func_name(const AppleEvent *theAppleEvent, AppleEvent *reply, SRefCon handlerRefcon)

#endif /* main_h */
