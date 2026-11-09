/* IL2CPP: Rotatelab.Extensions$$Shuffle<object>
System_Collections_Generic_IList_T__o* Rotatelab_Extensions__Shuffle_object_ (System_Collections_Generic_IList_T__o* list, const MethodInfo_14886B0* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Extensions$$Shuffle<object>
   System_Collections_Generic_IList_T__o* Rotatelab_Extensions__Shuffle_object_
   (System_Collections_Generic_IList_T__o* list, const MethodInfo_14886B0* method); */

int * Rotatelab_Extensions__Shuffle_object__14886b0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  
  if (*(int *)(param_2 + 0x1c) == 0) {
    FUN_00efd7c4(param_2);
  }
  iVar9 = 0;
  do {
    if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = *(int *)(*(int *)(param_2 + 0x1c) + 4);
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = FUN_00efd768(iVar6);
    }
    iVar1 = *param_1;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar6) {
          puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
          goto LAB_01498750;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(param_1,iVar6,0);
LAB_01498750:
    iVar6 = (*(code *)*puVar2)(param_1,puVar2[1]);
    if (iVar6 + -1 <= iVar9) {
      return param_1;
    }
    iVar6 = *(int *)(*(int *)(param_2 + 0x1c) + 4);
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = FUN_00efd768(iVar6);
    }
    iVar1 = *param_1;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar6) {
          puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
          goto LAB_014987d8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(param_1,iVar6,0);
LAB_014987d8:
    uVar3 = (*(code *)*puVar2)(param_1,puVar2[1]);
    uVar3 = UnityEngine_Random__Range_35f8b14(iVar9,uVar3,0);
    iVar6 = **(int **)(param_2 + 0x1c);
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = FUN_00efd768(iVar6);
    }
    iVar1 = *param_1;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar6) {
          puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
          goto LAB_01498868;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(param_1,iVar6,0);
LAB_01498868:
    uVar4 = (*(code *)*puVar2)(param_1,uVar3,puVar2[1]);
    iVar6 = **(int **)(param_2 + 0x1c);
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = FUN_00efd768(iVar6);
    }
    iVar1 = *param_1;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar6) {
          puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
          goto LAB_014988ec;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(param_1,iVar6,0);
LAB_014988ec:
    uVar5 = (*(code *)*puVar2)(param_1,iVar9,puVar2[1]);
    iVar6 = **(int **)(param_2 + 0x1c);
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = FUN_00efd768(iVar6);
    }
    iVar1 = *param_1;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar6) {
          puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 200);
          goto LAB_01498970;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(param_1,iVar6,1);
LAB_01498970:
    (*(code *)*puVar2)(param_1,iVar9,uVar4,puVar2[1]);
    iVar6 = **(int **)(param_2 + 0x1c);
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = FUN_00efd768(iVar6);
    }
    iVar1 = *param_1;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar6) {
          puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 200);
          goto LAB_014989f4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(param_1,iVar6,1);
LAB_014989f4:
    (*(code *)*puVar2)(param_1,uVar3,uVar5,puVar2[1]);
    iVar9 = iVar9 + 1;
  } while( true );
}

