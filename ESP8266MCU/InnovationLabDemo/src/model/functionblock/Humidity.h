// Humidity

#ifndef __MODEL_HUMIDITY_H__
#define __MODEL_HUMIDITY_H__

#include <WString.h>

#include "../datatype/entity/SensorValue.h"

namespace org_eclipse_vorto {
    class Humidity
    {
        public:
            Humidity();
            
            void setvalue(org_eclipse_vorto_types::SensorValue value);
            org_eclipse_vorto_types::SensorValue getvalue();

            String serialize(String ditto_namespace, String hono_deviceId, String fbName);
        private:
            org_eclipse_vorto_types::SensorValue value;
    };
}

#endif // __MODEL_HUMIDITY_H__
