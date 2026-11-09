/* IL2CPP: Rotatelab.Grid.GridManager$$GetGridCellContent<object>
Il2CppObject* Rotatelab_Grid_GridManager__GetGridCellContent_object_ (Rotatelab_Grid_GridManager_o* __this, UnityEngine_Vector3Int_o position, const MethodInfo_1492B18* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Grid.GridManager$$GetGridCellContent<object>
   Il2CppObject* Rotatelab_Grid_GridManager__GetGridCellContent_object_
   (Rotatelab_Grid_GridManager_o* __this, UnityEngine_Vector3Int_o position, const
   MethodInfo_1492B18* method); */

int * Rotatelab_Grid_GridManager__GetGridCellContent_object__1492b18
                (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piStack_1c;
  
  if (*(int *)(param_5 + 0x1c) == 0) {
    FUN_00efd7c4(param_5);
  }
  uVar2 = Rotatelab_Grid_GridManager__ConvertGridPositionToIndex_11070b0
                    (param_1,param_2,param_3,param_4,0);
  if ((int)uVar2 < 0) {
    return (int *)0x0;
  }
  iVar6 = *(int *)(param_1 + 0x1c);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar2 < *(uint *)(iVar6 + 0xc)) {
    iVar4 = *(int *)(*(int *)(param_5 + 0x1c) + 4);
    piVar3 = (int *)(iVar6 + uVar2 * 0xc + 0x10);
    if ((*(int *)(iVar4 + 0x1c) == 0) &&
       (FUN_00ec37c0(*(undefined4 *)(_UNK_014a2b0c + 0x14a2a50)), *(int *)(iVar4 + 0x1c) == 0)) {
      FUN_00efd7c4(iVar4);
    }
    uVar7 = **(undefined4 **)(_UNK_014a2b14 + 0x14a2a7c);
    if (*(int *)(*(int *)(*(int *)(_UNK_014a2b10 + 0x14a2a70) + 0x70) + 0x74) == 0) {
      FUN_00ec3934();
    }
    piVar1 = (int *)System_Type__GetTypeFromHandle_2b80928(uVar7,0);
    uVar7 = System_Type__GetTypeFromHandle_2b80928(**(undefined4 **)(iVar4 + 0x1c),0);
    if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = (**(code **)(*piVar1 + 0x180))(piVar1,uVar7,*(undefined4 *)(*piVar1 + 0x184));
    if (iVar6 != 0) {
      piVar3 = (int *)*piVar3;
    }
    iVar4 = *(int *)(*(int *)(iVar4 + 0x1c) + 4);
    if (iVar6 == 0) {
      piVar3 = (int *)piVar3[1];
    }
    if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = FUN_00efd768(iVar4);
    }
    piVar1 = (int *)0x0;
    piVar5 = piVar1;
    if (piVar3 != (int *)0x0) {
      iVar8 = *piVar3;
      iVar6 = func_0x00f1f8d4(iVar4,iVar8);
      piVar5 = piVar3;
      if ((iVar6 == 0) && (piVar5 = piVar1, (*(ushort *)(iVar8 + 0xbd) & 0x1000) != 0)) {
        if (((*(byte *)(iVar4 + 0xa0) & 0x20) != 0) ||
           (*(char *)(iVar4 + 0x16) == '\x1e' || *(char *)(iVar4 + 0x16) == '\x13')) {
          iVar6 = *(int *)(iVar4 + 0x38);
          if (iVar6 != 0) {
            piVar1 = *(int **)(iVar6 + 0x14);
          }
          if (iVar6 != 0 && piVar1 != (int *)0x0) {
            piStack_1c = (int *)func_0x00f0ac20(piVar3,piVar1);
            if (piStack_1c != (int *)0x0) {
              return piVar3;
            }
            iVar6 = (*(code *)**(undefined4 **)piVar3[2])
                              ((undefined4 *)piVar3[2],piVar1,&piStack_1c);
            if (-1 < iVar6) {
              iVar6 = func_0x00f0aca8(piVar3,piVar1,piStack_1c);
              if (iVar6 == 0) {
                (**(code **)(*piStack_1c + 8))();
                piStack_1c = (int *)func_0x00f0ac20(piVar3,piVar1);
              }
              if (piStack_1c != (int *)0x0) {
                return piVar3;
              }
            }
          }
        }
        piVar5 = piVar3;
        if (*(int *)(*(int *)(_UNK_00f00cd8 + 0xf00c44) + 8) != iVar4) {
          piVar5 = (int *)0x0;
        }
      }
    }
    return piVar5;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f07924();
}

