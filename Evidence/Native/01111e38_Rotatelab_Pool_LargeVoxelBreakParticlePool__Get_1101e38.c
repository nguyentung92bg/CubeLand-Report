/* IL2CPP: Rotatelab.Pool.LargeVoxelBreakParticlePool$$Get
UnityEngine_ParticleSystem_o* Rotatelab_Pool_LargeVoxelBreakParticlePool__Get (Rotatelab_Pool_LargeVoxelBreakParticlePool_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.LargeVoxelBreakParticlePool$$Get
   UnityEngine_ParticleSystem_o* Rotatelab_Pool_LargeVoxelBreakParticlePool__Get
   (Rotatelab_Pool_LargeVoxelBreakParticlePool_o* __this, const MethodInfo* method); */

int Rotatelab_Pool_LargeVoxelBreakParticlePool__Get_1101e38(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  
  pcVar4 = (char *)(_UNK_01112034 + 0x1111e4c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01112038 + 0x1111e60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111203c + 0x1111e6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01112040 + 0x1111e78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01112044 + 0x1111e84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01112048 + 0x1111e90));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(param_1 + 0x1c) + 0xc) < 1) {
    iVar1 = Rotatelab_Pool_LargeVoxelBreakParticlePool__CreateInstance_1101174(param_1);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = *(int *)(iVar1 + 0xc) + -1;
    iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                      (iVar1,iVar5,**(undefined4 **)(_UNK_0111204c + 0x1111f08));
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___RemoveAt_267f3f8
              (*(int *)(param_1 + 0x1c),iVar5,**(undefined4 **)(_UNK_01112050 + 0x1111f34));
  }
  if (*(int *)(**(int **)(_UNK_01112054 + 0x1111f48) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__op_Equality_36033f4(iVar1,0,0);
  iVar5 = 0;
  if (iVar2 == 0) {
    iVar5 = *(int *)(param_1 + 0x18);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *(int *)(iVar5 + 8);
    uVar6 = *(uint *)(iVar5 + 0xc);
    piVar3 = *(int **)(_UNK_01112058 + 0x1111fa4);
    *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar6 < *(uint *)(iVar2 + 0xc)) {
      *(uint *)(iVar5 + 0xc) = uVar6 + 1;
      piVar3 = (int *)(iVar2 + uVar6 * 4 + 0x10);
      *piVar3 = iVar1;
      thunk_FUN_00ec5080(piVar3,iVar1);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar5,iVar1,*(undefined4 *)(*(int *)(*(int *)(*piVar3 + 0x10) + 0x60) + 0x38));
    }
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = UnityEngine_Component__get_gameObject_35fe360(iVar1,0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar5,1,0);
    iVar5 = iVar1;
  }
  return iVar5;
}

