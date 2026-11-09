/* IL2CPP: Rotatelab.Scripts.BlasterController$$CreateChainConnections
void Rotatelab_Scripts_BlasterController__CreateChainConnections (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$CreateChainConnections
   void Rotatelab_Scripts_BlasterController__CreateChainConnections
   (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__CreateChainConnections_1032208(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  
  pcVar5 = (char *)(_UNK_010424c4 + 0x1042220);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010424c8 + 0x1042234));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010424cc + 0x1042240));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010424d0 + 0x104224c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010424d4 + 0x1042258));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010424d8 + 0x1042264));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010424dc + 0x1042270));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010424e0 + 0x104227c));
    *pcVar5 = '\x01';
  }
  iVar10 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x18) + 0x38);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar6 + 0xc) <= iVar10) {
      if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar10 = *(int *)(*(int *)(param_1 + 0x18) + 0x38);
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      *(bool *)(param_1 + 0xc4) = 0 < *(int *)(iVar10 + 0xc);
      return;
    }
    iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010424e4 + 0x10422c0));
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *(int *)(*(int *)(param_1 + 0x18) + 0x38);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = System_Collections_Generic_List_object___get_Item_267d814
                      (iVar7,iVar10,**(undefined4 **)(_UNK_010424e8 + 0x10422f8));
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar3 = (int *)Rotatelab_Scripts_PlaceableManager__FindPlaceableByData_104306c(iVar6,uVar2,0);
    piVar11 = (int *)0x0;
    if (piVar3 != (int *)0x0) {
      uVar4 = (uint)*(byte *)(**(int **)(_UNK_010424ec + 0x1042338) + 0xb8);
      if ((*(byte *)(*piVar3 + 0xb8) < uVar4) ||
         (piVar11 = piVar3,
         *(int *)(*(int *)(*piVar3 + 100) + uVar4 * 4 + -4) != **(int **)(_UNK_010424ec + 0x1042338)
         )) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28();
      }
    }
    uVar2 = *(undefined4 *)(param_1 + 0x40);
    uVar8 = *(undefined4 *)(param_1 + 0x84);
    if (*(int *)(**(int **)(_UNK_010424f0 + 0x1042370) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar6 = UnityEngine_Object__Instantiate_object__14d4e4c
                      (uVar8,uVar2,0,**(undefined4 **)(_UNK_010424f4 + 0x104239c));
    if (piVar11 == (int *)0x0) break;
    bVar1 = *(byte *)(piVar11 + 0x31);
    iVar7 = piVar11[0x1f];
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(iVar6 + 0x38) = piVar11;
    thunk_FUN_00ec5080((undefined4 *)(iVar6 + 0x38),piVar11);
    *(int *)(iVar6 + 0x3c) = iVar7;
    thunk_FUN_00ec5080((int *)(iVar6 + 0x3c),iVar7);
    iVar7 = *(int *)(param_1 + 0x11c);
    *(byte *)(iVar6 + 0x40) = bVar1 ^ 1;
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = *(int *)(iVar7 + 8);
    uVar4 = *(uint *)(iVar7 + 0xc);
    piVar3 = *(int **)(_UNK_010424f8 + 0x1042424);
    *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar4 < *(uint *)(iVar9 + 0xc)) {
      *(uint *)(iVar7 + 0xc) = uVar4 + 1;
      piVar3 = (int *)(iVar9 + uVar4 * 4 + 0x10);
      *piVar3 = iVar6;
      thunk_FUN_00ec5080(piVar3,iVar6);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar7,iVar6,*(undefined4 *)(*(int *)(*(int *)(*piVar3 + 0x10) + 0x60) + 0x38));
    }
    iVar10 = iVar10 + 1;
    *(undefined1 *)(piVar11 + 0x31) = 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

