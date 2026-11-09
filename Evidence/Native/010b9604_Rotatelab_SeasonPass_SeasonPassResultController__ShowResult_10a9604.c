/* IL2CPP: Rotatelab.SeasonPass.SeasonPassResultController$$ShowResult
void Rotatelab_SeasonPass_SeasonPassResultController__ShowResult (Rotatelab_SeasonPass_SeasonPassResultController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassResultController$$ShowResult
   void Rotatelab_SeasonPass_SeasonPassResultController__ShowResult
   (Rotatelab_SeasonPass_SeasonPassResultController_o* __this, const MethodInfo* method); */

int Rotatelab_SeasonPass_SeasonPassResultController__ShowResult_10a9604(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 unaff_r4;
  char *pcVar6;
  int *piVar7;
  undefined4 unaff_r5;
  int *piVar8;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  
  pcVar6 = (char *)(_UNK_010b9910 + 0x10b9618);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b9914 + 0x10b962c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b9918 + 0x10b9638));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b991c + 0x10b9644));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b9920 + 0x10b9650));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b9924 + 0x10b965c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b9928 + 0x10b9668));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b992c + 0x10b9674));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b9930 + 0x10b9680));
    *pcVar6 = '\x01';
  }
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010b9934 + 0x10b9694));
  piVar8 = (int *)(param_1 + 0x44);
  *piVar8 = iVar3;
  thunk_FUN_00ec5080(piVar8,iVar3);
  piVar7 = *(int **)(_UNK_010b9938 + 0x10b96b8);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x114);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool___Raise_23a280c(iVar3,0,**(undefined4 **)(_UNK_010b993c + 0x10b96f0));
  piVar7 = *(int **)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = Rotatelab_SeasonPass_SeasonPassController__get_GetPreviousSeasonName_10a2950
                    (*(int *)(param_1 + 0x44));
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar7 + 0x2b0))(piVar7,uVar4,*(undefined4 *)(*piVar7 + 0x2b4));
  piVar7 = *(int **)(param_1 + 0x14);
  iVar3 = FUN_00ec388c(**(undefined4 **)(_UNK_010b9940 + 0x10b9750),5);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = **(undefined4 **)(_UNK_010b9944 + 0x10b9770);
  if (*(int *)(iVar3 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar3 + 0x10) = uVar4;
  thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x10),uVar4);
  if (*piVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = Rotatelab_SeasonPass_SeasonPassController__get_GetPreviousSeasonName_10a2950(*piVar8);
  if (*(uint *)(iVar3 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar3 + 0x14) = uVar4;
  thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x14),uVar4);
  uVar4 = **(undefined4 **)(_UNK_010b9948 + 0x10b97e4);
  if (*(uint *)(iVar3 + 0xc) < 3) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar3 + 0x18) = uVar4;
  thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x18),uVar4);
  if (*piVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = Rotatelab_SeasonPass_SeasonPassController__get_GetCurrentSeasonName_10a01dc(*piVar8);
  if (*(uint *)(iVar3 + 0xc) < 4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar3 + 0x1c) = uVar4;
  thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x1c),uVar4);
  uVar4 = **(undefined4 **)(_UNK_010b994c + 0x10b9850);
  if (*(uint *)(iVar3 + 0xc) < 5) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar3 + 0x20) = uVar4;
  thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x20),uVar4);
  uVar4 = System_String__Concat_2a0bee8(iVar3,0);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar7 + 0x2b0))(piVar7,uVar4,*(undefined4 *)(*piVar7 + 0x2b4));
  if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x34),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar3,1,0);
  iVar3 = *(int *)(param_1 + 0x34);
  if (*(int *)(**(int **)(_UNK_010b9950 + 0x10b98e4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar6 = (char *)(_UNK_00fd2c14 + 0xfd2a94);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c18 + 0xfd2aa8),1,0,0,unaff_r4,unaff_r5,unaff_r6,unaff_r7
                 ,unaff_r8,unaff_lr);
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c1c + 0xfd2ab4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c20 + 0xfd2ac0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c24 + 0xfd2acc));
    *pcVar6 = '\x01';
  }
  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd2c28 + 0xfd2ae0));
  System_Object___ctor_2bb93bc(iVar2,0);
  if (iVar2 != 0) {
    piVar7 = (int *)(iVar2 + 8);
    *piVar7 = iVar3;
    thunk_FUN_00ec5080(piVar7,iVar3);
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined1 *)(iVar2 + 0xc) = 1;
    thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x10),0);
    if (*(char *)(iVar2 + 0xc) != '\0') {
      if (*piVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_CanvasGroup__set_alpha_39a3758(*piVar7,0,0);
    }
    if (*piVar7 != 0) {
      UnityEngine_CanvasGroup__set_interactable_39a3940(*piVar7,0,0);
      if (*piVar7 != 0) {
        UnityEngine_CanvasGroup__set_blocksRaycasts_39a3b28(*piVar7,1,0);
        uVar4 = 0x3f800000;
        if (*(char *)(iVar2 + 0xc) == '\0') {
          uVar4 = _UNK_00fd2c10;
        }
        iVar3 = DG_Tweening_DOTweenModuleUI__DOFade_f9e6a0
                          (*(undefined4 *)(iVar2 + 8),uVar4,0x3e4ccccd,0);
        uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd2c2c + 0xfd2bd0));
        DG_Tweening_TweenCallback___ctor_11657e8
                  (uVar4,iVar2,**(undefined4 **)(_UNK_00fd2c30 + 0xfd2bec),0);
        uVar5 = **(undefined4 **)(_UNK_00fd2c34 + 0xfd2c04);
        cVar1 = '\0';
        if (iVar3 != 0) {
          cVar1 = *(char *)(iVar3 + 0x94);
        }
        if (iVar3 != 0 && cVar1 != '\0') {
          *(undefined4 *)(iVar3 + 0x4c) = uVar4;
          thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x4c),uVar4,uVar5);
        }
        return iVar3;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

