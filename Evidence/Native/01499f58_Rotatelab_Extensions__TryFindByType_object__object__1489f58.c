/* IL2CPP: Rotatelab.Extensions$$TryFindByType<object, object>
bool Rotatelab_Extensions__TryFindByType_object__object_ (System_Collections_Generic_IList_T__o* list, System_Predicate_TargetType__o* selector, Il2CppObject** value, const MethodInfo_1489F58* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Extensions$$TryFindByType<object, object>
   bool Rotatelab_Extensions__TryFindByType_object__object_ (System_Collections_Generic_IList_T__o*
   list, System_Predicate_TargetType__o* selector, Il2CppObject** value, const MethodInfo_1489F58*
   method); */

bool Rotatelab_Extensions__TryFindByType_object__object__1489f58
               (int *param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  if (*(int *)(param_4 + 0x1c) == 0) {
    FUN_00efd7c4(param_4);
  }
  iVar8 = 0;
  do {
    if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = *(int *)(*(int *)(param_4 + 0x1c) + 0x1c);
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
          goto LAB_0149a000;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(param_1,iVar4,0);
LAB_0149a000:
    iVar4 = (*(code *)*puVar2)(param_1,puVar2[1]);
    if (iVar4 <= iVar8) {
      *param_3 = 0;
LAB_0149a178:
      return iVar8 < iVar4;
    }
    iVar1 = **(int **)(param_4 + 0x1c);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768(iVar1);
    }
    iVar3 = *param_1;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar1) {
          puVar2 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
          goto LAB_0149a088;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(param_1,iVar1,0);
LAB_0149a088:
    iVar1 = (*(code *)*puVar2)(param_1,iVar8,puVar2[1]);
    iVar3 = *(int *)(*(int *)(param_4 + 0x1c) + 0xc);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = FUN_00efd768(iVar3);
    }
    iVar3 = thunk_FUN_00f00bc8(iVar1,iVar3);
    if (iVar3 != 0) {
      iVar3 = *(int *)(*(int *)(param_4 + 0x1c) + 0xc);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = FUN_00efd768(iVar3);
      }
      iVar7 = 0;
      if ((iVar1 != 0) && (iVar7 = thunk_FUN_00f00bc8(iVar1,iVar3), iVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(iVar1,iVar3);
      }
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = (**(code **)(param_2 + 0xc))
                        (*(undefined4 *)(param_2 + 0x20),iVar7,*(undefined4 *)(param_2 + 0x14));
      if (iVar1 != 0) {
        *param_3 = iVar7;
        thunk_FUN_00ec5080(param_3,iVar7);
        goto LAB_0149a178;
      }
    }
    iVar8 = iVar8 + 1;
  } while( true );
}

