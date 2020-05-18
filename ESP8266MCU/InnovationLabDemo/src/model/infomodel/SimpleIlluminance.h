// SimpleIlluminance

#ifndef __INFOMODEL_SIMPLEILLUMINANCE_H__
#define __INFOMODEL_SIMPLEILLUMINANCE_H__

#include <WString.h>

#include "../functionblock/Illuminance.h"

namespace com_bosch_iotacademy_tutorial {
    class SimpleIlluminance
    {
       public:
            SimpleIlluminance();

            org_eclipse_vorto::Illuminance illuminance;

            String serialize();
        private:
    };
}

#endif // __INFOMODEL_SIMPLEILLUMINANCE_H__
