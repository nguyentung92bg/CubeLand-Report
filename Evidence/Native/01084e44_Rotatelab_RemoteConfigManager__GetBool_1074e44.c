/* IL2CPP: Rotatelab.RemoteConfigManager$$GetBool
bool Rotatelab_RemoteConfigManager__GetBool (Rotatelab_RemoteConfigManager_o* __this, System_String_o* key, bool defaultValue, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RemoteConfigManager$$GetBool
   bool Rotatelab_RemoteConfigManager__GetBool (Rotatelab_RemoteConfigManager_o* __this,
   System_String_o* key, bool defaultValue, const MethodInfo* method); */

undefined4
Rotatelab_RemoteConfigManager__GetBool_1074e44
          (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cStack_11;
  
  cStack_11 = '\0';
  iVar1 = Rotatelab_RemoteConfigManager__GetString_1074ad8();
  if (iVar1 != 0) {
    if (*(int *)(*(int *)(*(int *)(_UNK_01084eb4 + 0x1084e74) + 0x14) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = System_Boolean__TryParse_2b15024(iVar1,&cStack_11,0);
    if ((iVar1 != 0) && (param_3 = 0, cStack_11 != '\0')) {
      param_3 = 1;
    }
  }
  return param_3;
}

