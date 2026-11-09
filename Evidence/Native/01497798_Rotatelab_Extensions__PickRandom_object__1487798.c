/* IL2CPP: Rotatelab.Extensions$$PickRandom<object>
Il2CppObject* Rotatelab_Extensions__PickRandom_object_ (System_Collections_Generic_IList_T__o* list, const MethodInfo_1487798* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Extensions$$PickRandom<object>
   Il2CppObject* Rotatelab_Extensions__PickRandom_object_ (System_Collections_Generic_IList_T__o*
   list, const MethodInfo_1487798* method); */

void Rotatelab_Extensions__PickRandom_object__1487798(int *param_1,int param_2)

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
  iVar4 = *(int *)(*(int *)(param_2 + 0x1c) + 4);
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
        goto LAB_01497830;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(param_1,iVar4,0);
LAB_01497830:
  uVar3 = (*(code *)*puVar2)(param_1,puVar2[1]);
  uVar3 = UnityEngine_Random__Range_35f8b14(0,uVar3,0);
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
        goto LAB_014978c0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(param_1,iVar4,0);
LAB_014978c0:
                    /* WARNING: Could not recover jumptable at 0x014978d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,uVar3,puVar2[1]);
  return;
}

