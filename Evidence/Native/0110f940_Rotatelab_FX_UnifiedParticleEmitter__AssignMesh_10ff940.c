/* IL2CPP: Rotatelab.FX.UnifiedParticleEmitter$$AssignMesh
void Rotatelab_FX_UnifiedParticleEmitter__AssignMesh (Rotatelab_FX_UnifiedParticleEmitter_o* __this, int32_t slotIndex, UnityEngine_Mesh_o* mesh, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.UnifiedParticleEmitter$$AssignMesh
   void Rotatelab_FX_UnifiedParticleEmitter__AssignMesh (Rotatelab_FX_UnifiedParticleEmitter_o*
   __this, int32_t slotIndex, UnityEngine_Mesh_o* mesh, const MethodInfo* method); */

void Rotatelab_FX_UnifiedParticleEmitter__AssignMesh_10ff940
               (int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  undefined1 auStack_28 [12];
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_0110fab4 + 0x110f960);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110fab8 + 0x110f974));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110fabc + 0x110f980));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110fac0 + 0x110f98c));
    *pcVar3 = '\x01';
  }
  piVar4 = *(int **)(_UNK_0110fac4 + 0x110f9a0);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Equality_36033f4(param_3,0,0);
  if ((-1 < param_2) && (iVar1 == 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (param_2 < *(int *)(*(int *)(param_1 + 0x18) + 0xc)) {
      if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_List_UnifiedParticleEmitter_Instance___get_Item_27b0a14
                (auStack_28,*(int *)(param_1 + 0x18),param_2,
                 **(undefined4 **)(_UNK_0110fac8 + 0x110fa10));
      if (*(int *)(*piVar4 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar1 = UnityEngine_Object__op_Inequality_36018e4(iStack_1c,0,0);
      if (iVar1 != 0) {
        if (iStack_1c == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar2 = UnityEngine_ParticleSystemRenderer__get_mesh_3690a6c(iStack_1c,0);
        if (*(int *)(*piVar4 + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar1 = UnityEngine_Object__op_Inequality_36018e4(uVar2,param_3,0);
        if (iVar1 != 0) {
          if (iStack_1c == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          UnityEngine_ParticleSystemRenderer__set_mesh_3690c44(iStack_1c,param_3,0);
        }
      }
    }
  }
  return;
}

