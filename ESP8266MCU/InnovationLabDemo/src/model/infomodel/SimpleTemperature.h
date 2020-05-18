// SimpleTemperature

#ifndef __INFOMODEL_SIMPLETEMPERATURE_H__
#define __INFOMODEL_SIMPLETEMPERATURE_H__

#include <WString.h>

#include "../functionblock/Temperature.h"

namespace com_bosch_iotacademy_tutorial {
    class SimpleTemperature
    {
       public:
            SimpleTemperature();

            org_eclipse_vorto::Temperature temperature;

            String serialize();
        private:
    };
}

#endif // __INFOMODEL_SIMPLETEMPERATURE_H__
