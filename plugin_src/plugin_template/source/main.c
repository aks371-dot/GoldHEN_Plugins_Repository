#include <stdint.h>
#include <Common.h>
#include <GoldHEN.h>

attr_public const char *g_pluginName = "FortniteMenu";
attr_public const char *g_pluginDesc = "Menu de prueba";
attr_public const char *g_pluginAuth = "FortniteMenu";
attr_public uint32_t g_pluginVersion = 0x00000100;

int32_t attr_public plugin_load(int32_t argc, const char *argv[]) {
    printf_notification("FortniteMenu cargado");
    return 0;
}

int32_t attr_public plugin_unload(int32_t argc, const char *argv[]) {
    return 0;
}
