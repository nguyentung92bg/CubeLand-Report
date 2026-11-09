/* IL2CPP: Rotatelab.UI.SettingPanelController$$OnMainCanvasChangeEndedHandler
void Rotatelab_UI_SettingPanelController__OnMainCanvasChangeEndedHandler (Rotatelab_UI_SettingPanelController_o* __this, int32_t mainCanvasType, bool isInstant, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SettingPanelController$$OnMainCanvasChangeEndedHandler
   void Rotatelab_UI_SettingPanelController__OnMainCanvasChangeEndedHandler
   (Rotatelab_UI_SettingPanelController_o* __this, int32_t mainCanvasType, bool isInstant, const
   MethodInfo* method); */

void Rotatelab_UI_SettingPanelController__OnMainCanvasChangeEndedHandler_112a038
               (int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_0113a1b0 + 0x113a050);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113a1b4 + 0x113a064));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113a1b8 + 0x113a070));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113a1bc + 0x113a07c));
    *pcVar5 = '\x01';
  }
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = 0;
  UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x40),param_2 == 1,0);
  if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x48),0);
  if (param_2 == 1) {
    if (*(int *)(**(int **)(_UNK_0113a1c0 + 0x113a0e4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar6 = 0;
    uVar2 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
    iVar3 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar2,0);
    piVar7 = *(int **)(_UNK_0113a1c4 + 0x113a118);
    iVar4 = *piVar7;
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar7;
    }
    if (*(int *)(*(int *)(iVar4 + 0x5c) + 0x3c) <= iVar3) {
      uVar6 = 1;
    }
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,uVar6,0);
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar7 = *(int **)(*(int *)(param_1 + 0x18) + 0xa0);
  if (*(int *)(**(int **)(_UNK_0113a1c8 + 0x113a174) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar6 = 0x3f800000;
  if (param_2 == 0) {
    uVar6 = _UNK_0113a1ac;
  }
  pcVar5 = (char *)(_UNK_00fd1e48 + 0xfd1da8);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd1e4c + 0xfd1dbc),uVar6,0);
    *pcVar5 = '\x01';
  }
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar7 + 0x170))(&uStack_30,piVar7,*(undefined4 *)(*piVar7 + 0x174));
  if (*(int *)(**(int **)(_UNK_00fd1e50 + 0xfd1df8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  (**(code **)(*piVar7 + 0x178))
            (piVar7,uStack_30,uStack_2c,uStack_28,uVar6,*(undefined4 *)(*piVar7 + 0x17c));
  return;
}

