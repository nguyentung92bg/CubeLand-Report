/* IL2CPP: Rotatelab.Shop.StarChallengeChestViewer$$OnChestViewRequestedHandler
void Rotatelab_Shop_StarChallengeChestViewer__OnChestViewRequestedHandler (Rotatelab_Shop_StarChallengeChestViewer_o* __this, Rotatelab_Shop_StarChallengeSO_RewardSlot_o* slot, UnityEngine_Transform_o* chest, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeChestViewer$$OnChestViewRequestedHandler
   void Rotatelab_Shop_StarChallengeChestViewer__OnChestViewRequestedHandler
   (Rotatelab_Shop_StarChallengeChestViewer_o* __this, Rotatelab_Shop_StarChallengeSO_RewardSlot_o*
   slot, UnityEngine_Transform_o* chest, const MethodInfo* method); */

void Rotatelab_Shop_StarChallengeChestViewer__OnChestViewRequestedHandler_10c63e0
               (int param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  int *piVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  pcVar10 = (char *)(_UNK_010d6800 + 0x10d6408);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d6804 + 0x10d641c));
    *pcVar10 = '\x01';
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_50 = 0;
  Rotatelab_Shop_StarChallengeChestViewer__BuildCells_10c6834(param_1,param_2);
  iVar13 = *(int *)(param_1 + 0x10);
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&fStack_78,param_3,0);
  fVar3 = fStack_70;
  fVar2 = fStack_74;
  fVar1 = fStack_78;
  pcVar10 = (char *)(_UNK_010d6808 + 0x10d646c);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d680c + 0x10d6488));
    *pcVar10 = '\x01';
  }
  piVar15 = *(int **)(_UNK_010d6810 + 0x10d64a0);
  fVar16 = *(float *)(param_1 + 0x20);
  iVar4 = *(int *)(*piVar15 + 0x5c);
  if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_position_3614acc
            (iVar13,fVar1 + *(float *)(iVar4 + 0x18) * fVar16,
             fVar2 + *(float *)(iVar4 + 0x1c) * fVar16,fVar3 + *(float *)(iVar4 + 0x20) * fVar16,0);
  PrimeTween_Sequence__Stop_2cf07bc((float *)(param_1 + 0x28),0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_60,1,0,1,0,0,0);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  pcVar10 = (char *)(_UNK_010d6814 + 0x10d6538);
  uStack_50 = uStack_60;
  uStack_4c = uStack_5c;
  uStack_48 = uStack_58;
  uStack_44 = uStack_54;
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d6818 + 0x10d6558));
    *pcVar10 = '\x01';
  }
  puVar6 = *(undefined4 **)(*piVar15 + 0x5c);
  pcVar10 = (char *)(_UNK_010d681c + 0x10d6574);
  uVar7 = *puVar6;
  uVar8 = puVar6[1];
  uVar9 = puVar6[2];
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(piVar15);
    iVar13 = *piVar15;
    *pcVar10 = '\x01';
    puVar6 = *(undefined4 **)(iVar13 + 0x5c);
  }
  fVar16 = (float)puVar6[3];
  fVar17 = (float)puVar6[4];
  fVar18 = (float)puVar6[5];
  PrimeTween_Easing__op_Implicit_2ce2e54(&fStack_78,0x1b,0);
  uVar12 = uStack_68;
  uVar11 = uStack_6c;
  fVar3 = fStack_70;
  fVar2 = fStack_74;
  fVar1 = fStack_78;
  fVar18 = fVar18 * _UNK_010d67fc;
  fVar17 = fVar17 * _UNK_010d67fc;
  fVar16 = fVar16 * _UNK_010d67fc;
  if (*(int *)(**(int **)(_UNK_010d6820 + 0x10d65f8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce679c
            (&fStack_78,uVar5,uVar7,uVar8,uVar9,fVar16,fVar17,fVar18,0x3e4ccccd,fVar1,fVar2,fVar3,
             uVar11,uVar12,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_88,&uStack_50,fStack_78,fStack_74,fStack_70,uStack_6c,0);
  uStack_50 = uStack_88;
  uStack_4c = uStack_84;
  uStack_48 = uStack_80;
  uStack_44 = uStack_7c;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_98,&uStack_50,*(undefined4 *)(param_1 + 0x1c),0);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uStack_50 = uStack_98;
  uStack_4c = uStack_94;
  uStack_48 = uStack_90;
  uStack_44 = uStack_8c;
  pcVar10 = (char *)(_UNK_010d6824 + 0x10d66e0);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d6828 + 0x10d66f4));
    *pcVar10 = '\x01';
  }
  piVar15 = *(int **)(_UNK_010d682c + 0x10d6704);
  puVar6 = *(undefined4 **)(*piVar15 + 0x5c);
  pcVar10 = (char *)(_UNK_010d6830 + 0x10d6718);
  uVar7 = puVar6[3];
  uVar8 = puVar6[4];
  uVar9 = puVar6[5];
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(piVar15);
    iVar13 = *piVar15;
    *pcVar10 = '\x01';
    puVar6 = *(undefined4 **)(iVar13 + 0x5c);
  }
  uVar11 = *puVar6;
  uVar12 = puVar6[1];
  uVar14 = puVar6[2];
  PrimeTween_Easing__op_Implicit_2ce2e54(&fStack_78,0x1a,0);
  PrimeTween_Tween__Scale_2ce679c
            (&fStack_78,uVar5,uVar7,uVar8,uVar9,uVar11,uVar12,uVar14,0x3e19999a,fStack_78,fStack_74,
             fStack_70,uStack_6c,uStack_68,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&fStack_78,&uStack_50,fStack_78,fStack_74,fStack_70,uStack_6c,0);
  *(float *)(param_1 + 0x28) = fStack_78;
  *(float *)(param_1 + 0x2c) = fStack_74;
  *(float *)(param_1 + 0x30) = fStack_70;
  *(undefined4 *)(param_1 + 0x34) = uStack_6c;
  thunk_FUN_00ec5080(param_1 + 0x30,0);
  return;
}

