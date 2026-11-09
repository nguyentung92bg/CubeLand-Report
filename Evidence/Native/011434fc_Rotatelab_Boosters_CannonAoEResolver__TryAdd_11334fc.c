/* IL2CPP: Rotatelab.Boosters.CannonAoEResolver$$TryAdd
void Rotatelab_Boosters_CannonAoEResolver__TryAdd (UnityEngine_Vector3Int_o p, System_Collections_Generic_List_BaseTargetableController__o* buffer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.CannonAoEResolver$$TryAdd
   void Rotatelab_Boosters_CannonAoEResolver__TryAdd (UnityEngine_Vector3Int_o p,
   System_Collections_Generic_List_BaseTargetableController__o* buffer, const MethodInfo* method);
    */

void Rotatelab_Boosters_CannonAoEResolver__TryAdd_11334fc
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int *piVar7;
  int *piStack_1c;
  
  pcVar6 = (char *)(_UNK_01143728 + 0x114351c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114372c + 0x1143534));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01143730 + 0x1143540));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01143734 + 0x114354c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01143738 + 0x1143558));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114373c + 0x1143564));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01143740 + 0x1143570));
    *pcVar6 = '\x01';
  }
  piStack_1c = (int *)0x0;
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01143744 + 0x1143588));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Grid_GridManager__TryGetGridCellContent_object__1492bbc
                    (iVar1,param_1,param_2,param_3,&piStack_1c,
                     **(undefined4 **)(_UNK_01143748 + 0x11435b4));
  if (iVar1 != 0) {
    if (piStack_1c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((char)piStack_1c[6] == '\0') {
      if (piStack_1c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = (**(code **)(*piStack_1c + 0xf0))(piStack_1c,*(undefined4 *)(*piStack_1c + 0xf4));
      if (iVar1 != 0) {
        piVar7 = *(int **)(_UNK_0114374c + 0x1143624);
        piVar2 = (int *)thunk_FUN_00f00bc8(piStack_1c,*piVar7);
        if (piVar2 != (int *)0x0) {
          iVar1 = *piVar2;
          iVar4 = *piVar7;
          uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar5 != 0) {
            piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar7[-1] == iVar4) {
                puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
                goto LAB_01143688;
              }
              uVar5 = uVar5 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined4 *)FUN_00efdb38(piVar2,iVar4,0);
LAB_01143688:
          iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
          if (iVar1 != 0) {
            piVar2 = *(int **)(_UNK_01143750 + 0x11436ac);
            iVar1 = *piVar2;
            if (*(int *)(iVar1 + 0x74) == 0) {
              FUN_00ec3934();
              iVar1 = *piVar2;
            }
            if (**(int **)(iVar1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar1 = System_Collections_Generic_HashSet_object___Add_2420ac8
                              (**(int **)(iVar1 + 0x5c),piStack_1c,
                               **(undefined4 **)(_UNK_01143754 + 0x11436e8));
            if (iVar1 != 0) {
              if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              func_0x00b8779c(param_4,piStack_1c,**(undefined4 **)(_UNK_01143758 + 0x1143718));
            }
          }
        }
      }
    }
  }
  return;
}

