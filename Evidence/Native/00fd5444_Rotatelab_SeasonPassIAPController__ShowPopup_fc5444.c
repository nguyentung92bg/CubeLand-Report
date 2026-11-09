/* IL2CPP: Rotatelab.SeasonPassIAPController$$ShowPopup
void Rotatelab_SeasonPassIAPController__ShowPopup (Rotatelab_SeasonPassIAPController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPassIAPController$$ShowPopup
   void Rotatelab_SeasonPassIAPController__ShowPopup (Rotatelab_SeasonPassIAPController_o* __this,
   const MethodInfo* method); */

int Rotatelab_SeasonPassIAPController__ShowPopup_fc5444(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  
  pcVar7 = (char *)(_UNK_00fd55a0 + 0xfd5458);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd55a4 + 0xfd546c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd55a8 + 0xfd5478));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd55ac + 0xfd5484));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd55b0 + 0xfd5490));
    *pcVar7 = '\x01';
  }
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fd55b4 + 0xfd54a4));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar3 + 0x34) = **(undefined4 **)(_UNK_00fd55b8 + 0xfd54c4);
  thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x34));
  puVar4 = *(undefined4 **)(_UNK_00fd55bc + 0xfd54e0);
  piVar8 = *(int **)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x20) = 1;
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = Rotatelab_SeasonPass_SeasonPassController__get_GetCurrentSeasonName_10a01dc(iVar3,0);
  if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar8 + 0x2b0))(piVar8,uVar5,*(undefined4 *)(*piVar8 + 0x2b4));
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x14),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar3,1,0);
  iVar3 = *(int *)(param_1 + 0x14);
  if (*(int *)(**(int **)(_UNK_00fd55c0 + 0xfd5578) + 0x74) == 0) {
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
  piVar8 = (int *)(iVar2 + 8);
  *piVar8 = iVar3;
  thunk_FUN_00ec5080(piVar8,iVar3);
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined1 *)(iVar2 + 0xc) = 1;
  thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x10),0);
  if (*(char *)(iVar2 + 0xc) != '\0') {
    if (*piVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_CanvasGroup__set_alpha_39a3758(*piVar8,0,0);
  }
  if (*piVar8 != 0) {
    UnityEngine_CanvasGroup__set_interactable_39a3940(*piVar8,0,0);
    if (*piVar8 != 0) {
      UnityEngine_CanvasGroup__set_blocksRaycasts_39a3b28(*piVar8,1,0);
      uVar5 = 0x3f800000;
      if (*(char *)(iVar2 + 0xc) == '\0') {
        uVar5 = _UNK_00fd2c10;
      }
      iVar3 = DG_Tweening_DOTweenModuleUI__DOFade_f9e6a0
                        (*(undefined4 *)(iVar2 + 8),uVar5,0x3e4ccccd,0);
      uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd2c2c + 0xfd2bd0));
      DG_Tweening_TweenCallback___ctor_11657e8
                (uVar5,iVar2,**(undefined4 **)(_UNK_00fd2c30 + 0xfd2bec),0);
      uVar6 = **(undefined4 **)(_UNK_00fd2c34 + 0xfd2c04);
      cVar1 = '\0';
      if (iVar3 != 0) {
        cVar1 = *(char *)(iVar3 + 0x94);
      }
      if (iVar3 != 0 && cVar1 != '\0') {
        *(undefined4 *)(iVar3 + 0x4c) = uVar5;
        thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x4c),uVar5,uVar6);
      }
      return iVar3;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

