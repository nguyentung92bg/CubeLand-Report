/* IL2CPP: Rotatelab.Scripts.BaseTargetableController.<>c$$<Destroy>b__33_0
void Rotatelab_Scripts_BaseTargetableController___c___Destroy_b__33_0 (Rotatelab_Scripts_BaseTargetableController___c_o* __this, Rotatelab_Scripts_BaseTargetableController_o* this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BaseTargetableController.<>c$$<Destroy>b__33_0
   void Rotatelab_Scripts_BaseTargetableController___c___Destroy_b__33_0
   (Rotatelab_Scripts_BaseTargetableController___c_o* __this,
   Rotatelab_Scripts_BaseTargetableController_o* this, const MethodInfo* method); */

void Rotatelab_Scripts_BaseTargetableController___c___Destroy_b__33_0_ff61f0
               (undefined4 param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_010062a0 + 0x1006204);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010062a4 + 0x1006218));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010062a8 + 0x1006224));
    *pcVar2 = '\x01';
  }
  Rotatelab_Scripts_BaseTargetableController__PlayDestructionSfx_ff608c();
  piVar3 = *(int **)(_UNK_010062ac + 0x100623c);
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
            (iVar1,param_2,**(undefined4 **)(_UNK_010062b0 + 0x1006274));
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x0100629c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x140))(param_2,*(undefined4 *)(*param_2 + 0x144));
  return;
}

