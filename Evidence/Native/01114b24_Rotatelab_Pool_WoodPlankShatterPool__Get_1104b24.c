/* IL2CPP: Rotatelab.Pool.WoodPlankShatterPool$$Get
UnityEngine_ParticleSystem_o* Rotatelab_Pool_WoodPlankShatterPool__Get (Rotatelab_Pool_WoodPlankShatterPool_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.WoodPlankShatterPool$$Get
   UnityEngine_ParticleSystem_o* Rotatelab_Pool_WoodPlankShatterPool__Get
   (Rotatelab_Pool_WoodPlankShatterPool_o* __this, const MethodInfo* method); */

int Rotatelab_Pool_WoodPlankShatterPool__Get_1104b24(int param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pcVar3 = (char *)(_UNK_01114cd8 + 0x1114b38);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01114cdc + 0x1114b4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01114ce0 + 0x1114b58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01114ce4 + 0x1114b64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01114ce8 + 0x1114b70));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(param_1 + 0x24) + 0xc) < 1) {
    iVar1 = Rotatelab_Pool_WoodPlankShatterPool__CreateInstance_11041ac(param_1);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x24);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = *(int *)(iVar1 + 0xc) + -1;
    iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                      (iVar1,iVar4,**(undefined4 **)(_UNK_01114cec + 0x1114be8));
    if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___RemoveAt_267f3f8
              (*(int *)(param_1 + 0x24),iVar4,**(undefined4 **)(_UNK_01114cf0 + 0x1114c14));
  }
  iVar4 = *(int *)(param_1 + 0x20);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(iVar4 + 8);
  uVar6 = *(uint *)(iVar4 + 0xc);
  piVar2 = *(int **)(_UNK_01114cf4 + 0x1114c4c);
  *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar6 < *(uint *)(iVar5 + 0xc)) {
    *(uint *)(iVar4 + 0xc) = uVar6 + 1;
    piVar2 = (int *)(iVar5 + uVar6 * 4 + 0x10);
    *piVar2 = iVar1;
    thunk_FUN_00ec5080(piVar2,iVar1);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar4,iVar1,*(undefined4 *)(*(int *)(*(int *)(*piVar2 + 0x10) + 0x60) + 0x38));
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = UnityEngine_Component__get_gameObject_35fe360(iVar1,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar4,1,0);
  return iVar1;
}

