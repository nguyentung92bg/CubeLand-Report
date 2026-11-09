/* IL2CPP: Rotatelab.FX.ParticleImageManager$$Play
void Rotatelab_FX_ParticleImageManager__Play (Rotatelab_FX_ParticleImageManager_o* __this, int32_t type, UnityEngine_Vector3_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.ParticleImageManager$$Play
   void Rotatelab_FX_ParticleImageManager__Play (Rotatelab_FX_ParticleImageManager_o* __this,
   int32_t type, UnityEngine_Vector3_o position, const MethodInfo* method); */

void Rotatelab_FX_ParticleImageManager__Play_1100a94
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  pcVar5 = (char *)(_UNK_01110de0 + 0x1110ac0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01110de4 + 0x1110ad4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01110de8 + 0x1110ae0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01110dec + 0x1110aec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01110df0 + 0x1110af8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01110df4 + 0x1110b04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01110df8 + 0x1110b10));
    *pcVar5 = '\x01';
  }
  piVar9 = *(int **)(_UNK_01110dfc + 0x1110b24);
  uVar7 = *(undefined4 *)(param_1 + 0x10);
  iVar1 = *piVar9;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar9;
  }
  puVar4 = *(undefined4 **)(iVar1 + 0x5c);
  iVar8 = puVar4[2];
  if (iVar8 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar4 = *(undefined4 **)(*piVar9 + 0x5c);
    }
    uVar6 = *puVar4;
    iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01110e00 + 0x1110b70));
    System_Func_object__Int32Enum__bool____ctor_239e560
              (iVar8,uVar6,**(undefined4 **)(_UNK_01110e04 + 0x1110b90),0);
    piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 8);
    *piVar9 = iVar8;
    thunk_FUN_00ec5080(piVar9,iVar8);
  }
  if (*(int *)(**(int **)(_UNK_01110e08 + 0x1110bb8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__Find_object__Int32Enum__1486c7c
                    (uVar7,param_2,iVar8,**(undefined4 **)(_UNK_01110e0c + 0x1110bdc));
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = Rotatelab_Pool_ObjectPool_object___Get_1857ab4
                    (*(int *)(param_1 + 0x14),**(undefined4 **)(_UNK_01110e10 + 0x1110c04));
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar8 + 0x18) = param_2;
  iVar2 = UnityEngine_Component__get_transform_35fe190(iVar8,0);
  iVar3 = UnityEngine_Camera__get_main_35aede4(0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Camera__WorldToScreenPoint_35aea00(&fStack_4c,iVar3,param_3,param_4,param_5,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_position_3614acc(iVar2,fStack_4c,uStack_48,uStack_44,0);
  iVar2 = UnityEngine_Component__get_transform_35fe190(iVar8,0);
  pcVar5 = (char *)(_UNK_01110e14 + 0x1110cb8);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01110e18 + 0x1110ccc));
    *pcVar5 = '\x01';
  }
  iVar3 = *(int *)(**(int **)(_UNK_01110e1c + 0x1110ce0) + 0x5c);
  fVar10 = *(float *)(iVar3 + 0xc);
  fVar11 = *(float *)(iVar3 + 0x10);
  fVar12 = *(float *)(iVar3 + 0x14);
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x18),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localScale_36154c0(&fStack_4c,iVar3,0);
  fStack_4c = 1.0 / fStack_4c;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc
            (iVar2,fVar10 * fStack_4c,fVar11 * fStack_4c,fVar12 * fStack_4c,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  if (*(int *)(iVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar4 = (undefined4 *)(*(int *)(iVar8 + 0x10) + 0x44c);
  *puVar4 = uVar7;
  thunk_FUN_00ec5080(puVar4,uVar7);
  Rotatelab_FX_ParticleImageController__SetSpriteAndPreserveAspect_1100424
            (iVar8,*(undefined4 *)(iVar1 + 0x10));
  if (*(int *)(iVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  AssetKits_ParticleImage_ParticleImage__Play_2cd02c4(*(int *)(iVar8 + 0x10),0);
  return;
}

