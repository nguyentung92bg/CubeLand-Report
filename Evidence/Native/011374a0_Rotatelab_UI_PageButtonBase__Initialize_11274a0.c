/* IL2CPP: Rotatelab.UI.PageButtonBase$$Initialize
void Rotatelab_UI_PageButtonBase__Initialize (Rotatelab_UI_PageButtonBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.PageButtonBase$$Initialize
   void Rotatelab_UI_PageButtonBase__Initialize (Rotatelab_UI_PageButtonBase_o* __this, const
   MethodInfo* method); */

void Rotatelab_UI_PageButtonBase__Initialize_11274a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01137634 + 0x11374b8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01137638 + 0x11374cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113763c + 0x11374d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01137640 + 0x11374e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01137644 + 0x11374f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01137648 + 0x11374fc));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(*(int *)(param_1 + 0x20),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_anchoredPosition_3613500(&uStack_20,iVar1,0);
  *(undefined4 *)(param_1 + 0x34) = uStack_20;
  *(undefined4 *)(param_1 + 0x38) = uStack_1c;
  Rotatelab_UI_PageButtonBase__RefreshLockedState_112d254(param_1);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0xb4);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0113764c + 0x113756c));
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar2,param_1,**(undefined4 **)(_UNK_01137650 + 0x113758c),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar1,uVar2,0);
  piVar5 = *(int **)(_UNK_01137654 + 0x11375bc);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x74);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01137658 + 0x11375e0));
  System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_0113765c + 0x1137600),0);
  uVar2 = Rotatelab_GameAction__op_Addition_fbfed8(uVar4,uVar2,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x74) = uVar2;
  thunk_FUN_00ec5080();
  return;
}

