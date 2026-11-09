/* IL2CPP: Rotatelab.Scripts.VoxelController$$Initialize
void Rotatelab_Scripts_VoxelController__Initialize (Rotatelab_Scripts_VoxelController_o* __this, UnityEngine_Vector3Int_o position, int32_t colorType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.VoxelController$$Initialize
   void Rotatelab_Scripts_VoxelController__Initialize (Rotatelab_Scripts_VoxelController_o* __this,
   UnityEngine_Vector3Int_o position, int32_t colorType, const MethodInfo* method); */

void Rotatelab_Scripts_VoxelController__Initialize_105d260
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  Rotatelab_Scripts_VoxelController__set_Position_105d220();
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  uVar2 = UnityEngine_Random__Range_35f8b14(0,4,0);
  uVar3 = UnityEngine_Random__Range_35f8b14(0,4,0);
  uVar4 = UnityEngine_Random__Range_35f8b14(0,4,0);
  fVar7 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  fVar8 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  fVar9 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  fStack_30 = fVar7 * _UNK_0106d434 * _UNK_0106d438;
  fStack_2c = fVar8 * _UNK_0106d434 * _UNK_0106d438;
  fStack_28 = fVar9 * _UNK_0106d434 * _UNK_0106d438;
  UnityEngine_Quaternion__Internal_FromEulerRad_35ee008(&uStack_40,&fStack_30,0);
  uVar2 = VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
  uVar3 = VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  uVar4 = VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__SetLocalPositionAndRotation_3615d88
            (iVar1,uVar4,uVar3,uVar2,uStack_40,uStack_3c,uStack_38,uStack_34,0);
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  pcVar6 = (char *)(_UNK_0106d43c + 0x106d3a0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106d440 + 0x106d3b4));
    *pcVar6 = '\x01';
  }
  iVar5 = *(int *)(**(int **)(_UNK_0106d444 + 0x106d3d0) + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc
            (iVar1,*(undefined4 *)(iVar5 + 0xc),*(undefined4 *)(iVar5 + 0x10),
             *(undefined4 *)(iVar5 + 0x14),0);
  (**(code **)(*param_1 + 0x108))(param_1,param_5,*(undefined4 *)(*param_1 + 0x10c));
  Rotatelab_Scripts_BaseTargetableController__OnInitialized_ff58bc(param_1,1,0);
  return;
}

