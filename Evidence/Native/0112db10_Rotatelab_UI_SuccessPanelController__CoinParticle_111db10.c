/* IL2CPP: Rotatelab.UI.SuccessPanelController$$CoinParticle
void Rotatelab_UI_SuccessPanelController__CoinParticle (Rotatelab_UI_SuccessPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SuccessPanelController$$CoinParticle
   void Rotatelab_UI_SuccessPanelController__CoinParticle (Rotatelab_UI_SuccessPanelController_o*
   __this, const MethodInfo* method); */

void Rotatelab_UI_SuccessPanelController__CoinParticle_111db10(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  
  pcVar3 = (char *)(_UNK_0112dbd8 + 0x112db28);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112dbdc + 0x112db3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112dbe0 + 0x112db48));
    *pcVar3 = '\x01';
  }
  piVar4 = *(int **)(_UNK_0112dbe4 + 0x112db5c);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 300);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = TMPro_TMP_Text__get_rectTransform_34fc82c(*(int *)(param_1 + 0x10),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_object__object__Int32Enum__int___Raise_23a7234
            (iVar1,uVar2,*(undefined4 *)(param_1 + 0x3c),0,0xd,
             **(undefined4 **)(_UNK_0112dbe8 + 0x112dbbc));
  return;
}

