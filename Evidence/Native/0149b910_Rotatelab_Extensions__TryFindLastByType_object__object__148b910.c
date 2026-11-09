/* IL2CPP: Rotatelab.Extensions$$TryFindLastByType<object, object>
bool Rotatelab_Extensions__TryFindLastByType_object__object_ (System_Collections_Generic_IList_T__o* list, System_Predicate_TargetType__o* selector, Il2CppObject** value, const MethodInfo_148B910* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Extensions$$TryFindLastByType<object, object>
   bool Rotatelab_Extensions__TryFindLastByType_object__object_
   (System_Collections_Generic_IList_T__o* list, System_Predicate_TargetType__o* selector,
   Il2CppObject** value, const MethodInfo_148B910* method); */

undefined4
Rotatelab_Extensions__TryFindLastByType_object__object__148b910
          (int *param_1,int param_2,int *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  
  if (*(int *)(param_4 + 0x1c) == 0) {
    FUN_00efd7c4(param_4);
  }
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(*(int *)(param_4 + 0x1c) + 4);
  if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = FUN_00efd768(iVar5);
  }
  iVar2 = *param_1;
  uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar7[-1] == iVar5) {
        puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
        goto LAB_0149b9b4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined4 *)FUN_00efdb38(param_1,iVar5,0);
LAB_0149b9b4:
  iVar2 = (*(code *)*puVar3)(param_1,puVar3[1]);
  iVar5 = iVar2 + -1;
  if (-1 < iVar2 + -1) {
    do {
      iVar2 = **(int **)(param_4 + 0x1c);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = FUN_00efd768(iVar2);
      }
      iVar4 = *param_1;
      uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar7[-1] == iVar2) {
            puVar3 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0xc0);
            goto LAB_0149ba38;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(param_1,iVar2,0);
LAB_0149ba38:
      iVar2 = (*(code *)*puVar3)(param_1,iVar5,puVar3[1]);
      iVar4 = *(int *)(*(int *)(param_4 + 0x1c) + 0x14);
      if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = FUN_00efd768(iVar4);
      }
      iVar4 = thunk_FUN_00f00bc8(iVar2,iVar4);
      if (iVar4 != 0) {
        iVar4 = *(int *)(*(int *)(param_4 + 0x1c) + 0x14);
        if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
          iVar4 = FUN_00efd768(iVar4);
        }
        iVar8 = 0;
        if ((iVar2 != 0) && (iVar8 = thunk_FUN_00f00bc8(iVar2,iVar4), iVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_00ec3e28(iVar2,iVar4);
        }
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar2 = (**(code **)(param_2 + 0xc))
                          (*(undefined4 *)(param_2 + 0x20),iVar8,*(undefined4 *)(param_2 + 0x14));
        if (iVar2 != 0) {
          *param_3 = iVar8;
          thunk_FUN_00ec5080(param_3,iVar8);
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

