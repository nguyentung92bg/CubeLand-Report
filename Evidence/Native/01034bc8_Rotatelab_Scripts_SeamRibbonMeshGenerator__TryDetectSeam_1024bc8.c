/* IL2CPP: Rotatelab.Scripts.SeamRibbonMeshGenerator$$TryDetectSeam
bool Rotatelab_Scripts_SeamRibbonMeshGenerator__TryDetectSeam (UnityEngine_Bounds_o group1, UnityEngine_Bounds_o group2, int32_t* seamAxis, float* seamWorld, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.SeamRibbonMeshGenerator$$TryDetectSeam
   bool Rotatelab_Scripts_SeamRibbonMeshGenerator__TryDetectSeam (UnityEngine_Bounds_o group1,
   UnityEngine_Bounds_o group2, int32_t* seamAxis, float* seamWorld, const MethodInfo* method); */

bool Rotatelab_Scripts_SeamRibbonMeshGenerator__TryDetectSeam_1024bc8
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,float param_9,float param_10,float param_11,
               float param_12,int *param_13,float *param_14)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar4 = 0;
  iVar5 = -1;
  *param_14 = 0.0;
  *param_13 = -1;
  fVar1 = _UNK_01034d60;
  do {
    fVar6 = param_7 + param_10;
    fVar7 = param_1 - param_4;
    fVar8 = param_1 + param_4;
    fVar9 = param_7 - param_10;
    if (((iVar4 != 0) &&
        (fVar6 = param_8 + param_11, fVar7 = param_2 - param_5, fVar8 = param_2 + param_5,
        fVar9 = param_8 - param_11, iVar4 != 1)) &&
       (fVar6 = param_9 + param_12, fVar7 = param_3 - param_6, fVar8 = param_3 + param_6,
       fVar9 = param_9 - param_12, iVar4 != 2)) {
      thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01034d64 + 0x1034d20));
      uVar2 = thunk_FUN_00f00cdc();
      uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01034d68 + 0x1034d34));
      System_IndexOutOfRangeException___ctor_2b69538(uVar2,uVar3,0);
      uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01034d6c + 0x1034d50));
      func_0x00ec3920(uVar2,uVar3);
                    /* WARNING: Subroutine does not return */
      FUN_00ec3760();
    }
    if (fVar8 <= fVar9 + fVar1) {
      if (iVar5 != -1) {
LAB_01034d00:
        *param_13 = -1;
        return false;
      }
      fVar6 = fVar8 + fVar9;
LAB_01034cd4:
      *param_13 = iVar4;
      *param_14 = fVar6 * 0.5;
      iVar5 = iVar4;
    }
    else if (fVar6 <= fVar7 + fVar1) {
      if (iVar5 != -1) goto LAB_01034d00;
      fVar6 = fVar6 + fVar7;
      goto LAB_01034cd4;
    }
    iVar4 = iVar4 + 1;
    if (iVar4 == 3) {
      return iVar5 != -1;
    }
  } while( true );
}

