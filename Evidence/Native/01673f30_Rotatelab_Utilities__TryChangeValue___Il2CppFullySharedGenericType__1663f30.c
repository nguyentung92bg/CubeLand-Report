/* IL2CPP: Rotatelab.Utilities$$TryChangeValue<__Il2CppFullySharedGenericType>
bool Rotatelab_Utilities__TryChangeValue___Il2CppFullySharedGenericType_ (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o* currentValue, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o newValue, const MethodInfo_1663F30* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Utilities$$TryChangeValue<__Il2CppFullySharedGenericType>
   bool Rotatelab_Utilities__TryChangeValue___Il2CppFullySharedGenericType_
   (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o* currentValue,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o newValue, const MethodInfo_1663F30*
   method); */

void Rotatelab_Utilities__TryChangeValue___Il2CppFullySharedGenericType__1663f30
               (undefined4 param_1,undefined4 *****param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *****pppppuVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  code *pcVar10;
  int aiStack_58 [3];
  undefined4 ****ppppuStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 *puStack_40;
  undefined4 ****ppppuStack_3c;
  undefined4 *puStack_38;
  int iStack_34;
  char cStack_2d;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_016740fc + 0x1673f54);
  puVar1 = *(undefined4 **)(param_3 + 0x1c);
  ppppuStack_3c = param_2;
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00efd7c4(param_3);
    puVar1 = *(undefined4 **)(param_3 + 0x1c);
  }
  iVar7 = *(int *)(puVar1[4] + 0x84);
  uVar4 = iVar7 + 7U & 0xfffffff8;
  puVar6 = (undefined4 *)((int)aiStack_58 + (8 - uVar4));
  piVar8 = (int *)((int)puVar6 - uVar4);
  piVar2 = (int *)(**(code **)*puVar1)();
  uStack_48 = param_1;
  puStack_40 = puVar6;
  thunk_FUN_00f95db8(puVar6,param_1,iVar7);
  iVar9 = *(int *)(*(int *)(*(int *)(param_3 + 0x1c) + 0x10) + 0x14);
  pppppuVar5 = &ppppuStack_3c;
  if (iVar9 < 0) {
    pppppuVar5 = param_2;
  }
  ppppuStack_4c = param_2;
  iStack_44 = param_3;
  thunk_FUN_00f95db8(piVar8,pppppuVar5,iVar7);
  puVar1 = puStack_40;
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puStack_38 = puStack_40;
  iStack_34 = (int)piVar8;
  if (-1 < iVar9) {
    puStack_38 = (undefined4 *)*puStack_40;
    iStack_34 = *piVar8;
  }
  iVar9 = *(int *)(*piVar2 + 0x104);
  uVar3 = *(undefined4 *)(iVar9 + 4);
  pcVar10 = *(code **)(iVar9 + 8);
  piVar8[-2] = (int)&cStack_2d;
  (*pcVar10)(uVar3,iVar9,piVar2,&puStack_38);
  iVar9 = iStack_44;
  if (cStack_2d == '\0') {
    pppppuVar5 = &ppppuStack_3c;
    if (*(int *)(*(int *)(*(int *)(iStack_44 + 0x1c) + 0x10) + 0x14) < 0) {
      pppppuVar5 = (undefined4 *****)ppppuStack_4c;
    }
    thunk_FUN_00f95db8(puVar1,pppppuVar5,iVar7);
    uVar3 = uStack_48;
    thunk_FUN_00f95dc8(uStack_48,pppppuVar5,iVar7);
    iVar7 = *(int *)(*(int *)(iVar9 + 0x1c) + 0x10);
    if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
      iVar7 = FUN_00efd768();
    }
                    /* WARNING: Subroutine does not return */
    FUN_00ec3760(iVar7,uVar3,puVar1);
  }
  if (**(int **)(_UNK_01674100 + 0x16740e0) == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iStack_2c);
}

