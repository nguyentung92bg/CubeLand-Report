/* IL2CPP: Rotatelab.Pool.LargeVoxelBreakParticlePool$$Awake
void Rotatelab_Pool_LargeVoxelBreakParticlePool__Awake (Rotatelab_Pool_LargeVoxelBreakParticlePool_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.LargeVoxelBreakParticlePool$$Awake
   void Rotatelab_Pool_LargeVoxelBreakParticlePool__Awake
   (Rotatelab_Pool_LargeVoxelBreakParticlePool_o* __this, const MethodInfo* method); */

void Rotatelab_Pool_LargeVoxelBreakParticlePool__Awake_1101058(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  pcVar4 = (char *)(_UNK_01111168 + 0x1111070);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111116c + 0x1111084));
    *pcVar4 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 0x14);
  if (iVar7 < 2) {
    iVar7 = 1;
  }
  piVar8 = *(int **)(_UNK_01111170 + 0x11110a4);
  while( true ) {
    iVar1 = Rotatelab_Pool_LargeVoxelBreakParticlePool__CreateInstance_1101174(param_1);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_Component__get_gameObject_35fe360(iVar1,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar2,0,0);
    iVar2 = *(int *)(param_1 + 0x1c);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = *(int *)(iVar2 + 8);
    uVar6 = *(uint *)(iVar2 + 0xc);
    iVar9 = *piVar8;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    if (iVar5 == 0) break;
    if (uVar6 < *(uint *)(iVar5 + 0xc)) {
      *(uint *)(iVar2 + 0xc) = uVar6 + 1;
      piVar3 = (int *)(iVar5 + uVar6 * 4 + 0x10);
      *piVar3 = iVar1;
      thunk_FUN_00ec5080(piVar3,iVar1);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar2,iVar1,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
    }
    iVar7 = iVar7 + -1;
    if (iVar7 == 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

