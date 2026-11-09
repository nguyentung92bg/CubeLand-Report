/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController$$UpdateColor
void Rotatelab_Scripts_ShrinkingCoverController__UpdateColor (Rotatelab_Scripts_ShrinkingCoverController_o* __this, int32_t colorType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController$$UpdateColor
   void Rotatelab_Scripts_ShrinkingCoverController__UpdateColor
   (Rotatelab_Scripts_ShrinkingCoverController_o* __this, int32_t colorType, const MethodInfo*
   method); */

void Rotatelab_Scripts_ShrinkingCoverController__UpdateColor_1051234(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  undefined4 unaff_r7;
  int iVar10;
  undefined4 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  pcVar7 = (char *)(_UNK_0106158c + 0x106124c);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01061590 + 0x1061260));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01061594 + 0x106126c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01061598 + 0x1061278));
    *pcVar7 = '\x01';
  }
  Rotatelab_Scripts_BaseTargetableController__UpdateColor_ff596c(param_1,param_2,0);
  iVar1 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                    (**(undefined4 **)(_UNK_0106159c + 0x106129c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Scripts_VoxelColorDataSo__GetData_ff536c(iVar1,param_2,0);
  iVar10 = *(int *)(param_1 + 0x3c);
  puVar11 = *(undefined4 **)(_UNK_010615a0 + 0x10612d8);
  piVar2 = (int *)FUN_00ec388c(*puVar11,3);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = *(int *)(iVar1 + 0x2c);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((iVar8 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar8,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)) {
    uVar4 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar4,0);
  }
  if (piVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar2[4] = iVar8;
  thunk_FUN_00ec5080(piVar2 + 4,iVar8);
  iVar8 = *(int *)(param_1 + 0x48);
  if ((iVar8 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar8,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)) {
    uVar4 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar4,0);
  }
  if ((uint)piVar2[3] < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar2[5] = iVar8;
  thunk_FUN_00ec5080(piVar2 + 5,iVar8);
  iVar8 = *(int *)(iVar1 + 0x30);
  if ((iVar8 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar8,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)) {
    uVar4 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar4,0);
  }
  if ((uint)piVar2[3] < 3) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar2[6] = iVar8;
  thunk_FUN_00ec5080(piVar2 + 6,iVar8);
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Renderer__set_materials_35c59ac(iVar10,piVar2,0);
  iVar8 = *(int *)(param_1 + 0x44);
  piVar2 = (int *)FUN_00ec388c(*puVar11,2);
  iVar10 = *(int *)(param_1 + 0x48);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((iVar10 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar10,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)) {
    uVar4 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar4,0);
  }
  if (piVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar2[4] = iVar10;
  thunk_FUN_00ec5080(piVar2 + 4,iVar10);
  iVar10 = *(int *)(iVar1 + 0x30);
  if ((iVar10 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar10,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)) {
    uVar4 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar4,0);
  }
  if ((uint)piVar2[3] < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar2[5] = iVar10;
  thunk_FUN_00ec5080(piVar2 + 5,iVar10);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Renderer__set_materials_35c59ac(iVar8,piVar2,0);
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Renderer__set_material_35c59b4
            (*(int *)(param_1 + 0x40),*(undefined4 *)(iVar1 + 0x30),0);
  if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Renderer__get_material_35c59b0(*(int *)(param_1 + 0x3c),0);
  piVar2 = (int *)(param_1 + 0x60);
  *piVar2 = iVar1;
  thunk_FUN_00ec5080(piVar2,iVar1);
  piVar9 = *(int **)(_UNK_010615a4 + 0x1061540);
  iVar10 = *piVar2;
  iVar1 = *piVar9;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar9;
  }
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = UnityEngine_Material__GetFloat_35cb1b4
                    (iVar10,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x38),0);
  *(undefined4 *)(param_1 + 100) = uVar4;
  pcVar7 = (char *)(_UNK_010616ec + 0x10615c0);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010616f0 + 0x10615d4));
    *pcVar7 = '\x01';
  }
  if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar5 = (float)UnityEngine_SkinnedMeshRenderer__GetBlendShapeWeight_35ce4bc
                           (*(int *)(param_1 + 0x3c),3,0);
  fVar13 = *(float *)(param_1 + 0x90);
  if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar6 = (float)UnityEngine_SkinnedMeshRenderer__GetBlendShapeWeight_35ce4bc
                           (*(int *)(param_1 + 0x3c),2,0);
  piVar2 = *(int **)(_UNK_010616f4 + 0x1061634);
  iVar10 = *(int *)(param_1 + 0x60);
  fVar15 = *(float *)(param_1 + 0x58);
  iVar1 = *piVar2;
  fVar14 = *(float *)(param_1 + 0x5c);
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar2;
  }
  uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x38);
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar12 = fVar6;
  if (_UNK_010616e4 < fVar6) {
    fVar12 = _UNK_010616e4;
  }
  fVar16 = fVar5;
  if (fVar13 < fVar5) {
    fVar16 = fVar13;
  }
  fVar13 = fVar16 * 0.5;
  if (fVar5 < 0.0) {
    fVar13 = _UNK_010616e8;
  }
  fVar5 = fVar12 / 20.0;
  if (fVar6 < 0.0) {
    fVar5 = _UNK_010616e8;
  }
  fVar5 = (*(float *)(param_1 + 100) - fVar13 * fVar15) - fVar14 * fVar5;
  pcVar7 = (char *)(_UNK_035d9950 + 0x35d98a8);
  if (*pcVar7 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035d9954 + 0x35d98bc),uVar4,fVar5,0,unaff_r4,unaff_r5,
                       unaff_r6,unaff_r7);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035d9958 + 0x35d98c8));
    *pcVar7 = '\x01';
  }
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar10 + 8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar10,0);
  }
  if (*(int *)(**(int **)(_UNK_035d995c + 0x35d9900) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(_UNK_035d9960 + 0x35d991c);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_035d9964 + 0x35d992c);
    *(code **)(_UNK_035d9968 + 0x35d993c) = UNRECOVERED_JUMPTABLE;
  }
                    /* WARNING: Could not recover jumptable at 0x035d994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(iVar1,uVar4,fVar5);
  return;
}

