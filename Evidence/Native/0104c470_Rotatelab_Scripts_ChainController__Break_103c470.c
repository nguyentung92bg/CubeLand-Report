/* IL2CPP: Rotatelab.Scripts.ChainController$$Break
void Rotatelab_Scripts_ChainController__Break (Rotatelab_Scripts_ChainController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ChainController$$Break
   void Rotatelab_Scripts_ChainController__Break (Rotatelab_Scripts_ChainController_o* __this, const
   MethodInfo* method); */

void Rotatelab_Scripts_ChainController__Break_103c470(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 uVar12;
  int *piVar13;
  int iVar14;
  float fStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  
  pcVar11 = (char *)(_UNK_0104c938 + 0x104c490);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104c93c + 0x104c4a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104c940 + 0x104c4b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104c944 + 0x104c4bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104c948 + 0x104c4c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104c94c + 0x104c4d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104c950 + 0x104c4e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104c954 + 0x104c4ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104c958 + 0x104c4f8));
    *pcVar11 = '\x01';
  }
  fStack_4c = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  fStack_48 = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  fStack_50 = 0.0;
  PrimeTween_Sequence__Create_2cef1e0(&fStack_68,1,0,1,0,0,0);
  piVar13 = *(int **)(_UNK_0104c95c + 0x104c540);
  uVar9 = *(undefined4 *)(param_1 + 0x10);
  iVar5 = *piVar13;
  fStack_50 = fStack_68;
  fStack_4c = fStack_64;
  fStack_48 = fStack_60;
  uStack_44 = uStack_5c;
  if (*(int *)(iVar5 + 0x74) == 0) {
    FUN_00ec3934();
    iVar5 = *piVar13;
  }
  puVar10 = *(undefined4 **)(iVar5 + 0x5c);
  iVar14 = puVar10[1];
  if (iVar14 == 0) {
    if (*(int *)(iVar5 + 0x74) == 0) {
      FUN_00ec3934();
      puVar10 = *(undefined4 **)(*piVar13 + 0x5c);
    }
    uVar12 = *puVar10;
    iVar14 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0104c960 + 0x104c598));
    System_Action_object__float____ctor_1f19254
              (iVar14,uVar12,**(undefined4 **)(_UNK_0104c964 + 0x104c5b8),0);
    piVar13 = (int *)(*(int *)(*piVar13 + 0x5c) + 4);
    *piVar13 = iVar14;
    thunk_FUN_00ec5080(piVar13,iVar14);
  }
  PrimeTween_Easing__op_Implicit_2ce2e54(&fStack_68,9,0);
  uVar4 = uStack_58;
  uVar12 = uStack_5c;
  fVar3 = fStack_60;
  fVar2 = fStack_64;
  fVar1 = fStack_68;
  if (*(int *)(**(int **)(_UNK_0104c968 + 0x104c5f8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Custom_object__15d5b3c
            (&fStack_68,uVar9,0,0x3f800000,0x3f000000,iVar14,fVar1,fVar2,fVar3,uVar12,uVar4,1,0,0,0,
             0,**(undefined4 **)(_UNK_0104c96c + 0x104c628));
  PrimeTween_Sequence__Chain_2cee04c
            (&fStack_78,&fStack_50,fStack_68,fStack_64,fStack_60,uStack_5c,0);
  fStack_50 = fStack_78;
  fStack_4c = (float)uStack_74;
  fStack_48 = (float)uStack_70;
  uStack_44 = uStack_6c;
  uVar9 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  iVar5 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localPosition_3613b6c(&fStack_68,iVar5,0);
  fVar3 = fStack_60;
  fVar2 = fStack_64;
  fVar1 = fStack_68;
  fVar6 = (float)UnityEngine_Random__Range_35f8ac0(0xbf800000,0x3f800000,0);
  fVar7 = (float)UnityEngine_Random__Range_35f8ac0(0xbf800000,0x3f800000,0);
  fVar8 = (float)UnityEngine_Random__Range_35f8ac0(0xbf800000,0x3f800000,0);
  PrimeTween_Easing__op_Implicit_2ce2e54(&fStack_68,9,0);
  PrimeTween_Tween__LocalPosition_2ce550c
            (&fStack_68,uVar9,fVar1 + fVar6,fVar2 + fVar7,fVar3 + fVar8,0x3f000000,fStack_68,
             fStack_64,fStack_60,uStack_5c,uStack_58,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&fStack_68,&fStack_50,fStack_68,fStack_64,fStack_60,uStack_5c,0);
  fStack_50 = fStack_68;
  fStack_4c = fStack_64;
  fStack_48 = fStack_60;
  uStack_44 = uStack_5c;
  uVar9 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  PrimeTween_Tween__Scale_2ce4684(&fStack_88,uVar9,0,0x3e800000,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Group_2cef730
            (&fStack_88,&fStack_50,fStack_88,uStack_84,uStack_80,uStack_7c,0);
  fStack_50 = fStack_88;
  fStack_4c = (float)uStack_84;
  fStack_48 = (float)uStack_80;
  uStack_44 = uStack_7c;
  PrimeTween_Sequence__ChainDelay_2cf0394(&fStack_98,&fStack_50,0x3f000000,0);
  piVar13 = *(int **)(_UNK_0104c970 + 0x104c874);
  iVar5 = *piVar13;
  fStack_50 = fStack_98;
  fStack_4c = (float)uStack_94;
  fStack_48 = (float)uStack_90;
  uStack_44 = uStack_8c;
  if (*(int *)(iVar5 + 0x74) == 0) {
    FUN_00ec3934();
    iVar5 = *piVar13;
  }
  puVar10 = *(undefined4 **)(iVar5 + 0x5c);
  iVar14 = puVar10[2];
  if (iVar14 == 0) {
    if (*(int *)(iVar5 + 0x74) == 0) {
      FUN_00ec3934();
      puVar10 = *(undefined4 **)(*piVar13 + 0x5c);
    }
    uVar9 = *puVar10;
    iVar14 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0104c974 + 0x104c8c4));
    System_Action_object____ctor_1f11414
              (iVar14,uVar9,**(undefined4 **)(_UNK_0104c978 + 0x104c8e4),0);
    piVar13 = (int *)(*(int *)(*piVar13 + 0x5c) + 8);
    *piVar13 = iVar14;
    thunk_FUN_00ec5080(piVar13,iVar14);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (&fStack_68,&fStack_50,param_1,iVar14,0,**(undefined4 **)(_UNK_0104c97c + 0x104c914));
  return;
}

