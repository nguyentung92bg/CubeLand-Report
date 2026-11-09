/* IL2CPP: Rotatelab.RemoteConfigManager$$GetString
System_String_o* Rotatelab_RemoteConfigManager__GetString (Rotatelab_RemoteConfigManager_o* __this, System_String_o* key, System_String_o* defaultValue, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RemoteConfigManager$$GetString
   System_String_o* Rotatelab_RemoteConfigManager__GetString (Rotatelab_RemoteConfigManager_o*
   __this, System_String_o* key, System_String_o* defaultValue, const MethodInfo* method); */

int Rotatelab_RemoteConfigManager__GetString_1074ad8(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_01084bf0 + 0x1084af8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01084bf4 + 0x1084b0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01084bf8 + 0x1084b18));
    *pcVar6 = '\x01';
  }
  piVar5 = *(int **)(param_1 + 0x10);
  uStack_24 = 0;
  uStack_28 = 0;
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *piVar5;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01084bfc + 0x1084b4c)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xf8);
        goto LAB_01084b94;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(piVar5,**(int **)(_UNK_01084bfc + 0x1084b4c),7);
LAB_01084b94:
  iVar1 = (*(code *)*puVar2)(piVar5,param_2,&uStack_28,puVar2[1]);
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_01084c00 + 0x1084bc0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = Firebase_RemoteConfig_ConfigValue__get_StringValue_120decc(&uStack_28,0);
    if (iVar1 != 0) {
      param_3 = iVar1;
    }
  }
  return param_3;
}

