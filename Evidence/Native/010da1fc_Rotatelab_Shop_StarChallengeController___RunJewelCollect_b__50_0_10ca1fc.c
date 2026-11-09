/* IL2CPP: Rotatelab.Shop.StarChallengeController$$<RunJewelCollect>b__50_0
void Rotatelab_Shop_StarChallengeController___RunJewelCollect_b__50_0 (Rotatelab_Shop_StarChallengeController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeController$$<RunJewelCollect>b__50_0
   void Rotatelab_Shop_StarChallengeController___RunJewelCollect_b__50_0
   (Rotatelab_Shop_StarChallengeController_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_StarChallengeController___RunJewelCollect_b__50_0_10ca1fc(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 uVar6;
  undefined4 uVar7;
  
  pcVar3 = (char *)(_UNK_010da348 + 0x10da214);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010da34c + 0x10da228));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010da350 + 0x10da234));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010da354 + 0x10da240));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010da358 + 0x10da24c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010da35c + 0x10da258));
    *pcVar3 = '\x01';
  }
  piVar4 = *(int **)(_UNK_010da360 + 0x10da26c);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  uVar7 = *(undefined4 *)(param_1 + 0x3c);
  uVar6 = *(undefined4 *)(param_1 + 0x40);
  iVar5 = *(int *)(*(int *)(iVar1 + 0x5c) + 300);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010da364 + 0x10da290));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(*(undefined4 *)(iVar1 + 0x10),0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (0xb < iVar1) {
    iVar1 = 0xc;
  }
  Rotatelab_GameAction_object__object__Int32Enum__int___Raise_23a7234
            (iVar5,uVar7,uVar6,5,iVar1,**(undefined4 **)(_UNK_010da368 + 0x10da2e8));
  uVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010da36c + 0x10da308));
  DG_Tweening_TweenCallback___ctor_11657e8
            (uVar6,param_1,**(undefined4 **)(_UNK_010da370 + 0x10da324),0);
  pcVar3 = (char *)(_UNK_01178688 + 0x11785dc);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0117868c + 0x11785f0),uVar6,1,0,unaff_r4,unaff_r5,unaff_r6,
                 unaff_r7);
    FUN_00ec37c0(*(undefined4 *)(_UNK_01178690 + 0x11785fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01178694 + 0x1178608));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01178698 + 0x1178614));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0117869c + 0x1178628) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar7 = DG_Tweening_DOTween__Sequence_1167c00();
  uVar7 = DG_Tweening_TweenSettingsExtensions__AppendInterval_11686ac(uVar7,0x3f000000);
  uVar6 = DG_Tweening_TweenSettingsExtensions__OnStepComplete_object__15d9e90
                    (uVar7,uVar6,**(undefined4 **)(_UNK_011786a0 + 0x1178650));
  iVar1 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object__15da4d0
                    (uVar6,0,1,**(undefined4 **)(_UNK_011786a4 + 0x1178668));
  uVar2 = **(uint **)(_UNK_011786a8 + 0x117867c);
  if (iVar1 != 0) {
    uVar2 = (uint)*(byte *)(iVar1 + 0x94);
  }
  if (iVar1 != 0 && uVar2 != 0) {
    if (*(char *)(iVar1 + 0xa4) == '\0') {
      *(undefined1 *)(iVar1 + 0x5c) = 1;
    }
    return;
  }
  return;
}

