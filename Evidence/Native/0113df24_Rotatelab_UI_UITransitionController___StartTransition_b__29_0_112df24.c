/* IL2CPP: Rotatelab.UI.UITransitionController$$<StartTransition>b__29_0
void Rotatelab_UI_UITransitionController___StartTransition_b__29_0 (Rotatelab_UI_UITransitionController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.UITransitionController$$<StartTransition>b__29_0
   void Rotatelab_UI_UITransitionController___StartTransition_b__29_0
   (Rotatelab_UI_UITransitionController_o* __this, const MethodInfo* method); */

void Rotatelab_UI_UITransitionController___StartTransition_b__29_0_112df24(int param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = *(int *)(param_1 + 0x30);
  pcVar2 = (char *)(_UNK_0113dfe4 + 0x113df40);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113dfe8 + 0x113df54));
    *pcVar2 = '\x01';
  }
  iVar1 = *(int *)(**(int **)(_UNK_0113dfec + 0x113df70) + 0x5c);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc
            (iVar3,*(float *)(iVar1 + 0xc) * 0.5,*(float *)(iVar1 + 0x10) * 0.5,
             *(float *)(iVar1 + 0x14) * 0.5,0);
  iVar3 = *(int *)(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar2 = (char *)(iRam03625a5c + 0x36259b0);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam03625a60 + 0x36259c4));
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam03625a64 + 0x36259d0));
    *pcVar2 = '\x01';
  }
  if (iVar3 != 0) {
    iVar3 = *(int *)(iVar3 + 8);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
    }
    if (*(int *)(**(int **)(iRam03625a68 + 0x36259fc) + 0x1c) == 0) {
      thunk_FUN_00efd7c4();
    }
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(iVar1 + 8);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(iRam03625a6c + 0x3625a24);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam03625a70 + 0x3625a34);
      *(code **)(iRam03625a74 + 0x3625a44) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x03625a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(iVar3,uVar4,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

