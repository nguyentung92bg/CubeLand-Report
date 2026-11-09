/* IL2CPP: Rotatelab.Extensions$$Count<object>
int32_t Rotatelab_Extensions__Count_object_ (System_Collections_Generic_IList_T__o* list, System_Predicate_T__o* match, const MethodInfo_1486434* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Extensions$$Count<object>
   int32_t Rotatelab_Extensions__Count_object_ (System_Collections_Generic_IList_T__o* list,
   System_Predicate_T__o* match, const MethodInfo_1486434* method); */

int Rotatelab_Extensions__Count_object__1486434(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  
  if (*(int *)(param_3 + 0x1c) == 0) {
    FUN_00efd7c4(param_3);
  }
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(*(int *)(param_3 + 0x1c) + 4);
  if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
    iVar6 = FUN_00efd768(iVar6);
  }
  iVar2 = *param_1;
  uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar8[-1] == iVar6) {
        puVar3 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
        goto LAB_014964d0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined4 *)FUN_00efdb38(param_1,iVar6,0);
LAB_014964d0:
  iVar2 = (*(code *)*puVar3)(param_1,puVar3[1]);
  iVar9 = 0;
  iVar6 = iVar2 + -1;
  if (-1 < iVar2 + -1) {
    do {
      iVar2 = **(int **)(param_3 + 0x1c);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = FUN_00efd768(iVar2);
      }
      iVar4 = *param_1;
      uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar2) {
            puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
            goto LAB_01496558;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(param_1,iVar2,0);
LAB_01496558:
      uVar5 = (*(code *)*puVar3)(param_1,iVar6,puVar3[1]);
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = (**(code **)(param_2 + 0xc))
                        (*(undefined4 *)(param_2 + 0x20),uVar5,*(undefined4 *)(param_2 + 0x14));
      iVar9 = iVar9 + iVar2;
      bVar1 = 0 < iVar6;
      iVar6 = iVar6 + -1;
    } while (bVar1);
  }
  return iVar9;
}

