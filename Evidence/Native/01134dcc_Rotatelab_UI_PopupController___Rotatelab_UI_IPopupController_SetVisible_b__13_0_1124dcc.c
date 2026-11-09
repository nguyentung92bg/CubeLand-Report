/* IL2CPP: Rotatelab.UI.PopupController$$<Rotatelab.UI.IPopupController.SetVisible>b__13_0
void Rotatelab_UI_PopupController___Rotatelab_UI_IPopupController_SetVisible_b__13_0 (Rotatelab_UI_PopupController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.UI.PopupController$$<Rotatelab.UI.IPopupController.SetVisible>b__13_0
   void Rotatelab_UI_PopupController___Rotatelab_UI_IPopupController_SetVisible_b__13_0
   (Rotatelab_UI_PopupController_o* __this, const MethodInfo* method); */

void Rotatelab_UI_PopupController___Rotatelab_UI_IPopupController_SetVisible_b__13_0_1124dcc
               (int param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 unaff_r4;
  int iVar2;
  undefined4 unaff_r5;
  undefined4 uVar3;
  char *pcVar4;
  
  if (*(char *)(param_1 + 0x11) != '\0') {
    iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar1,0,0);
  }
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    pcVar4 = (char *)(iRam03625a5c + 0x36259b0);
    if (*pcVar4 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(iRam03625a60 + 0x36259c4),iVar2,1,0,unaff_r4,unaff_r5);
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
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

