/* IL2CPP: Rotatelab.IAP.PurchasesListener$$OnPurchaseFailed
void Rotatelab_IAP_PurchasesListener__OnPurchaseFailed (Rotatelab_IAP_PurchasesListener_o* __this, UnityEngine_Purchasing_Product_o* product, int32_t failureReason, System_String_o* error, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$OnPurchaseFailed
   void Rotatelab_IAP_PurchasesListener__OnPurchaseFailed (Rotatelab_IAP_PurchasesListener_o*
   __this, UnityEngine_Purchasing_Product_o* product, int32_t failureReason, System_String_o* error,
   const MethodInfo* method); */

void Rotatelab_IAP_PurchasesListener__OnPurchaseFailed_10998b0
               (int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  int aiStack_2c [3];
  
  pcVar6 = (char *)(_UNK_010a9d8c + 0x10a98d0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a9d90 + 0x10a98e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a9d94 + 0x10a98f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a9d98 + 0x10a9900));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a9d9c + 0x10a990c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a9da0 + 0x10a9918));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a9da4 + 0x10a9924));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a9da8 + 0x10a9930));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a9dac + 0x10a993c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a9db0 + 0x10a9948));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a9db4 + 0x10a9954));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a9db8 + 0x10a9960));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a9dbc + 0x10a996c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a9dc0 + 0x10a9978));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a9dc4 + 0x10a9984));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a9dc8 + 0x10a9990));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a9dcc + 0x10a999c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a9dd0 + 0x10a99a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a9dd4 + 0x10a99b4));
    *pcVar6 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_2 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar7 = *(undefined4 *)(*(int *)(param_2 + 8) + 8);
  if (param_3 == 4) {
    uVar1 = System_String__Concat_29fee38(**(undefined4 **)(_UNK_010a9dd8 + 0x10a9a6c),uVar7,0);
    if (*(int *)(**(int **)(_UNK_010a9ddc + 0x10a9a80) + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_Debug__Log_35b1c44(uVar1,0);
  }
  else {
    aiStack_2c[0] = param_3;
    uVar1 = FUN_00ec393c(**(undefined4 **)(_UNK_010a9de0 + 0x10a99f4),aiStack_2c);
    uVar1 = System_String__Format_2a0c2b4
                      (**(undefined4 **)(_UNK_010a9de4 + 0x10a9a14),uVar1,uVar7,param_4,0);
    if (*(int *)(**(int **)(_UNK_010a9de8 + 0x10a9a30) + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_Debug__LogError_35b238c(uVar1,0);
    if (param_3 == 1) goto LAB_010a9b14;
  }
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_Save_SavedValue_object___get_Value_1a8bb8c
                    (*(int *)(param_1 + 0x40),**(undefined4 **)(_UNK_010a9dec + 0x10a9ab8));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = System_Collections_Generic_Dictionary_object__object___Remove_206ac28
                    (iVar2,uVar7,**(undefined4 **)(_UNK_010a9df0 + 0x10a9ae0));
  if (iVar2 != 0) {
    piVar8 = *(int **)(param_1 + 0x40);
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar8 + 0xf0))(piVar8,*(undefined4 *)(*piVar8 + 0xf4));
  }
LAB_010a9b14:
  uVar1 = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar2 = System_String__op_Equality_2a0975c
                      (*(undefined4 *)(*(int *)(param_1 + 0x2c) + 8),uVar7,0);
    uVar1 = *(undefined4 *)(param_1 + 0x2c);
    if (param_3 != 4 && iVar2 != 0) {
      piVar8 = *(int **)(_UNK_010a9df4 + 0x10a9b78);
      aiStack_2c[1] = 0xffffffff;
      aiStack_2c[0] = *piVar8;
      aiStack_2c[2] = param_3;
      uVar7 = System_Enum__ToString_2bab8c0(aiStack_2c,0);
      iVar2 = **(int **)(_UNK_010a9dfc + 0x10a9bb0);
      if (param_4 != 0) {
        iVar2 = param_4;
      }
      Rotatelab_IAP_PurchasesListener__PurchaseFailed_1097858
                (param_1,param_2,uVar1,**(undefined4 **)(_UNK_010a9df8 + 0x10a9ba4),uVar7,iVar2);
      iVar2 = Rotatelab_SingletonBehaviourFromResources_object___get_Instance_1a9942c
                        (**(undefined4 **)(_UNK_010a9e00 + 0x10a9bd0));
      iVar3 = FUN_00ec388c(**(undefined4 **)(_UNK_010a9e04 + 0x10a9be8),5);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar7 = **(undefined4 **)(_UNK_010a9e08 + 0x10a9c08);
      if (*(int *)(iVar3 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      *(undefined4 *)(iVar3 + 0x10) = uVar7;
      thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x10),uVar7);
      uVar7 = **(undefined4 **)(_UNK_010a9e0c + 0x10a9c38);
      if (param_4 == 0) {
        aiStack_2c[0] = *piVar8;
        aiStack_2c[1] = 0xffffffff;
        aiStack_2c[2] = param_3;
        param_4 = System_Enum__ToString_2bab8c0(aiStack_2c,0);
      }
      if (*(uint *)(iVar3 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      *(int *)(iVar3 + 0x14) = param_4;
      thunk_FUN_00ec5080((int *)(iVar3 + 0x14),param_4);
      uVar1 = **(undefined4 **)(_UNK_010a9e10 + 0x10a9c98);
      if (*(uint *)(iVar3 + 0xc) < 3) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      *(undefined4 *)(iVar3 + 0x18) = uVar1;
      thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x18),uVar1);
      if (*(int *)(**(int **)(_UNK_010a9e14 + 0x10a9cbc) + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar4 = UnityEngine_Application__get_platform_35a81fc(0);
      puVar5 = *(undefined4 **)(_UNK_010a9e1c + 0x10a9cec);
      if (iVar4 == 0xb) {
        puVar5 = *(undefined4 **)(_UNK_010a9e18 + 0x10a9ce4);
      }
      uVar1 = *puVar5;
      if (*(uint *)(iVar3 + 0xc) < 4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      *(undefined4 *)(iVar3 + 0x1c) = uVar1;
      thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x1c),uVar1);
      uVar1 = **(undefined4 **)(_UNK_010a9e20 + 0x10a9d28);
      if (*(uint *)(iVar3 + 0xc) < 5) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      *(undefined4 *)(iVar3 + 0x20) = uVar1;
      thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x20),uVar1);
      uVar1 = System_String__Concat_2a0bee8(iVar3,0);
      if (iVar2 != 0) {
        Rotatelab_UI_GenericDialog__Show_1111834
                  (iVar2,uVar7,uVar1,**(undefined4 **)(_UNK_010a9e24 + 0x10a9d74),0,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  Rotatelab_IAP_PurchasesListener__PurchaseFailed_1097858(param_1,param_2,uVar1,0,0,0);
  return;
}

