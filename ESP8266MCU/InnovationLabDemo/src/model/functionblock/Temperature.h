// Temperature

#ifndef __MODEL_TEMPERATURE_H__
#define __MODEL_TEMPERATURE_H__

#include <WString.h>

#include "../datatype/entity/SensorValue.h"

namespace org_eclipse_vorto {
    class Temperature
    {
        public:
            Temperature();
            
            void setvalue(org_eclipse_vorto_types::SensorValue value);
            org_eclipse_vorto_types::SensorValue getvalue();

            String serialize(String ditto_namespace, String hono_deviceId, String fbName);
        private:
            org_eclipse_vorto_types::SensorValue value;
    };
}

#endif // __MODEL_TEMPERATURE_H__
