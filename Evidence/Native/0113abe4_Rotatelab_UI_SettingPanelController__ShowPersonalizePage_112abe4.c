/* IL2CPP: Rotatelab.UI.SettingPanelController$$ShowPersonalizePage
void Rotatelab_UI_SettingPanelController__ShowPersonalizePage (Rotatelab_UI_SettingPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SettingPanelController$$ShowPersonalizePage
   void Rotatelab_UI_SettingPanelController__ShowPersonalizePage
   (Rotatelab_UI_SettingPanelController_o* __this, const MethodInfo* method); */

void Rotatelab_UI_SettingPanelController__ShowPersonalizePage_112abe4(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined1 auStack_34 [16];
  
  pcVar4 = (char *)(_UNK_0113af28 + 0x113abfc);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113af2c + 0x113ac10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113af30 + 0x113ac1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113af34 + 0x113ac28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113af38 + 0x113ac34));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = FUN_00ec388c(**(undefined4 **)(_UNK_0113af3c + 0x113ac58),
                       *(undefined4 *)(*(int *)(param_1 + 0x58) + 0xc));
  piVar5 = (int *)(param_1 + 0x60);
  *piVar5 = iVar2;
  thunk_FUN_00ec5080(piVar5,iVar2);
  uVar6 = 0;
  piVar8 = *(int **)(_UNK_0113af40 + 0x113ac88);
  while( true ) {
    if (*(int *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x58) + 0xc) <= (int)uVar6) {
      if (*(int *)(param_1 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar5 = (int *)UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x4c),0);
      if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*piVar5 != *piVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(piVar5);
      }
      uVar6 = 0;
      UnityEngine_RectTransform__get_rect_3612fd0(auStack_34,piVar5,0);
      if (*(int *)(**(int **)(_UNK_0113af48 + 0x113ae84) + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar2 = *(int *)(param_1 + 0x5c);
      while( true ) {
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if ((int)*(uint *)(iVar2 + 0xc) <= (int)uVar6) {
          piVar5 = *(int **)(param_1 + 0x50);
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 0x2b0))
                      (piVar5,**(undefined4 **)(_UNK_0113af4c + 0x113af08),
                       *(undefined4 *)(*piVar5 + 0x2b4));
            *(undefined1 *)(param_1 + 100) = 1;
            return;
          }
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar2 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar7 = *(int *)(iVar2 + 0x10 + uVar6 * 4);
        if (iVar7 == 0) break;
        UnityEngine_GameObject__SetActive_3602038(iVar7,1,0);
        uVar6 = uVar6 + 1;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *(int *)(param_1 + 0x58);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar2 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar7 = *piVar5;
    iVar2 = *(int *)(iVar2 + uVar6 * 4 + 0x10);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = UnityEngine_GameObject__get_activeSelf_360212c(iVar2,0);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar7 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined1 *)(iVar7 + uVar6 + 0x10) = uVar1;
    if (iVar2 == 0) break;
    iVar7 = UnityEngine_GameObject__get_activeSelf_360212c(iVar2,0);
    if (iVar7 != 0) {
      piVar3 = (int *)UnityEngine_GameObject__get_transform_3601c90(iVar2,0);
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*piVar3 != *piVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(piVar3);
      }
      UnityEngine_RectTransform__get_rect_3612fd0(auStack_34,piVar3,0);
      if (*(int *)(**(int **)(_UNK_0113af44 + 0x113adbc) + 0x74) == 0) {
        FUN_00ec3934();
      }
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
    }
    UnityEngine_GameObject__SetActive_3602038(iVar2,0,0);
    uVar6 = uVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

