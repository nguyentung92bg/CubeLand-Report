/* IL2CPP: Rotatelab.SingletonConfigurationAttribute$$GetSingletonPath
System_String_o* Rotatelab_SingletonConfigurationAttribute__GetSingletonPath (System_Type_o* type, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SingletonConfigurationAttribute$$GetSingletonPath
   System_String_o* Rotatelab_SingletonConfigurationAttribute__GetSingletonPath (System_Type_o*
   type, const MethodInfo* method); */

int Rotatelab_SingletonConfigurationAttribute__GetSingletonPath_10792b4(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  pcVar4 = (char *)(_UNK_010893b4 + 0x10892c8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010893b8 + 0x10892dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010893bc + 0x10892e8));
    *pcVar4 = '\x01';
  }
  uVar5 = **(undefined4 **)(_UNK_010893c4 + 0x1089308);
  if (*(int *)(*(int *)(*(int *)(_UNK_010893c0 + 0x10892fc) + 0x70) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar5 = System_Type__GetTypeFromHandle_2b80928(uVar5,0);
  piVar1 = (int *)System_Attribute__GetCustomAttribute_2b9ed08(param_1,uVar5,0);
  if (piVar1 != (int *)0x0) {
    uVar3 = (uint)*(byte *)(**(int **)(_UNK_010893c8 + 0x108934c) + 0xb8);
    if (((uVar3 <= *(byte *)(*piVar1 + 0xb8)) &&
        (*(int *)(*(int *)(*piVar1 + 100) + uVar3 * 4 + -4) == **(int **)(_UNK_010893c8 + 0x108934c)
        )) && (iVar2 = System_String__IsNullOrEmpty_2a0a844(piVar1[2],0), iVar2 == 0)) {
      return piVar1[2];
    }
  }
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x010893a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(*param_1 + 0x100))(param_1,*(undefined4 *)(*param_1 + 0x104));
  return iVar2;
}

