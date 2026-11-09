/* IL2CPP: Rotatelab.Extensions$$AddUnique<Int32Enum>
bool Rotatelab_Extensions__AddUnique_Int32Enum_ (System_Collections_Generic_IList_T__o* list, int32_t element, const MethodInfo_148481C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Extensions$$AddUnique<Int32Enum>
   bool Rotatelab_Extensions__AddUnique_Int32Enum_ (System_Collections_Generic_IList_T__o* list,
   int32_t element, const MethodInfo_148481C* method); */

uint Rotatelab_Extensions__AddUnique_Int32Enum__148481c(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  if (*(int *)(param_3 + 0x1c) == 0) {
    FUN_00efd7c4(param_3);
  }
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(*(int *)(param_3 + 0x1c) + 8);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = FUN_00efd768(iVar3);
  }
  iVar1 = *param_1;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar3) {
        puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xe0);
        goto LAB_014948b8;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(param_1,iVar3,4);
LAB_014948b8:
  uVar4 = (*(code *)*puVar2)(param_1,param_2,puVar2[1]);
  if (uVar4 == 0) {
    iVar3 = *(int *)(*(int *)(param_3 + 0x1c) + 8);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = FUN_00efd768(iVar3);
    }
    iVar1 = *param_1;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar3) {
          puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xd0);
          goto LAB_01494944;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(param_1,iVar3,2);
LAB_01494944:
    (*(code *)*puVar2)(param_1,param_2,puVar2[1]);
  }
  return uVar4 ^ 1;
}

