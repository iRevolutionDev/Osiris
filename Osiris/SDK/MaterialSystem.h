#pragma once

#include "Material.h"
#include "Utils.h"

class MaterialSystem {
public:
    Material* findMaterial(std::string_view materialName)
    {
        return callVirtualFunction<Material*(__thiscall*)(void*, const char*, const char*, bool, const char*)>(this, 84)(this, materialName.data(), nullptr, true, nullptr);
    }
};
