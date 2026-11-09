/* IL2CPP: Rotatelab.Scripts.BlasterController$$IsSameColumnFrontStack
bool Rotatelab_Scripts_BlasterController__IsSameColumnFrontStack (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$IsSameColumnFrontStack
   bool Rotatelab_Scripts_BlasterController__IsSameColumnFrontStack
   (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method); */

bool Rotatelab_Scripts_BlasterController__IsSameColumnFrontStack_10357c4(int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  
  pcVar5 = (char *)(_UNK_01045998 + 0x10457dc);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104599c + 0x10457f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010459a0 + 0x10457fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010459a4 + 0x1045808));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010459a8 + 0x1045814));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010459ac + 0x1045820));
    *pcVar5 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_24 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  if (*(int *)(param_1 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = *(int *)(*(int *)(param_1 + 0x120) + 0xc);
  bVar2 = false;
  if (1 < iVar8) {
    iVar6 = *(int *)(param_1 + 0x1c);
    if (*(int *)(param_1 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4(0);
    }
    System_Collections_Generic_List_object___GetEnumerator_267e7a4
              (&uStack_30,*(int *)(param_1 + 0x120),**(undefined4 **)(_UNK_010459b0 + 0x1045878));
    uVar10 = 0;
    puVar9 = *(undefined4 **)(_UNK_010459b4 + 0x1045898);
    iVar7 = 0;
    puVar11 = &uStack_30;
    while (iVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                             (&uStack_30,*puVar9), piVar1 = piStack_24, iVar3 != 0) {
      if (piStack_24 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((piStack_24[7] != iVar6) ||
         (pcVar4 = *(code **)(*piStack_24 + 0x128),
         iVar3 = (*pcVar4)(piStack_24,1,*(undefined4 *)(*piStack_24 + 300),pcVar4,uVar10,puVar11),
         iVar3 == 0)) {
        System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                  (&uStack_30,**(undefined4 **)(_UNK_010459c0 + 0x1045904));
        return false;
      }
      if (iVar7 <= piVar1[8]) {
        iVar7 = piVar1[8];
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_219071c
              (&uStack_30,**(undefined4 **)(_UNK_010459b8 + 0x1045920));
    bVar2 = iVar7 - iVar8 == -1;
  }
  return bVar2;
}

