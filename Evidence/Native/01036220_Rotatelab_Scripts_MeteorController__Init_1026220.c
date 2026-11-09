/* IL2CPP: Rotatelab.Scripts.MeteorController$$Init
float Rotatelab_Scripts_MeteorController__Init (Rotatelab_Scripts_MeteorController_o* __this, UnityEngine_Vector3_o spawnPosition, Rotatelab_Scripts_VoxelController_o* target, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.MeteorController$$Init
   float Rotatelab_Scripts_MeteorController__Init (Rotatelab_Scripts_MeteorController_o* __this,
   UnityEngine_Vector3_o spawnPosition, Rotatelab_Scripts_VoxelController_o* target, const
   MethodInfo* method); */

float Rotatelab_Scripts_MeteorController__Init_1026220
                (int param_1,float param_2,float param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  char *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  uVar1 = UnityEngine_Camera__get_main_35aede4(0);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  thunk_FUN_00ec5080();
  iVar2 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  pcVar5 = (char *)(_UNK_01036444 + 0x1036270);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01036448 + 0x1036284));
    *pcVar5 = '\x01';
  }
  iVar3 = *(int *)(**(int **)(_UNK_0103644c + 0x10362ac) + 0x5c);
  fVar6 = *(float *)(iVar3 + 0xc);
  fVar7 = *(float *)(iVar3 + 0x10);
  fVar8 = *(float *)(iVar3 + 0x14);
  fVar4 = (float)UnityEngine_Random__Range_35f8ac0(0x3e6147ae,0x3ed70a3d,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar2,fVar6 * fVar4,fVar7 * fVar4,fVar8 * fVar4,0);
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = 0x18;
  if (*(char *)(param_5 + 0x20) == '\0') {
    iVar2 = 0x1c;
  }
  fVar4 = *(float *)(param_1 + iVar2);
  iVar2 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_position_3614acc(iVar2,param_2,param_3,fVar4,0);
  uVar1 = UnityEngine_Component__get_transform_35fe190(param_5,0);
  uVar1 = Rotatelab_Scripts_MeteorController__MoveMeteorCoroutine_102645c(param_1,uVar1);
  UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar1,0);
  uVar1 = UnityEngine_Component__get_transform_35fe190(param_5,0);
  Rotatelab_Scripts_MeteorController__GetTargetOnPlane_10264e8(&fStack_54,param_1,fVar4,uVar1);
  pcVar5 = (char *)(_UNK_01036450 + 0x10363c4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01036454 + 0x10363e0));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01036458 + 0x10363f4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  return SQRT((param_3 - fStack_50) * (param_3 - fStack_50) +
              (param_2 - fStack_54) * (param_2 - fStack_54) +
              (fVar4 - fStack_4c) * (fVar4 - fStack_4c)) / *(float *)(param_1 + 0x10);
}

