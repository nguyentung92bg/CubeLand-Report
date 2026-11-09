/* IL2CPP: Rotatelab.RemoteConfigManager$$GetDouble
double Rotatelab_RemoteConfigManager__GetDouble (Rotatelab_RemoteConfigManager_o* __this, System_String_o* key, double defaultValue, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RemoteConfigManager$$GetDouble
   double Rotatelab_RemoteConfigManager__GetDouble (Rotatelab_RemoteConfigManager_o* __this,
   System_String_o* key, double defaultValue, const MethodInfo* method); */

undefined8
Rotatelab_RemoteConfigManager__GetDouble_1074d6c
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_01084e38 + 0x1084d90);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01084e3c + 0x1084da8));
    *pcVar3 = '\x01';
  }
  uStack_24 = 0;
  uStack_28 = 0;
  iVar1 = Rotatelab_RemoteConfigManager__GetString_1074ad8(param_1,param_2,0);
  uVar4 = CONCAT44(param_4,param_3);
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_01084e40 + 0x1084de8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar2 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
    iVar1 = System_Double__TryParse_2b52500(iVar1,0x1ff,uVar2,&uStack_28,0);
    if (iVar1 != 0) {
      uVar4 = CONCAT44(uStack_24,uStack_28);
    }
  }
  return uVar4;
}

