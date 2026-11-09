/* IL2CPP: Rotatelab.Grid.GridManager$$FindAllTargetables
void Rotatelab_Grid_GridManager__FindAllTargetables (Rotatelab_Grid_GridManager_o* __this, System_Collections_Generic_List_BaseTargetableController__o* result, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Grid.GridManager$$FindAllTargetables
   void Rotatelab_Grid_GridManager__FindAllTargetables (Rotatelab_Grid_GridManager_o* __this,
   System_Collections_Generic_List_BaseTargetableController__o* result, const MethodInfo* method);
    */

void Rotatelab_Grid_GridManager__FindAllTargetables_1108344(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uStack_40;
  undefined4 *puStack_3c;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = (char *)(_UNK_011185c8 + 0x1118360);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011185cc + 0x1118374));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011185d0 + 0x1118380));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011185d4 + 0x111838c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011185d8 + 0x1118398));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011185dc + 0x11183a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011185e0 + 0x11183b0));
    *pcVar4 = '\x01';
  }
  uVar6 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  iStack_34 = 0;
  if (*(int *)(**(int **)(_UNK_011185e4 + 0x11183c8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Pool_HashSetPool_object___Get_240ea4c
            (&uStack_40,&iStack_34,**(undefined4 **)(_UNK_011185e8 + 0x11183f4));
  iVar5 = 0x10;
  uStack_30 = uStack_40;
  uStack_2c = puStack_3c;
  uStack_40 = 0;
  puStack_3c = &uStack_30;
  do {
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0xc) <= (int)uVar6) {
      Rotatelab_Pool_PooledObject_object___Dispose_186ffc8
                (&uStack_30,**(undefined4 **)(_UNK_011185f8 + 0x1118554));
      return;
    }
    iVar7 = *(int *)(param_1 + 0x1c);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar7 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar8 = *(int **)(iVar7 + iVar5);
    if (piVar8 != (int *)0x0) {
      uVar3 = (uint)*(byte *)(**(int **)(_UNK_011185ec + 0x111846c) + 0xb8);
      if ((*(byte *)(*piVar8 + 0xb8) < uVar3) ||
         (*(int *)(*(int *)(*piVar8 + 100) + uVar3 * 4 + -4) !=
          **(int **)(_UNK_011185ec + 0x111846c))) {
        if (iStack_34 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar7 = System_Collections_Generic_HashSet_object___Add_2420ac8
                          (iStack_34,piVar8,**(undefined4 **)(_UNK_011185f0 + 0x11184b0));
        if (iVar7 == 0) goto LAB_0111853c;
      }
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = *(int *)(param_2 + 8);
      uVar3 = *(uint *)(param_2 + 0xc);
      piVar2 = *(int **)(_UNK_011185f4 + 0x11184f0);
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar3 < *(uint *)(iVar7 + 0xc)) {
        *(uint *)(param_2 + 0xc) = uVar3 + 1;
        puVar1 = (undefined4 *)(iVar7 + uVar3 * 4 + 0x10);
        *puVar1 = piVar8;
        thunk_FUN_00ec5080(puVar1,piVar8);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_267dae0
                  (param_2,piVar8,*(undefined4 *)(*(int *)(*(int *)(*piVar2 + 0x10) + 0x60) + 0x38))
        ;
      }
    }
LAB_0111853c:
    iVar5 = iVar5 + 0xc;
    uVar6 = uVar6 + 1;
  } while( true );
}

