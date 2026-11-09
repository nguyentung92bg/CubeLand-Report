/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController$$<AnimateCrack>b__51_0
void Rotatelab_Scripts_ShrinkingCoverController___AnimateCrack_b__51_0 (Rotatelab_Scripts_ShrinkingCoverController_o* __this, UnityEngine_Transform_o* __, float value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController$$<AnimateCrack>b__51_0
   void Rotatelab_Scripts_ShrinkingCoverController___AnimateCrack_b__51_0
   (Rotatelab_Scripts_ShrinkingCoverController_o* __this, UnityEngine_Transform_o* __, float value,
   const MethodInfo* method); */

void Rotatelab_Scripts_ShrinkingCoverController___AnimateCrack_b__51_0_10529d8
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar4;
  undefined4 unaff_r4;
  char *pcVar5;
  int iVar6;
  undefined4 unaff_r5;
  int *piVar7;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_SkinnedMeshRenderer__SetBlendShapeWeight_35ce5b8(*(int *)(param_1 + 0x3c),3,param_3,0)
  ;
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_SkinnedMeshRenderer__SetBlendShapeWeight_35ce5b8(*(int *)(param_1 + 0x44),3,param_3,0)
  ;
  *(undefined4 *)(param_1 + 0x80) = param_3;
  uVar13 = CONCAT44(unaff_r5,unaff_r4);
  pcVar5 = (char *)(_UNK_010616ec + 0x10615c0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010616f0 + 0x10615d4));
    *pcVar5 = '\x01';
  }
  if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar1 = (float)UnityEngine_SkinnedMeshRenderer__GetBlendShapeWeight_35ce4bc
                           (*(int *)(param_1 + 0x3c),3,0);
  fVar9 = *(float *)(param_1 + 0x90);
  if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar2 = (float)UnityEngine_SkinnedMeshRenderer__GetBlendShapeWeight_35ce4bc
                           (*(int *)(param_1 + 0x3c),2,0);
  piVar7 = *(int **)(_UNK_010616f4 + 0x1061634);
  iVar6 = *(int *)(param_1 + 0x60);
  fVar11 = *(float *)(param_1 + 0x58);
  iVar3 = *piVar7;
  fVar10 = *(float *)(param_1 + 0x5c);
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  uVar4 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x38);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar8 = fVar2;
  if (_UNK_010616e4 < fVar2) {
    fVar8 = _UNK_010616e4;
  }
  fVar12 = fVar1;
  if (fVar9 < fVar1) {
    fVar12 = fVar9;
  }
  fVar9 = fVar12 * 0.5;
  if (fVar1 < 0.0) {
    fVar9 = _UNK_010616e8;
  }
  fVar1 = fVar8 / 20.0;
  if (fVar2 < 0.0) {
    fVar1 = _UNK_010616e8;
  }
  fVar1 = (*(float *)(param_1 + 100) - fVar9 * fVar11) - fVar10 * fVar1;
  pcVar5 = (char *)(_UNK_035d9950 + 0x35d98a8);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035d9954 + 0x35d98bc),uVar4,fVar1,0,(int)uVar13,
                       (int)((ulonglong)uVar13 >> 0x20),unaff_r6,unaff_r7);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035d9958 + 0x35d98c8));
    *pcVar5 = '\x01';
  }
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(iVar6 + 8);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar6,0);
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
  (*UNRECOVERED_JUMPTABLE)(iVar3,uVar4,fVar1);
  return;
}

