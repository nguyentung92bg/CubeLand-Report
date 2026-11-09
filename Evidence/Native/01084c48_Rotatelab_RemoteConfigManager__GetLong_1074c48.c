/* IL2CPP: Rotatelab.RemoteConfigManager$$GetLong
int64_t Rotatelab_RemoteConfigManager__GetLong (Rotatelab_RemoteConfigManager_o* __this, System_String_o* key, int64_t defaultValue, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.RemoteConfigManager$$GetLong
   int64_t Rotatelab_RemoteConfigManager__GetLong (Rotatelab_RemoteConfigManager_o* __this,
   System_String_o* key, int64_t defaultValue, const MethodInfo* method); */

undefined8
Rotatelab_RemoteConfigManager__GetLong_1074c48
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  uStack_18 = 0;
  iVar1 = Rotatelab_RemoteConfigManager__GetString_1074ad8();
  if ((iVar1 != 0) && (iVar1 = System_Int64__TryParse_2b6ddbc(iVar1,&uStack_18,0), iVar1 != 0)) {
    param_4 = uStack_14;
    param_3 = uStack_18;
  }
  return CONCAT44(param_4,param_3);
}

