/* IL2CPP: Rotatelab.Pool.LargeVoxelCrackParticlePool$$OnLargeVoxelCrackParticleRequestedHandler
void Rotatelab_Pool_LargeVoxelCrackParticlePool__OnLargeVoxelCrackParticleRequestedHandler (Rotatelab_Pool_LargeVoxelCrackParticlePool_o* __this, int32_t colorType, UnityEngine_Vector3_o position, UnityEngine_Vector3_o normal, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.LargeVoxelCrackParticlePool$$OnLargeVoxelCrackParticleRequestedHandler
   void Rotatelab_Pool_LargeVoxelCrackParticlePool__OnLargeVoxelCrackParticleRequestedHandler
   (Rotatelab_Pool_LargeVoxelCrackParticlePool_o* __this, int32_t colorType, UnityEngine_Vector3_o
   position, UnityEngine_Vector3_o normal, const MethodInfo* method); */

void Rotatelab_Pool_LargeVoxelCrackParticlePool__OnLargeVoxelCrackParticleRequestedHandler_1102874
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar3 = (char *)(_UNK_01112b44 + 0x1112894);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01112b48 + 0x11128ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01112b4c + 0x11128b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01112b50 + 0x11128c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01112b54 + 0x11128d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01112b58 + 0x11128dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01112b5c + 0x11128e8));
    *pcVar3 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                    (**(undefined4 **)(_UNK_01112b60 + 0x1112900));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Scripts_VoxelColorDataSo__GetData_ff536c(iVar1,param_2,0);
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = System_Collections_Generic_Dictionary_Int32Enum__int___TryGetValue_1ffb8dc
                    (*(int *)(param_1 + 0x1c),param_2,&iStack_28,
                     **(undefined4 **)(_UNK_01112b64 + 0x1112958));
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iStack_28 = System_Collections_Generic_Dictionary_Int32Enum__int___get_Count_1ff974c
                          (*(int *)(param_1 + 0x1c),**(undefined4 **)(_UNK_01112b68 + 0x1112998));
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x18) + 0xc) <= iStack_28) {
      iVar2 = *(int *)(param_1 + 0x18);
      Rotatelab_FX_UnifiedParticleEmitter__SpawnInstance_10ff15c(&uStack_38,param_1);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar5 = *(int *)(iVar2 + 8);
      uVar4 = *(uint *)(iVar2 + 0xc);
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar4 < *(uint *)(iVar5 + 0xc)) {
        *(uint *)(iVar2 + 0xc) = uVar4 + 1;
        iVar5 = iVar5 + uVar4 * 0x10;
        *(undefined4 *)(iVar5 + 0x10) = uStack_38;
        *(undefined4 *)(iVar5 + 0x14) = uStack_34;
        *(undefined4 *)(iVar5 + 0x18) = uStack_30;
        *(undefined4 *)(iVar5 + 0x1c) = uStack_2c;
        thunk_FUN_00ec5080((undefined4 *)(iVar5 + 0x10),0);
      }
      else {
        System_Collections_Generic_List_UnifiedParticleEmitter_Instance___AddWithResize_27b0d88
                  (iVar2);
      }
    }
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_Dictionary_Int32Enum__int___Add_1ff9acc
              (*(int *)(param_1 + 0x1c),param_2,iStack_28,
               **(undefined4 **)(_UNK_01112b70 + 0x1112ad8));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_FX_UnifiedParticleEmitter__AssignMaterial_10ff7b4
              (param_1,iStack_28,*(undefined4 *)(iVar1 + 0x38));
  }
  else if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_FX_UnifiedParticleEmitter__EmitSlotOriented_10fff08
            (param_1,iStack_28,param_3,param_4,param_5,param_6,param_7,param_8,
             *(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10),
             *(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(iVar1 + 0x18));
  return;
}

