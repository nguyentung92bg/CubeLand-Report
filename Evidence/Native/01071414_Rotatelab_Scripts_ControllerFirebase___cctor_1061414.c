/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$.cctor
void Rotatelab_Scripts_ControllerFirebase___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$.cctor
   void Rotatelab_Scripts_ControllerFirebase___cctor (const MethodInfo* method); */

void Rotatelab_Scripts_ControllerFirebase___cctor_1061414(void)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  pcVar6 = (char *)(_UNK_01071710 + 0x1071424);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01071714 + 0x1071438));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01071718 + 0x1071444));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107171c + 0x1071450));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01071720 + 0x107145c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01071724 + 0x1071468));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01071728 + 0x1071474));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107172c + 0x1071480));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01071730 + 0x107148c));
    *pcVar6 = '\x01';
  }
  uVar7 = **(undefined4 **)(_UNK_01071738 + 0x10714ac);
  if (*(int *)(*(int *)(*(int *)(_UNK_01071734 + 0x10714a0) + 0x70) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar7 = System_Type__GetTypeFromHandle_2b80928(uVar7,0);
  puVar10 = *(undefined4 **)(_UNK_0107173c + 0x10714dc);
  iVar3 = System_Type__GetTypeFromHandle_2b80928(*puVar10,0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar4 = (int *)System_Type__GetProperty_2b8dc20
                            (iVar3,**(undefined4 **)(_UNK_01071740 + 0x1071504),0x34,0);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = (**(code **)(*piVar4 + 0x170))(piVar4,*(undefined4 *)(*piVar4 + 0x174));
  iVar8 = 0;
  iVar3 = System_Delegate__CreateDelegate_2bc19a0(uVar7,uVar5,0);
  if (iVar3 == 0) {
    piVar4 = (int *)(*(int *)(**(int **)(_UNK_0107175c + 0x10715bc) + 0x5c) + 0xc);
    *piVar4 = 0;
  }
  else {
    puVar9 = *(undefined4 **)(_UNK_01071744 + 0x107155c);
    uVar7 = *puVar9;
    iVar8 = thunk_FUN_00f00bc8(iVar3,uVar7);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(iVar3,uVar7);
    }
    uVar7 = *puVar9;
    piVar4 = (int *)(*(int *)(**(int **)(_UNK_01071748 + 0x1071588) + 0x5c) + 0xc);
    *piVar4 = iVar8;
    iVar8 = thunk_FUN_00f00bc8(iVar3,uVar7);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(iVar3,uVar7);
    }
  }
  thunk_FUN_00ec5080(piVar4,iVar8);
  uVar7 = System_Type__GetTypeFromHandle_2b80928(**(undefined4 **)(_UNK_0107174c + 0x10715f4),0);
  iVar3 = System_Type__GetTypeFromHandle_2b80928(*puVar10,0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar4 = (int *)System_Type__GetProperty_2b8dc20
                            (iVar3,**(undefined4 **)(_UNK_01071750 + 0x107162c),0x34,0);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = (**(code **)(*piVar4 + 0x170))(piVar4,*(undefined4 *)(*piVar4 + 0x174));
  iVar3 = System_Delegate__CreateDelegate_2bc19a0(uVar7,uVar5,0);
  if (iVar3 == 0) {
    piVar4 = (int *)(*(int *)(**(int **)(_UNK_01071760 + 0x10716e4) + 0x5c) + 0x10);
    *piVar4 = 0;
  }
  else {
    puVar10 = *(undefined4 **)(_UNK_01071754 + 0x1071684);
    uVar7 = *puVar10;
    iVar8 = thunk_FUN_00f00bc8(iVar3,uVar7);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(iVar3,uVar7);
    }
    uVar7 = *puVar10;
    piVar4 = (int *)(*(int *)(**(int **)(_UNK_01071758 + 0x10716b0) + 0x5c) + 0x10);
    *piVar4 = iVar8;
    iVar8 = thunk_FUN_00f00bc8(iVar3,uVar7);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(iVar3,uVar7);
    }
  }
  if (*(int *)(_UNK_00f30580 + 0xf30540) == 0) {
    return;
  }
  puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar4 >> 0x11) * 4 + 0xf547cc);
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = *puVar2 | 1 << (((uint)piVar4 & 0x1ffff) >> 0xc);
  return;
}

