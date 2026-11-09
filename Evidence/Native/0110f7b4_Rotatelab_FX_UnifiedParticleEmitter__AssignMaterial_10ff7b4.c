/* IL2CPP: Rotatelab.FX.UnifiedParticleEmitter$$AssignMaterial
void Rotatelab_FX_UnifiedParticleEmitter__AssignMaterial (Rotatelab_FX_UnifiedParticleEmitter_o* __this, int32_t slotIndex, UnityEngine_Material_o* material, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.UnifiedParticleEmitter$$AssignMaterial
   void Rotatelab_FX_UnifiedParticleEmitter__AssignMaterial (Rotatelab_FX_UnifiedParticleEmitter_o*
   __this, int32_t slotIndex, UnityEngine_Material_o* material, const MethodInfo* method); */

void Rotatelab_FX_UnifiedParticleEmitter__AssignMaterial_10ff7b4
               (int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  undefined1 auStack_28 [12];
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_0110f928 + 0x110f7d4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110f92c + 0x110f7e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110f930 + 0x110f7f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110f934 + 0x110f800));
    *pcVar3 = '\x01';
  }
  piVar4 = *(int **)(_UNK_0110f938 + 0x110f814);
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
                 **(undefined4 **)(_UNK_0110f93c + 0x110f884));
      if (*(int *)(*piVar4 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar1 = UnityEngine_Object__op_Inequality_36018e4(iStack_1c,0,0);
      if (iVar1 != 0) {
        if (iStack_1c == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar2 = UnityEngine_Renderer__get_sharedMaterial_35c59b8(iStack_1c,0);
        if (*(int *)(*piVar4 + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar1 = UnityEngine_Object__op_Inequality_36018e4(uVar2,param_3,0);
        if (iVar1 != 0) {
          if (iStack_1c == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          UnityEngine_Renderer__set_sharedMaterial_35c59bc(iStack_1c,param_3,0);
        }
      }
    }
  }
  return;
}

