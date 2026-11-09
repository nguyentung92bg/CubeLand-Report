/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$LogWarning
void Rotatelab_SeasonPass_SeasonPassController__LogWarning (Rotatelab_SeasonPass_SeasonPassController_o* __this, System_String_o* log, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$LogWarning
   void Rotatelab_SeasonPass_SeasonPassController__LogWarning
   (Rotatelab_SeasonPass_SeasonPassController_o* __this, System_String_o* log, const MethodInfo*
   method); */

void Rotatelab_SeasonPass_SeasonPassController__LogWarning_10a59dc
               (undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_010b5a38 + 0x10b59f0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b5a3c + 0x10b5a04));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010b5a40 + 0x10b5a18) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar5 = (char *)(_UNK_035c01b0 + 0x35c00a4);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c01b4 + 0x35c00b8),0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c01b8 + 0x35c00c4));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(_UNK_035c01bc + 0x35c00d8);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  pcVar5 = (char *)(_UNK_035c01c0 + 0x35c00f4);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c01c4 + 0x35c0108));
    *pcVar5 = '\x01';
  }
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    thunk_FUN_00ec3934();
    iVar1 = *piVar6;
  }
  piVar6 = *(int **)(*(int *)(iVar1 + 0x5c) + 4);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_035c01c8 + 0x35c014c)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd8);
        goto LAB_035c0194;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)thunk_FUN_00efdb38(piVar6,**(int **)(_UNK_035c01c8 + 0x35c014c),3);
LAB_035c0194:
                    /* WARNING: Could not recover jumptable at 0x035c01ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,2,param_2,puVar2[1]);
  return;
}

