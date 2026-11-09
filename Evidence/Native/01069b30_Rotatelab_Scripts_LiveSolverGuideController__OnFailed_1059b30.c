/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController$$OnFailed
void Rotatelab_Scripts_LiveSolverGuideController__OnFailed (Rotatelab_Scripts_LiveSolverGuideController_o* __this, System_String_o* reason, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController$$OnFailed
   void Rotatelab_Scripts_LiveSolverGuideController__OnFailed
   (Rotatelab_Scripts_LiveSolverGuideController_o* __this, System_String_o* reason, const
   MethodInfo* method); */

void Rotatelab_Scripts_LiveSolverGuideController__OnFailed_1059b30(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  
  pcVar7 = (char *)(_UNK_01069bc8 + 0x1069b48);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01069bcc + 0x1069b5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01069bd0 + 0x1069b68));
    *pcVar7 = '\x01';
  }
  *(undefined4 *)(param_1 + 0x60) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x60),param_2);
  uVar1 = System_String__Concat_29fee38(**(undefined4 **)(_UNK_01069bd4 + 0x1069b94),param_2,0);
  if (*(int *)(**(int **)(_UNK_01069bd8 + 0x1069ba8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar7 = (char *)(_UNK_035c01b0 + 0x35c00a4);
  if (*pcVar7 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c01b4 + 0x35c00b8),0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c01b8 + 0x35c00c4));
    *pcVar7 = '\x01';
  }
  piVar6 = *(int **)(_UNK_035c01bc + 0x35c00d8);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  pcVar7 = (char *)(_UNK_035c01c0 + 0x35c00f4);
  if (*pcVar7 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c01c4 + 0x35c0108));
    *pcVar7 = '\x01';
  }
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    thunk_FUN_00ec3934();
    iVar2 = *piVar6;
  }
  piVar6 = *(int **)(*(int *)(iVar2 + 0x5c) + 4);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *piVar6;
  uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_035c01c8 + 0x35c014c)) {
        puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xd8);
        goto LAB_035c0194;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)thunk_FUN_00efdb38(piVar6,**(int **)(_UNK_035c01c8 + 0x35c014c),3);
LAB_035c0194:
                    /* WARNING: Could not recover jumptable at 0x035c01ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(piVar6,2,uVar1,puVar3[1]);
  return;
}

