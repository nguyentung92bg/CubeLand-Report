/* IL2CPP: Rotatelab.UI.FailPanelController$$HoldToSeeBoardPointerUp
void Rotatelab_UI_FailPanelController__HoldToSeeBoardPointerUp (Rotatelab_UI_FailPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.FailPanelController$$HoldToSeeBoardPointerUp
   void Rotatelab_UI_FailPanelController__HoldToSeeBoardPointerUp
   (Rotatelab_UI_FailPanelController_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_UI_FailPanelController__HoldToSeeBoardPointerUp_111c314(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  pcVar4 = (char *)(_UNK_00fae820 + 0xfae6c0);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fae824 + 0xfae6d4),0x3f800000,0x3e19999a,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fae828 + 0xfae6e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fae82c + 0xfae6ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fae830 + 0xfae6f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fae834 + 0xfae704));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fae838 + 0xfae710));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fae83c + 0xfae71c));
    *pcVar4 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fae840 + 0xfae730));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar5 = (undefined4 *)(iVar1 + 8);
  *puVar5 = uVar3;
  thunk_FUN_00ec5080(puVar5,uVar3);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fae844 + 0xfae76c));
  DG_Tweening_Core_DOGetter_float____ctor_1f63348
            (uVar3,iVar1,**(undefined4 **)(_UNK_00fae848 + 0xfae78c),0);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fae84c + 0xfae7a0));
  DG_Tweening_Core_DOSetter_float____ctor_1f63f30
            (uVar2,iVar1,**(undefined4 **)(_UNK_00fae850 + 0xfae7bc),0);
  if (*(int *)(**(int **)(_UNK_00fae854 + 0xfae7d0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar3 = DG_Tweening_DOTween__To_1166b78(uVar3,uVar2,0x3f800000,0x3e19999a,0);
  DG_Tweening_TweenSettingsExtensions__SetTarget_object__15da350
            (uVar3,*puVar5,**(undefined4 **)(_UNK_00fae858 + 0xfae80c));
  return uVar3;
}

