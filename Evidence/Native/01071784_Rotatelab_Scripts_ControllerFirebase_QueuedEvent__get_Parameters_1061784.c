/* IL2CPP: Rotatelab.Scripts.ControllerFirebase.QueuedEvent$$get_Parameters
Firebase_Analytics_Parameter_array* Rotatelab_Scripts_ControllerFirebase_QueuedEvent__get_Parameters (Rotatelab_Scripts_ControllerFirebase_QueuedEvent_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ControllerFirebase.QueuedEvent$$get_Parameters
   Firebase_Analytics_Parameter_array*
   Rotatelab_Scripts_ControllerFirebase_QueuedEvent__get_Parameters
   (Rotatelab_Scripts_ControllerFirebase_QueuedEvent_o* __this, const MethodInfo* method); */

int Rotatelab_Scripts_ControllerFirebase_QueuedEvent__get_Parameters_1061784(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  
  pcVar8 = (char *)(_UNK_010718c0 + 0x1071798);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010718c4 + 0x10717ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010718c8 + 0x10717b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010718cc + 0x10717c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010718d0 + 0x10717d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010718d4 + 0x10717dc));
    *pcVar8 = '\x01';
  }
  iVar6 = *(int *)(param_1 + 0xc);
  if (iVar6 == 0) {
    return 0;
  }
  piVar11 = *(int **)(_UNK_010718d8 + 0x10717fc);
  iVar1 = *piVar11;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar11;
  }
  puVar4 = *(undefined4 **)(iVar1 + 0x5c);
  iVar9 = puVar4[1];
  if (iVar9 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar4 = *(undefined4 **)(*piVar11 + 0x5c);
    }
    uVar10 = *puVar4;
    iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010718dc + 0x1071844));
    System_Converter_object__object____ctor_1f61750
              (iVar9,uVar10,**(undefined4 **)(_UNK_010718e0 + 0x1071864),0);
    piVar11 = (int *)(*(int *)(*piVar11 + 0x5c) + 4);
    *piVar11 = iVar9;
    thunk_FUN_00ec5080(piVar11,iVar9);
  }
  if (*(int *)(**(int **)(_UNK_010718e4 + 0x107188c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar5 = **(int **)(_UNK_010718e8 + 0x10718ac);
  iVar1 = *(int *)(iVar5 + 0x1c);
  if (iVar1 == 0) {
    FUN_00efd7c4(iVar5);
    iVar1 = *(int *)(iVar5 + 0x1c);
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    FUN_00efd7c4(iVar1);
  }
  if (iVar6 == 0) {
    thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0164a698 + 0x164a644));
    uVar10 = thunk_FUN_00f00cdc();
    uVar3 = *(undefined4 *)(_UNK_0164a69c + 0x164a658);
  }
  else {
    if (iVar9 != 0) {
      iVar1 = *(int *)(*(int *)(iVar1 + 0x1c) + 8);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768();
      }
      iVar1 = FUN_00ec388c(iVar1,*(undefined4 *)(iVar6 + 0xc));
      uVar2 = *(uint *)(iVar6 + 0xc);
      if (0 < (int)uVar2) {
        iVar5 = 0;
        uVar7 = 0;
        do {
          if (uVar2 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          uVar10 = (**(code **)(iVar9 + 0xc))
                             (*(undefined4 *)(iVar9 + 0x20),
                              *(undefined4 *)(iVar6 + 0x10 + uVar7 * 4),
                              *(undefined4 *)(iVar9 + 0x14));
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar1 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          *(undefined4 *)(iVar1 + 0x10 + uVar7 * 4) = uVar10;
          thunk_FUN_00ec5080(iVar1 + 0x10 + iVar5,uVar10);
          uVar2 = *(uint *)(iVar6 + 0xc);
          uVar7 = uVar7 + 1;
          iVar5 = iVar5 + 4;
        } while ((int)uVar7 < (int)uVar2);
      }
      return iVar1;
    }
    thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0164a6a0 + 0x164a664));
    uVar10 = thunk_FUN_00f00cdc();
    uVar3 = *(undefined4 *)(_UNK_0164a6a4 + 0x164a678);
  }
  uVar3 = thunk_FUN_00f23fd0(uVar3);
  System_ArgumentNullException___ctor_2b08d00(uVar10,uVar3,0);
  func_0x00ec3920(uVar10,iVar1);
                    /* WARNING: Subroutine does not return */
  FUN_00ec3760();
}

