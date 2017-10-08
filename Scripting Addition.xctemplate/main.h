#ifndef main_h
#define main_h

#include <CoreServices/CoreServices.h>

#define AE_EVENT_HANDLER(name) OSErr name(const AppleEvent *event, AppleEvent *reply, SRefCon refcon)

#endif /* main_h */
