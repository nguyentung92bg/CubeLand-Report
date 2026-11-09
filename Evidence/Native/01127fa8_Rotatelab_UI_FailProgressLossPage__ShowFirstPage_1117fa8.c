/* IL2CPP: Rotatelab.UI.FailProgressLossPage$$ShowFirstPage
void Rotatelab_UI_FailProgressLossPage__ShowFirstPage (Rotatelab_UI_FailProgressLossPage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.FailProgressLossPage$$ShowFirstPage
   void Rotatelab_UI_FailProgressLossPage__ShowFirstPage (Rotatelab_UI_FailProgressLossPage_o*
   __this, const MethodInfo* method); */

void Rotatelab_UI_FailProgressLossPage__ShowFirstPage_1117fa8(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_01128020 + 0x1127fbc);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01128024 + 0x1127fd0));
    *pcVar2 = '\x01';
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  DG_Tweening_ShortcutExtensions__DOKill_116c938(*(undefined4 *)(param_1 + 0x10),0,0);
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(int *)(**(int **)(_UNK_01128028 + 0x1127ff8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  if (iVar1 != 0) {
    UnityEngine_RectTransform__get_anchoredPosition_3613500(auStack_18,iVar1,0);
    UnityEngine_RectTransform__set_anchoredPosition_3613610(iVar1,0,uStack_14,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4(0,0,0);
}

