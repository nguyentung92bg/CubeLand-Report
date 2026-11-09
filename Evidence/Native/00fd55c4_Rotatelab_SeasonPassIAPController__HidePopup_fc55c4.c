/* IL2CPP: Rotatelab.SeasonPassIAPController$$HidePopup
void Rotatelab_SeasonPassIAPController__HidePopup (Rotatelab_SeasonPassIAPController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPassIAPController$$HidePopup
   void Rotatelab_SeasonPassIAPController__HidePopup (Rotatelab_SeasonPassIAPController_o* __this,
   const MethodInfo* method); */

int Rotatelab_SeasonPassIAPController__HidePopup_fc55c4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  
  pcVar7 = (char *)(_UNK_00fd5678 + 0xfd55d8);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd567c + 0xfd55ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd5680 + 0xfd55f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd5684 + 0xfd5604));
    *pcVar7 = '\x01';
  }
  puVar3 = *(undefined4 **)(_UNK_00fd5688 + 0xfd561c);
  iVar8 = *(int *)(param_1 + 0x14);
  *(undefined1 *)(param_1 + 0x20) = 0;
  uVar4 = thunk_FUN_00f00cdc(*puVar3);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_00fd568c + 0xfd5640),0);
  if (*(int *)(**(int **)(_UNK_00fd5690 + 0xfd5654) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar7 = (char *)(_UNK_00fd2c14 + 0xfd2a94);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c18 + 0xfd2aa8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c1c + 0xfd2ab4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c20 + 0xfd2ac0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c24 + 0xfd2acc));
    *pcVar7 = '\x01';
  }
  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd2c28 + 0xfd2ae0));
  System_Object___ctor_2bb93bc(iVar2,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar6 = (int *)(iVar2 + 8);
  *piVar6 = iVar8;
  thunk_FUN_00ec5080(piVar6,iVar8);
  *(undefined4 *)(iVar2 + 0x10) = uVar4;
  *(undefined1 *)(iVar2 + 0xc) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x10),uVar4);
  if (*(char *)(iVar2 + 0xc) != '\0') {
    if (*piVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_CanvasGroup__set_alpha_39a3758(*piVar6,0,0);
  }
  if (*piVar6 != 0) {
    UnityEngine_CanvasGroup__set_interactable_39a3940(*piVar6,0,0);
    if (*piVar6 != 0) {
      UnityEngine_CanvasGroup__set_blocksRaycasts_39a3b28(*piVar6,1,0);
      uVar4 = 0x3f800000;
      if (*(char *)(iVar2 + 0xc) == '\0') {
        uVar4 = _UNK_00fd2c10;
      }
      iVar8 = DG_Tweening_DOTweenModuleUI__DOFade_f9e6a0
                        (*(undefined4 *)(iVar2 + 8),uVar4,0x3e4ccccd,0);
      uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd2c2c + 0xfd2bd0));
      DG_Tweening_TweenCallback___ctor_11657e8
                (uVar4,iVar2,**(undefined4 **)(_UNK_00fd2c30 + 0xfd2bec),0);
      uVar5 = **(undefined4 **)(_UNK_00fd2c34 + 0xfd2c04);
      cVar1 = '\0';
      if (iVar8 != 0) {
        cVar1 = *(char *)(iVar8 + 0x94);
      }
      if (iVar8 != 0 && cVar1 != '\0') {
        *(undefined4 *)(iVar8 + 0x4c) = uVar4;
        thunk_FUN_00ec5080((undefined4 *)(iVar8 + 0x4c),uVar4,uVar5);
      }
      return iVar8;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

