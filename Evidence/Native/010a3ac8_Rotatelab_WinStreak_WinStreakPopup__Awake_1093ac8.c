/* IL2CPP: Rotatelab.WinStreak.WinStreakPopup$$Awake
void Rotatelab_WinStreak_WinStreakPopup__Awake (Rotatelab_WinStreak_WinStreakPopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.WinStreak.WinStreakPopup$$Awake
   void Rotatelab_WinStreak_WinStreakPopup__Awake (Rotatelab_WinStreak_WinStreakPopup_o* __this,
   const MethodInfo* method); */

void Rotatelab_WinStreak_WinStreakPopup__Awake_1093ac8(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_010a3cd0 + 0x10a3ae0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a3cd4 + 0x10a3af4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a3cd8 + 0x10a3b00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a3cdc + 0x10a3b0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a3ce0 + 0x10a3b18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a3ce4 + 0x10a3b24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a3ce8 + 0x10a3b30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a3cec + 0x10a3b3c));
    *pcVar2 = '\x01';
  }
  Rotatelab_UI_PopupController__Awake_11246a8(param_1,0);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  if (*(int *)(**(int **)(_UNK_010a3cf0 + 0x10a3b5c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__RectTransform_fc1bd0(uVar3,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_sizeDelta_3613710(auStack_20,iVar1,0);
  *(undefined4 *)(param_1 + 0x2c) = uStack_1c;
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x48);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a3cf4 + 0x10a3bc0));
  UnityEngine_Events_UnityAction_Vector2____ctor_1c60160
            (uVar3,param_1,**(undefined4 **)(_UNK_010a3cf8 + 0x10a3be0),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent_Vector2___AddListener_1c62e34
            (iVar1,uVar3,**(undefined4 **)(_UNK_010a3cfc + 0x10a3c04));
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar5 = *(undefined4 **)(_UNK_010a3d00 + 0x10a3c28);
  iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 0xb4);
  uVar4 = *(undefined4 *)(param_1 + 0x48);
  uVar3 = thunk_FUN_00f00cdc(*puVar5);
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar3,uVar4,**(undefined4 **)(_UNK_010a3d04 + 0x10a3c4c),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar1,uVar3,0);
  if (*(int *)(param_1 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x4c) + 0xb4);
  uVar3 = thunk_FUN_00f00cdc(*puVar5);
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar3,param_1,**(undefined4 **)(_UNK_010a3d08 + 0x10a3ca4),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar1,uVar3,0);
  return;
}

