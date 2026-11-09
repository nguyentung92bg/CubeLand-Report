/* IL2CPP: Rotatelab.CloudRush.CloudRushOfferController$$ShowGrandPrizePreview
void Rotatelab_CloudRush_CloudRushOfferController__ShowGrandPrizePreview (Rotatelab_CloudRush_CloudRushOfferController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushOfferController$$ShowGrandPrizePreview
   void Rotatelab_CloudRush_CloudRushOfferController__ShowGrandPrizePreview
   (Rotatelab_CloudRush_CloudRushOfferController_o* __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushOfferController__ShowGrandPrizePreview_10e4f6c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar8 = (char *)(_UNK_010f53c0 + 0x10f4f84);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f53c4 + 0x10f4f98));
    *pcVar8 = '\x01';
  }
  puVar11 = (undefined4 *)(param_1 + 0x40);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar5 = PrimeTween_Sequence__get_isAlive_2ceece0(puVar11,0);
  if (iVar5 == 0) {
    PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
    uVar12 = *(undefined4 *)(param_1 + 0x28);
    pcVar8 = (char *)(_UNK_010f53d8 + 0x10f5120);
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010f53dc + 0x10f5140));
      *pcVar8 = '\x01';
    }
    piVar10 = *(int **)(_UNK_010f53e0 + 0x10f5158);
    puVar7 = *(undefined4 **)(*piVar10 + 0x5c);
    pcVar8 = (char *)(_UNK_010f53e4 + 0x10f5168);
    uVar9 = *puVar7;
    uVar13 = puVar7[1];
    uVar15 = puVar7[2];
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(piVar10);
      iVar5 = *piVar10;
      *pcVar8 = '\x01';
      puVar7 = *(undefined4 **)(iVar5 + 0x5c);
    }
    uVar14 = puVar7[3];
    uVar16 = puVar7[4];
    uVar6 = puVar7[5];
    PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_60,0x1b,0);
    uVar4 = uStack_54;
    uVar3 = uStack_58;
    uVar2 = uStack_5c;
    uVar1 = uStack_60;
    if (*(int *)(**(int **)(_UNK_010f53e8 + 0x10f51d0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Scale_2ce679c
              (&uStack_60,uVar12,uVar9,uVar13,uVar15,uVar14,uVar16,uVar6,0x3e4ccccd,uVar1,uVar2,
               uVar3,uVar4,uStack_50,1,0,0,0,0,0);
    PrimeTween_Sequence__Chain_2cee04c
              (&uStack_60,&uStack_38,uStack_60,uStack_5c,uStack_58,uStack_54,0);
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    uStack_30 = uStack_58;
    uStack_2c = uStack_54;
    PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_70,&uStack_38,0x40000000,0);
    uVar12 = *(undefined4 *)(param_1 + 0x28);
    uStack_38 = uStack_70;
    uStack_34 = uStack_6c;
    uStack_30 = uStack_68;
    uStack_2c = uStack_64;
    pcVar8 = (char *)(_UNK_010f53ec + 0x10f52b4);
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010f53f0 + 0x10f52c8));
      *pcVar8 = '\x01';
    }
    piVar10 = *(int **)(_UNK_010f53f4 + 0x10f52d8);
    puVar7 = *(undefined4 **)(*piVar10 + 0x5c);
    pcVar8 = (char *)(_UNK_010f53f8 + 0x10f52ec);
    uVar15 = puVar7[3];
    uVar13 = puVar7[4];
    uVar9 = puVar7[5];
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(piVar10);
      iVar5 = *piVar10;
      *pcVar8 = '\x01';
      puVar7 = *(undefined4 **)(iVar5 + 0x5c);
    }
    PrimeTween_Tween__Scale_2ce679c
              (&uStack_80,uVar12,uVar15,uVar13,uVar9,*puVar7,puVar7[1],puVar7[2],0x3e4ccccd,0,0,0,0,
               0,1,0,0,0,0,0);
    PrimeTween_Sequence__Chain_2cee04c
              (&uStack_80,&uStack_38,uStack_80,uStack_7c,uStack_78,uStack_74,0);
    *puVar11 = uStack_80;
    *(undefined4 *)(param_1 + 0x44) = uStack_7c;
    *(undefined4 *)(param_1 + 0x48) = uStack_78;
    *(undefined4 *)(param_1 + 0x4c) = uStack_74;
  }
  else {
    PrimeTween_Sequence__Stop_2cf07bc(puVar11,0);
    PrimeTween_Sequence__Create_2cef1e0(&uStack_60,1,0,1,0,0,0);
    uVar12 = *(undefined4 *)(param_1 + 0x28);
    pcVar8 = (char *)(_UNK_010f53c8 + 0x10f500c);
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    uStack_30 = uStack_58;
    uStack_2c = uStack_54;
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010f53cc + 0x10f5028));
      *pcVar8 = '\x01';
    }
    puVar7 = *(undefined4 **)(**(int **)(_UNK_010f53d0 + 0x10f5038) + 0x5c);
    uVar9 = puVar7[2];
    uVar13 = *puVar7;
    uVar15 = puVar7[1];
    if (*(int *)(**(int **)(_UNK_010f53d4 + 0x10f5044) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Scale_2ce6560
              (&uStack_48,uVar12,uVar13,uVar15,uVar9,0x3e4ccccd,0,0,0,0,0,1,0,0,0,0,0);
    PrimeTween_Sequence__Chain_2cee04c
              (&uStack_48,&uStack_38,uStack_48,uStack_44,uStack_40,uStack_3c,0);
    *puVar11 = uStack_48;
    *(undefined4 *)(param_1 + 0x44) = uStack_44;
    *(undefined4 *)(param_1 + 0x48) = uStack_40;
    *(undefined4 *)(param_1 + 0x4c) = uStack_3c;
  }
  thunk_FUN_00ec5080(param_1 + 0x48,0);
  return;
}

