#include "main.h"

AE_EVENT_HANDLER(handleEvent) {
	OSErr err;
    
	// Do some processing...
    
	char true_data = 1;
	err = AEPutParamPtr(reply, keyDirectObject, typeBoolean, &true_data, sizeof true_data);
    
	return err;
}
