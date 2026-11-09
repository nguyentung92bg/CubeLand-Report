/* IL2CPP: Rotatelab.Extensions$$ToArray<object>
System_Object_array* Rotatelab_Extensions__ToArray_object_ (System_Collections_Generic_ICollection_T__o* collection, const MethodInfo_14896B8* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Extensions$$ToArray<object>
   System_Object_array* Rotatelab_Extensions__ToArray_object_
   (System_Collections_Generic_ICollection_T__o* collection, const MethodInfo_14896B8* method); */

undefined4 Rotatelab_Extensions__ToArray_object__14896b8(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  if (*(int *)(param_2 + 0x1c) == 0) {
    FUN_00efd7c4(param_2);
  }
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = **(int **)(param_2 + 0x1c);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = FUN_00efd768(iVar4);
  }
  iVar1 = *param_1;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar4) {
        puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
        goto LAB_01499750;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(param_1,iVar4,0);
LAB_01499750:
  uVar3 = (*(code *)*puVar2)(param_1,puVar2[1]);
  iVar4 = *(int *)(*(int *)(param_2 + 0x1c) + 8);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = FUN_00efd768();
  }
  uVar3 = FUN_00ec388c(iVar4,uVar3);
  iVar4 = **(int **)(param_2 + 0x1c);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = FUN_00efd768(iVar4);
  }
  iVar1 = *param_1;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar4) {
        puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xe8);
        goto LAB_014997f4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(param_1,iVar4,5);
LAB_014997f4:
  (*(code *)*puVar2)(param_1,uVar3,0,puVar2[1]);
  return uVar3;
}

