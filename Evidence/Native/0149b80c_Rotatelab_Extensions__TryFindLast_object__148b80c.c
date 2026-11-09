/* IL2CPP: Rotatelab.Extensions$$TryFindLast<object>
bool Rotatelab_Extensions__TryFindLast_object_ (System_Collections_Generic_IList_T__o* list, System_Predicate_T__o* selector, Il2CppObject** value, const MethodInfo_148B80C* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$TryFindLast<object>
   bool Rotatelab_Extensions__TryFindLast_object_ (System_Collections_Generic_IList_T__o* list,
   System_Predicate_T__o* selector, Il2CppObject** value, const MethodInfo_148B80C* method); */

undefined4
Rotatelab_Extensions__TryFindLast_object__148b80c(int *param_1,int param_2,int *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  if ((*(int *)(param_4 + 0x1c) == 0) &&
     (FUN_00ec37c0(*(undefined4 *)(_UNK_0149b884 + 0x149b838)), *(int *)(param_4 + 0x1c) == 0)) {
    FUN_00efd7c4(param_4);
  }
  if (*(int *)(**(int **)(_UNK_0149b888 + 0x149b858) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar7 = *(int *)(*(int *)(param_4 + 0x1c) + 0xc);
  if (*(int *)(iVar7 + 0x1c) == 0) {
    FUN_00efd7c4(iVar7);
  }
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(*(int *)(iVar7 + 0x1c) + 4);
  if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = FUN_00efd768(iVar5);
  }
  iVar2 = *param_1;
  uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar8[-1] == iVar5) {
        puVar3 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
        goto LAB_0149b9b4;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined4 *)FUN_00efdb38(param_1,iVar5,0);
LAB_0149b9b4:
  iVar2 = (*(code *)*puVar3)(param_1,puVar3[1]);
  iVar5 = iVar2 + -1;
  if (-1 < iVar2 + -1) {
    do {
      iVar2 = **(int **)(iVar7 + 0x1c);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = FUN_00efd768(iVar2);
      }
      iVar4 = *param_1;
      uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar2) {
            puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
            goto LAB_0149ba38;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(param_1,iVar2,0);
LAB_0149ba38:
      iVar2 = (*(code *)*puVar3)(param_1,iVar5,puVar3[1]);
      iVar4 = *(int *)(*(int *)(iVar7 + 0x1c) + 0x14);
      if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = FUN_00efd768(iVar4);
      }
      iVar4 = thunk_FUN_00f00bc8(iVar2,iVar4);
      if (iVar4 != 0) {
        iVar4 = *(int *)(*(int *)(iVar7 + 0x1c) + 0x14);
        if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
          iVar4 = FUN_00efd768(iVar4);
        }
        iVar9 = 0;
        if ((iVar2 != 0) && (iVar9 = thunk_FUN_00f00bc8(iVar2,iVar4), iVar9 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_00ec3e28(iVar2,iVar4);
        }
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar2 = (**(code **)(param_2 + 0xc))
                          (*(undefined4 *)(param_2 + 0x20),iVar9,*(undefined4 *)(param_2 + 0x14));
        if (iVar2 != 0) {
          *param_3 = iVar9;
          thunk_FUN_00ec5080(param_3,iVar9);
          return 1;
        }
      }
      bVar1 = 0 < iVar5;
      iVar5 = iVar5 + -1;
    } while (bVar1);
  }
  *param_3 = 0;
  return 0;
}

