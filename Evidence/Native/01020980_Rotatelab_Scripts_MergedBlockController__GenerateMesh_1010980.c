/* IL2CPP: Rotatelab.Scripts.MergedBlockController$$GenerateMesh
void Rotatelab_Scripts_MergedBlockController__GenerateMesh (Rotatelab_Scripts_MergedBlockController_o* __this, UnityEngine_Vector3Int_array* voxelGridPositions, UnityEngine_Bounds_o bounds, float roundRadius, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.MergedBlockController$$GenerateMesh
   void Rotatelab_Scripts_MergedBlockController__GenerateMesh
   (Rotatelab_Scripts_MergedBlockController_o* __this, UnityEngine_Vector3Int_array*
   voxelGridPositions, UnityEngine_Bounds_o bounds, float roundRadius, const MethodInfo* method); */

void Rotatelab_Scripts_MergedBlockController__GenerateMesh_1010980
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,float param_6,float param_7,float param_8,float param_9)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  int iVar5;
  char *pcVar6;
  int iVar7;
  
  if (*(char *)(_UNK_01020b30 + 0x10209b0) == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01020b34 + 0x10209d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01020b38 + 0x10209e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01020b3c + 0x10209ec));
    *(undefined1 *)(_UNK_01020b40 + 0x10209fc) = 1;
  }
  uVar2 = Rotatelab_Scripts_MergedBlockController__CleanupGeneratedAssets_1019274(param_1);
  iVar3 = Rotatelab_Scripts_MergedBlockController__ShouldUseSimpleBox_10192f0
                    (uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (iVar3 == 0) {
    if (*(int *)(**(int **)(_UNK_01020b48 + 0x1020ab0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar2 = Rotatelab_Scripts_RoundedMeshGenerator__Generate_1019d5c(param_2,param_9,4);
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
    thunk_FUN_00ec5080();
    uVar1 = 1;
  }
  else {
    if (*(int *)(**(int **)(_UNK_01020b44 + 0x1020a44) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar2 = Rotatelab_Scripts_RoundedBoxMeshGenerator__Generate_10194e4
                      (param_6 + param_6,param_7 + param_7,param_8 + param_8,param_9 * 0.5,8);
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
    thunk_FUN_00ec5080();
    uVar1 = 0;
  }
  puVar4 = *(undefined4 **)(_UNK_01020b4c + 0x1020af0);
  *(undefined1 *)(param_1 + 0x18) = uVar1;
  iVar3 = UnityEngine_Component__GetComponent_object__143f3b0(param_1,*puVar4);
  iVar5 = *(int *)(param_1 + 0x1c);
  if (iVar3 != 0) {
    pcVar6 = (char *)(_UNK_035de26c + 0x35de1bc);
    if (*pcVar6 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035de270 + 0x35de1d0),iVar5,0);
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035de274 + 0x35de1dc));
      *pcVar6 = '\x01';
    }
    if (iVar3 != 0) {
      iVar7 = *(int *)(iVar3 + 8);
      if (iVar7 != 0) {
        if (*(int *)(**(int **)(_UNK_035de278 + 0x35de214) + 0x1c) == 0) {
          thunk_FUN_00efd7c4();
        }
        if (iVar5 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined4 *)(iVar5 + 8);
        }
        UNRECOVERED_JUMPTABLE = *(code **)(_UNK_035de27c + 0x35de23c);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_035de280 + 0x35de24c);
          *(code **)(_UNK_035de284 + 0x35de25c) = UNRECOVERED_JUMPTABLE;
        }
                    /* WARNING: Could not recover jumptable at 0x035de268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(iVar7,uVar2);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar3,0);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

