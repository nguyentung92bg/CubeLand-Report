/* IL2CPP: Rotatelab.Extensions$$ConvertAllValues<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
System_Collections_Generic_Dictionary_TKey__TOutputValue__o* Rotatelab_Extensions__ConvertAllValues___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_ (System_Collections_Generic_IDictionary_TKey__TInputValue__o* dictionary, Rotatelab_Extensions_DictionaryValueConverter_TKey__TInputValue__TOutputValue__o* converter, const MethodInfo_14857EC* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01495d70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$ConvertAllValues<__Il2CppFullySharedGenericType,
   __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
   System_Collections_Generic_Dictionary_TKey__TOutputValue__o*
   Rotatelab_Extensions__ConvertAllValues___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
   (System_Collections_Generic_IDictionary_TKey__TInputValue__o* dictionary,
   Rotatelab_Extensions_DictionaryValueConverter_TKey__TInputValue__TOutputValue__o* converter,
   const MethodInfo_14857EC* method); */

void Rotatelab_Extensions__ConvertAllValues___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__14857ec
               (int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  code *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int aiStack_68 [2];
  int aiStack_60 [2];
  int *piStack_58;
  int *piStack_54;
  int *piStack_50;
  int *piStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  int **ppiStack_40;
  int *piStack_3c;
  int *piStack_38;
  int *piStack_34;
  undefined4 *puStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_01495de0 + 0x1495810);
  iVar8 = *(int *)(param_3 + 0x1c);
  aiStack_60[1] = param_2;
  if (iVar8 == 0) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01495de4 + 0x1495830));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01495de8 + 0x149583c));
    iVar8 = *(int *)(param_3 + 0x1c);
    if (iVar8 == 0) {
      FUN_00efd7c4(param_3);
      iVar8 = *(int *)(param_3 + 0x1c);
    }
  }
  aiStack_60[0] = *(int *)(*(int *)(iVar8 + 0x24) + 0x84);
  uVar1 = *(int *)(*(int *)(iVar8 + 0x30) + 0x84) + 7U & 0xfffffff8;
  piStack_54 = (int *)((int)aiStack_60 - uVar1);
  piStack_50 = (int *)((int)piStack_54 - uVar1);
  piStack_58 = (int *)((int)piStack_50 - (*(int *)(*(int *)(iVar8 + 0x3c) + 0x84) + 7U & 0xfffffff8)
                      );
  puVar9 = (undefined4 *)
           ((int)piStack_58 - (*(int *)(*(int *)(iVar8 + 0x44) + 0x84) + 7U & 0xfffffff8));
  uVar1 = aiStack_60[0] + 7U & 0xfffffff8;
  piStack_4c = (int *)((int)puVar9 - uVar1);
  iVar10 = (int)piStack_4c - uVar1;
  piStack_3c = (int *)0x0;
  FUN_00f88e5c(iVar10);
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = *(int *)(iVar8 + 4);
  if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
    iVar8 = FUN_00efd768(iVar8);
  }
  iVar2 = *param_1;
  uVar1 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar1 != 0) {
    piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar5[-1] == iVar8) {
        puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
        goto LAB_01495960;
      }
      uVar1 = uVar1 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar1 != 0);
  }
  puVar3 = (undefined4 *)FUN_00efdb38(param_1,iVar8,0);
LAB_01495960:
  uVar4 = (*(code *)*puVar3)(param_1,puVar3[1]);
  if ((*(ushort *)(*(int *)(*(int *)(param_3 + 0x1c) + 0xc) + 0xbd) & 1) == 0) {
    FUN_00efd768();
  }
  iStack_48 = thunk_FUN_00f00cdc();
  (*(code *)**(undefined4 **)(*(int *)(param_3 + 0x1c) + 0x10))(iStack_48,uVar4);
  iVar8 = *(int *)(*(int *)(param_3 + 0x1c) + 0x14);
  if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
    iVar8 = FUN_00efd768(iVar8);
  }
  iVar2 = *param_1;
  uVar1 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar1 != 0) {
    piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar5[-1] == iVar8) {
        puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
        goto LAB_01495a14;
      }
      uVar1 = uVar1 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar1 != 0);
  }
  puVar3 = (undefined4 *)FUN_00efdb38(param_1,iVar8,0);
LAB_01495a14:
  piStack_3c = (int *)(*(code *)*puVar3)(param_1,puVar3[1]);
  ppiStack_40 = &piStack_3c;
  uStack_44 = 0;
  do {
    piVar5 = piStack_3c;
    if (piStack_3c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = *piStack_3c;
    uVar1 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01495dec + 0x1495a5c)) {
          puVar3 = (undefined4 *)(iVar8 + *piVar6 * 8 + 0xc0);
          goto LAB_01495aa4;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piStack_3c,**(int **)(_UNK_01495dec + 0x1495a5c),0);
LAB_01495aa4:
    iVar8 = (*(code *)*puVar3)(piVar5,puVar3[1]);
    piVar5 = piStack_3c;
    if (iVar8 == 0) {
      if (piStack_3c == (int *)0x0) goto LAB_01495d68;
      iVar8 = *piStack_3c;
      uVar1 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar1 == 0) goto LAB_01495d3c;
      piVar6 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      break;
    }
    if (piStack_3c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = *(int *)(*(int *)(param_3 + 0x1c) + 0x1c);
    if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
      iVar8 = FUN_00efd768(iVar8);
    }
    iVar2 = *piVar5;
    uVar1 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar8) {
          iVar8 = iVar2 + *piVar6 * 8 + 0xc0;
          goto LAB_01495b38;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar1 != 0);
    }
    iVar8 = FUN_00efdb38(piVar5,iVar8,0);
LAB_01495b38:
    iVar8 = *(int *)(iVar8 + 4);
    piStack_38 = piStack_4c;
    uVar4 = *(undefined4 *)(iVar8 + 4);
    pcVar7 = *(code **)(iVar8 + 8);
    *(int **)(iVar10 + -8) = piStack_4c;
    (*pcVar7)(uVar4,iVar8,piVar5,&piStack_38);
    thunk_FUN_00f95db8(iVar10,piStack_4c,aiStack_60[0]);
    puVar3 = *(undefined4 **)(*(int *)(param_3 + 0x1c) + 0x28);
    uVar4 = *puVar3;
    pcVar7 = (code *)puVar3[2];
    piStack_38 = piStack_54;
    *(int **)(iVar10 + -8) = piStack_54;
    (*pcVar7)(uVar4,puVar3,iVar10,&piStack_38);
    puVar3 = *(undefined4 **)(*(int *)(param_3 + 0x1c) + 0x28);
    uVar4 = *puVar3;
    pcVar7 = (code *)puVar3[2];
    piStack_38 = piStack_50;
    *(int **)(iVar10 + -8) = piStack_50;
    (*pcVar7)(uVar4,puVar3,iVar10,&piStack_38);
    puVar3 = *(undefined4 **)(*(int *)(param_3 + 0x1c) + 0x38);
    uVar4 = *puVar3;
    pcVar7 = (code *)puVar3[2];
    piStack_38 = piStack_58;
    *(int **)(iVar10 + -8) = piStack_58;
    (*pcVar7)(uVar4,puVar3,iVar10,&piStack_38);
    iVar8 = aiStack_60[1];
    if (aiStack_60[1] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *(int *)(param_3 + 0x1c);
    piStack_38 = piStack_50;
    if (-1 < *(int *)(*(int *)(iVar2 + 0x30) + 0x14)) {
      piStack_38 = (int *)*piStack_50;
    }
    puVar3 = *(undefined4 **)(iVar2 + 0x40);
    uVar4 = *puVar3;
    piStack_34 = piStack_58;
    if (-1 < *(int *)(*(int *)(iVar2 + 0x3c) + 0x14)) {
      piStack_34 = (int *)*piStack_58;
    }
    pcVar7 = (code *)puVar3[2];
    puStack_30 = puVar9;
    *(undefined4 **)(iVar10 + -8) = puVar9;
    (*pcVar7)(uVar4,puVar3,iVar8,&piStack_38);
    if (iStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = *(int *)(param_3 + 0x1c);
    piStack_38 = piStack_54;
    if (-1 < *(int *)(*(int *)(iVar8 + 0x30) + 0x14)) {
      piStack_38 = (int *)*piStack_54;
    }
    puVar3 = *(undefined4 **)(iVar8 + 0x48);
    uVar4 = *puVar3;
    pcVar7 = (code *)puVar3[2];
    piStack_34 = puVar9;
    if (-1 < *(int *)(*(int *)(iVar8 + 0x44) + 0x14)) {
      piStack_34 = (int *)*puVar9;
    }
    *(int **)(iVar10 + -8) = piStack_34;
    (*pcVar7)(uVar4,puVar3,iStack_48,&piStack_38);
  } while( true );
  while( true ) {
    uVar1 = uVar1 - 1;
    piVar6 = piVar6 + 2;
    if (uVar1 == 0) break;
    if (piVar6[-1] == **(int **)(_UNK_01495df0 + 0x1495d10)) {
      puVar9 = (undefined4 *)(iVar8 + *piVar6 * 8 + 0xc0);
      goto LAB_01495d58;
    }
  }
LAB_01495d3c:
  puVar9 = (undefined4 *)FUN_00efdb38(piStack_3c,**(int **)(_UNK_01495df0 + 0x1495d10),0);
LAB_01495d58:
  (*(code *)*puVar9)(piVar5,puVar9[1]);
LAB_01495d68:
  if (**(int **)(_UNK_01495df4 + 0x1495d88) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iStack_2c);
  }
  return;
}

