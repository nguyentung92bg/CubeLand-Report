/* IL2CPP: Rotatelab.Scripts.DockManager.<MoveBlasterToGhostDockCoroutine>d__55$$System.IDisposable.Dispose
void Rotatelab_Scripts_DockManager__MoveBlasterToGhostDockCoroutine_d__55__System_IDisposable_Dispose (Rotatelab_Scripts_DockManager__MoveBlasterToGhostDockCoroutine_d__55_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Scripts.DockManager.<MoveBlasterToGhostDockCoroutine>d__55$$System.IDisposable.Dispose
   void 
   Rotatelab_Scripts_DockManager__MoveBlasterToGhostDockCoroutine_d__55__System_IDisposable_Dispose
   (Rotatelab_Scripts_DockManager__MoveBlasterToGhostDockCoroutine_d__55_o* __this, const
   MethodInfo* method); */

void Rotatelab_Scripts_DockManager__MoveBlasterToGhostDockCoroutine_d__55__System_IDisposable_Dispose_1009df8
               (int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  
  uVar2 = *(int *)(param_1 + 8) + 3;
  if (6 < uVar2) {
    return;
  }
  if ((1 << (uVar2 & 0xff) & 0x61U) == 0) {
    return;
  }
  pcVar5 = (char *)(_UNK_0101a23c + 0x101a200);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101a240 + 0x101a214));
    *pcVar5 = '\x01';
  }
  iVar3 = **(int **)(_UNK_0101a244 + 0x101a228);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  iVar8 = *(int *)(param_1 + 0x1c);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(iVar3 + 0x10);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = FUN_00efd768();
  }
  iVar4 = *(int *)(*(int *)(iVar3 + 0x60) + 0xc);
  iVar3 = *(int *)(iVar8 + 0xc);
  if (iVar3 != 0) {
    (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar3 + 0x20),uVar6,*(undefined4 *)(iVar3 + 0x14));
  }
  iVar3 = *(int *)(iVar8 + 8);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = *(int *)(iVar3 + 8);
  uVar2 = *(uint *)(iVar3 + 0xc);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar2 < *(uint *)(iVar8 + 0xc)) {
    puVar1 = (undefined4 *)(iVar8 + uVar2 * 4 + 0x10);
    *puVar1 = uVar6;
    thunk_FUN_00ec5080(puVar1,uVar6);
    *(uint *)(iVar3 + 0xc) = uVar2 + 1;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
    return;
  }
  piVar7 = (int *)(iVar3 + 8);
  if (*piVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*piVar7 + 0xc) == 0) {
    iVar8 = 4;
  }
  else {
    if (*piVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = *(int *)(*piVar7 + 0xc) << 1;
  }
  System_Array__Resize_object__138a144
            (piVar7,iVar8,
             *(undefined4 *)
              (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar4 + 0x10)
                                                                             + 0x60) + 0x34) + 0x10)
                                                  + 0x60) + 0x34) + 0x10) + 0x60) + 0x38));
  iVar8 = *(int *)(iVar3 + 8);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar8 + 0xc) <= *(uint *)(iVar3 + 0xc)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  puVar1 = (undefined4 *)(iVar8 + *(uint *)(iVar3 + 0xc) * 4 + 0x10);
  *puVar1 = uVar6;
  thunk_FUN_00ec5080(puVar1,uVar6);
  *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + 1;
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  return;
}

