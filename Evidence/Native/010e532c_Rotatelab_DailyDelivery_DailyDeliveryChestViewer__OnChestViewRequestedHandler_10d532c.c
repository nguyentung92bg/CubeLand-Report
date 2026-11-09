/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryChestViewer$$OnChestViewRequestedHandler
void Rotatelab_DailyDelivery_DailyDeliveryChestViewer__OnChestViewRequestedHandler (Rotatelab_DailyDelivery_DailyDeliveryChestViewer_o* __this, Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot_o* slot, UnityEngine_Transform_o* chest, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryChestViewer$$OnChestViewRequestedHandler
   void Rotatelab_DailyDelivery_DailyDeliveryChestViewer__OnChestViewRequestedHandler
   (Rotatelab_DailyDelivery_DailyDeliveryChestViewer_o* __this,
   Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot_o* slot, UnityEngine_Transform_o* chest, const
   MethodInfo* method); */

void Rotatelab_DailyDelivery_DailyDeliveryChestViewer__OnChestViewRequestedHandler_10d532c
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
  undefined4 uVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int *piVar17;
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
  
  pcVar11 = (char *)(_UNK_010e572c + 0x10e5354);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5730 + 0x10e5368));
    *pcVar11 = '\x01';
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_50 = 0;
  Rotatelab_DailyDelivery_DailyDeliveryChestViewer__BuildCells_10d5760(param_1,param_2);
  iVar14 = *(int *)(param_1 + 0x10);
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&fStack_78,param_3,0);
  fVar3 = fStack_70;
  fVar2 = fStack_74;
  fVar1 = fStack_78;
  pcVar11 = (char *)(_UNK_010e5734 + 0x10e53b8);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5738 + 0x10e53d4));
    *pcVar11 = '\x01';
  }
  piVar17 = *(int **)(_UNK_010e573c + 0x10e53ec);
  fVar18 = *(float *)(param_1 + 0x1c);
  iVar4 = *(int *)(*piVar17 + 0x5c);
  if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_position_3614acc
            (iVar14,fVar1 + *(float *)(iVar4 + 0x18) * fVar18,
             fVar2 + *(float *)(iVar4 + 0x1c) * fVar18,fVar3 + *(float *)(iVar4 + 0x20) * fVar18,0);
  PrimeTween_Sequence__Stop_2cf07bc((float *)(param_1 + 0x28),0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_60,1,0,1,0,0,0);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  pcVar11 = (char *)(_UNK_010e5740 + 0x10e5484);
  uStack_50 = uStack_60;
  uStack_4c = uStack_5c;
  uStack_48 = uStack_58;
  uStack_44 = uStack_54;
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5744 + 0x10e54a4));
    *pcVar11 = '\x01';
  }
  puVar6 = *(undefined4 **)(*piVar17 + 0x5c);
  pcVar11 = (char *)(_UNK_010e5748 + 0x10e54c0);
  uVar8 = *puVar6;
  uVar9 = puVar6[1];
  uVar10 = puVar6[2];
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(piVar17);
    iVar14 = *piVar17;
    *pcVar11 = '\x01';
    puVar6 = *(undefined4 **)(iVar14 + 0x5c);
  }
  uVar15 = puVar6[3];
  uVar16 = puVar6[4];
  uVar7 = puVar6[5];
  PrimeTween_Easing__op_Implicit_2ce2e54(&fStack_78,0x1b,0);
  uVar13 = uStack_68;
  uVar12 = uStack_6c;
  fVar3 = fStack_70;
  fVar2 = fStack_74;
  fVar1 = fStack_78;
  if (*(int *)(**(int **)(_UNK_010e574c + 0x10e5528) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce679c
            (&fStack_78,uVar5,uVar8,uVar9,uVar10,uVar15,uVar16,uVar7,0x3e4ccccd,fVar1,fVar2,fVar3,
             uVar12,uVar13,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_88,&uStack_50,fStack_78,fStack_74,fStack_70,uStack_6c,0);
  uStack_50 = uStack_88;
  uStack_4c = uStack_84;
  uStack_48 = uStack_80;
  uStack_44 = uStack_7c;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_98,&uStack_50,*(undefined4 *)(param_1 + 0x18),0);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uStack_50 = uStack_98;
  uStack_4c = uStack_94;
  uStack_48 = uStack_90;
  uStack_44 = uStack_8c;
  pcVar11 = (char *)(_UNK_010e5750 + 0x10e5610);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5754 + 0x10e5624));
    *pcVar11 = '\x01';
  }
  piVar17 = *(int **)(_UNK_010e5758 + 0x10e5634);
  puVar6 = *(undefined4 **)(*piVar17 + 0x5c);
  pcVar11 = (char *)(_UNK_010e575c + 0x10e5648);
  uVar8 = puVar6[3];
  uVar9 = puVar6[4];
  uVar10 = puVar6[5];
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(piVar17);
    iVar14 = *piVar17;
    *pcVar11 = '\x01';
    puVar6 = *(undefined4 **)(iVar14 + 0x5c);
  }
  uVar12 = *puVar6;
  uVar13 = puVar6[1];
  uVar7 = puVar6[2];
  PrimeTween_Easing__op_Implicit_2ce2e54(&fStack_78,0x1a,0);
  PrimeTween_Tween__Scale_2ce679c
            (&fStack_78,uVar5,uVar8,uVar9,uVar10,uVar12,uVar13,uVar7,0x3e19999a,fStack_78,fStack_74,
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

