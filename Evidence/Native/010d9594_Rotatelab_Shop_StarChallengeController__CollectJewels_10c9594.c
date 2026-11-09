/* IL2CPP: Rotatelab.Shop.StarChallengeController$$CollectJewels
void Rotatelab_Shop_StarChallengeController__CollectJewels (Rotatelab_Shop_StarChallengeController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeController$$CollectJewels
   void Rotatelab_Shop_StarChallengeController__CollectJewels
   (Rotatelab_Shop_StarChallengeController_o* __this, const MethodInfo* method); */

int Rotatelab_Shop_StarChallengeController__CollectJewels_10c9594(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_r4;
  char *pcVar9;
  undefined4 unaff_r5;
  int *piVar10;
  int iVar11;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  uint *puVar12;
  undefined4 uVar13;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  bool bVar14;
  uint in_fpscr;
  undefined4 uVar15;
  undefined8 uVar16;
  
  pcVar9 = (char *)(_UNK_010d9870 + 0x10d95b0);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d9874 + 0x10d95c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d9878 + 0x10d95d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d987c + 0x10d95dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d9880 + 0x10d95e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d9884 + 0x10d95f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d9888 + 0x10d9600));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d988c + 0x10d960c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d9890 + 0x10d9618));
    *pcVar9 = '\x01';
  }
  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d9894 + 0x10d962c));
  System_Object___ctor_2bb93bc(iVar2,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar2 + 8) = param_1;
  puVar12 = (uint *)(iVar2 + 0x10);
  thunk_FUN_00ec5080((undefined4 *)(iVar2 + 8),param_1);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010d9898 + 0x10d9668));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar16 = Rotatelab_ObservableLong__op_Implicit_fb4344(*(undefined4 *)(iVar3 + 0x10),0);
  iVar3 = (int)((ulonglong)uVar16 >> 0x20);
  *(undefined8 *)puVar12 = uVar16;
  bVar14 = (int)uVar16 != 0;
  if ((int)-(iVar3 + (uint)bVar14) < 0 != (SBORROW4(0,iVar3) != SBORROW4(-iVar3,(uint)bVar14))) {
    pcVar9 = (char *)(_UNK_010d989c + 0x10d96a4);
    if (*pcVar9 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d98a0 + 0x10d96b8));
      *pcVar9 = '\x01';
    }
    if (**(char **)(**(int **)(_UNK_010d98a4 + 0x10d96cc) + 0x5c) == '\0') {
      iVar3 = Rotatelab_Shop_StarChallengeController__get_JewelSo_10c6e5c(param_1);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = *(int *)(iVar3 + 0xc);
      uVar5 = Rotatelab_Shop_StarChallengePopup__get_CurrentStarChallengeIndex_10c5e90();
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = System_Collections_Generic_List_object___get_Item_267d814
                        (iVar3,uVar5,**(undefined4 **)(_UNK_010d98a8 + 0x10d973c));
      piVar10 = (int *)(iVar2 + 0xc);
      *piVar10 = iVar3;
      thunk_FUN_00ec5080(piVar10,iVar3);
      if (*piVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar11 = *(int *)(*piVar10 + 8);
      iVar3 = Rotatelab_Shop_StarChallengeController__get_CollectedStarAmount_10c70a4();
      *(int *)(iVar2 + 0x18) = iVar11 - iVar3;
      uVar4 = Rotatelab_Shop_StarChallengeController__get_CollectedStarAmount_10c70a4();
      uVar8 = *puVar12;
      iVar11 = *(int *)(iVar2 + 0x14);
      uVar7 = *(uint *)(iVar2 + 0x18);
      iVar3 = (int)uVar7 >> 0x1f;
      if ((int)(iVar11 - (iVar3 + (uint)(uVar8 < uVar7))) < 0 ==
          (SBORROW4(iVar11,iVar3) != SBORROW4(iVar11 - iVar3,(uint)(uVar8 < uVar7)))) {
        uVar8 = uVar7;
        iVar11 = iVar3;
      }
      *(int *)(iVar2 + 0x20) = uVar8 + uVar4;
      *(uint *)(iVar2 + 0x24) = iVar11 + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar8,uVar4);
      uVar5 = Rotatelab_Shop_StarChallengeController__get_CollectedStarAmount_10c70a4();
      iVar3 = *(int *)(iVar2 + 0x20);
      uVar13 = *(undefined4 *)(iVar2 + 0x24);
      uVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d98ac + 0x10d97c8));
      DG_Tweening_TweenCallback_float____ctor_1bf9864
                (uVar6,iVar2,**(undefined4 **)(_UNK_010d98b0 + 0x10d97e4),0);
      uVar15 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
      uVar5 = FUN_00f88368(iVar3,uVar13);
      iVar3 = DG_Tweening_DOVirtual__Float_11682ec(uVar15,uVar5,0x3f800000,uVar6,0);
      uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d98b4 + 0x10d9828));
      DG_Tweening_TweenCallback___ctor_11657e8
                (uVar5,iVar2,**(undefined4 **)(_UNK_010d98b8 + 0x10d9844),0);
      uVar6 = **(undefined4 **)(_UNK_010d98bc + 0x10d985c);
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
    Rotatelab_Shop_StarChallengeController__SpendJewels_10c93a4
              (*puVar12,*(undefined4 *)(iVar2 + 0x14));
  }
  pcVar9 = (char *)(_UNK_010d994c + 0x10d98dc);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d9950 + 0x10d98f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d9954 + 0x10d98fc));
    *pcVar9 = '\x01';
  }
  uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d9958 + 0x10d9910));
  DG_Tweening_TweenCallback___ctor_11657e8
            (uVar5,param_1,**(undefined4 **)(_UNK_010d995c + 0x10d992c),0);
  pcVar9 = (char *)(_UNK_01178688 + 0x11785dc);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0117868c + 0x11785f0),uVar5,1,0,unaff_r4,unaff_r5,unaff_r6,
                 unaff_r7,unaff_r11,unaff_lr);
    FUN_00ec37c0(*(undefined4 *)(_UNK_01178690 + 0x11785fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01178694 + 0x1178608));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01178698 + 0x1178614));
    *pcVar9 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0117869c + 0x1178628) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar6 = DG_Tweening_DOTween__Sequence_1167c00();
  uVar6 = DG_Tweening_TweenSettingsExtensions__AppendInterval_11686ac(uVar6,0x3f000000);
  uVar5 = DG_Tweening_TweenSettingsExtensions__OnStepComplete_object__15d9e90
                    (uVar6,uVar5,**(undefined4 **)(_UNK_011786a0 + 0x1178650));
  iVar2 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object__15da4d0
                    (uVar5,0,1,**(undefined4 **)(_UNK_011786a4 + 0x1178668));
  uVar8 = **(uint **)(_UNK_011786a8 + 0x117867c);
  if (iVar2 != 0) {
    uVar8 = (uint)*(byte *)(iVar2 + 0x94);
  }
  if (iVar2 == 0 || uVar8 == 0) {
    return iVar2;
  }
  if (*(char *)(iVar2 + 0xa4) == '\0') {
    *(undefined1 *)(iVar2 + 0x5c) = 1;
  }
  return iVar2;
}

