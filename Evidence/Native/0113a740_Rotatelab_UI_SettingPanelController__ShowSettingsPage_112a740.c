/* IL2CPP: Rotatelab.UI.SettingPanelController$$ShowSettingsPage
void Rotatelab_UI_SettingPanelController__ShowSettingsPage (Rotatelab_UI_SettingPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SettingPanelController$$ShowSettingsPage
   void Rotatelab_UI_SettingPanelController__ShowSettingsPage
   (Rotatelab_UI_SettingPanelController_o* __this, const MethodInfo* method); */

void Rotatelab_UI_SettingPanelController__ShowSettingsPage_112a740(int param_1)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  pcVar1 = (char *)(_UNK_0113a8a0 + 0x113a754);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113a8a4 + 0x113a768));
    *pcVar1 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x5c);
  uVar5 = 0;
  while( true ) {
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar4 + 0xc) <= (int)uVar5) {
      uVar5 = 0;
      while( true ) {
        if (*(int *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(*(int *)(param_1 + 0x58) + 0xc) <= (int)uVar5) {
          piVar3 = *(int **)(param_1 + 0x50);
          if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          (**(code **)(*piVar3 + 0x2b0))
                    (piVar3,**(undefined4 **)(_UNK_0113a8a8 + 0x113a884),
                     *(undefined4 *)(*piVar3 + 0x2b4));
          *(undefined1 *)(param_1 + 100) = 0;
          return;
        }
        iVar4 = *(int *)(param_1 + 0x58);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar4 + 0xc) <= uVar5) break;
        iVar2 = *(int *)(param_1 + 0x60);
        iVar4 = *(int *)(iVar4 + uVar5 * 4 + 0x10);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar2 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_GameObject__SetActive_3602038(iVar4,*(char *)(iVar2 + uVar5 + 0x10) != '\0',0);
        uVar5 = uVar5 + 1;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    if (*(uint *)(iVar4 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar2 = *(int *)(iVar4 + 0x10 + uVar5 * 4);
    if (iVar2 == 0) break;
    UnityEngine_GameObject__SetActive_3602038(iVar2,0,0);
    uVar5 = uVar5 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

