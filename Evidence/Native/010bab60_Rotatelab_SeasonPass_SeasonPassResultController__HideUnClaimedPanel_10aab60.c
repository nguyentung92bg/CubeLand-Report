/* IL2CPP: Rotatelab.SeasonPass.SeasonPassResultController$$HideUnClaimedPanel
void Rotatelab_SeasonPass_SeasonPassResultController__HideUnClaimedPanel (Rotatelab_SeasonPass_SeasonPassResultController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassResultController$$HideUnClaimedPanel
   void Rotatelab_SeasonPass_SeasonPassResultController__HideUnClaimedPanel
   (Rotatelab_SeasonPass_SeasonPassResultController_o* __this, const MethodInfo* method); */

int Rotatelab_SeasonPass_SeasonPassResultController__HideUnClaimedPanel_10aab60(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar6;
  int iVar7;
  undefined4 unaff_r6;
  
  pcVar6 = (char *)(_UNK_010bac10 + 0x10bab74);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bac14 + 0x10bab88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bac18 + 0x10bab94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bac1c + 0x10baba0));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 0x38);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010bac20 + 0x10babb4));
  System_Action___ctor_2b10bac(uVar3,param_1,**(undefined4 **)(_UNK_010bac24 + 0x10babd4),0);
  if (*(int *)(**(int **)(_UNK_010bac28 + 0x10babe8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar6 = (char *)(_UNK_00fd2c14 + 0xfd2a94);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c18 + 0xfd2aa8),0,uVar3,0,unaff_r4,unaff_r5,unaff_r6);
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c1c + 0xfd2ab4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c20 + 0xfd2ac0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c24 + 0xfd2acc));
    *pcVar6 = '\x01';
  }
  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd2c28 + 0xfd2ae0));
  System_Object___ctor_2bb93bc(iVar2,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar5 = (int *)(iVar2 + 8);
  *piVar5 = iVar7;
  thunk_FUN_00ec5080(piVar5,iVar7);
  *(undefined4 *)(iVar2 + 0x10) = uVar3;
  *(undefined1 *)(iVar2 + 0xc) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x10),uVar3);
  if (*(char *)(iVar2 + 0xc) != '\0') {
    if (*piVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_CanvasGroup__set_alpha_39a3758(*piVar5,0,0);
  }
  if (*piVar5 != 0) {
    UnityEngine_CanvasGroup__set_interactable_39a3940(*piVar5,0,0);
    if (*piVar5 != 0) {
      UnityEngine_CanvasGroup__set_blocksRaycasts_39a3b28(*piVar5,1,0);
      uVar3 = 0x3f800000;
      if (*(char *)(iVar2 + 0xc) == '\0') {
        uVar3 = _UNK_00fd2c10;
      }
      iVar7 = DG_Tweening_DOTweenModuleUI__DOFade_f9e6a0
                        (*(undefined4 *)(iVar2 + 8),uVar3,0x3e4ccccd,0);
      uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd2c2c + 0xfd2bd0));
      DG_Tweening_TweenCallback___ctor_11657e8
                (uVar3,iVar2,**(undefined4 **)(_UNK_00fd2c30 + 0xfd2bec),0);
      uVar4 = **(undefined4 **)(_UNK_00fd2c34 + 0xfd2c04);
      cVar1 = '\0';
      if (iVar7 != 0) {
        cVar1 = *(char *)(iVar7 + 0x94);
      }
      if (iVar7 != 0 && cVar1 != '\0') {
        *(undefined4 *)(iVar7 + 0x4c) = uVar3;
        thunk_FUN_00ec5080((undefined4 *)(iVar7 + 0x4c),uVar3,uVar4);
      }
      return iVar7;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

