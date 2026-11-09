/* IL2CPP: Rotatelab.UI.UiElementHider$$SetCurrentTOHidden
void Rotatelab_UI_UiElementHider__SetCurrentTOHidden (Rotatelab_UI_UiElementHider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.UiElementHider$$SetCurrentTOHidden
   void Rotatelab_UI_UiElementHider__SetCurrentTOHidden (Rotatelab_UI_UiElementHider_o* __this,
   const MethodInfo* method); */

void Rotatelab_UI_UiElementHider__SetCurrentTOHidden_1130300(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_011404b0 + 0x1140318);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011404b4 + 0x114032c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011404b8 + 0x1140338));
    *pcVar3 = '\x01';
  }
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  uVar1 = Rotatelab_UI_UiElementHider__GetAnchorData_112ff4c(param_1);
  if (*(int *)(**(int **)(_UNK_011404bc + 0x114035c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar2 = Rotatelab_Extensions__IndexOf_object__14872dc
                    (uVar4,uVar1,**(undefined4 **)(_UNK_011404c0 + 0x114037c));
  iVar5 = *(int *)(param_1 + 0x14);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar5 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  iVar5 = *(int *)(iVar5 + uVar2 * 4 + 0x10);
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_anchoredPosition_3613500(&uStack_20,*(int *)(param_1 + 0x18),0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar5 + 0x1c) = uStack_20;
  *(undefined4 *)(iVar5 + 0x20) = uStack_1c;
  iVar5 = *(int *)(param_1 + 0x14);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar5 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  iVar5 = *(int *)(iVar5 + uVar2 * 4 + 0x10);
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_anchorMin_36130e0(&uStack_20,*(int *)(param_1 + 0x18),0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar5 + 0xc) = uStack_20;
  *(undefined4 *)(iVar5 + 0x10) = uStack_1c;
  iVar5 = *(int *)(param_1 + 0x14);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar5 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  iVar5 = *(int *)(iVar5 + uVar2 * 4 + 0x10);
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_anchorMax_36132f0(&uStack_20,*(int *)(param_1 + 0x18),0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar5 + 0x14) = uStack_20;
  *(undefined4 *)(iVar5 + 0x18) = uStack_1c;
  return;
}

