/* IL2CPP: Rotatelab.Utilities$$FormatNumberWithDecimals
System_String_o* Rotatelab_Utilities__FormatNumberWithDecimals (double number, int32_t decimals, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Utilities$$FormatNumberWithDecimals
   System_String_o* Rotatelab_Utilities__FormatNumberWithDecimals (double number, int32_t decimals,
   const MethodInfo* method); */

void Rotatelab_Utilities__FormatNumberWithDecimals_107db00
               (undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_0108dbd4 + 0x108db1c);
  uStack_18 = param_1;
  uStack_14 = param_2;
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108dbd8 + 0x108db34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108dbdc + 0x108db40));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_0108dbe0 + 0x108db54);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar1 + 0xc) <= param_3) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  uVar3 = *(undefined4 *)(iVar1 + param_3 * 4 + 0x10);
  if (*(int *)(**(int **)(_UNK_0108dbe4 + 0x108db9c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar2 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
  System_Double__ToString_2b51db4(&uStack_18,uVar3,uVar2,0);
  return;
}

