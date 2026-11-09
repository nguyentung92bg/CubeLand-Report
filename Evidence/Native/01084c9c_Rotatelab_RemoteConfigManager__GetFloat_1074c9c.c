/* IL2CPP: Rotatelab.RemoteConfigManager$$GetFloat
float Rotatelab_RemoteConfigManager__GetFloat (Rotatelab_RemoteConfigManager_o* __this, System_String_o* key, float defaultValue, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RemoteConfigManager$$GetFloat
   float Rotatelab_RemoteConfigManager__GetFloat (Rotatelab_RemoteConfigManager_o* __this,
   System_String_o* key, float defaultValue, const MethodInfo* method); */

undefined4
Rotatelab_RemoteConfigManager__GetFloat_1074c9c
          (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_01084d60 + 0x1084cc0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01084d64 + 0x1084cd4));
    *pcVar3 = '\x01';
  }
  uStack_24 = 0;
  iVar1 = Rotatelab_RemoteConfigManager__GetString_1074ad8(param_1,param_2,0);
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_01084d68 + 0x1084d10) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar2 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
    iVar1 = System_Single__TryParse_2b85998(iVar1,0x1ff,uVar2,&uStack_24,0);
    if (iVar1 != 0) {
      param_3 = uStack_24;
    }
  }
  return param_3;
}

