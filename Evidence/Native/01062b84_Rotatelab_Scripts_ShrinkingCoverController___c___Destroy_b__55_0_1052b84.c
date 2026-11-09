/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController.<>c$$<Destroy>b__55_0
void Rotatelab_Scripts_ShrinkingCoverController___c___Destroy_b__55_0 (Rotatelab_Scripts_ShrinkingCoverController___c_o* __this, Rotatelab_Scripts_ShrinkingCoverController_o* this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController.<>c$$<Destroy>b__55_0
   void Rotatelab_Scripts_ShrinkingCoverController___c___Destroy_b__55_0
   (Rotatelab_Scripts_ShrinkingCoverController___c_o* __this,
   Rotatelab_Scripts_ShrinkingCoverController_o* this, const MethodInfo* method); */

void Rotatelab_Scripts_ShrinkingCoverController___c___Destroy_b__55_0_1052b84
               (undefined4 param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01062c38 + 0x1062b98);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01062c3c + 0x1062bac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01062c40 + 0x1062bb8));
    *pcVar2 = '\x01';
  }
  Rotatelab_Scripts_BaseTargetableController__PlayDestructionSfx_ff608c(0);
  piVar3 = *(int **)(_UNK_01062c44 + 0x1062bd4);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_object___Raise_23a2f44
            (iVar1,param_2,**(undefined4 **)(_UNK_01062c48 + 0x1062c0c));
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x01062c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x140))(param_2,*(undefined4 *)(*param_2 + 0x144));
  return;
}

