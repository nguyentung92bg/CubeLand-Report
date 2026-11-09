/* IL2CPP: Rotatelab.Extensions$$TryPickRandom<object>
bool Rotatelab_Extensions__TryPickRandom_object_ (System_Collections_Generic_IList_T__o* list, System_Predicate_T__o* selector, Il2CppObject** value, const MethodInfo_148BF30* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Extensions$$TryPickRandom<object>
   bool Rotatelab_Extensions__TryPickRandom_object_ (System_Collections_Generic_IList_T__o* list,
   System_Predicate_T__o* selector, Il2CppObject** value, const MethodInfo_148BF30* method); */

bool Rotatelab_Extensions__TryPickRandom_object__148bf30
               (int *param_1,int param_2,undefined4 *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  
  if (*(int *)(param_4 + 0x1c) == 0) {
    FUN_00efd7c4(param_4);
  }
  *param_3 = 0;
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(*(int *)(param_4 + 0x1c) + 0xc);
  if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
    iVar6 = FUN_00efd768(iVar6);
  }
  iVar2 = *param_1;
  uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar9[-1] == iVar6) {
        puVar3 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
        goto LAB_0149bfdc;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined4 *)FUN_00efdb38(param_1,iVar6,0);
LAB_0149bfdc:
  iVar6 = (*(code *)*puVar3)(param_1,puVar3[1]);
  if (iVar6 + -1 < 0) {
    bVar1 = false;
  }
  else {
    iVar6 = iVar6 + -1;
    iVar2 = 0;
    do {
      iVar7 = *(int *)(*(int *)(param_4 + 0x1c) + 8);
      if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
        iVar7 = FUN_00efd768(iVar7);
      }
      iVar4 = *param_1;
      uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar9[-1] == iVar7) {
            puVar3 = (undefined4 *)(iVar4 + *piVar9 * 8 + 0xc0);
            goto LAB_0149c068;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(param_1,iVar7,0);
LAB_0149c068:
      uVar5 = (*(code *)*puVar3)(param_1,iVar6,puVar3[1]);
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = (**(code **)(param_2 + 0xc))
                        (*(undefined4 *)(param_2 + 0x20),uVar5,*(undefined4 *)(param_2 + 0x14));
      iVar7 = iVar2;
      if ((iVar4 != 0) &&
         ((iVar7 = iVar2 + 1, iVar2 == 0 ||
          (iVar2 = UnityEngine_Random__Range_35f8b14(0,iVar7,0), iVar2 == 0)))) {
        *param_3 = uVar5;
        thunk_FUN_00ec5080(param_3,uVar5);
      }
      bVar1 = 0 < iVar6;
      iVar6 = iVar6 + -1;
      iVar2 = iVar7;
    } while (bVar1);
    bVar1 = 0 < iVar7;
  }
  return bVar1;
}

