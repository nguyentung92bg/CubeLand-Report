/* IL2CPP: Rotatelab.Scripts.BlasterDockController$$ApplyLightMode
void Rotatelab_Scripts_BlasterDockController__ApplyLightMode (Rotatelab_Scripts_BlasterDockController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterDockController$$ApplyLightMode
   void Rotatelab_Scripts_BlasterDockController__ApplyLightMode
   (Rotatelab_Scripts_BlasterDockController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterDockController__ApplyLightMode_100cc0c(int param_1)

{
  int iVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 uVar3;
  undefined4 unaff_r5;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  
  pcVar4 = (char *)(_UNK_0101cce8 + 0x101cc20);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101ccec + 0x101cc34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101ccf0 + 0x101cc40));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_0101ccf4 + 0x101cc54);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  iVar1 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c
                    (**(undefined4 **)(iVar1 + 0x5c),**(undefined4 **)(_UNK_0101ccf8 + 0x101cc78));
  iVar2 = 0x3c;
  if (iVar1 != 0) {
    iVar2 = 0x24;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    UnityEngine_Renderer__set_material_35c59b4
              (*(int *)(param_1 + 0x1c),*(undefined4 *)(param_1 + iVar2),0);
    iVar2 = 0x40;
    if (iVar1 != 0) {
      iVar2 = 0x28;
    }
    iVar2 = *(int *)(param_1 + iVar2);
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 != 0) {
      pcVar4 = (char *)(_UNK_035a1b78 + 0x35a1ac8);
      if (*pcVar4 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035a1b7c + 0x35a1adc),iVar2,0,extraout_r3,unaff_r4,
                           unaff_r5,unaff_r6,unaff_lr);
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035a1b80 + 0x35a1ae8));
        *pcVar4 = '\x01';
      }
      if (iVar1 != 0) {
        iVar6 = *(int *)(iVar1 + 8);
        if (iVar6 != 0) {
          if (*(int *)(**(int **)(_UNK_035a1b84 + 0x35a1b20) + 0x1c) == 0) {
            thunk_FUN_00efd7c4();
          }
          if (iVar2 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(iVar2 + 8);
          }
          UNRECOVERED_JUMPTABLE = *(code **)(_UNK_035a1b88 + 0x35a1b48);
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
            UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_035a1b8c + 0x35a1b58);
            *(code **)(_UNK_035a1b90 + 0x35a1b68) = UNRECOVERED_JUMPTABLE;
          }
                    /* WARNING: Could not recover jumptable at 0x035a1b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(iVar6,uVar3);
          return;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar1,0);
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

