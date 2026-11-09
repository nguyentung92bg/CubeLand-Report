/* IL2CPP: Rotatelab.Networking.AddressablesManager$$CustomExceptionHandler
void Rotatelab_Networking_AddressablesManager__CustomExceptionHandler (UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_o handle, System_Exception_o* exception, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.AddressablesManager$$CustomExceptionHandler
   void Rotatelab_Networking_AddressablesManager__CustomExceptionHandler
   (UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_o handle,
   System_Exception_o* exception, const MethodInfo* method); */

void Rotatelab_Networking_AddressablesManager__CustomExceptionHandler_113fcfc
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  pcVar8 = (char *)(_UNK_011500d8 + 0x114fd20);
  piVar4 = *(int **)(_UNK_011500dc + 0x114fd24);
  puVar6 = *(undefined4 **)(_UNK_011500e0 + 0x114fd2c);
  puVar10 = *(undefined4 **)(_UNK_011500e4 + 0x114fd34);
  puVar9 = *(undefined4 **)(_UNK_011500e8 + 0x114fd3c);
  puVar7 = *(undefined4 **)(_UNK_011500ec + 0x114fd44);
  while( true ) {
    piVar3 = param_4;
    piVar5 = *(int **)(_UNK_011500f0 + 0x114fd4c);
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_011500f4 + 0x114fd60));
      FUN_00ec37c0(piVar5);
      FUN_00ec37c0(piVar4);
      FUN_00ec37c0(*(undefined4 *)(_UNK_011500f8 + 0x114fd7c));
      FUN_00ec37c0(*(undefined4 *)(_UNK_011500fc + 0x114fd88));
      FUN_00ec37c0(puVar9);
      FUN_00ec37c0(puVar10);
      FUN_00ec37c0(puVar6);
      FUN_00ec37c0(*(undefined4 *)(_UNK_01150100 + 0x114fdac));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01150104 + 0x114fdb8));
      FUN_00ec37c0(puVar7);
      *pcVar8 = '\x01';
    }
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *piVar3;
    uVar2 = (uint)*(byte *)(*piVar4 + 0xb8);
    if ((uVar2 <= *(byte *)(iVar1 + 0xb8)) &&
       (*(int *)(*(int *)(iVar1 + 100) + uVar2 * 4 + -4) == *piVar4)) break;
    iVar1 = (**(code **)(iVar1 + 0xe8))(piVar3,*(undefined4 *)(iVar1 + 0xec));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_String__Contains_2a104b8(iVar1,**(undefined4 **)(_UNK_01150108 + 0x114fe38),0);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = (**(code **)(*piVar3 + 0xe8))(piVar3,*(undefined4 *)(*piVar3 + 0xec));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_String__Contains_2a104b8(iVar1,*puVar6,0);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = (**(code **)(*piVar3 + 0xe8))(piVar3,*(undefined4 *)(*piVar3 + 0xec));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_String__Contains_2a104b8(iVar1,*puVar10,0);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = (**(code **)(*piVar3 + 0xe8))(piVar3,*(undefined4 *)(*piVar3 + 0xec));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_String__Contains_2a104b8(iVar1,*puVar9,0);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = (**(code **)(*piVar3 + 0xe8))(piVar3,*(undefined4 *)(*piVar3 + 0xec));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_String__Contains_2a104b8(iVar1,*puVar7,0);
    if (iVar1 != 0) {
LAB_0115009c:
      iVar1 = **(int **)(_UNK_01150118 + 0x11500a8);
      goto LAB_011500a8;
    }
    iVar1 = (**(code **)(*piVar3 + 0xe8))(piVar3,*(undefined4 *)(*piVar3 + 0xec));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_String__Contains_2a104b8(iVar1,**(undefined4 **)(_UNK_0115010c + 0x114ff78),0);
    if (iVar1 != 0) goto LAB_0115009c;
    iVar1 = (**(code **)(*piVar3 + 0xe8))(piVar3,*(undefined4 *)(*piVar3 + 0xec));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_String__Contains_2a104b8(iVar1,**(undefined4 **)(_UNK_01150110 + 0x114ffbc),0);
    if (iVar1 != 0) goto LAB_0115009c;
    iVar1 = (**(code **)(*piVar3 + 0xe8))(piVar3,*(undefined4 *)(*piVar3 + 0xec));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_String__Contains_2a104b8(iVar1,**(undefined4 **)(_UNK_01150114 + 0x1150000),0);
    if (iVar1 != 0) goto LAB_0115009c;
    param_4 = (int *)piVar3[5];
    if (param_4 == (int *)0x0) {
LAB_01150060:
      if (*(int *)(**(int **)(_UNK_0115011c + 0x115006c) + 0x74) == 0) {
        FUN_00ec3934();
      }
      UnityEngine_AddressableAssets_Addressables__LogException_3238254
                (param_1,param_2,param_3,piVar3,0);
      return;
    }
    uVar2 = (uint)*(byte *)(*piVar4 + 0xb8);
    while ((*(byte *)(*param_4 + 0xb8) < uVar2 ||
           (*(int *)(*(int *)(*param_4 + 100) + uVar2 * 4 + -4) != *piVar4))) {
      param_4 = (int *)param_4[5];
      if (param_4 == (int *)0x0) goto LAB_01150060;
    }
  }
  iVar1 = *piVar5;
LAB_011500a8:
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar8 = (char *)(_UNK_035c01b0 + 0x35c00a4);
  if (*pcVar8 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c01b4 + 0x35c00b8),0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c01b8 + 0x35c00c4));
    *pcVar8 = '\x01';
  }
  piVar4 = *(int **)(_UNK_035c01bc + 0x35c00d8);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  pcVar8 = (char *)(_UNK_035c01c0 + 0x35c00f4);
  if (*pcVar8 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c01c4 + 0x35c0108));
    *pcVar8 = '\x01';
  }
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    thunk_FUN_00ec3934();
    iVar1 = *piVar4;
  }
  piVar4 = *(int **)(*(int *)(iVar1 + 0x5c) + 4);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *piVar4;
  uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar2 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_035c01c8 + 0x35c014c)) {
        puVar6 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd8);
        goto LAB_035c0194;
      }
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar2 != 0);
  }
  puVar6 = (undefined4 *)thunk_FUN_00efdb38(piVar4,**(int **)(_UNK_035c01c8 + 0x35c014c),3);
LAB_035c0194:
                    /* WARNING: Could not recover jumptable at 0x035c01ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar6)(piVar4,2,piVar3,puVar6[1]);
  return;
}

