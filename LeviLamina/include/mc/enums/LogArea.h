#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class LogArea : int {
    Actor           = 0x0,
    Addon           = 0x1,
    AI              = 0x2,
    Animation       = 0x3,
    AutomatedTests  = 0x4,
    BiomeRegistry   = 0x5,
    Blocks          = 0x6,
    Camera          = 0x7,
    Commands        = 0x8,
    Components      = 0x9,
    Dialogue        = 0xA,
    Effects         = 0xB,
    Entity          = 0xC,
    FeatureRegistry = 0xD,
    Geometry        = 0xE,
    Item            = 0xF,
    Json            = 0x10,
    LevelStorage    = 0x11,
    Lighting        = 0x12,
    Localization    = 0x13,
    Log             = 0x14,
    Molang          = 0x15,
    Messaging       = 0x16,
    Recipes         = 0x17,
    Rendering       = 0x18,
    RuntimeCamera   = 0x19,
    Scripting       = 0x1A,
    Sound           = 0x1B,
    Store           = 0x1C,
    Structure       = 0x1D,
    Texture         = 0x1E,
    UI              = 0x1F,
    Volumes         = 0x20,
    LootTable       = 0x21,
    Packs           = 0x22
};