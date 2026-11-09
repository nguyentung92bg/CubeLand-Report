/* IL2CPP: Rotatelab.SeasonPassChestViewer$$OnChestViewRequestedHandler
void Rotatelab_SeasonPassChestViewer__OnChestViewRequestedHandler (Rotatelab_SeasonPassChestViewer_o* __this, System_Collections_Generic_List_SeasonPassSo_SeasonReward__o* rewards, UnityEngine_Transform_o* posRef, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPassChestViewer$$OnChestViewRequestedHandler
   void Rotatelab_SeasonPassChestViewer__OnChestViewRequestedHandler
   (Rotatelab_SeasonPassChestViewer_o* __this,
   System_Collections_Generic_List_SeasonPassSo_SeasonReward__o* rewards, UnityEngine_Transform_o*
   posRef, const MethodInfo* method); */

void Rotatelab_SeasonPassChestViewer__OnChestViewRequestedHandler_fc48d4
               (int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float *pfVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int *piVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  undefined4 uVar22;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  
  pcVar11 = (char *)(_UNK_00fd4fcc + 0xfd48fc);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd4fd0 + 0xfd4910));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd4fd4 + 0xfd491c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd4fd8 + 0xfd4928));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd4fdc + 0xfd4934));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd4fe0 + 0xfd4940));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd4fe4 + 0xfd494c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd4fe8 + 0xfd4958));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd4fec + 0xfd4964));
    *pcVar11 = '\x01';
  }
  fStack_5c = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  fStack_58 = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar19 = *(int **)(_UNK_00fd4ff0 + 0xfd4980);
  iVar14 = *(int *)(param_1 + 0x10);
  fStack_60 = 0.0;
  iVar5 = *piVar19;
  if (*(int *)(iVar5 + 0x74) == 0) {
    FUN_00ec3934();
    iVar5 = *piVar19;
  }
  puVar8 = *(undefined4 **)(iVar5 + 0x5c);
  iVar16 = puVar8[1];
  if (iVar16 == 0) {
    if (*(int *)(iVar5 + 0x74) == 0) {
      FUN_00ec3934();
      puVar8 = *(undefined4 **)(*piVar19 + 0x5c);
    }
    uVar12 = *puVar8;
    iVar16 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd4ff4 + 0xfd49d0));
    System_Action_object____ctor_1f11414
              (iVar16,uVar12,**(undefined4 **)(_UNK_00fd4ff8 + 0xfd49f0),0);
    piVar19 = (int *)(*(int *)(*piVar19 + 0x5c) + 4);
    *piVar19 = iVar16;
    thunk_FUN_00ec5080(piVar19,iVar16);
  }
  if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___ForEach_267e6f0
            (iVar14,iVar16,**(undefined4 **)(_UNK_00fd4ffc + 0xfd4a28));
  iVar5 = 0;
  puVar8 = *(undefined4 **)(_UNK_00fd5000 + 0xfd4a40);
  puVar21 = *(undefined4 **)(_UNK_00fd5004 + 0xfd4a48);
  while( true ) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(param_2 + 0xc) <= iVar5) break;
    uVar12 = System_Collections_Generic_List_object___get_Item_267d814(param_2,iVar5,*puVar8);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar14 = System_Collections_Generic_List_object___get_Item_267d814
                       (*(int *)(param_1 + 0x10),iVar5,*puVar21);
    if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_SeasonPassUnClaimedReward__Init_fc43c0(iVar14,uVar12);
    iVar5 = iVar5 + 1;
  }
  uVar6 = *(int *)(param_2 + 0xc) - 1;
  if (uVar6 < 4) {
    uVar12 = *(undefined4 *)(_UNK_00fd5008 + 0xfd4ad4 + uVar6 * 4);
    uVar17 = *(undefined4 *)(_UNK_00fd500c + 0xfd4ad8 + uVar6 * 4);
  }
  else {
    uVar12 = 0x43af0000;
    uVar17 = 0x43c80000;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__set_sizeDelta_3613820(*(int *)(param_1 + 0x1c),uVar17,uVar12,0);
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_sizeDelta_3613710(&fStack_70,*(int *)(param_1 + 0x1c),0);
  iVar5 = *(int *)(param_1 + 0x30);
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&fStack_70,param_3,0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Camera__ScreenToViewportPoint_35aeae0
            (&fStack_70,iVar5,fStack_70,fStack_6c,fStack_68,0);
  fVar2 = fStack_6c;
  iVar5 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&fStack_70,param_3,0);
  fVar4 = fStack_68;
  fVar3 = fStack_6c;
  fVar1 = fStack_70;
  if (0.25 <= fVar2) {
    pcVar11 = (char *)(_UNK_00fd5010 + 0xfd4c20);
    if (*pcVar11 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00fd5014 + 0xfd4c34));
      *pcVar11 = '\x01';
    }
    iVar14 = *(int *)(**(int **)(_UNK_00fd5018 + 0xfd4c48) + 0x5c);
    pfVar7 = (float *)(iVar14 + 0x2c);
    pfVar9 = (float *)(iVar14 + 0x28);
    pfVar10 = (float *)(iVar14 + 0x24);
  }
  else {
    pcVar11 = (char *)(_UNK_00fd501c + 0xfd4bd8);
    if (*pcVar11 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00fd5020 + 0xfd4bec));
      *pcVar11 = '\x01';
    }
    iVar14 = *(int *)(**(int **)(_UNK_00fd5024 + 0xfd4c00) + 0x5c);
    pfVar7 = (float *)(iVar14 + 0x20);
    pfVar9 = (float *)(iVar14 + 0x1c);
    pfVar10 = (float *)(iVar14 + 0x18);
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_position_3614acc
            (iVar5,fVar1 + *pfVar10 * _UNK_00fd4fc8,fVar3 + *pfVar9 * _UNK_00fd4fc8,
             fVar4 + *pfVar7 * _UNK_00fd4fc8,0);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x14),0.25 <= fVar2,0);
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x18),fVar2 < 0.25,0);
  PrimeTween_Sequence__Stop_2cf07bc((undefined4 *)(param_1 + 0x20),0);
  PrimeTween_Sequence__Create_2cef1e0(&fStack_70,1,0,1,0,0,0);
  uVar12 = *(undefined4 *)(param_1 + 0x1c);
  pcVar11 = (char *)(_UNK_00fd5028 + 0xfd4d4c);
  fStack_60 = fStack_70;
  fStack_5c = fStack_6c;
  fStack_58 = fStack_68;
  uStack_54 = uStack_64;
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd502c + 0xfd4d6c));
    *pcVar11 = '\x01';
  }
  piVar19 = *(int **)(_UNK_00fd5030 + 0xfd4d7c);
  puVar8 = *(undefined4 **)(*piVar19 + 0x5c);
  pcVar11 = (char *)(_UNK_00fd5034 + 0xfd4d8c);
  uVar13 = puVar8[2];
  uVar17 = *puVar8;
  uVar18 = puVar8[1];
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(piVar19,puVar8,uVar17);
    puVar8 = *(undefined4 **)(*piVar19 + 0x5c);
    *pcVar11 = '\x01';
  }
  uVar22 = puVar8[3];
  uVar20 = puVar8[4];
  uVar15 = puVar8[5];
  if (*(int *)(**(int **)(_UNK_00fd5038 + 0xfd4dd8) + 0x74) == 0) {
    FUN_00ec3934(**(int **)(_UNK_00fd5038 + 0xfd4dd8),0,uVar17);
  }
  PrimeTween_Tween__Scale_2ce679c
            (&fStack_80,uVar12,uVar17,uVar18,uVar13,uVar22,uVar20,uVar15,0x3e4ccccd,0,0,0,0,0,1,0,0,
             0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&fStack_80,&fStack_60,fStack_80,uStack_7c,uStack_78,uStack_74,0);
  fStack_60 = fStack_80;
  fStack_5c = (float)uStack_7c;
  fStack_58 = (float)uStack_78;
  uStack_54 = uStack_74;
  PrimeTween_Sequence__ChainDelay_2cf0394(&fStack_90,&fStack_60,0x3f000000,0);
  uVar12 = *(undefined4 *)(param_1 + 0x1c);
  fStack_60 = fStack_90;
  fStack_5c = (float)uStack_8c;
  fStack_58 = (float)uStack_88;
  uStack_54 = uStack_84;
  pcVar11 = (char *)(_UNK_00fd503c + 0xfd4ebc);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd5040 + 0xfd4ed0));
    *pcVar11 = '\x01';
  }
  piVar19 = *(int **)(_UNK_00fd5044 + 0xfd4ee0);
  puVar8 = *(undefined4 **)(*piVar19 + 0x5c);
  pcVar11 = (char *)(_UNK_00fd5048 + 0xfd4ef0);
  uVar18 = puVar8[3];
  uVar13 = puVar8[4];
  uVar17 = puVar8[5];
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(piVar19);
    iVar5 = *piVar19;
    *pcVar11 = '\x01';
    puVar8 = *(undefined4 **)(iVar5 + 0x5c);
  }
  PrimeTween_Tween__Scale_2ce679c
            (&uStack_a0,uVar12,uVar18,uVar13,uVar17,*puVar8,puVar8[1],puVar8[2],0x3e4ccccd,0,0,0,0,0
             ,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_a0,&fStack_60,uStack_a0,uStack_9c,uStack_98,uStack_94,0);
  *(undefined4 *)(param_1 + 0x20) = uStack_a0;
  *(undefined4 *)(param_1 + 0x24) = uStack_9c;
  *(undefined4 *)(param_1 + 0x28) = uStack_98;
  *(undefined4 *)(param_1 + 0x2c) = uStack_94;
  thunk_FUN_00ec5080(param_1 + 0x28,0);
  return;
}

