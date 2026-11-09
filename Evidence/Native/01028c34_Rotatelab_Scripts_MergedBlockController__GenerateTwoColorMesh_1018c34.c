/* IL2CPP: Rotatelab.Scripts.MergedBlockController$$GenerateTwoColorMesh
void Rotatelab_Scripts_MergedBlockController__GenerateTwoColorMesh (Rotatelab_Scripts_MergedBlockController_o* __this, UnityEngine_Vector3Int_array* group1Voxels, UnityEngine_Vector3Int_array* group2Voxels, float roundRadius, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.MergedBlockController$$GenerateTwoColorMesh
   void Rotatelab_Scripts_MergedBlockController__GenerateTwoColorMesh
   (Rotatelab_Scripts_MergedBlockController_o* __this, UnityEngine_Vector3Int_array* group1Voxels,
   UnityEngine_Vector3Int_array* group2Voxels, float roundRadius, const MethodInfo* method); */

void Rotatelab_Scripts_MergedBlockController__GenerateTwoColorMesh_1018c34
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  pcVar3 = (char *)(_UNK_01028d14 + 0x1028c54);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01028d18 + 0x1028c6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01028d1c + 0x1028c78));
    *pcVar3 = '\x01';
  }
  Rotatelab_Scripts_MergedBlockController__CleanupGeneratedAssets_1019274(param_1);
  if (*(int *)(**(int **)(_UNK_01028d20 + 0x1028c94) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Scripts_RoundedMeshGenerator__GenerateTwoColor_101a260
                    (param_2,param_3,param_4,4);
  piVar4 = (int *)(param_1 + 0x1c);
  *piVar4 = iVar1;
  thunk_FUN_00ec5080(piVar4,iVar1);
  uVar2 = **(undefined4 **)(_UNK_01028d24 + 0x1028cd8);
  *(undefined1 *)(param_1 + 0x18) = 1;
  iVar1 = UnityEngine_Component__GetComponent_object__143f3b0(param_1,uVar2);
  iVar5 = *piVar4;
  if (iVar1 != 0) {
    pcVar3 = (char *)(_UNK_035de26c + 0x35de1bc);
    if (*pcVar3 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035de270 + 0x35de1d0),iVar5,0);
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035de274 + 0x35de1dc));
      *pcVar3 = '\x01';
    }
    if (iVar1 != 0) {
      iVar6 = *(int *)(iVar1 + 8);
      if (iVar6 != 0) {
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
        (*UNRECOVERED_JUMPTABLE)(iVar6,uVar2);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar1,0);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

