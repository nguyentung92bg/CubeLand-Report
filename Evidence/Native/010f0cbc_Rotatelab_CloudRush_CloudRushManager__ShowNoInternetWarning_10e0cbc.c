/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$ShowNoInternetWarning
void Rotatelab_CloudRush_CloudRushManager__ShowNoInternetWarning (Rotatelab_CloudRush_CloudRushManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$ShowNoInternetWarning
   void Rotatelab_CloudRush_CloudRushManager__ShowNoInternetWarning
   (Rotatelab_CloudRush_CloudRushManager_o* __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushManager__ShowNoInternetWarning_10e0cbc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char *pcVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined4 uVar15;
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
  
  pcVar12 = (char *)(_UNK_010f0fe8 + 0x10f0cd4);
  if (*pcVar12 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f0fec + 0x10f0ce8));
    *pcVar12 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  PrimeTween_Sequence__Stop_2cf07bc((undefined4 *)(param_1 + 0x88),0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
  uVar5 = *(undefined4 *)(param_1 + 0x4c);
  pcVar12 = (char *)(_UNK_010f0ff0 + 0x10f0d48);
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  if (*pcVar12 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f0ff4 + 0x10f0d68));
    *pcVar12 = '\x01';
  }
  piVar13 = *(int **)(_UNK_010f0ff8 + 0x10f0d7c);
  puVar6 = *(undefined4 **)(*piVar13 + 0x5c);
  pcVar12 = (char *)(_UNK_010f0ffc + 0x10f0d8c);
  uVar9 = *puVar6;
  uVar10 = puVar6[1];
  uVar11 = puVar6[2];
  if (*pcVar12 == '\0') {
    FUN_00ec37c0(piVar13);
    iVar7 = *piVar13;
    *pcVar12 = '\x01';
    puVar6 = *(undefined4 **)(iVar7 + 0x5c);
  }
  uVar8 = puVar6[3];
  uVar14 = puVar6[4];
  uVar15 = puVar6[5];
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_60,0x1b,0);
  uVar4 = uStack_54;
  uVar3 = uStack_58;
  uVar2 = uStack_5c;
  uVar1 = uStack_60;
  if (*(int *)(**(int **)(_UNK_010f1000 + 0x10f0df4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce679c
            (&uStack_60,uVar5,uVar9,uVar10,uVar11,uVar8,uVar14,uVar15,0x3e4ccccd,uVar1,uVar2,uVar3,
             uVar4,uStack_50,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_60,&uStack_38,uStack_60,uStack_5c,uStack_58,uStack_54,0);
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_30 = uStack_58;
  uStack_2c = uStack_54;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_70,&uStack_38,0x3f800000,0);
  uVar5 = *(undefined4 *)(param_1 + 0x4c);
  uStack_38 = uStack_70;
  uStack_34 = uStack_6c;
  uStack_30 = uStack_68;
  uStack_2c = uStack_64;
  pcVar12 = (char *)(_UNK_010f1004 + 0x10f0ee0);
  if (*pcVar12 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f1008 + 0x10f0ef4));
    *pcVar12 = '\x01';
  }
  piVar13 = *(int **)(_UNK_010f100c + 0x10f0f08);
  puVar6 = *(undefined4 **)(*piVar13 + 0x5c);
  pcVar12 = (char *)(_UNK_010f1010 + 0x10f0f18);
  uVar11 = puVar6[3];
  uVar10 = puVar6[4];
  uVar9 = puVar6[5];
  if (*pcVar12 == '\0') {
    FUN_00ec37c0(piVar13);
    iVar7 = *piVar13;
    *pcVar12 = '\x01';
    puVar6 = *(undefined4 **)(iVar7 + 0x5c);
  }
  PrimeTween_Tween__Scale_2ce679c
            (&uStack_80,uVar5,uVar11,uVar10,uVar9,*puVar6,puVar6[1],puVar6[2],0x3e4ccccd,0,0,0,0,0,1
             ,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_80,&uStack_38,uStack_80,uStack_7c,uStack_78,uStack_74,0);
  *(undefined4 *)(param_1 + 0x88) = uStack_80;
  *(undefined4 *)(param_1 + 0x8c) = uStack_7c;
  *(undefined4 *)(param_1 + 0x90) = uStack_78;
  *(undefined4 *)(param_1 + 0x94) = uStack_74;
  thunk_FUN_00ec5080(param_1 + 0x90,0);
  return;
}

