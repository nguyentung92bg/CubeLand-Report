/* IL2CPP: Rotatelab.Extensions$$AddUnique<__Il2CppFullySharedGenericType>
bool Rotatelab_Extensions__AddUnique___Il2CppFullySharedGenericType_ (System_Collections_Generic_IList_T__o* list, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o element, const MethodInfo_1484AAC* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$AddUnique<__Il2CppFullySharedGenericType>
   bool Rotatelab_Extensions__AddUnique___Il2CppFullySharedGenericType_
   (System_Collections_Generic_IList_T__o* list,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o element, const MethodInfo_1484AAC*
   method); */

void Rotatelab_Extensions__AddUnique___Il2CppFullySharedGenericType__1484aac
               (int *param_1,undefined4 *****param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *****pppppuVar5;
  uint uVar6;
  int *piVar7;
  code *pcVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int aiStack_48 [4];
  undefined4 ****ppppuStack_38;
  char cStack_31;
  undefined4 *puStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_01494ce8 + 0x1494ad0);
  iVar9 = *(int *)(param_3 + 0x1c);
  ppppuStack_38 = param_2;
  if (iVar9 == 0) {
    FUN_00efd7c4(param_3);
    iVar9 = *(int *)(param_3 + 0x1c);
  }
  aiStack_48[3] = *(int *)(*(int *)(iVar9 + 4) + 0x84);
  iVar1 = -(aiStack_48[3] + 7U & 0xfffffff8);
  puVar11 = (undefined4 *)((int)aiStack_48 + iVar1 + 8);
  pppppuVar5 = &ppppuStack_38;
  if (*(int *)(*(int *)(iVar9 + 4) + 0x14) < 0) {
    pppppuVar5 = param_2;
  }
  thunk_FUN_00f95db8(puVar11,pppppuVar5);
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(iVar9 + 8);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = FUN_00efd768(iVar4);
    iVar9 = *(int *)(param_3 + 0x1c);
  }
  iVar2 = *param_1;
  puVar10 = puVar11;
  if (-1 < *(int *)(*(int *)(iVar9 + 4) + 0x14)) {
    puVar10 = (undefined4 *)*puVar11;
  }
  uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar7[-1] == iVar4) {
        iVar9 = iVar2 + *piVar7 * 8 + 0xe0;
        goto LAB_01494bb8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  iVar9 = FUN_00efdb38(param_1,iVar4,4);
LAB_01494bb8:
  iVar9 = *(int *)(iVar9 + 4);
  uVar3 = *(undefined4 *)(iVar9 + 4);
  pcVar8 = *(code **)(iVar9 + 8);
  puStack_30 = puVar10;
  *(char **)((int)aiStack_48 + iVar1) = &cStack_31;
  (*pcVar8)(uVar3,iVar9,param_1,&puStack_30);
  if (cStack_31 == '\0') {
    iVar9 = *(int *)(param_3 + 0x1c);
    pppppuVar5 = &ppppuStack_38;
    if (*(int *)(*(int *)(iVar9 + 4) + 0x14) < 0) {
      pppppuVar5 = param_2;
    }
    thunk_FUN_00f95db8(puVar11,pppppuVar5,aiStack_48[3]);
    iVar4 = *(int *)(iVar9 + 8);
    if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = FUN_00efd768(iVar4);
      iVar9 = *(int *)(param_3 + 0x1c);
    }
    iVar2 = *param_1;
    if (-1 < *(int *)(*(int *)(iVar9 + 4) + 0x14)) {
      puVar11 = (undefined4 *)*puVar11;
    }
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == iVar4) {
          iVar9 = iVar2 + *piVar7 * 8 + 0xd0;
          goto LAB_01494c94;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    iVar9 = FUN_00efdb38(param_1,iVar4,2);
LAB_01494c94:
    iVar9 = *(int *)(iVar9 + 4);
    uVar3 = *(undefined4 *)(iVar9 + 4);
    pcVar8 = *(code **)(iVar9 + 8);
    puStack_30 = puVar11;
    *(undefined4 **)((int)aiStack_48 + iVar1) = puVar11;
    (*pcVar8)(uVar3,iVar9,param_1,&puStack_30);
  }
  if (**(int **)(_UNK_01494cec + 0x1494ccc) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iStack_2c);
  }
  return;
}

