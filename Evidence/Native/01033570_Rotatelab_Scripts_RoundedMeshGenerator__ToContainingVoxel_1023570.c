/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$ToContainingVoxel
UnityEngine_Vector3Int_o Rotatelab_Scripts_RoundedMeshGenerator__ToContainingVoxel (UnityEngine_Vector3_o point, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$ToContainingVoxel
   UnityEngine_Vector3Int_o Rotatelab_Scripts_RoundedMeshGenerator__ToContainingVoxel
   (UnityEngine_Vector3_o point, const MethodInfo* method); */

void Rotatelab_Scripts_RoundedMeshGenerator__ToContainingVoxel_1023570
               (int *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  pcVar4 = (char *)(_UNK_010336cc + 0x1033590);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010336d0 + 0x10335a8));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_010336d4 + 0x10335bc);
  if ((*(int *)(*piVar5 + 0x74) == 0) && (FUN_00ec3934(), *pcVar4 == '\0')) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010336d8 + 0x10335e4));
    *pcVar4 = '\x01';
  }
  if ((*(int *)(*piVar5 + 0x74) == 0) && (FUN_00ec3934(), *pcVar4 == '\0')) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010336dc + 0x1033618));
    *pcVar4 = '\x01';
  }
  if (*(int *)(*piVar5 + 0x74) == 0) {
    FUN_00ec3934();
  }
  fVar1 = (float)FUN_01f4f1b4(param_3 + 0.5);
  fVar2 = (float)FUN_01f4f1b4(param_4 + 0.5);
  fVar3 = (float)FUN_01f4f1b4(param_2 + 0.5);
  iVar8 = (int)fVar1;
  iVar7 = (int)fVar3;
  iVar6 = (int)fVar2;
  if (fVar3 == _UNK_010336c8) {
    iVar7 = -0x80000000;
  }
  if (fVar1 == _UNK_010336c8) {
    iVar8 = -0x80000000;
  }
  if (fVar2 == _UNK_010336c8) {
    iVar6 = -0x80000000;
  }
  *param_1 = iVar7;
  param_1[1] = iVar8;
  param_1[2] = iVar6;
  return;
}

