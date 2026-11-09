/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$Log
void Rotatelab_SeasonPass_SeasonPassController__Log (Rotatelab_SeasonPass_SeasonPassController_o* __this, System_String_o* log, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$Log
   void Rotatelab_SeasonPass_SeasonPassController__Log (Rotatelab_SeasonPass_SeasonPassController_o*
   __this, System_String_o* log, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassController__Log_10a5974(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_010b59d0 + 0x10b5988);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b59d4 + 0x10b599c));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010b59d8 + 0x10b59b0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar5 = (char *)(_UNK_035c1d64 + 0x35c1c58);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c1d68 + 0x35c1c6c),0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c1d6c + 0x35c1c78));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(_UNK_035c1d70 + 0x35c1c8c);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  pcVar5 = (char *)(_UNK_035c1d74 + 0x35c1ca8);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c1d78 + 0x35c1cbc));
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
      if (piVar4[-1] == **(int **)(_UNK_035c1d7c + 0x35c1d00)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd8);
        goto LAB_035c1d48;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)thunk_FUN_00efdb38(piVar6,**(int **)(_UNK_035c1d7c + 0x35c1d00),3);
LAB_035c1d48:
                    /* WARNING: Could not recover jumptable at 0x035c1d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,3,param_2,puVar2[1]);
  return;
}

