// SimpleHumidity

#ifndef __INFOMODEL_SIMPLEHUMIDITY_H__
#define __INFOMODEL_SIMPLEHUMIDITY_H__

#include <WString.h>

#include "../functionblock/Humidity.h"

namespace com_bosch_iotacademy_tutorial {
    class SimpleHumidity
    {
       public:
            SimpleHumidity();

            org_eclipse_vorto::Humidity humidity;

            String serialize();
        private:
    };
}

#endif // __INFOMODEL_SIMPLEHUMIDITY_H__
