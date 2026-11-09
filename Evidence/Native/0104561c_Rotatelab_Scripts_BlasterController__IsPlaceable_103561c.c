/* IL2CPP: Rotatelab.Scripts.BlasterController$$IsPlaceable
bool Rotatelab_Scripts_BlasterController__IsPlaceable (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$IsPlaceable
   bool Rotatelab_Scripts_BlasterController__IsPlaceable (Rotatelab_Scripts_BlasterController_o*
   __this, const MethodInfo* method); */

bool Rotatelab_Scripts_BlasterController__IsPlaceable_103561c(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  code *pcVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  
  pcVar6 = (char *)(_UNK_01045798 + 0x1045630);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104579c + 0x1045644));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010457a0 + 0x1045650));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010457a4 + 0x104565c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010457a8 + 0x1045668));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010457ac + 0x1045674));
    *pcVar6 = '\x01';
  }
  bVar1 = false;
  if (*(char *)(param_1 + 199) == '\0') {
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010457b0 + 0x1045698));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = Rotatelab_Scripts_LevelStateManager__get_IsWinSequenceAnimating_1006428(iVar2,0);
    bVar1 = true;
    if (iVar2 == 0) {
      piVar10 = *(int **)(_UNK_010457b4 + 0x10456d0);
      iVar7 = *(int *)(param_1 + 0x120);
      iVar2 = *piVar10;
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        iVar2 = *piVar10;
      }
      puVar4 = *(undefined4 **)(iVar2 + 0x5c);
      iVar8 = puVar4[8];
      if (iVar8 == 0) {
        if (*(int *)(iVar2 + 0x74) == 0) {
          FUN_00ec3934();
          puVar4 = *(undefined4 **)(*piVar10 + 0x5c);
        }
        uVar9 = *puVar4;
        iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010457b8 + 0x104571c));
        System_Predicate_object____ctor_1876380
                  (iVar8,uVar9,**(undefined4 **)(_UNK_010457bc + 0x104573c),0);
        piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 0x20);
        *piVar10 = iVar8;
        thunk_FUN_00ec5080(piVar10,iVar8);
      }
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = System_Collections_Generic_List_object___TrueForAll_267f8d8
                        (iVar7,iVar8,**(undefined4 **)(_UNK_010457c0 + 0x1045774));
      if (iVar2 == 0) {
        pcVar6 = (char *)(_UNK_01045998 + 0x10457dc);
        if (*pcVar6 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_0104599c + 0x10457f0));
          FUN_00ec37c0(*(undefined4 *)(_UNK_010459a0 + 0x10457fc));
          FUN_00ec37c0(*(undefined4 *)(_UNK_010459a4 + 0x1045808));
          FUN_00ec37c0(*(undefined4 *)(_UNK_010459a8 + 0x1045814));
          FUN_00ec37c0(*(undefined4 *)(_UNK_010459ac + 0x1045820));
          *pcVar6 = '\x01';
        }
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        piStack_24 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_30 = 0;
        if (*(int *)(param_1 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar2 = *(int *)(*(int *)(param_1 + 0x120) + 0xc);
        bVar1 = false;
        if (1 < iVar2) {
          iVar7 = *(int *)(param_1 + 0x1c);
          if (*(int *)(param_1 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4(0);
          }
          System_Collections_Generic_List_object___GetEnumerator_267e7a4
                    (&uStack_30,*(int *)(param_1 + 0x120),
                     **(undefined4 **)(_UNK_010459b0 + 0x1045878));
          uVar9 = 0;
          puVar11 = *(undefined4 **)(_UNK_010459b4 + 0x1045898);
          iVar8 = 0;
          puVar4 = &uStack_30;
          while (iVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                                   (&uStack_30,*puVar11), piVar10 = piStack_24, iVar3 != 0) {
            if (piStack_24 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if ((piStack_24[7] != iVar7) ||
               (pcVar5 = *(code **)(*piStack_24 + 0x128),
               iVar3 = (*pcVar5)(piStack_24,1,*(undefined4 *)(*piStack_24 + 300),pcVar5,uVar9,puVar4
                                ), iVar3 == 0)) {
              System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                        (&uStack_30,**(undefined4 **)(_UNK_010459c0 + 0x1045904));
              return false;
            }
            if (iVar8 <= piVar10[8]) {
              iVar8 = piVar10[8];
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                    (&uStack_30,**(undefined4 **)(_UNK_010459b8 + 0x1045920));
          bVar1 = iVar8 - iVar2 == -1;
        }
        return bVar1;
      }
    }
  }
  return bVar1;
}

