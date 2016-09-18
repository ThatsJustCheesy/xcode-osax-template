#include "main.h"


AE_EVENT_HANDLER(handleEvent) {
	OSErr err;
	// Do some processing...
	char data = 1;
	err = AEPutParamPtr(reply, keyDirectObject, typeTrue, &data, sizeof(char));
	return err;
}