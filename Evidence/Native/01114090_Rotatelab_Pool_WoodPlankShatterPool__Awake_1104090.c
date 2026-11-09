/* IL2CPP: Rotatelab.Pool.WoodPlankShatterPool$$Awake
void Rotatelab_Pool_WoodPlankShatterPool__Awake (Rotatelab_Pool_WoodPlankShatterPool_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.WoodPlankShatterPool$$Awake
   void Rotatelab_Pool_WoodPlankShatterPool__Awake (Rotatelab_Pool_WoodPlankShatterPool_o* __this,
   const MethodInfo* method); */

void Rotatelab_Pool_WoodPlankShatterPool__Awake_1104090(int param_1)

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
  
  pcVar4 = (char *)(_UNK_011141a0 + 0x11140a8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011141a4 + 0x11140bc));
    *pcVar4 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 0x14);
  if (iVar7 < 2) {
    iVar7 = 1;
  }
  piVar8 = *(int **)(_UNK_011141a8 + 0x11140dc);
  while( true ) {
    iVar1 = Rotatelab_Pool_WoodPlankShatterPool__CreateInstance_11041ac(param_1);
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
    iVar2 = *(int *)(param_1 + 0x24);
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

