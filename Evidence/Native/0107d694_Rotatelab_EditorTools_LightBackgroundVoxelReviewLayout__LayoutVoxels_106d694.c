/* IL2CPP: Rotatelab.EditorTools.LightBackgroundVoxelReviewLayout$$LayoutVoxels
void Rotatelab_EditorTools_LightBackgroundVoxelReviewLayout__LayoutVoxels (Rotatelab_EditorTools_LightBackgroundVoxelReviewLayout_o* __this, UnityEngine_Transform_o* colorGroup, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.EditorTools.LightBackgroundVoxelReviewLayout$$LayoutVoxels
   void Rotatelab_EditorTools_LightBackgroundVoxelReviewLayout__LayoutVoxels
   (Rotatelab_EditorTools_LightBackgroundVoxelReviewLayout_o* __this, UnityEngine_Transform_o*
   colorGroup, const MethodInfo* method); */

void Rotatelab_EditorTools_LightBackgroundVoxelReviewLayout__LayoutVoxels_106d694
               (int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_Transform__get_childCount_3616bd8(param_2,0);
  uVar4 = uVar1;
  if (0x1a < (int)uVar1) {
    uVar4 = 0x1b;
  }
  if (0 < (int)uVar1) {
    uVar1 = 0;
    do {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4(uVar1 * 0x38e38e39);
      }
      iVar2 = UnityEngine_Transform__GetChild_3617760(param_2,uVar1,0);
      fVar8 = *(float *)(param_1 + 0x48);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      fVar5 = (float)VectorSignedToFloat(uVar1 / 9 - 1,(byte)(in_fpscr >> 0x16) & 3);
      fVar6 = (float)VectorSignedToFloat(1 - (uVar1 / 3 + ((uVar1 / 3) / 3) * -3),
                                         (byte)(in_fpscr >> 0x16) & 3);
      fVar7 = (float)VectorSignedToFloat(uVar1 + ~((uVar1 / 3) * 3),(byte)(in_fpscr >> 0x16) & 3);
      UnityEngine_Transform__set_localPosition_3613c6c
                (iVar2,fVar8 * fVar7,fVar8 * fVar6,fVar8 * fVar5,0);
      if (*(char *)(_UNK_0107d828 + 0x107d7a4) == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_0107d82c + 0x107d7b8));
        *(undefined1 *)(_UNK_0107d830 + 0x107d7c8) = 1;
      }
      puVar3 = *(undefined4 **)(**(int **)(_UNK_0107d834 + 0x107d7d8) + 0x5c);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Transform__set_localRotation_361507c
                (iVar2,*puVar3,puVar3[1],puVar3[2],puVar3[3],0);
      uVar1 = uVar1 + 1;
    } while (uVar4 != uVar1);
  }
  return;
}

