/* IL2CPP: Rotatelab.RemoteConfigManager$$GetInt
int32_t Rotatelab_RemoteConfigManager__GetInt (Rotatelab_RemoteConfigManager_o* __this, System_String_o* key, int32_t defaultValue, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.RemoteConfigManager$$GetInt
   int32_t Rotatelab_RemoteConfigManager__GetInt (Rotatelab_RemoteConfigManager_o* __this,
   System_String_o* key, int32_t defaultValue, const MethodInfo* method); */

undefined4
Rotatelab_RemoteConfigManager__GetInt_1074c04
          (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack_c;
  
  uStack_c = 0;
  iVar1 = Rotatelab_RemoteConfigManager__GetString_1074ad8();
  if (iVar1 != 0) {
    iVar1 = System_Int32__TryParse_2b6c230(iVar1,&uStack_c,0);
    if (iVar1 != 0) {
      param_3 = uStack_c;
    }
  }
  return param_3;
}

