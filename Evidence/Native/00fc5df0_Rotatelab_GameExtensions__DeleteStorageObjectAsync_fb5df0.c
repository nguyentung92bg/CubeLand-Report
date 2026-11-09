/* IL2CPP: Rotatelab.GameExtensions$$DeleteStorageObjectAsync
System_Threading_Tasks_Task_o* Rotatelab_GameExtensions__DeleteStorageObjectAsync (Hiro_NakamaSystem_o* nakama, Nakama_StorageObjectId_o* id, Nakama_RetryConfiguration_o* retryConfiguration, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.GameExtensions$$DeleteStorageObjectAsync
   System_Threading_Tasks_Task_o* Rotatelab_GameExtensions__DeleteStorageObjectAsync
   (Hiro_NakamaSystem_o* nakama, Nakama_StorageObjectId_o* id, Nakama_RetryConfiguration_o*
   retryConfiguration, System_Threading_CancellationToken_o cancellationToken, const MethodInfo*
   method); */

void Rotatelab_GameExtensions__DeleteStorageObjectAsync_fb5df0
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  int *piVar9;
  
  pcVar7 = (char *)(_UNK_00fc5f48 + 0xfc5e10);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc5f4c + 0xfc5e28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc5f50 + 0xfc5e34));
    *pcVar7 = '\x01';
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar9 = *(int **)(param_1 + 0x20);
  uVar8 = *(undefined4 *)(param_1 + 0x24);
  piVar1 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_00fc5f54 + 0xfc5e58),1);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((param_2 != 0) &&
     (iVar2 = thunk_FUN_00f00bc8(param_2,*(undefined4 *)(*piVar1 + 0x20)), iVar2 == 0)) {
    uVar3 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar3,0);
  }
  if (piVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar1[4] = param_2;
  thunk_FUN_00ec5080(piVar1 + 4,param_2);
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *piVar9;
  uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_00fc5f58 + 0xfc5edc)) {
        puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0x110);
        goto LAB_00fc5f24;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_00fc5f58 + 0xfc5edc),10);
LAB_00fc5f24:
  (*(code *)*puVar4)(piVar9,uVar8,piVar1,param_3,param_4,puVar4[1]);
  return;
}

