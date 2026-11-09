/* IL2CPP: Rotatelab.Scripts.MeteorShowerManager.<MeteorShowerCoroutine>d__9$$<>m__Finally3
void Rotatelab_Scripts_MeteorShowerManager__MeteorShowerCoroutine_d__9____m__Finally3 (Rotatelab_Scripts_MeteorShowerManager__MeteorShowerCoroutine_d__9_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.MeteorShowerManager.<MeteorShowerCoroutine>d__9$$<>m__Finally3
   void Rotatelab_Scripts_MeteorShowerManager__MeteorShowerCoroutine_d__9____m__Finally3
   (Rotatelab_Scripts_MeteorShowerManager__MeteorShowerCoroutine_d__9_o* __this, const MethodInfo*
   method); */

void Rotatelab_Scripts_MeteorShowerManager__MeteorShowerCoroutine_d__9____m__Finally3_1029414
               (int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  
  pcVar4 = (char *)(_UNK_01039464 + 0x1039428);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01039468 + 0x103943c));
    *pcVar4 = '\x01';
  }
  iVar2 = **(int **)(_UNK_0103946c + 0x1039450);
  *(undefined4 *)(param_1 + 8) = 0xfffffffc;
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  iVar7 = *(int *)(param_1 + 0x24);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar2 + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768();
  }
  iVar3 = *(int *)(*(int *)(iVar2 + 0x60) + 0xc);
  iVar2 = *(int *)(iVar7 + 0xc);
  if (iVar2 != 0) {
    (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),uVar5,*(undefined4 *)(iVar2 + 0x14));
  }
  iVar2 = *(int *)(iVar7 + 8);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *(int *)(iVar2 + 8);
  uVar8 = *(uint *)(iVar2 + 0xc);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar8 < *(uint *)(iVar7 + 0xc)) {
    puVar1 = (undefined4 *)(iVar7 + uVar8 * 4 + 0x10);
    *puVar1 = uVar5;
    thunk_FUN_00ec5080(puVar1,uVar5);
    *(uint *)(iVar2 + 0xc) = uVar8 + 1;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    return;
  }
  piVar6 = (int *)(iVar2 + 8);
  if (*piVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*piVar6 + 0xc) == 0) {
    iVar7 = 4;
  }
  else {
    if (*piVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *(int *)(*piVar6 + 0xc) << 1;
  }
  System_Array__Resize_object__138a144
            (piVar6,iVar7,
             *(undefined4 *)
              (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x10)
                                                                             + 0x60) + 0x34) + 0x10)
                                                  + 0x60) + 0x34) + 0x10) + 0x60) + 0x38));
  iVar7 = *(int *)(iVar2 + 8);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar7 + 0xc) <= *(uint *)(iVar2 + 0xc)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  puVar1 = (undefined4 *)(iVar7 + *(uint *)(iVar2 + 0xc) * 4 + 0x10);
  *puVar1 = uVar5;
  thunk_FUN_00ec5080(puVar1,uVar5);
  *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  return;
}

