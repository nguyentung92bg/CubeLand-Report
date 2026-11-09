/* IL2CPP: Rotatelab.Scripts.LargeVoxelController$$AnimateBreakParticle
void Rotatelab_Scripts_LargeVoxelController__AnimateBreakParticle (Rotatelab_Scripts_LargeVoxelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LargeVoxelController$$AnimateBreakParticle
   void Rotatelab_Scripts_LargeVoxelController__AnimateBreakParticle
   (Rotatelab_Scripts_LargeVoxelController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_LargeVoxelController__AnimateBreakParticle_1014498(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  pcVar4 = (char *)(_UNK_01024784 + 0x10244b4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01024788 + 0x10244c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102478c + 0x10244d4));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Renderer__get_localBounds_35c43e4(&fStack_50,*(int *)(param_1 + 0x10),0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_lossyScale_3617374(&fStack_50,iVar2,0);
  fVar9 = (fStack_40 + fStack_40) * fStack_4c;
  fVar10 = (fStack_3c + fStack_3c) * fStack_48;
  fVar8 = (fStack_44 + fStack_44) * fStack_50;
  pcVar4 = (char *)(_UNK_01024790 + 0x1024578);
  if (fVar10 < fVar9) {
    fVar10 = fVar9;
  }
  if (fVar10 < fVar8) {
    fVar10 = fVar8;
  }
  fVar10 = (fVar10 + _UNK_01024770) / _UNK_01024774;
  bVar1 = fVar10 < 0.0;
  if (1.0 < fVar10) {
    fVar10 = 1.0;
  }
  if (bVar1) {
    fVar10 = _UNK_01024778;
  }
  if (fVar10 < 0.0) {
    fVar10 = _UNK_01024778;
  }
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01024794 + 0x10245e4));
    *pcVar4 = '\x01';
  }
  fVar8 = fVar10 * 30.0 + 20.0;
  if (*(int *)(**(int **)(_UNK_01024798 + 0x10245fc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar11 = (double)fVar8;
  dVar12 = (double)modf(SUB84(dVar11,0),(int)((ulonglong)dVar11 >> 0x20),&fStack_50);
  if (0.0 <= fVar8) {
    if (dVar12 != 0.5) {
      dVar11 = (double)floor(SUB84(dVar11 + 0.5,0),(int)((ulonglong)(dVar11 + 0.5) >> 0x20));
      goto LAB_01024698;
    }
    dVar11 = 1.0;
  }
  else {
    if (dVar12 != -0.5) {
      dVar11 = (double)ceil(SUB84(dVar11 + -0.5,0),(int)((ulonglong)(dVar11 + -0.5) >> 0x20));
      goto LAB_01024698;
    }
    dVar11 = -1.0;
  }
  dVar12 = (double)CONCAT44(fStack_4c,fStack_50);
  uVar3 = FUN_00f88224(fStack_50,fStack_4c);
  dVar11 = dVar12 + dVar11;
  if ((uVar3 & 1) == 0) {
    dVar11 = dVar12;
  }
LAB_01024698:
  piVar5 = *(int **)(_UNK_0102479c + 0x10246a4);
  iVar2 = *piVar5;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar5;
  }
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x68);
  if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_MergedBlockController__CalculateIdealParticleSpawnPosition_1014880
            (&fStack_50,*(int *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x44));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar7 = (undefined4)(longlong)dVar11;
  if (dVar11 == _UNK_01024768) {
    uVar7 = 0x80000000;
  }
  Rotatelab_GameAction_Int32Enum__Vector3__int__float__float___Raise_23a7b80
            (iVar2,uVar6,fStack_50,fStack_4c,fStack_48,uVar7,_UNK_01024780 + fVar10 * _UNK_0102477c,
             fVar10 * 0.5 + 0.5,**(undefined4 **)(_UNK_010247a0 + 0x1024720));
  return;
}

