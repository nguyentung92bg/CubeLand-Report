/* IL2CPP: Rotatelab.Scripts.LargeVoxelController$$Initialize
void Rotatelab_Scripts_LargeVoxelController__Initialize (Rotatelab_Scripts_LargeVoxelController_o* __this, Rotatelab_LargeVoxelData_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LargeVoxelController$$Initialize
   void Rotatelab_Scripts_LargeVoxelController__Initialize
   (Rotatelab_Scripts_LargeVoxelController_o* __this, Rotatelab_LargeVoxelData_o* data, const
   MethodInfo* method); */

void Rotatelab_Scripts_LargeVoxelController__Initialize_10136d4(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  pcVar5 = (char *)(_UNK_01023904 + 0x10236f8);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01023908 + 0x102370c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102390c + 0x1023718));
    *pcVar5 = '\x01';
  }
  param_1[0xe] = param_2;
  thunk_FUN_00ec5080(param_1 + 0xe,param_2);
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localPosition_3613c6c
            (iVar1,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),
             *(undefined4 *)(param_2 + 0x14),0);
  puVar2 = *(undefined4 **)(_UNK_01023910 + 0x1023788);
  iVar1 = *(int *)(param_2 + 0x24);
  param_1[0x12] = iVar1;
  uVar3 = *puVar2;
  param_1[0x13] = iVar1;
  iVar1 = thunk_FUN_00f00cdc(uVar3);
  UnityEngine_MaterialPropertyBlock___ctor_35c3c50(iVar1,0);
  param_1[0x15] = iVar1;
  thunk_FUN_00ec5080(param_1 + 0x15,iVar1);
  piVar6 = (int *)param_1[0xf];
  if (piVar6 != (int *)0x0) {
    uVar4 = (uint)*(byte *)(**(int **)(_UNK_01023914 + 0x10237d0) + 0xb8);
    if ((uVar4 <= *(byte *)(*piVar6 + 0xb8)) &&
       (*(int *)(*(int *)(*piVar6 + 100) + uVar4 * 4 + -4) == **(int **)(_UNK_01023914 + 0x10237d0))
       ) {
      fVar8 = *(float *)(param_2 + 0x18);
      fVar9 = *(float *)(param_2 + 0x1c);
      fVar7 = *(float *)(param_2 + 0x20);
      uVar3 = *(undefined4 *)(param_2 + 0x28);
      goto Rotatelab_Scripts_BaseTargetableController__SetVisibility_ff5974;
    }
  }
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_MergedBlockController__GenerateMesh_1010980
            (piVar6,*(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0xc),
             *(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
             *(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
             *(undefined4 *)(param_2 + 0x20),0x3f800000);
  piVar6 = (int *)param_1[0xf];
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  fVar8 = *(float *)(param_2 + 0x18);
  fVar9 = *(float *)(param_2 + 0x1c);
  fVar7 = *(float *)(param_2 + 0x20);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
Rotatelab_Scripts_BaseTargetableController__SetVisibility_ff5974:
  iVar1 = Rotatelab_Scripts_MergedBlockController__GenerateHealthTexts_1010e58
                    (piVar6,uVar3,fVar8 + fVar8,fVar9 + fVar9,fVar7 + fVar7);
  param_1[0x11] = iVar1;
  thunk_FUN_00ec5080();
  Rotatelab_Scripts_LargeVoxelController__UpdateHealthTexts_1013918(param_1);
  (**(code **)(*param_1 + 0x108))
            (param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(*param_1 + 0x10c));
  Rotatelab_Scripts_BaseTargetableController__OnInitialized_ff58bc(param_1,1,0);
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0,0);
  if (iVar1 != 0) {
    UnityEngine_GameObject__SetActive_3602038(iVar1,1,0);
    *(undefined1 *)((int)param_1 + 0x19) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

