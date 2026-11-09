/* IL2CPP: Rotatelab.IAP.PurchasesListener.<RetryInitializationAsync>d__19$$MoveNext
void Rotatelab_IAP_PurchasesListener__RetryInitializationAsync_d__19__MoveNext (Rotatelab_IAP_PurchasesListener__RetryInitializationAsync_d__19_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener.<RetryInitializationAsync>d__19$$MoveNext
   void Rotatelab_IAP_PurchasesListener__RetryInitializationAsync_d__19__MoveNext
   (Rotatelab_IAP_PurchasesListener__RetryInitializationAsync_d__19_o __this, const MethodInfo*
   method); */

void Rotatelab_IAP_PurchasesListener__RetryInitializationAsync_d__19__MoveNext_109e9e4(int *param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iStack_24;
  
  pcVar8 = (char *)(_UNK_010aee90 + 0x10ae9fc);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aee94 + 0x10aea10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aee98 + 0x10aea1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aee9c + 0x10aea28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aeea0 + 0x10aea34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aeea4 + 0x10aea40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aeea8 + 0x10aea4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aeeac + 0x10aea58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aeeb0 + 0x10aea64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aeeb4 + 0x10aea70));
    *pcVar8 = '\x01';
  }
  iVar10 = param_1[2];
  iStack_24 = 0;
  if (*param_1 == 0) {
    *param_1 = -1;
    iStack_24 = param_1[3];
    param_1[3] = 0;
  }
  else {
    piVar9 = *(int **)(_UNK_010aeeb8 + 0x10aeaa0);
    iVar1 = *piVar9;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar9;
    }
    if (**(char **)(iVar1 + 0x5c) == '\0') goto LAB_010aed10;
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((*(char *)(iVar10 + 0x28) != '\0') ||
       (fVar2 = (float)UnityEngine_Time__get_realtimeSinceStartup_360c80c(0),
       fVar2 - *(float *)(iVar10 + 0x30) < 10.0)) goto LAB_010aed10;
    uVar3 = UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
    *(undefined4 *)(iVar10 + 0x30) = uVar3;
    piVar9 = (int *)UnityEngine_Purchasing_UnityIAPServices__DefaultStore_32a388c(0);
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *piVar9;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_010aeebc + 0x10aeb38)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_010aed38;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_010aeebc + 0x10aeb38),0);
LAB_010aed38:
    iVar1 = (*(code *)*puVar4)(piVar9,puVar4[1]);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iStack_24 = System_Threading_Tasks_Task__GetAwaiter_2bf1e70(iVar1,0);
    iVar1 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted_2a9339c(&iStack_24,0);
    if (iVar1 == 0) {
      *param_1 = 0;
      param_1[3] = iStack_24;
      thunk_FUN_00ec5080(param_1 + 3,0);
      func_0x010bd6bc(param_1 + 1,&iStack_24,param_1,**(undefined4 **)(_UNK_010aeec0 + 0x10aeda4));
      return;
    }
  }
  System_Runtime_CompilerServices_TaskAwaiter__GetResult_2a93488(&iStack_24,0);
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(char *)(iVar10 + 0x28) == '\0') {
    piVar9 = *(int **)(_UNK_010aeec4 + 0x10aebb8);
    iVar1 = *(int *)(iVar10 + 0x1c);
    iVar10 = *piVar9;
    if (*(int *)(iVar10 + 0x74) == 0) {
      FUN_00ec3934();
      iVar10 = *piVar9;
    }
    puVar4 = *(undefined4 **)(iVar10 + 0x5c);
    iVar11 = puVar4[1];
    if (iVar11 == 0) {
      if (*(int *)(iVar10 + 0x74) == 0) {
        FUN_00ec3934();
        puVar4 = *(undefined4 **)(*piVar9 + 0x5c);
      }
      uVar3 = *puVar4;
      iVar11 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010aeec8 + 0x10aec08));
      System_Converter_object__object____ctor_1f61750
                (iVar11,uVar3,**(undefined4 **)(_UNK_010aeecc + 0x10aec1c),0);
      piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 4);
      *piVar9 = iVar11;
      thunk_FUN_00ec5080(piVar9,iVar11);
    }
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = System_Collections_Generic_List_object___ConvertAll_object__123a7dc
                      (iVar1,iVar11,**(undefined4 **)(_UNK_010aeed0 + 0x10aec58));
    piVar9 = (int *)UnityEngine_Purchasing_UnityIAPServices__DefaultProduct_32a3898(0);
    uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010aeed4 + 0x10aec80));
    UnityEngine_Purchasing_MaximumNumberOfAttemptsRetryPolicy___ctor_329ed2c(uVar5,5,0);
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar10 = *piVar9;
    uVar6 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_010aeed8 + 0x10aecb0)) {
          puVar4 = (undefined4 *)(iVar10 + *piVar7 * 8 + 0xc0);
          goto LAB_010aecf8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_010aeed8 + 0x10aecb0),0);
LAB_010aecf8:
    (*(code *)*puVar4)(piVar9,uVar3,uVar5,puVar4[1]);
  }
LAB_010aed10:
  *param_1 = -2;
  func_0x00fcef34(param_1 + 1,0);
  return;
}

