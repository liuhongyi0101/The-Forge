#pragma once

#include "../Components/WorldBoundsComponent.h"
#include "../../../../../Middleware_3/ECS/ComponentRepresentation.h"

FORGE_START_GENERATE_COMPONENT_REPRESENTATION(WorldBoundsComponent)

FORGE_REGISTER_COMPONENT_VAR(xMin)
FORGE_REGISTER_COMPONENT_VAR(xMax)
FORGE_REGISTER_COMPONENT_VAR(yMin)
FORGE_REGISTER_COMPONENT_VAR(yMax)

FORGE_END_GENERATE_COMPONENT_REPRESENTATION