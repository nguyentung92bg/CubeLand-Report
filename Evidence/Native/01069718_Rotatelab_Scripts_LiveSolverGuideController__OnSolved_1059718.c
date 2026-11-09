/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController$$OnSolved
void Rotatelab_Scripts_LiveSolverGuideController__OnSolved (Rotatelab_Scripts_LiveSolverGuideController_o* __this, Rotatelab_Scripts_SolveResult_o* result, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController$$OnSolved
   void Rotatelab_Scripts_LiveSolverGuideController__OnSolved
   (Rotatelab_Scripts_LiveSolverGuideController_o* __this, Rotatelab_Scripts_SolveResult_o* result,
   const MethodInfo* method); */

void Rotatelab_Scripts_LiveSolverGuideController__OnSolved_1059718(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  
  pcVar5 = (char *)(_UNK_01069ac0 + 0x1069734);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01069ac4 + 0x1069748));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01069ac8 + 0x1069754));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01069acc + 0x1069760));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01069ad0 + 0x106976c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01069ad4 + 0x1069778));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01069ad8 + 0x1069784));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01069adc + 0x1069790));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01069ae0 + 0x106979c));
    *pcVar5 = '\x01';
  }
  Rotatelab_Scripts_LiveSolverGuideController__ClearPin_10590c4(param_1);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  bVar1 = *(byte *)(param_2 + 0xc);
  fStack_24 = *(float *)(param_2 + 8);
  *(byte *)(param_1 + 100) = bVar1 ^ 1;
  if (bVar1 == 0) {
    if (-1 < (int)fStack_24) {
      fStack_24 = *(float *)(param_2 + 0x10);
      iVar7 = *(int *)(_UNK_01069aec + 0x1069998);
      uVar2 = FUN_00ec393c(*(undefined4 *)(iVar7 + 0x24),&fStack_24);
      uStack_28 = *(undefined4 *)(param_1 + 0x5c);
      uVar3 = FUN_00ec393c(*(undefined4 *)(iVar7 + 0x24),&uStack_28);
      uVar2 = System_String__Format_2a0c264
                        (**(undefined4 **)(_UNK_01069af0 + 0x10699d4),uVar2,uVar3,0);
      fStack_2c = *(float *)(param_1 + 0x54);
      uVar3 = FUN_00ec393c(*(undefined4 *)(iVar7 + 0x24),&fStack_2c);
      fStack_30 = (float)UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
      fStack_30 = fStack_30 - *(float *)(param_1 + 0x50);
      uVar4 = FUN_00ec393c(*(undefined4 *)(iVar7 + 0x3c),&fStack_30);
      uVar3 = System_String__Format_2a0c264
                        (**(undefined4 **)(_UNK_01069af4 + 0x1069a30),uVar3,uVar4,0);
      uVar2 = System_String__Concat_29fee38(uVar2,uVar3,0);
      goto LAB_01069a8c;
    }
  }
  else if (-1 < (int)fStack_24) {
    iVar8 = *(int *)(_UNK_01069af8 + 0x10697e4);
    uVar2 = FUN_00ec393c(*(undefined4 *)(iVar8 + 0x24),&fStack_24);
    uStack_28 = *(undefined4 *)(param_1 + 0x54);
    uVar3 = FUN_00ec393c(*(undefined4 *)(iVar8 + 0x24),&uStack_28);
    fStack_2c = (float)UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
    fStack_2c = fStack_2c - *(float *)(param_1 + 0x50);
    uVar4 = FUN_00ec393c(*(undefined4 *)(iVar8 + 0x3c),&fStack_2c);
    uVar2 = System_String__Format_2a0c2b4
                      (**(undefined4 **)(_UNK_01069afc + 0x106984c),uVar2,uVar3,uVar4,0);
    puVar6 = (undefined4 *)(param_1 + 0x60);
    *puVar6 = uVar2;
    thunk_FUN_00ec5080(puVar6,uVar2);
    iVar7 = *(int *)(param_2 + 0x18);
    if ((iVar7 != 0) && (1 < *(int *)(iVar7 + 0xc))) {
      if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_List_int___AddRange_261bb58
                (*(int *)(param_1 + 0x40),iVar7,**(undefined4 **)(_UNK_01069b00 + 0x10698a0));
      iVar7 = *(int *)(param_2 + 0x18);
      uVar2 = *(undefined4 *)(param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x44) = 0;
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      fStack_24 = *(float *)(iVar7 + 0xc);
      uVar3 = FUN_00ec393c(*(undefined4 *)(iVar8 + 0x24),&fStack_24);
      uVar3 = System_String__Format_29ffb6c(**(undefined4 **)(_UNK_01069b04 + 0x10698ec),uVar3,0);
      uVar2 = System_String__Concat_29fee38(uVar2,uVar3,0);
      *puVar6 = uVar2;
      thunk_FUN_00ec5080(puVar6,uVar2);
    }
    iVar8 = *(int *)(param_1 + 0x30);
    iVar7 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01069b08 + 0x106991c));
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = Rotatelab_Scripts_PlaceableManager__GetFrontBlaster_104ab24
                      (iVar7,*(undefined4 *)(param_2 + 8));
    if (iVar8 != 0) {
      Rotatelab_Scripts_BlasterHighlight__ShowOn_ff62f8(iVar8,uVar2,0,0,0,0,0,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fStack_24 = (float)UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
  fStack_24 = fStack_24 - *(float *)(param_1 + 0x50);
  uVar2 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_01069ae4 + 0x1069a6c) + 0x3c),&fStack_24);
  uVar2 = System_String__Format_29ffb6c(**(undefined4 **)(_UNK_01069ae8 + 0x1069a88),uVar2,0);
LAB_01069a8c:
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x60),uVar2);
  if (*(int *)(param_1 + 0x30) != 0) {
    Rotatelab_Scripts_BlasterHighlight__Clear_ff6414(*(int *)(param_1 + 0x30),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

