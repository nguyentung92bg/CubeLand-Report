/* IL2CPP: Rotatelab.UI.UITransitionController$$<StartTransition>b__29_1
void Rotatelab_UI_UITransitionController___StartTransition_b__29_1 (Rotatelab_UI_UITransitionController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.UI.UITransitionController$$<StartTransition>b__29_1
   void Rotatelab_UI_UITransitionController___StartTransition_b__29_1
   (Rotatelab_UI_UITransitionController_o* __this, const MethodInfo* method); */

void Rotatelab_UI_UITransitionController___StartTransition_b__29_1_112dff0(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x38);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar4 = (char *)(iRam03625a5c + 0x36259b0);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam03625a60 + 0x36259c4));
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam03625a64 + 0x36259d0));
    *pcVar4 = '\x01';
  }
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
    }
    if (*(int *)(**(int **)(iRam03625a68 + 0x36259fc) + 0x1c) == 0) {
      thunk_FUN_00efd7c4();
    }
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(iVar2 + 8);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(iRam03625a6c + 0x3625a24);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam03625a70 + 0x3625a34);
      *(code **)(iRam03625a74 + 0x3625a44) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x03625a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(iVar1,uVar3,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

